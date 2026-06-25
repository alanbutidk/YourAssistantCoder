/* Generated code for Python module 'anthropic$lib$environments$_worker'
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



/* The "module_anthropic$lib$environments$_worker" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$environments$_worker;
PyDictObject *moduledict_anthropic$lib$environments$_worker;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_d403cfe61bd80b246ca172d87efeeb83;
PyObject *const_str_plain__HEARTBEAT_DEFAULT;
PyObject *const_str_plain__HEARTBEAT_TTL_DEFAULT;
PyObject *const_str_plain__NO_HEARTBEAT_SENTINEL;
PyObject *const_str_plain_time;
PyObject *const_str_plain_monotonic;
PyObject *const_str_plain_stop;
PyObject *const_str_plain_is_set;
PyObject *const_str_plain_anyio;
PyObject *const_str_plain_fail_after;
PyObject *const_str_plain_interval;
PyObject *const_str_plain_work;
PyObject *const_str_plain_heartbeat;
PyObject *const_str_plain_work_id;
PyObject *const_str_plain_environment_id;
PyObject *const_str_plain_last;
PyObject *const_str_plain_extra_headers;
PyObject *const_tuple_6aae8070e323e4e5572681cd92ca2a8b_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain__HEARTBEAT_TRANSIENT_ERRORS;
PyObject *const_str_plain__is_fatal_4xx;
PyObject *const_str_plain_log;
PyObject *const_str_plain_error;
PyObject *const_str_digest_c793a476d88bfbe50a64898ddf724563;
PyObject *const_str_plain_set;
PyObject *const_str_plain_last_success;
PyObject *const_str_plain_ttl;
PyObject *const_str_digest_7b1488917f12b76eeb2f3f9da7429ced;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_d67e7b5fdc7eff77276661b353d9c808;
PyObject *const_str_plain_resp;
PyObject *const_str_plain_last_heartbeat;
PyObject *const_str_plain_ttl_seconds;
PyObject *const_str_plain_max;
PyObject *const_str_plain_min;
PyObject *const_int_pos_2;
PyObject *const_str_plain_state;
PyObject *const_tuple_str_plain_stopping_str_plain_stopped_tuple;
PyObject *const_str_plain_lease_extended;
PyObject *const_str_plain_info;
PyObject *const_str_digest_638bed66941b0291005d55361700c768;
PyObject *const_str_plain_move_on_after;
PyObject *const_str_plain_wait;
PyObject *const_str_plain__heartbeat_loop;
PyObject *const_str_plain_environ;
PyObject *const_str_digest_7c080908fdc892e6a36974ba38888e4c;
PyObject *const_str_digest_463dc098faa5ed261500ecb6099670a8;
PyObject *const_str_digest_f8e7a56d229853326a715349d9c2d26e;
PyObject *const_str_plain__client;
PyObject *const_str_plain__environment_id;
PyObject *const_str_plain__environment_key;
PyObject *const_str_plain__tools;
PyObject *const_str_plain_getcwd;
PyObject *const_str_plain__workdir;
PyObject *const_str_plain__unrestricted_paths;
PyObject *const_str_plain__max_idle;
PyObject *const_str_plain__worker_id;
PyObject *const_str_plain__extra_headers;
PyObject *const_str_plain_callable;
PyObject *const_str_digest_7c171c975c2a1073365906eb7613c02a;
PyObject *const_tuple_str_plain_beta_agent_toolset_20260401_tuple;
PyObject *const_str_plain_beta_agent_toolset_20260401;
PyObject *const_str_digest_7e9d058cd84f469238989e766fd774eb;
PyObject *const_str_plain_self;
PyObject *const_str_digest_37aa51157782e6ea38b7aaa6f372d79c;
PyObject *const_str_plain__copy_client_with_bearer_auth;
PyObject *const_str_digest_2ee887de38620eae570b077ff21bde7d;
PyObject *const_tuple_str_plain_auth_token_str_plain_helper_tuple;
PyObject *const_str_plain_aiter_work;
PyObject *const_str_plain_beta;
PyObject *const_str_plain_environments;
PyObject *const_tuple_cb9f1151fc93116351d3d8a0fbb9c7c6_tuple;
PyObject *const_str_plain__handle_item;
PyObject *const_str_plain_environment_key;
PyObject *const_str_plain_run;
PyObject *const_str_digest_54e210d61974a494d63e2b97cde8ac8f;
PyObject *const_str_digest_de402023c88e18fbe71f97018e6e5e3a;
PyObject *const_str_plain__require;
PyObject *const_dict_90d10a80b928f9176d6e8b30b14addb6;
PyObject *const_dict_14d578cb54e0b03aed40acca92a6964d;
PyObject *const_str_plain_session_id;
PyObject *const_dict_20fd99ebb7eaef202dc6b00b9720f473;
PyObject *const_dict_13db672d681bd36c18e830637daa9bde;
PyObject *const_str_plain_BetaSelfHostedWork;
PyObject *const_str_plain_model_construct;
PyObject *const_str_plain_BetaSessionWorkData;
PyObject *const_str_plain_session;
PyObject *const_tuple_str_plain_type_str_plain_id_tuple;
PyObject *const_tuple_str_plain_id_str_plain_environment_id_str_plain_data_tuple;
PyObject *const_str_plain_handle_item;
PyObject *const_str_digest_2b7be114d63bf671e341d3232a6b9742;
PyObject *const_str_digest_52ab3fe27ebc50259551f0078655b45f;
PyObject *const_tuple_str_plain_AgentToolContext_tuple;
PyObject *const_str_plain_AgentToolContext;
PyObject *const_str_digest_112ca4ed8c78389918d99d208db34d11;
PyObject *const_str_plain_work_item;
PyObject *const_str_plain_data;
PyObject *const_str_plain_id;
PyObject *const_str_plain_create_task_group;
PyObject *const_str_plain_Event;
PyObject *const_dict_90ef0c44d9b1885727a335496330108c;
PyObject *const_str_plain__heartbeat;
PyObject *const_str_digest_f17807333edc398307e2a79c03a8cdd4;
PyObject *const_str_plain_start_soon;
PyObject *const_tuple_6eb36a4bf9b59b04734ad2c1ef935dd6_tuple;
PyObject *const_str_plain__tools_for;
PyObject *const_str_plain__run_session_tools;
PyObject *const_tuple_ad4fe1a68793ced93dbb832f944835cd_tuple;
PyObject *const_str_plain_cancel_scope;
PyObject *const_str_plain_cancel;
PyObject *const_str_plain_CancelScope;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_shield_tuple;
PyObject *const_tuple_800af3ec308551da1cd346072514538c_tuple;
PyObject *const_str_plain__is_status;
PyObject *const_int_pos_409;
PyObject *const_str_digest_8e99db8f687e5e04037877cabe8ddd5e;
PyObject *const_str_digest_5825a58a39e5f0756a213cf1b7a34d18;
PyObject *const_str_plain_work_res;
PyObject *const_str_plain_stop_ev;
PyObject *const_tuple_fb3e3de984995720e9ae963eeb5efbaf_tuple;
PyObject *const_str_plain_tg;
PyObject *const_str_digest_6017b0d7374997a32a3d54b0856d0ca4;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Callable;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Sequence_tuple;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain__retry;
PyObject *const_tuple_str_plain_TRANSIENT_ERRORS_tuple;
PyObject *const_str_plain_TRANSIENT_ERRORS;
PyObject *const_str_plain__poller;
PyObject *const_tuple_45ed5cd3cf3ccb2b9f9ddd8a3d392df1_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_Headers_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_Headers;
PyObject *const_str_plain__scoped_client;
PyObject *const_tuple_str_plain__copy_client_with_bearer_auth_tuple;
PyObject *const_str_digest_a2dee852a2f51ede75ba9d6c1334039a;
PyObject *const_tuple_str_plain_BetaSelfHostedWork_str_plain_BetaSessionWorkData_tuple;
PyObject *const_str_digest_022244632048bd42f0e02c4d1cb6aa8d;
PyObject *const_tuple_e2de6402cbcbe5eecf543e519c11b1d4_tuple;
PyObject *const_str_plain_DEFAULT_MAX_IDLE;
PyObject *const_str_plain_BetaAnyRunnableTool;
PyObject *const_str_plain_EnvironmentWorker;
PyObject *const_str_plain_EnvironmentWorkerTools;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_01d070cbcbb173627df2c32bff921a9a_tuple;
PyObject *const_float_30_0;
PyObject *const_float_90_0;
PyObject *const_str_plain_NO_HEARTBEAT;
PyObject *const_tuple_type_TimeoutError_tuple;
PyObject *const_str_digest_72abf3838f5f41c3dd5f730daa19614c;
PyObject *const_dict_8a4f87827e19ac07d540ff86fcec5e60;
PyObject *const_dict_7b393be4aca4cbaaa8dd3e8d4a8d25b0;
PyObject *const_dict_549a04bde7a7d4db85c2e76aca143cf3;
PyObject *const_str_digest_01d070cbcbb173627df2c32bff921a9a;
PyObject *const_str_digest_877a82028484e0ec27ff29dbaf8146ae;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_166;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_tools;
PyObject *const_str_plain_workdir;
PyObject *const_str_plain_unrestricted_paths;
PyObject *const_str_plain_max_idle;
PyObject *const_str_plain_worker_id;
PyObject *const_dict_87ce300d51b3acffab36fbe281e5f614;
PyObject *const_str_digest_4b709038a9aad3dcefad61343de87949;
PyObject *const_dict_e3fc18a71683feec5174acbb583aeaa8;
PyObject *const_str_digest_d8c0d16d3d813b719e87b65c74cd9ea5;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_dict_23d2dfea07eb30a1fc294c91bacc3ca6;
PyObject *const_dict_e39228a6f095f5c30881027aaeb6c61f;
PyObject *const_dict_dc809830807a7c93df6184f0b81dcea9;
PyObject *const_tuple_8be3cfe5b4a856a8e3491d11cfbd2a7a_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_digest_31d1542bd8f7fda812c0f2de5e7cab18;
PyObject *const_str_digest_21fc4e1879a6d79e883dafbc04cda1d3;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_c2fa77c62eea82079bf088cb9e666929_tuple;
PyObject *const_tuple_245210132f1ce579692acaa856c5bad4_tuple;
PyObject *const_tuple_df93206d7f35f8deab8ba05ea9ee18bd_tuple;
PyObject *const_tuple_str_plain_self_str_plain_tg_str_plain_work_res_tuple;
PyObject *const_tuple_217853e2f4a29385b392c9eaabcb272a_tuple;
PyObject *const_tuple_4a9ab21fc29f6d3d8bd1ec32083f77d9_tuple;
PyObject *const_tuple_fbf0ad930d5df15fb46eac902c49f39e_tuple;
PyObject *const_tuple_49151e92b2a7f098edcb9a60ff887e61_tuple;
PyObject *const_tuple_e9ca4b5ba35f4d807796ef47a54cb76f_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib.environments._worker"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_d403cfe61bd80b246ca172d87efeeb83);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_set);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_anyio);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_interval);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_work);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_heartbeat);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_work_id);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_id);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_last);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_6aae8070e323e4e5572681cd92ca2a8b_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_fatal_4xx);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_c793a476d88bfbe50a64898ddf724563);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_success);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_ttl);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b1488917f12b76eeb2f3f9da7429ced);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_d67e7b5fdc7eff77276661b353d9c808);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_resp);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_heartbeat);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_ttl_seconds);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stopping_str_plain_stopped_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_lease_extended);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_638bed66941b0291005d55361700c768);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__heartbeat_loop);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c080908fdc892e6a36974ba38888e4c);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_463dc098faa5ed261500ecb6099670a8);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_f8e7a56d229853326a715349d9c2d26e);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__environment_id);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__environment_key);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__tools);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_getcwd);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__workdir);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__unrestricted_paths);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_idle);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__worker_id);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain__extra_headers);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c171c975c2a1073365906eb7613c02a);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_beta_agent_toolset_20260401_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta_agent_toolset_20260401);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e9d058cd84f469238989e766fd774eb);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_37aa51157782e6ea38b7aaa6f372d79c);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__copy_client_with_bearer_auth);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ee887de38620eae570b077ff21bde7d);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auth_token_str_plain_helper_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_work);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_environments);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_cb9f1151fc93116351d3d8a0fbb9c7c6_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_item);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_environment_key);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_54e210d61974a494d63e2b97cde8ac8f);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_de402023c88e18fbe71f97018e6e5e3a);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__require);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_dict_90d10a80b928f9176d6e8b30b14addb6);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_14d578cb54e0b03aed40acca92a6964d);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_id);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_dict_20fd99ebb7eaef202dc6b00b9720f473);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_13db672d681bd36c18e830637daa9bde);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSelfHostedWork);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_construct);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSessionWorkData);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_session);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_str_plain_id_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_id_str_plain_environment_id_str_plain_data_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_item);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b7be114d63bf671e341d3232a6b9742);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_52ab3fe27ebc50259551f0078655b45f);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentToolContext_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_AgentToolContext);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_112ca4ed8c78389918d99d208db34d11);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_work_item);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_90ef0c44d9b1885727a335496330108c);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__heartbeat);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_f17807333edc398307e2a79c03a8cdd4);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_6eb36a4bf9b59b04734ad2c1ef935dd6_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain__tools_for);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_session_tools);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_ad4fe1a68793ced93dbb832f944835cd_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_scope);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_status);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_int_pos_409);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e99db8f687e5e04037877cabe8ddd5e);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_5825a58a39e5f0756a213cf1b7a34d18);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_work_res);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_ev);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_fb3e3de984995720e9ae963eeb5efbaf_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_tg);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_6017b0d7374997a32a3d54b0856d0ca4);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain__retry);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TRANSIENT_ERRORS_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSIENT_ERRORS);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain__poller);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_45ed5cd3cf3ccb2b9f9ddd8a3d392df1_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Headers_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain__scoped_client);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__copy_client_with_bearer_auth_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaSelfHostedWork_str_plain_BetaSessionWorkData_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_022244632048bd42f0e02c4d1cb6aa8d);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_e2de6402cbcbe5eecf543e519c11b1d4_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_BetaAnyRunnableTool);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnvironmentWorker);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_EnvironmentWorkerTools);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_01d070cbcbb173627df2c32bff921a9a_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_float_30_0);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_float_90_0);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_NO_HEARTBEAT);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_tuple_type_TimeoutError_tuple);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_7b393be4aca4cbaaa8dd3e8d4a8d25b0);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_549a04bde7a7d4db85c2e76aca143cf3);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_01d070cbcbb173627df2c32bff921a9a);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_877a82028484e0ec27ff29dbaf8146ae);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_166);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_workdir);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_unrestricted_paths);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_idle);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_worker_id);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_87ce300d51b3acffab36fbe281e5f614);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b709038a9aad3dcefad61343de87949);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_e3fc18a71683feec5174acbb583aeaa8);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8c0d16d3d813b719e87b65c74cd9ea5);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_23d2dfea07eb30a1fc294c91bacc3ca6);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_e39228a6f095f5c30881027aaeb6c61f);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_dc809830807a7c93df6184f0b81dcea9);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_8be3cfe5b4a856a8e3491d11cfbd2a7a_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_31d1542bd8f7fda812c0f2de5e7cab18);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_21fc4e1879a6d79e883dafbc04cda1d3);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_c2fa77c62eea82079bf088cb9e666929_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_245210132f1ce579692acaa856c5bad4_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_df93206d7f35f8deab8ba05ea9ee18bd_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tg_str_plain_work_res_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_217853e2f4a29385b392c9eaabcb272a_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_4a9ab21fc29f6d3d8bd1ec32083f77d9_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_fbf0ad930d5df15fb46eac902c49f39e_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_49151e92b2a7f098edcb9a60ff887e61_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_e9ca4b5ba35f4d807796ef47a54cb76f_tuple);
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
void checkModuleConstants_anthropic$lib$environments$_worker(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_d403cfe61bd80b246ca172d87efeeb83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d403cfe61bd80b246ca172d87efeeb83);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__HEARTBEAT_DEFAULT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_monotonic);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_set);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_anyio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_anyio);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail_after);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_interval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_interval);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_work);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_heartbeat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_heartbeat);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_work_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_work_id);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_id);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_last));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_headers);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_6aae8070e323e4e5572681cd92ca2a8b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6aae8070e323e4e5572681cd92ca2a8b_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_fatal_4xx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_fatal_4xx);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_c793a476d88bfbe50a64898ddf724563));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c793a476d88bfbe50a64898ddf724563);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_success));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_success);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_ttl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ttl);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b1488917f12b76eeb2f3f9da7429ced));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b1488917f12b76eeb2f3f9da7429ced);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_d67e7b5fdc7eff77276661b353d9c808));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d67e7b5fdc7eff77276661b353d9c808);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_resp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resp);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_heartbeat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_heartbeat);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_ttl_seconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ttl_seconds);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stopping_str_plain_stopped_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stopping_str_plain_stopped_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_lease_extended));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lease_extended);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_638bed66941b0291005d55361700c768));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_638bed66941b0291005d55361700c768);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move_on_after);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__heartbeat_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__heartbeat_loop);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c080908fdc892e6a36974ba38888e4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c080908fdc892e6a36974ba38888e4c);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_463dc098faa5ed261500ecb6099670a8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_463dc098faa5ed261500ecb6099670a8);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_f8e7a56d229853326a715349d9c2d26e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f8e7a56d229853326a715349d9c2d26e);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__environment_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__environment_id);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__environment_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__environment_key);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tools);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_getcwd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getcwd);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__workdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__workdir);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__unrestricted_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unrestricted_paths);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_idle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_idle);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__worker_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__worker_id);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain__extra_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extra_headers);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c171c975c2a1073365906eb7613c02a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c171c975c2a1073365906eb7613c02a);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_beta_agent_toolset_20260401_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_beta_agent_toolset_20260401_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta_agent_toolset_20260401));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta_agent_toolset_20260401);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e9d058cd84f469238989e766fd774eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e9d058cd84f469238989e766fd774eb);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_37aa51157782e6ea38b7aaa6f372d79c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37aa51157782e6ea38b7aaa6f372d79c);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__copy_client_with_bearer_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__copy_client_with_bearer_auth);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ee887de38620eae570b077ff21bde7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ee887de38620eae570b077ff21bde7d);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_auth_token_str_plain_helper_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_auth_token_str_plain_helper_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_aiter_work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aiter_work);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_environments));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environments);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_cb9f1151fc93116351d3d8a0fbb9c7c6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cb9f1151fc93116351d3d8a0fbb9c7c6_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_item);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_environment_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environment_key);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_54e210d61974a494d63e2b97cde8ac8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54e210d61974a494d63e2b97cde8ac8f);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_de402023c88e18fbe71f97018e6e5e3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de402023c88e18fbe71f97018e6e5e3a);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__require));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__require);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_dict_90d10a80b928f9176d6e8b30b14addb6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90d10a80b928f9176d6e8b30b14addb6);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_14d578cb54e0b03aed40acca92a6964d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_14d578cb54e0b03aed40acca92a6964d);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_id);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_dict_20fd99ebb7eaef202dc6b00b9720f473));
CHECK_OBJECT_DEEP(mod_consts.const_dict_20fd99ebb7eaef202dc6b00b9720f473);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_13db672d681bd36c18e830637daa9bde));
CHECK_OBJECT_DEEP(mod_consts.const_dict_13db672d681bd36c18e830637daa9bde);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSelfHostedWork));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaSelfHostedWork);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_construct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_construct);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaSessionWorkData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaSessionWorkData);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_session));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_str_plain_id_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_str_plain_id_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_id_str_plain_environment_id_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_id_str_plain_environment_id_str_plain_data_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_item);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b7be114d63bf671e341d3232a6b9742));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b7be114d63bf671e341d3232a6b9742);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_52ab3fe27ebc50259551f0078655b45f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52ab3fe27ebc50259551f0078655b45f);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentToolContext_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AgentToolContext_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_AgentToolContext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AgentToolContext);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_112ca4ed8c78389918d99d208db34d11));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_112ca4ed8c78389918d99d208db34d11);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_work_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_work_item);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_task_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_task_group);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_90ef0c44d9b1885727a335496330108c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90ef0c44d9b1885727a335496330108c);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__heartbeat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__heartbeat);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_f17807333edc398307e2a79c03a8cdd4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f17807333edc398307e2a79c03a8cdd4);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_soon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_soon);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_6eb36a4bf9b59b04734ad2c1ef935dd6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6eb36a4bf9b59b04734ad2c1ef935dd6_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain__tools_for));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tools_for);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_session_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_session_tools);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_ad4fe1a68793ced93dbb832f944835cd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ad4fe1a68793ced93dbb832f944835cd_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_scope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel_scope);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelScope);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shield_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_status));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_status);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_int_pos_409));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_409);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e99db8f687e5e04037877cabe8ddd5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e99db8f687e5e04037877cabe8ddd5e);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_5825a58a39e5f0756a213cf1b7a34d18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5825a58a39e5f0756a213cf1b7a34d18);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_work_res));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_work_res);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_ev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_ev);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_fb3e3de984995720e9ae963eeb5efbaf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fb3e3de984995720e9ae963eeb5efbaf_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_tg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tg);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_6017b0d7374997a32a3d54b0856d0ca4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6017b0d7374997a32a3d54b0856d0ca4);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Sequence_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain__retry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__retry);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TRANSIENT_ERRORS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TRANSIENT_ERRORS_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSIENT_ERRORS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRANSIENT_ERRORS);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain__poller));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__poller);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_45ed5cd3cf3ccb2b9f9ddd8a3d392df1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_45ed5cd3cf3ccb2b9f9ddd8a3d392df1_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Headers_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain__scoped_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__scoped_client);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__copy_client_with_bearer_auth_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__copy_client_with_bearer_auth_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BetaSelfHostedWork_str_plain_BetaSessionWorkData_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BetaSelfHostedWork_str_plain_BetaSessionWorkData_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_022244632048bd42f0e02c4d1cb6aa8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_022244632048bd42f0e02c4d1cb6aa8d);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_e2de6402cbcbe5eecf543e519c11b1d4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e2de6402cbcbe5eecf543e519c11b1d4_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_IDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_BetaAnyRunnableTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BetaAnyRunnableTool);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnvironmentWorker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnvironmentWorker);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_EnvironmentWorkerTools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EnvironmentWorkerTools);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_01d070cbcbb173627df2c32bff921a9a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_01d070cbcbb173627df2c32bff921a9a_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_float_30_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_30_0);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_float_90_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_90_0);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_NO_HEARTBEAT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NO_HEARTBEAT);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_tuple_type_TimeoutError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_TimeoutError_tuple);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_7b393be4aca4cbaaa8dd3e8d4a8d25b0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7b393be4aca4cbaaa8dd3e8d4a8d25b0);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_549a04bde7a7d4db85c2e76aca143cf3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_549a04bde7a7d4db85c2e76aca143cf3);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_01d070cbcbb173627df2c32bff921a9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01d070cbcbb173627df2c32bff921a9a);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_877a82028484e0ec27ff29dbaf8146ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_877a82028484e0ec27ff29dbaf8146ae);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_166));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_166);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_workdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_workdir);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_unrestricted_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unrestricted_paths);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_idle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_idle);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_worker_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_worker_id);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_87ce300d51b3acffab36fbe281e5f614));
CHECK_OBJECT_DEEP(mod_consts.const_dict_87ce300d51b3acffab36fbe281e5f614);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b709038a9aad3dcefad61343de87949));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b709038a9aad3dcefad61343de87949);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_e3fc18a71683feec5174acbb583aeaa8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e3fc18a71683feec5174acbb583aeaa8);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8c0d16d3d813b719e87b65c74cd9ea5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8c0d16d3d813b719e87b65c74cd9ea5);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_23d2dfea07eb30a1fc294c91bacc3ca6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_23d2dfea07eb30a1fc294c91bacc3ca6);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_e39228a6f095f5c30881027aaeb6c61f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e39228a6f095f5c30881027aaeb6c61f);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_dc809830807a7c93df6184f0b81dcea9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dc809830807a7c93df6184f0b81dcea9);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_8be3cfe5b4a856a8e3491d11cfbd2a7a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8be3cfe5b4a856a8e3491d11cfbd2a7a_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_31d1542bd8f7fda812c0f2de5e7cab18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31d1542bd8f7fda812c0f2de5e7cab18);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_21fc4e1879a6d79e883dafbc04cda1d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21fc4e1879a6d79e883dafbc04cda1d3);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_c2fa77c62eea82079bf088cb9e666929_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c2fa77c62eea82079bf088cb9e666929_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_245210132f1ce579692acaa856c5bad4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_245210132f1ce579692acaa856c5bad4_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_df93206d7f35f8deab8ba05ea9ee18bd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_df93206d7f35f8deab8ba05ea9ee18bd_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_tg_str_plain_work_res_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_tg_str_plain_work_res_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_217853e2f4a29385b392c9eaabcb272a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_217853e2f4a29385b392c9eaabcb272a_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_4a9ab21fc29f6d3d8bd1ec32083f77d9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4a9ab21fc29f6d3d8bd1ec32083f77d9_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_fbf0ad930d5df15fb46eac902c49f39e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fbf0ad930d5df15fb46eac902c49f39e_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_49151e92b2a7f098edcb9a60ff887e61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_49151e92b2a7f098edcb9a60ff887e61_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_e9ca4b5ba35f4d807796ef47a54cb76f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e9ca4b5ba35f4d807796ef47a54cb76f_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_anthropic$lib$environments$_worker$BetaAnyRunnableTool(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAnyRunnableTool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaAnyRunnableTool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaAnyRunnableTool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaAnyRunnableTool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaAnyRunnableTool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAnyRunnableTool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAnyRunnableTool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAnyRunnableTool);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$BetaSelfHostedWork(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSelfHostedWork);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaSelfHostedWork);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaSelfHostedWork, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaSelfHostedWork);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaSelfHostedWork, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSelfHostedWork);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSelfHostedWork);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSelfHostedWork);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$BetaSessionWorkData(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSessionWorkData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaSessionWorkData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaSessionWorkData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BetaSessionWorkData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BetaSessionWorkData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSessionWorkData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSessionWorkData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSessionWorkData);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$DEFAULT_MAX_IDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_IDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_IDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$Sequence(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$TRANSIENT_ERRORS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSIENT_ERRORS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSIENT_ERRORS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TRANSIENT_ERRORS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TRANSIENT_ERRORS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_HEARTBEAT_DEFAULT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEARTBEAT_DEFAULT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEARTBEAT_DEFAULT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_HEARTBEAT_TRANSIENT_ERRORS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_HEARTBEAT_TTL_DEFAULT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_NO_HEARTBEAT_SENTINEL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_copy_client_with_bearer_auth(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_client_with_bearer_auth);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__copy_client_with_bearer_auth);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__copy_client_with_bearer_auth, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__copy_client_with_bearer_auth);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__copy_client_with_bearer_auth, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_client_with_bearer_auth);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_client_with_bearer_auth);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_client_with_bearer_auth);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_heartbeat_loop(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__heartbeat_loop);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__heartbeat_loop);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__heartbeat_loop, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__heartbeat_loop);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__heartbeat_loop, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__heartbeat_loop);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__heartbeat_loop);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__heartbeat_loop);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_is_fatal_4xx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_fatal_4xx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_fatal_4xx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_fatal_4xx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_fatal_4xx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_is_status(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_status);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_status, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_status);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_status, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_require(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__require);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__require);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__require, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__require);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__require, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__require);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__require);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__require);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$_run_session_tools(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__run_session_tools);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_session_tools);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_session_tools, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_session_tools);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_session_tools, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__run_session_tools);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__run_session_tools);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_session_tools);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$aiter_work(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_aiter_work);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aiter_work);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aiter_work, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_aiter_work);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_aiter_work, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_aiter_work);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_aiter_work);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_aiter_work);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$anyio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_anyio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_anyio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_anyio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_anyio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$environments$_worker$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$environments$_worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$environments$_worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$environments$_worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_47d01d7ae2c365a094f4b76ddc4d970d;
static PyCodeObject *code_objects_f7853ca735e4bcb8e3bc7b57060e919b;
static PyCodeObject *code_objects_f268b557f2b668788bf147f446937aa6;
static PyCodeObject *code_objects_d5f280f907bc9c8686b026288cd572ac;
static PyCodeObject *code_objects_250587d1bfd806f9e59903c5ef2c4d21;
static PyCodeObject *code_objects_5620fe8836ea4cdb1613d8a6ad8424ce;
static PyCodeObject *code_objects_a75406a14b2ef3ca070dc1aa0fc6d2e2;
static PyCodeObject *code_objects_cb606090b59428ae99698eac0de35b2d;
static PyCodeObject *code_objects_608d27a3b309fe7815fa8a9466b46a9d;
static PyCodeObject *code_objects_3f7fd7e77fb8efd44d7c2c8425be904a;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_31d1542bd8f7fda812c0f2de5e7cab18); CHECK_OBJECT(module_filename_obj);
code_objects_47d01d7ae2c365a094f4b76ddc4d970d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_21fc4e1879a6d79e883dafbc04cda1d3, mod_consts.const_str_digest_21fc4e1879a6d79e883dafbc04cda1d3, NULL, NULL, 0, 0, 0);
code_objects_f7853ca735e4bcb8e3bc7b57060e919b = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EnvironmentWorker, mod_consts.const_str_plain_EnvironmentWorker, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f268b557f2b668788bf147f446937aa6 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4b709038a9aad3dcefad61343de87949, mod_consts.const_tuple_c2fa77c62eea82079bf088cb9e666929_tuple, NULL, 2, 8, 0);
code_objects_d5f280f907bc9c8686b026288cd572ac = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__handle_item, mod_consts.const_str_digest_5825a58a39e5f0756a213cf1b7a34d18, mod_consts.const_tuple_245210132f1ce579692acaa856c5bad4_tuple, NULL, 3, 0, 0);
code_objects_250587d1bfd806f9e59903c5ef2c4d21 = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__heartbeat, mod_consts.const_str_digest_f17807333edc398307e2a79c03a8cdd4, mod_consts.const_tuple_df93206d7f35f8deab8ba05ea9ee18bd_tuple, mod_consts.const_tuple_str_plain_self_str_plain_tg_str_plain_work_res_tuple, 3, 0, 0);
code_objects_5620fe8836ea4cdb1613d8a6ad8424ce = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__heartbeat_loop, mod_consts.const_str_plain__heartbeat_loop, mod_consts.const_tuple_217853e2f4a29385b392c9eaabcb272a_tuple, NULL, 1, 4, 0);
code_objects_a75406a14b2ef3ca070dc1aa0fc6d2e2 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__require, mod_consts.const_str_plain__require, mod_consts.const_tuple_4a9ab21fc29f6d3d8bd1ec32083f77d9_tuple, NULL, 1, 2, 0);
code_objects_cb606090b59428ae99698eac0de35b2d = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__tools_for, mod_consts.const_str_digest_d8c0d16d3d813b719e87b65c74cd9ea5, mod_consts.const_tuple_fbf0ad930d5df15fb46eac902c49f39e_tuple, NULL, 2, 0, 0);
code_objects_608d27a3b309fe7815fa8a9466b46a9d = MAKE_CODE_OBJECT(module_filename_obj, 321, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_item, mod_consts.const_str_digest_2b7be114d63bf671e341d3232a6b9742, mod_consts.const_tuple_49151e92b2a7f098edcb9a60ff887e61_tuple, NULL, 1, 4, 0);
code_objects_3f7fd7e77fb8efd44d7c2c8425be904a = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run, mod_consts.const_str_digest_54e210d61974a494d63e2b97cde8ac8f, mod_consts.const_tuple_e9ca4b5ba35f4d807796ef47a54cb76f_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__2__require(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__3___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__4__tools_for(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__5_run(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__6_handle_item(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__7__handle_item(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_work = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_work_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_environment_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_stop = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_extra_headers = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_environment_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_extra_headers;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_stop;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_work;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_work_id;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_work);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
par_work = NULL;
CHECK_OBJECT(par_work_id);
CHECK_OBJECT(par_work_id);
Py_DECREF(par_work_id);
par_work_id = NULL;
CHECK_OBJECT(par_environment_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
par_environment_id = NULL;
CHECK_OBJECT(par_stop);
CHECK_OBJECT(par_stop);
Py_DECREF(par_stop);
par_stop = NULL;
CHECK_OBJECT(par_extra_headers);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
par_extra_headers = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop_locals {
PyObject *var_interval;
PyObject *var_ttl;
PyObject *var_last;
PyObject *var_last_success;
PyObject *var_resp;
PyObject *var_e;
nuitka_bool tmp_try_except_1__unhandled_indicator;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
};
#endif

static PyObject *anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop_locals *coroutine_heap = (struct anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_interval = NULL;
coroutine_heap->var_ttl = NULL;
coroutine_heap->var_last = NULL;
coroutine_heap->var_last_success = NULL;
coroutine_heap->var_resp = NULL;
coroutine_heap->var_e = NULL;
coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5620fe8836ea4cdb1613d8a6ad8424ce, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = module_var_accessor_anthropic$lib$environments$_worker$_HEARTBEAT_DEFAULT(tstate);
if (unlikely(tmp_assign_source_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 107;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_interval == NULL);
Py_INCREF(tmp_assign_source_1);
coroutine_heap->var_interval = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_var_accessor_anthropic$lib$environments$_worker$_HEARTBEAT_TTL_DEFAULT(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_ttl == NULL);
Py_INCREF(tmp_assign_source_2);
coroutine_heap->var_ttl = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = module_var_accessor_anthropic$lib$environments$_worker$_NO_HEARTBEAT_SENTINEL(tstate);
if (unlikely(tmp_assign_source_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL);
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_last == NULL);
Py_INCREF(tmp_assign_source_3);
coroutine_heap->var_last = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_worker$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 110;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_monotonic);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 110;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_last_success == NULL);
coroutine_heap->var_last_success = tmp_assign_source_4;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_2;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stop);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 111;
tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_set);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (coroutine_heap->tmp_res == 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_fail_after);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
if (coroutine_heap->var_interval == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_interval);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_1 = coroutine_heap->var_interval;
coroutine->m_frame->m_frame.f_lineno = 116;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = coroutine_heap->tmp_with_1__source;
    coroutine_heap->tmp_with_1__source = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 116;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_3 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, const_str_plain___exit__);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = coroutine_heap->tmp_with_1__exit;
    coroutine_heap->tmp_with_1__exit = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_9;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
coroutine->m_frame->m_frame.f_lineno = 117;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_heartbeat);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (coroutine_heap->var_last == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_last);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 120;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_1_1 = coroutine_heap->var_last;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_headers);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 121;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 117;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_6aae8070e323e4e5572681cd92ca2a8b_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_5;
}
tmp_assign_source_10 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_resp;
    coroutine_heap->var_resp = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_11;
tmp_assign_source_11 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 116;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_6;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_6;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 116;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccoooooo";
goto try_except_handler_6;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 116;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccoooooo";
goto try_except_handler_6;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 116;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 116;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 116;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
nuitka_bool tmp_assign_source_12;
tmp_assign_source_12 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_12;
}
// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = module_var_accessor_anthropic$lib$environments$_worker$_HEARTBEAT_TRANSIENT_ERRORS(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 126;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_7;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 126;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_7;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_13); 
{
    PyObject *old = coroutine_heap->var_e;
    coroutine_heap->var_e = tmp_assign_source_13;
    Py_INCREF(coroutine_heap->var_e);
    Py_XDECREF(old);
}

}
// Tried code:
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
int tmp_truth_name_1;
tmp_called_value_7 = module_var_accessor_anthropic$lib$environments$_worker$_is_fatal_4xx(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__is_fatal_4xx);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_5 = coroutine_heap->var_e;
coroutine->m_frame->m_frame.f_lineno = 127;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_3);

coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
tmp_condition_result_7 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_instance_3 = module_var_accessor_anthropic$lib$environments$_worker$log(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_6 = mod_consts.const_str_digest_c793a476d88bfbe50a64898ddf724563;
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_7 = coroutine_heap->var_e;
coroutine->m_frame->m_frame.f_lineno = 128;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_error,
        call_args
    );
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_5;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stop);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 129;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}

tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 129;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_set);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 129;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto try_return_handler_8;
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_anthropic$lib$environments$_worker$time(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 134;
tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_monotonic);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
if (coroutine_heap->var_last_success == NULL) {
Py_DECREF(tmp_sub_expr_left_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_last_success);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}

tmp_sub_expr_right_1 = coroutine_heap->var_last_success;
tmp_cmp_expr_left_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
if (coroutine_heap->var_ttl == NULL) {
Py_DECREF(tmp_cmp_expr_left_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ttl);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}

tmp_cmp_expr_right_5 = coroutine_heap->var_ttl;
tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_7 = module_var_accessor_anthropic$lib$environments$_worker$log(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_error);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_8 = mod_consts.const_str_digest_7b1488917f12b76eeb2f3f9da7429ced;
if (coroutine_heap->var_ttl == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ttl);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}

tmp_args_element_value_9 = coroutine_heap->var_ttl;
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_10 = coroutine_heap->var_e;
coroutine->m_frame->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_7;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stop);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}

tmp_called_instance_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 136;
tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_set);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto try_return_handler_8;
branch_no_8:;
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
tmp_called_instance_7 = module_var_accessor_anthropic$lib$environments$_worker$log(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_11 = mod_consts.const_str_digest_d67e7b5fdc7eff77276661b353d9c808;
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_12 = coroutine_heap->var_e;
coroutine->m_frame->m_frame.f_lineno = 138;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_7,
        mod_consts.const_str_plain_warning,
        call_args
    );
}

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
goto try_end_6;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

goto branch_end_6;
branch_no_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 112;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccoooooo";
goto try_except_handler_7;
branch_end_6:;
goto try_end_7;
// Return handler code:
try_return_handler_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_8;
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = coroutine_heap->var_resp;
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_last_heartbeat);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_last;
    coroutine_heap->var_last = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_instance_8;
tmp_called_instance_8 = module_var_accessor_anthropic$lib$environments$_worker$time(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 141;
tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts.const_str_plain_monotonic);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 141;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_last_success;
    coroutine_heap->var_last_success = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_9;
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 142;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = coroutine_heap->var_resp;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ttl_seconds);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 142;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_condition_result_10 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 142;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_10;
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 143;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = coroutine_heap->var_resp;
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ttl_seconds);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 143;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_ttl;
    coroutine_heap->var_ttl = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_15;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_16;
tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_9 != NULL);
tmp_args_element_value_13 = const_float_1_0;
tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_10 != NULL);
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = coroutine_heap->var_resp;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ttl_seconds);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_args_element_value_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_16 = module_var_accessor_anthropic$lib$environments$_worker$_HEARTBEAT_DEFAULT(tstate);
if (unlikely(tmp_args_element_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__HEARTBEAT_DEFAULT);
}

if (tmp_args_element_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_args_element_value_15);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = coroutine_heap->var_interval;
    coroutine_heap->var_interval = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
branch_no_10:;
{
bool tmp_condition_result_11;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_13;
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 145;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = coroutine_heap->var_resp;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 145;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_tuple_str_plain_stopping_str_plain_stopped_tuple;
coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 145;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (coroutine_heap->tmp_res == 1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (coroutine_heap->var_resp == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 145;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = coroutine_heap->var_resp;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_lease_extended);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 145;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 145;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
tmp_condition_result_11 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_11 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_19;
PyObject *tmp_expression_value_16;
tmp_expression_value_14 = module_var_accessor_anthropic$lib$environments$_worker$log(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_info);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_17 = mod_consts.const_str_digest_638bed66941b0291005d55361700c768;
if (coroutine_heap->var_resp == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = coroutine_heap->var_resp;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_state);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_11);

coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
if (coroutine_heap->var_resp == NULL) {
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_18);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_resp);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = coroutine_heap->var_resp;
tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_lease_extended);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_args_element_value_18);

coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 146;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 146;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
PyObject *tmp_called_instance_9;
PyObject *tmp_call_result_10;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stop);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 147;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_9 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 147;
tmp_call_result_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts.const_str_plain_set);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 147;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_11:;
branch_no_9:;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_20;
tmp_expression_value_17 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_move_on_after);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
if (coroutine_heap->var_interval == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_interval);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}

tmp_args_element_value_20 = coroutine_heap->var_interval;
coroutine->m_frame->m_frame.f_lineno = 150;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = coroutine_heap->tmp_with_2__source;
    coroutine_heap->tmp_with_2__source = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_18 = coroutine_heap->tmp_with_2__source;
tmp_called_value_13 = LOOKUP_SPECIAL(tstate, tmp_expression_value_18, const_str_plain___enter__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
coroutine->m_frame->m_frame.f_lineno = 150;
tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = coroutine_heap->tmp_with_2__enter;
    coroutine_heap->tmp_with_2__enter = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_19 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_20 = LOOKUP_SPECIAL(tstate, tmp_expression_value_19, const_str_plain___exit__);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = coroutine_heap->tmp_with_2__exit;
    coroutine_heap->tmp_with_2__exit = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_assign_source_21;
tmp_assign_source_21 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_21;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_called_instance_10;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 151;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stop);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_11;
}

tmp_called_instance_10 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 151;
tmp_expression_value_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_10, mod_consts.const_str_plain_wait);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_11;
}
tmp_expression_value_20 = ASYNC_AWAIT(tstate, tmp_expression_value_21, await_normal);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_11;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_instance_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_20;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_instance_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_11;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_8;
// Exception handler code:
try_except_handler_11:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 3.
coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_8, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_12 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
nuitka_bool tmp_assign_source_22;
tmp_assign_source_22 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_22;
}
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_14 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_21 = EXC_TYPE(tstate);
tmp_args_element_value_22 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_22); 
tmp_args_element_value_23 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_23 == NULL) {
    tmp_args_element_value_23 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_12;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_12;
}
tmp_condition_result_13 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 150;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccoooooo";
goto try_except_handler_12;
branch_no_13:;
goto branch_end_12;
branch_no_12:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 150;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccoooooo";
goto try_except_handler_12;
branch_end_12:;
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_9;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_9:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

goto try_end_8;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_8:;
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_10 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_14;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_14 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_11;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_15 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 150;
tmp_call_result_11 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_10);

coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_14:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_10;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

goto try_except_handler_9;
// End of try:
try_end_10:;
{
bool tmp_condition_result_15;
nuitka_bool tmp_cmp_expr_left_11;
nuitka_bool tmp_cmp_expr_right_11;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_11 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
tmp_condition_result_15 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_called_value_16;
PyObject *tmp_call_result_12;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_16 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 150;
tmp_call_result_12 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_16, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
branch_no_15:;
goto try_end_11;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_11 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_11;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
Py_DECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
Py_DECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
Py_DECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "cccccoooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[3],
    coroutine->m_closure[4],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine_heap->var_interval,
    coroutine_heap->var_ttl,
    coroutine_heap->var_last,
    coroutine_heap->var_last_success,
    coroutine_heap->var_resp,
    coroutine_heap->var_e
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_interval);
coroutine_heap->var_interval = NULL;
Py_XDECREF(coroutine_heap->var_ttl);
coroutine_heap->var_ttl = NULL;
Py_XDECREF(coroutine_heap->var_last);
coroutine_heap->var_last = NULL;
Py_XDECREF(coroutine_heap->var_last_success);
coroutine_heap->var_last_success = NULL;
Py_XDECREF(coroutine_heap->var_resp);
coroutine_heap->var_resp = NULL;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_12 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_12 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_interval);
coroutine_heap->var_interval = NULL;
Py_XDECREF(coroutine_heap->var_ttl);
coroutine_heap->var_ttl = NULL;
Py_XDECREF(coroutine_heap->var_last);
coroutine_heap->var_last = NULL;
Py_XDECREF(coroutine_heap->var_last_success);
coroutine_heap->var_last_success = NULL;
Py_XDECREF(coroutine_heap->var_resp);
coroutine_heap->var_resp = NULL;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_12;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop_context,
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain__heartbeat_loop,
        NULL,
        code_objects_5620fe8836ea4cdb1613d8a6ad8424ce,
        closure,
        5,
#if 1
        sizeof(struct anthropic$lib$environments$_worker$$$function__1__heartbeat_loop$$$coroutine__1__heartbeat_loop_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$environments$_worker$$$function__2__require(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_env_var = python_pars[2];
PyObject *var_resolved = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_worker$$$function__2__require;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require = MAKE_FUNCTION_FRAME(tstate, code_objects_a75406a14b2ef3ca070dc1aa0fc6d2e2, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_worker$$$function__2__require = cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_worker$$$function__2__require);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_worker$$$function__2__require) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_value);
tmp_or_left_value_1 = par_value;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_env_var);
tmp_args_element_value_1 = par_env_var;
frame_frame_anthropic$lib$environments$_worker$$$function__2__require->m_frame.f_lineno = 160;
tmp_or_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_resolved == NULL);
var_resolved = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_resolved);
tmp_operand_value_1 = var_resolved;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_1 = "oooo";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_7c080908fdc892e6a36974ba38888e4c;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_name);
tmp_format_value_1 = par_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_463dc098faa5ed261500ecb6099670a8;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_env_var);
tmp_format_value_2 = par_env_var;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_anthropic$lib$environments$_worker$$$function__2__require->m_frame.f_lineno = 162;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 162;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_worker$$$function__2__require, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_worker$$$function__2__require->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_worker$$$function__2__require, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_worker$$$function__2__require,
    type_description_1,
    par_value,
    par_name,
    par_env_var,
    var_resolved
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_worker$$$function__2__require == cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require);
    cache_frame_frame_anthropic$lib$environments$_worker$$$function__2__require = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_worker$$$function__2__require);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_resolved);
tmp_return_value = var_resolved;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_resolved);
CHECK_OBJECT(var_resolved);
Py_DECREF(var_resolved);
var_resolved = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_resolved);
var_resolved = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_env_var);
Py_DECREF(par_env_var);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_env_var);
Py_DECREF(par_env_var);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_worker$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_client = python_pars[1];
PyObject *par_environment_id = python_pars[2];
PyObject *par_environment_key = python_pars[3];
PyObject *par_tools = python_pars[4];
PyObject *par_workdir = python_pars[5];
PyObject *par_unrestricted_paths = python_pars[6];
PyObject *par_max_idle = python_pars[7];
PyObject *par_worker_id = python_pars[8];
PyObject *par_extra_headers = python_pars[9];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_worker$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f268b557f2b668788bf147f446937aa6, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_worker$$$function__3___init__ = cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_worker$$$function__3___init__);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_worker$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_client);
tmp_assattr_value_1 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__client, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_environment_id);
tmp_assattr_value_2 = par_environment_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__environment_id, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_environment_key);
tmp_assattr_value_3 = par_environment_key;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__environment_key, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_tools);
tmp_assattr_value_4 = par_tools;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__tools, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_workdir);
tmp_cmp_expr_left_1 = par_workdir;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_anthropic$lib$environments$_worker$$$function__3___init__->m_frame.f_lineno = 273;
tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getcwd);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_workdir);
tmp_assattr_value_5 = par_workdir;
Py_INCREF(tmp_assattr_value_5);
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__workdir, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_unrestricted_paths);
tmp_assattr_value_6 = par_unrestricted_paths;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__unrestricted_paths, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_max_idle);
tmp_assattr_value_7 = par_max_idle;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__max_idle, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_worker_id);
tmp_assattr_value_8 = par_worker_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__worker_id, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_extra_headers);
tmp_assattr_value_9 = par_extra_headers;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__extra_headers, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_worker$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_worker$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_worker$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_worker$$$function__3___init__,
    type_description_1,
    par_self,
    par_client,
    par_environment_id,
    par_environment_key,
    par_tools,
    par_workdir,
    par_unrestricted_paths,
    par_max_idle,
    par_worker_id,
    par_extra_headers
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_worker$$$function__3___init__ == cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__);
    cache_frame_frame_anthropic$lib$environments$_worker$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_worker$$$function__3___init__);

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
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
CHECK_OBJECT(par_environment_key);
Py_DECREF(par_environment_key);
CHECK_OBJECT(par_tools);
Py_DECREF(par_tools);
CHECK_OBJECT(par_workdir);
Py_DECREF(par_workdir);
CHECK_OBJECT(par_unrestricted_paths);
Py_DECREF(par_unrestricted_paths);
CHECK_OBJECT(par_max_idle);
Py_DECREF(par_max_idle);
CHECK_OBJECT(par_worker_id);
Py_DECREF(par_worker_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
CHECK_OBJECT(par_environment_key);
Py_DECREF(par_environment_key);
CHECK_OBJECT(par_tools);
Py_DECREF(par_tools);
CHECK_OBJECT(par_workdir);
Py_DECREF(par_workdir);
CHECK_OBJECT(par_unrestricted_paths);
Py_DECREF(par_unrestricted_paths);
CHECK_OBJECT(par_max_idle);
Py_DECREF(par_max_idle);
CHECK_OBJECT(par_worker_id);
Py_DECREF(par_worker_id);
CHECK_OBJECT(par_extra_headers);
Py_DECREF(par_extra_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_worker$$$function__4__tools_for(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_env = python_pars[1];
PyObject *var_beta_agent_toolset_20260401 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for = MAKE_FUNCTION_FRAME(tstate, code_objects_cb606090b59428ae99698eac0de35b2d, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for->m_type_description == NULL);
frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for = cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__tools);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for->m_frame.f_lineno = 280;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 280;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_env);
tmp_args_element_value_2 = par_env;
frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for->m_frame.f_lineno = 281;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__tools, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__tools);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__tools);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_7c171c975c2a1073365906eb7613c02a;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_beta_agent_toolset_20260401_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_2;
frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for->m_frame.f_lineno = 286;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_beta_agent_toolset_20260401,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_beta_agent_toolset_20260401);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_beta_agent_toolset_20260401 == NULL);
var_beta_agent_toolset_20260401 = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_beta_agent_toolset_20260401);
tmp_called_value_2 = var_beta_agent_toolset_20260401;
CHECK_OBJECT(par_env);
tmp_args_element_value_3 = par_env;
frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for->m_frame.f_lineno = 288;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for,
    type_description_1,
    par_self,
    par_env,
    var_beta_agent_toolset_20260401
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for == cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for);
    cache_frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$environments$_worker$$$function__4__tools_for);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_beta_agent_toolset_20260401);
var_beta_agent_toolset_20260401 = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_beta_agent_toolset_20260401);
var_beta_agent_toolset_20260401 = NULL;
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
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$environments$_worker$$$function__5_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run_locals {
PyObject *var_environment_id;
PyObject *var_environment_key;
PyObject *var_poll_client;
PyObject *var_work_item;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run_locals *coroutine_heap = (struct anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_environment_id = NULL;
coroutine_heap->var_environment_key = NULL;
coroutine_heap->var_poll_client = NULL;
coroutine_heap->var_work_item = NULL;
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3f7fd7e77fb8efd44d7c2c8425be904a, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 302;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__environment_id);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 302;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_environment_id == NULL);
coroutine_heap->var_environment_id = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__environment_key);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 303;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_environment_key == NULL);
coroutine_heap->var_environment_key = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(coroutine_heap->var_environment_id);
tmp_cmp_expr_left_1 = coroutine_heap->var_environment_id;
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(coroutine_heap->var_environment_key);
tmp_cmp_expr_left_2 = coroutine_heap->var_environment_key;
tmp_cmp_expr_right_2 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_37aa51157782e6ea38b7aaa6f372d79c;
coroutine->m_frame->m_frame.f_lineno = 305;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 305;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "coooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_worker$_copy_client_with_bearer_auth(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__copy_client_with_bearer_auth);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__client);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 310;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_environment_key);
tmp_kw_call_dict_value_0_1 = coroutine_heap->var_environment_key;
tmp_kw_call_dict_value_1_1 = mod_consts.const_str_digest_2ee887de38620eae570b077ff21bde7d;
coroutine->m_frame->m_frame.f_lineno = 309;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_auth_token_str_plain_helper_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_poll_client == NULL);
coroutine_heap->var_poll_client = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_9;
tmp_called_value_2 = module_var_accessor_anthropic$lib$environments$_worker$aiter_work(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_aiter_work);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_poll_client);
tmp_expression_value_7 = coroutine_heap->var_poll_client;
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_beta);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 313;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environments);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 313;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_work);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 313;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_environment_id);
tmp_kw_call_dict_value_0_2 = coroutine_heap->var_environment_id;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__worker_id);
if (tmp_kw_call_dict_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = Py_False;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__extra_headers);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 312;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_value_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_cb9f1151fc93116351d3d8a0fbb9c7c6_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_kw_call_arg_value_0_2, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_kw_call_dict_value_0_2, sizeof(PyObject *), &tmp_kw_call_dict_value_1_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "coooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = yield_return_value;
assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_value_value_2;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = coroutine_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_10 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_10;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_3;
}
tmp_assign_source_5 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
    coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = coroutine_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_3 = PyExc_StopAsyncIteration;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_2;
branch_no_2:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
branch_end_2:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_6 = coroutine_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = coroutine_heap->var_work_item;
    coroutine_heap->var_work_item = tmp_assign_source_6;
    Py_INCREF(coroutine_heap->var_work_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 319;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__handle_item);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(coroutine_heap->var_work_item);
tmp_args_element_value_1 = coroutine_heap->var_work_item;
if (coroutine_heap->var_environment_key == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_key);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = coroutine_heap->var_environment_key;
coroutine->m_frame->m_frame.f_lineno = 319;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_expression_value_11 = ASYNC_AWAIT(tstate, tmp_expression_value_12, await_normal);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_11;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "coooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine_heap->var_environment_id,
    coroutine_heap->var_environment_key,
    coroutine_heap->var_poll_client,
    coroutine_heap->var_work_item
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_environment_id);
CHECK_OBJECT(coroutine_heap->var_environment_id);
Py_DECREF(coroutine_heap->var_environment_id);
coroutine_heap->var_environment_id = NULL;
Py_XDECREF(coroutine_heap->var_environment_key);
coroutine_heap->var_environment_key = NULL;
CHECK_OBJECT(coroutine_heap->var_poll_client);
CHECK_OBJECT(coroutine_heap->var_poll_client);
Py_DECREF(coroutine_heap->var_poll_client);
coroutine_heap->var_poll_client = NULL;
Py_XDECREF(coroutine_heap->var_work_item);
coroutine_heap->var_work_item = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_environment_id);
coroutine_heap->var_environment_id = NULL;
Py_XDECREF(coroutine_heap->var_environment_key);
coroutine_heap->var_environment_key = NULL;
Py_XDECREF(coroutine_heap->var_poll_client);
coroutine_heap->var_poll_client = NULL;
Py_XDECREF(coroutine_heap->var_work_item);
coroutine_heap->var_work_item = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run_context,
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_run,
        mod_consts.const_str_digest_54e210d61974a494d63e2b97cde8ac8f,
        code_objects_3f7fd7e77fb8efd44d7c2c8425be904a,
        closure,
        1,
#if 1
        sizeof(struct anthropic$lib$environments$_worker$$$function__5_run$$$coroutine__1_run_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$environments$_worker$$$function__6_handle_item(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_work_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_environment_id = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_session_id = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_environment_key = Nuitka_Cell_New1(python_pars[4]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_closure_1[0] = par_environment_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_environment_key;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_session_id;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_work_id;
Py_INCREF(tmp_closure_1[4]);
tmp_return_value = MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_work_id);
CHECK_OBJECT(par_work_id);
Py_DECREF(par_work_id);
par_work_id = NULL;
CHECK_OBJECT(par_environment_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
par_environment_id = NULL;
CHECK_OBJECT(par_session_id);
CHECK_OBJECT(par_session_id);
Py_DECREF(par_session_id);
par_session_id = NULL;
CHECK_OBJECT(par_environment_key);
CHECK_OBJECT(par_environment_key);
Py_DECREF(par_environment_key);
par_environment_key = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item_locals {
PyObject *var_work_item;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item_locals *coroutine_heap = (struct anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_work_item = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_608d27a3b309fe7815fa8a9466b46a9d, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_worker$_require(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__require);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 353;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 353;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_90d10a80b928f9176d6e8b30b14addb6);
coroutine->m_frame->m_frame.f_lineno = 353;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 353;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[4]);
    Nuitka_Cell_SET(coroutine->m_closure[4], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_2;
tmp_called_value_2 = module_var_accessor_anthropic$lib$environments$_worker$_require(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__require);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 354;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 354;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
tmp_kwargs_value_2 = DICT_COPY(tstate, mod_consts.const_dict_14d578cb54e0b03aed40acca92a6964d);
coroutine->m_frame->m_frame.f_lineno = 354;
tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
CHECK_OBJECT(tmp_kwargs_value_2);
Py_DECREF(tmp_kwargs_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 354;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
    Nuitka_Cell_SET(coroutine->m_closure[0], tmp_assign_source_2);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_3;
tmp_called_value_3 = module_var_accessor_anthropic$lib$environments$_worker$_require(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__require);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_session_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
tmp_kwargs_value_3 = DICT_COPY(tstate, mod_consts.const_dict_20fd99ebb7eaef202dc6b00b9720f473);
coroutine->m_frame->m_frame.f_lineno = 355;
tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
CHECK_OBJECT(tmp_kwargs_value_3);
Py_DECREF(tmp_kwargs_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[3]);
    Nuitka_Cell_SET(coroutine->m_closure[3], tmp_assign_source_3);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_4;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kwargs_value_4;
tmp_called_value_4 = module_var_accessor_anthropic$lib$environments$_worker$_require(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__require);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 358;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_key);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__environment_key);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_tuple_element_4 = tmp_or_left_value_1;
or_end_1:;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_4);
tmp_kwargs_value_4 = DICT_COPY(tstate, mod_consts.const_dict_13db672d681bd36c18e830637daa9bde);
coroutine->m_frame->m_frame.f_lineno = 358;
tmp_assign_source_4 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
CHECK_OBJECT(tmp_kwargs_value_4);
Py_DECREF(tmp_kwargs_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 358;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[1]);
    Nuitka_Cell_SET(coroutine->m_closure[1], tmp_assign_source_4);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
tmp_expression_value_2 = module_var_accessor_anthropic$lib$environments$_worker$BetaSelfHostedWork(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_BetaSelfHostedWork);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_model_construct);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[4]));
tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[0]));
tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_3 = module_var_accessor_anthropic$lib$environments$_worker$BetaSessionWorkData(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_BetaSessionWorkData);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_model_construct);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = mod_consts.const_str_plain_session;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[3]));
tmp_kw_call_value_1_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 370;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_type_str_plain_id_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 367;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_id_str_plain_environment_id_str_plain_data_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_work_item == NULL);
coroutine_heap->var_work_item = tmp_assign_source_5;
}
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 372;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
CHECK_OBJECT(coroutine_heap->var_work_item);
tmp_args_element_value_1 = coroutine_heap->var_work_item;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[1]));
tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 372;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_5 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain__handle_item,
        call_args
    );
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccccco";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[4],
    coroutine->m_closure[0],
    coroutine->m_closure[3],
    coroutine->m_closure[1],
    coroutine_heap->var_work_item
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_work_item);
CHECK_OBJECT(coroutine_heap->var_work_item);
Py_DECREF(coroutine_heap->var_work_item);
coroutine_heap->var_work_item = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_work_item);
coroutine_heap->var_work_item = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item_context,
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_handle_item,
        mod_consts.const_str_digest_2b7be114d63bf671e341d3232a6b9742,
        code_objects_608d27a3b309fe7815fa8a9466b46a9d,
        closure,
        5,
#if 1
        sizeof(struct anthropic$lib$environments$_worker$$$function__6_handle_item$$$coroutine__1_handle_item_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$environments$_worker$$$function__7__handle_item(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_work_item = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_environment_key = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_environment_key;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_work_item;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_work_item);
CHECK_OBJECT(par_work_item);
Py_DECREF(par_work_item);
par_work_item = NULL;
CHECK_OBJECT(par_environment_key);
CHECK_OBJECT(par_environment_key);
Py_DECREF(par_environment_key);
par_environment_key = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item_locals {
PyObject *var_AgentToolContext;
PyObject *var_worker_client;
struct Nuitka_CellObject *var_work_res;
PyObject *var_session_id;
struct Nuitka_CellObject *var_tg;
PyObject *var_stop;
PyObject *var__heartbeat;
PyObject *var_env;
PyObject *var_tools;
PyObject *var_calls;
PyObject *var__;
PyObject *var_e;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
PyObject *tmp_with_3__enter;
PyObject *tmp_with_3__exit;
nuitka_bool tmp_with_3__indicator;
PyObject *tmp_with_3__source;
PyObject *tmp_with_4__enter;
PyObject *tmp_with_4__exit;
nuitka_bool tmp_with_4__indicator;
PyObject *tmp_with_4__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
int exception_keeper_lineno_19;
struct Nuitka_ExceptionStackItem exception_preserved_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
int exception_keeper_lineno_23;
struct Nuitka_ExceptionStackItem exception_preserved_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
int exception_keeper_lineno_24;
struct Nuitka_ExceptionStackItem exception_preserved_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
int exception_keeper_lineno_27;
struct Nuitka_ExceptionStackItem exception_preserved_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
int exception_keeper_lineno_37;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_38;
int exception_keeper_lineno_38;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_39;
int exception_keeper_lineno_39;
};
#endif

static PyObject *anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item_locals *coroutine_heap = (struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 15: goto yield_return_15;
case 14: goto yield_return_14;
case 13: goto yield_return_13;
case 12: goto yield_return_12;
case 11: goto yield_return_11;
case 10: goto yield_return_10;
case 9: goto yield_return_9;
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_AgentToolContext = NULL;
coroutine_heap->var_worker_client = NULL;
coroutine_heap->var_work_res = Nuitka_Cell_NewEmpty();
coroutine_heap->var_session_id = NULL;
coroutine_heap->var_tg = Nuitka_Cell_NewEmpty();
coroutine_heap->var_stop = NULL;
coroutine_heap->var__heartbeat = NULL;
coroutine_heap->var_env = NULL;
coroutine_heap->var_tools = NULL;
coroutine_heap->var_calls = NULL;
coroutine_heap->var__ = NULL;
coroutine_heap->var_e = NULL;
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->tmp_with_2__enter = NULL;
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_2__source = NULL;
coroutine_heap->tmp_with_3__enter = NULL;
coroutine_heap->tmp_with_3__exit = NULL;
coroutine_heap->tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_3__source = NULL;
coroutine_heap->tmp_with_4__enter = NULL;
coroutine_heap->tmp_with_4__exit = NULL;
coroutine_heap->tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_4__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d5f280f907bc9c8686b026288cd572ac, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_7c171c975c2a1073365906eb7613c02a;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AgentToolContext_tuple;
tmp_level_value_1 = mod_consts.const_int_pos_2;
coroutine->m_frame->m_frame.f_lineno = 386;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_AgentToolContext,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AgentToolContext);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_AgentToolContext == NULL);
coroutine_heap->var_AgentToolContext = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_worker$_copy_client_with_bearer_auth(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__copy_client_with_bearer_auth);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 392;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 392;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_key);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 392;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_kw_call_dict_value_1_1 = mod_consts.const_str_digest_112ca4ed8c78389918d99d208db34d11;
coroutine->m_frame->m_frame.f_lineno = 391;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_auth_token_str_plain_helper_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_worker_client == NULL);
coroutine_heap->var_worker_client = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(coroutine_heap->var_worker_client);
tmp_expression_value_4 = coroutine_heap->var_worker_client;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_beta);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_environments);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_work);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(coroutine_heap->var_work_res) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_work_res, tmp_assign_source_3);

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_data);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_id);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->var_session_id == NULL);
coroutine_heap->var_session_id = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 397;
tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_create_task_group);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_with_3__source == NULL);
coroutine_heap->tmp_with_3__source = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
tmp_expression_value_7 = coroutine_heap->tmp_with_3__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___aenter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 397;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_with_3__enter == NULL);
coroutine_heap->tmp_with_3__enter = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
tmp_expression_value_8 = coroutine_heap->tmp_with_3__source;
tmp_assign_source_7 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___aexit__);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
assert(coroutine_heap->tmp_with_3__exit == NULL);
coroutine_heap->tmp_with_3__exit = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
coroutine->m_frame->m_frame.f_lineno = 397;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
tmp_expression_value_10 = coroutine_heap->tmp_with_3__enter;
tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_enter);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_9;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_8 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_3__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_3__enter = tmp_assign_source_8;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_9;
tmp_assign_source_9 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_3__indicator = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
tmp_assign_source_10 = coroutine_heap->tmp_with_3__enter;
assert(Nuitka_Cell_GET(coroutine_heap->var_tg) == NULL);
Py_INCREF(tmp_assign_source_10);
Nuitka_Cell_SET(coroutine_heap->var_tg, tmp_assign_source_10);

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}
coroutine->m_frame->m_frame.f_lineno = 398;
tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_Event);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->var_stop == NULL);
coroutine_heap->var_stop = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[3];
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_id);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 401;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_12;
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_environment_id);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 402;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_stop);
tmp_tuple_element_1 = coroutine_heap->var_stop;
PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_defaults_1);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_90ef0c44d9b1885727a335496330108c);
tmp_closure_1[0] = coroutine->m_closure[1];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = coroutine_heap->var_tg;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = coroutine_heap->var_work_res;
Py_INCREF(tmp_closure_1[2]);
tmp_assign_source_12 = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat(tstate, tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

assert(coroutine_heap->var__heartbeat == NULL);
coroutine_heap->var__heartbeat = tmp_assign_source_12;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_tg));
tmp_called_instance_3 = Nuitka_Cell_GET(coroutine_heap->var_tg);
CHECK_OBJECT(coroutine_heap->var__heartbeat);
tmp_args_element_value_1 = coroutine_heap->var__heartbeat;
coroutine->m_frame->m_frame.f_lineno = 426;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_start_soon, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 426;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
CHECK_OBJECT(coroutine_heap->var_AgentToolContext);
tmp_called_value_3 = coroutine_heap->var_AgentToolContext;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 438;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__workdir);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 438;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 439;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__unrestricted_paths);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

coroutine_heap->exception_lineno = 439;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(coroutine_heap->var_worker_client);
tmp_kw_call_value_2_1 = coroutine_heap->var_worker_client;
CHECK_OBJECT(coroutine_heap->var_session_id);
tmp_kw_call_value_3_1 = coroutine_heap->var_session_id;
coroutine->m_frame->m_frame.f_lineno = 437;
{
    PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

    tmp_assign_source_13 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_6eb36a4bf9b59b04734ad2c1ef935dd6_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 437;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->var_env == NULL);
coroutine_heap->var_env = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_called_instance_4;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 444;
CHECK_OBJECT(coroutine_heap->var_env);
tmp_called_instance_4 = coroutine_heap->var_env;
coroutine->m_frame->m_frame.f_lineno = 444;
tmp_expression_value_16 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, const_str_plain___aenter__);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 444;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_15 = ASYNC_AWAIT(tstate, tmp_expression_value_16, await_normal);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 444;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_15;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_16, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 444;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 445;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
CHECK_OBJECT(coroutine_heap->var_env);
tmp_args_element_value_2 = coroutine_heap->var_env;
coroutine->m_frame->m_frame.f_lineno = 445;
tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain__tools_for, tmp_args_element_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 445;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}
assert(coroutine_heap->var_tools == NULL);
coroutine_heap->var_tools = tmp_assign_source_14;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_19;
tmp_called_value_4 = module_var_accessor_anthropic$lib$environments$_worker$_run_session_tools(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__run_session_tools);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain__client);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(coroutine_heap->var_session_id);
tmp_kw_call_arg_value_1_1 = coroutine_heap->var_session_id;
CHECK_OBJECT(coroutine_heap->var_tools);
tmp_kw_call_dict_value_0_2 = coroutine_heap->var_tools;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__max_idle);
if (tmp_kw_call_dict_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);

coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_key);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 452;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__extra_headers);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);

coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 447;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_ad4fe1a68793ced93dbb832f944835cd_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_20 = coroutine_heap->tmp_with_1__source;
tmp_called_value_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_20, const_str_plain___aenter__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 447;
tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_21 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_17 = LOOKUP_SPECIAL(tstate, tmp_expression_value_21, const_str_plain___aexit__);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
coroutine->m_frame->m_frame.f_lineno = 447;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_expression_value_23 = coroutine_heap->tmp_with_1__enter;
tmp_expression_value_22 = ASYNC_AWAIT(tstate, tmp_expression_value_23, await_enter);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_22;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_23, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_18 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_with_1__enter;
    assert(old != NULL);
    coroutine_heap->tmp_with_1__enter = tmp_assign_source_18;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_19;
tmp_assign_source_19 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
tmp_assign_source_20 = coroutine_heap->tmp_with_1__enter;
assert(coroutine_heap->var_calls == NULL);
Py_INCREF(tmp_assign_source_20);
coroutine_heap->var_calls = tmp_assign_source_20;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_24;
PyObject *tmp_value_value_1;
CHECK_OBJECT(coroutine_heap->var_calls);
tmp_value_value_1 = coroutine_heap->var_calls;
tmp_expression_value_24 = ASYNC_MAKE_ITERATOR(tstate, tmp_value_value_1);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 4;
coroutine->m_yield_from = tmp_expression_value_24;
coroutine->m_awaiting = true;
return NULL;

yield_return_4:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_10;
}
tmp_assign_source_21 = yield_return_value;
assert(coroutine_heap->tmp_for_loop_1__for_iterator == NULL);
coroutine_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_21;
}
// Tried code:
loop_start_1:;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_25;
PyObject *tmp_value_value_2;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
tmp_value_value_2 = coroutine_heap->tmp_for_loop_1__for_iterator;
tmp_expression_value_25 = ASYNC_ITERATOR_NEXT(tstate, tmp_value_value_2);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_12;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 5;
coroutine->m_yield_from = tmp_expression_value_25;
coroutine->m_awaiting = true;
return NULL;

yield_return_5:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_value_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_12;
}
tmp_assign_source_22 = yield_return_value;
{
    PyObject *old = coroutine_heap->tmp_for_loop_1__iter_value;
    coroutine_heap->tmp_for_loop_1__iter_value = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
goto try_end_1;
// Exception handler code:
try_except_handler_12:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = coroutine_heap->exception_keeper_name_1.exception_value;
tmp_cmp_expr_right_1 = PyExc_StopAsyncIteration;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_1);
goto loop_end_1;
goto branch_end_1;
branch_no_1:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_11;
branch_end_1:;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_23 = coroutine_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = coroutine_heap->var__;
    coroutine_heap->var__ = tmp_assign_source_23;
    Py_INCREF(coroutine_heap->var__);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_11;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_11:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_10;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->tmp_for_loop_1__iter_value);
coroutine_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(coroutine_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(coroutine_heap->tmp_for_loop_1__for_iterator);
coroutine_heap->tmp_for_loop_1__for_iterator = NULL;
goto try_end_3;
// Exception handler code:
try_except_handler_10:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_24;
tmp_assign_source_24 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_24;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
coroutine->m_frame->m_frame.f_lineno = 447;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 447;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_expression_value_27 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_13;
}
tmp_expression_value_26 = ASYNC_AWAIT(tstate, tmp_expression_value_27, await_exit);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_13;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 6;
coroutine->m_yield_from = tmp_expression_value_26;
coroutine->m_awaiting = true;
return NULL;

yield_return_6:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_13;
}
tmp_operand_value_1 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_13;
}
tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 447;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_13;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 447;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_13;
branch_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_13:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_9;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_called_value_7;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 447;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 447;
tmp_expression_value_29 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_5);

coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_28 = ASYNC_AWAIT(tstate, tmp_expression_value_29, await_exit);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_expression_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_5);

coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 7;
coroutine->m_yield_from = tmp_expression_value_28;
coroutine->m_awaiting = true;
return NULL;

yield_return_7:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_5);

coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_4:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto try_except_handler_8;
// End of try:
try_end_5:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_called_value_8;
PyObject *tmp_await_result_3;
coroutine->m_frame->m_frame.f_lineno = 447;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_8 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 447;
tmp_expression_value_31 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_30 = ASYNC_AWAIT(tstate, tmp_expression_value_31, await_exit);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_31, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 8;
coroutine->m_yield_from = tmp_expression_value_30;
coroutine->m_awaiting = true;
return NULL;

yield_return_8:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_31, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_8;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
branch_no_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_7, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_7);
// Tried code:
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->var_stop);
tmp_called_instance_6 = coroutine_heap->var_stop;
coroutine->m_frame->m_frame.f_lineno = 458;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_set);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 458;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_expression_value_32;
PyObject *tmp_call_result_3;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_tg));
tmp_expression_value_32 = Nuitka_Cell_GET(coroutine_heap->var_tg);
tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_cancel_scope);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_14;
}
coroutine->m_frame->m_frame.f_lineno = 459;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts.const_str_plain_cancel);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 446;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_14:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

goto try_except_handler_6;
// End of try:
// End of try:
try_end_7:;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_4;
CHECK_OBJECT(coroutine_heap->var_stop);
tmp_called_instance_8 = coroutine_heap->var_stop;
coroutine->m_frame->m_frame.f_lineno = 458;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts.const_str_plain_set);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 458;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_instance_9;
PyObject *tmp_expression_value_33;
PyObject *tmp_call_result_5;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_tg));
tmp_expression_value_33 = Nuitka_Cell_GET(coroutine_heap->var_tg);
tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_cancel_scope);
if (tmp_called_instance_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}
coroutine->m_frame->m_frame.f_lineno = 459;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts.const_str_plain_cancel);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 459;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto try_end_8;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 4.
coroutine_heap->exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_9);
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_34;
tmp_expression_value_34 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_expression_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_CancelScope);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_assign_source_25 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_shield_tuple);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_35 = coroutine_heap->tmp_with_2__source;
tmp_called_value_10 = LOOKUP_SPECIAL(tstate, tmp_expression_value_35, const_str_plain___enter__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_assign_source_26 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_36 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_27 = LOOKUP_SPECIAL(tstate, tmp_expression_value_36, const_str_plain___exit__);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_27;
}
{
nuitka_bool tmp_assign_source_28;
tmp_assign_source_28 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_28;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
PyObject *tmp_called_instance_10;
PyObject *tmp_await_result_4;
coroutine->m_frame->m_frame.f_lineno = 462;
CHECK_OBJECT(coroutine_heap->var_env);
tmp_called_instance_10 = coroutine_heap->var_env;
coroutine->m_frame->m_frame.f_lineno = 462;
tmp_expression_value_38 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_10,
    const_str_plain___aexit__,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_none_none_none_tuple, 0)
);

if (tmp_expression_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_18;
}
tmp_expression_value_37 = ASYNC_AWAIT(tstate, tmp_expression_value_38, await_normal);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_expression_value_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_18;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_38, sizeof(PyObject *), &tmp_called_instance_10, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 9;
coroutine->m_yield_from = tmp_expression_value_37;
coroutine->m_awaiting = true;
return NULL;

yield_return_9:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_38, sizeof(PyObject *), &tmp_called_instance_10, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_18;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
goto try_end_9;
// Exception handler code:
try_except_handler_18:;
coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_10 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 3.
coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_10);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_10, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_10 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_10);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_10, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_10);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_assign_source_29;
tmp_assign_source_29 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_29;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_11 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_6 = EXC_TYPE(tstate);
tmp_args_element_value_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_7); 
tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_8 == NULL) {
    tmp_args_element_value_8 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 461;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_19;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_19;
}
tmp_condition_result_7 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 461;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_19;
branch_no_7:;
goto branch_end_6;
branch_no_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 461;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_19;
branch_end_6:;
goto try_end_10;
// Exception handler code:
try_except_handler_19:;
coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_11 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_11;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

goto try_except_handler_17;
// End of try:
try_end_10:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

goto try_end_9;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_9:;
goto try_end_11;
// Exception handler code:
try_except_handler_17:;
coroutine_heap->exception_keeper_lineno_12 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_12 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_6;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_12 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_12);

coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_8:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_12;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_12;

goto try_except_handler_16;
// End of try:
try_end_11:;
{
bool tmp_condition_result_9;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_9 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_7;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_13 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_16;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_9:;
goto try_end_12;
// Exception handler code:
try_except_handler_16:;
coroutine_heap->exception_keeper_lineno_13 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_13 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_13;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_13;

goto try_except_handler_15;
// End of try:
try_end_12:;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
Py_DECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
Py_DECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
Py_DECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 443;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_15:;
coroutine_heap->exception_keeper_lineno_14 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_14 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_4);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_14;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_14;

goto try_except_handler_5;
// End of try:
// End of try:
try_end_8:;
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_39;
tmp_expression_value_39 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_CancelScope);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_assign_source_30 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_shield_tuple);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
assert(coroutine_heap->tmp_with_2__source == NULL);
coroutine_heap->tmp_with_2__source = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_40 = coroutine_heap->tmp_with_2__source;
tmp_called_value_15 = LOOKUP_SPECIAL(tstate, tmp_expression_value_40, const_str_plain___enter__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_assign_source_31 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
assert(coroutine_heap->tmp_with_2__enter == NULL);
coroutine_heap->tmp_with_2__enter = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
tmp_expression_value_41 = coroutine_heap->tmp_with_2__source;
tmp_assign_source_32 = LOOKUP_SPECIAL(tstate, tmp_expression_value_41, const_str_plain___exit__);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
assert(coroutine_heap->tmp_with_2__exit == NULL);
coroutine_heap->tmp_with_2__exit = tmp_assign_source_32;
}
{
nuitka_bool tmp_assign_source_33;
tmp_assign_source_33 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_33;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_called_instance_11;
PyObject *tmp_await_result_5;
coroutine->m_frame->m_frame.f_lineno = 462;
CHECK_OBJECT(coroutine_heap->var_env);
tmp_called_instance_11 = coroutine_heap->var_env;
coroutine->m_frame->m_frame.f_lineno = 462;
tmp_expression_value_43 = CALL_METHOD_WITH_ARGS3(
    tstate,
    tmp_called_instance_11,
    const_str_plain___aexit__,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_none_none_none_tuple, 0)
);

if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_22;
}
tmp_expression_value_42 = ASYNC_AWAIT(tstate, tmp_expression_value_43, await_normal);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_22;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_43, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 10;
coroutine->m_yield_from = tmp_expression_value_42;
coroutine->m_awaiting = true;
return NULL;

yield_return_10:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_43, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 462;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_22;
}
tmp_await_result_5 = yield_return_value;
CHECK_OBJECT(tmp_await_result_5);
Py_DECREF(tmp_await_result_5);
}
goto try_end_13;
// Exception handler code:
try_except_handler_22:;
coroutine_heap->exception_keeper_lineno_15 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_15 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 3.
coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_15);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_15);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_15, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_15 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_15);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_15, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_15);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_10 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_assign_source_34;
tmp_assign_source_34 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_2__indicator = tmp_assign_source_34;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_16 = coroutine_heap->tmp_with_2__exit;
tmp_args_element_value_9 = EXC_TYPE(tstate);
tmp_args_element_value_10 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_10); 
tmp_args_element_value_11 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_11 == NULL) {
    tmp_args_element_value_11 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 461;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_23;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_23;
}
tmp_condition_result_11 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 461;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_23;
branch_no_11:;
goto branch_end_10;
branch_no_10:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 461;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_23;
branch_end_10:;
goto try_end_14;
// Exception handler code:
try_except_handler_23:;
coroutine_heap->exception_keeper_lineno_16 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_16 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_16;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_16;

goto try_except_handler_21;
// End of try:
try_end_14:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

goto try_end_13;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_13:;
goto try_end_15;
// Exception handler code:
try_except_handler_21:;
coroutine_heap->exception_keeper_lineno_17 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_17 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_9;
nuitka_bool tmp_cmp_expr_right_9;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_9 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_call_result_8;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_17 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_17, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_17);

coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_12:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_17;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_17;

goto try_except_handler_20;
// End of try:
try_end_15:;
{
bool tmp_condition_result_13;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(coroutine_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = coroutine_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_13 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_18;
PyObject *tmp_call_result_9;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
tmp_called_value_18 = coroutine_heap->tmp_with_2__exit;
coroutine->m_frame->m_frame.f_lineno = 461;
tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_18, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 461;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_20;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_13:;
goto try_end_16;
// Exception handler code:
try_except_handler_20:;
coroutine_heap->exception_keeper_lineno_18 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_18 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_18;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_18;

goto try_except_handler_5;
// End of try:
try_end_16:;
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
CHECK_OBJECT(coroutine_heap->tmp_with_2__source);
Py_DECREF(coroutine_heap->tmp_with_2__source);
coroutine_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_2__enter);
Py_DECREF(coroutine_heap->tmp_with_2__enter);
coroutine_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_2__exit);
Py_DECREF(coroutine_heap->tmp_with_2__exit);
coroutine_heap->tmp_with_2__exit = NULL;
goto try_end_17;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_19 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_19 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 5.
coroutine_heap->exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_19);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_19);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_19, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_19 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_19);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_19, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_19);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
tmp_cmp_expr_right_11 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_14 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
nuitka_bool tmp_assign_source_35;
tmp_assign_source_35 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_3__indicator = tmp_assign_source_35;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
coroutine->m_frame->m_frame.f_lineno = 397;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_19 = coroutine_heap->tmp_with_3__exit;
tmp_args_element_value_12 = EXC_TYPE(tstate);
tmp_args_element_value_13 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_13); 
tmp_args_element_value_14 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_14 == NULL) {
    tmp_args_element_value_14 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 397;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_expression_value_45 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
}

if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_24;
}
tmp_expression_value_44 = ASYNC_AWAIT(tstate, tmp_expression_value_45, await_exit);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_24;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_15, sizeof(bool), &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 11;
coroutine->m_yield_from = tmp_expression_value_44;
coroutine->m_awaiting = true;
return NULL;

yield_return_11:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_15, sizeof(bool), &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_value_19, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_24;
}
tmp_operand_value_4 = yield_return_value;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_24;
}
tmp_condition_result_15 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 397;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_24;
branch_no_15:;
goto branch_end_14;
branch_no_14:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 397;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_24;
branch_end_14:;
goto try_end_18;
// Exception handler code:
try_except_handler_24:;
coroutine_heap->exception_keeper_lineno_20 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_20 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_5);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_20;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_20;

goto try_except_handler_4;
// End of try:
try_end_18:;
// Restore previous exception id 5.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_5);

goto try_end_17;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_17:;
goto try_end_19;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_21 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_21 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_16;
nuitka_bool tmp_cmp_expr_left_12;
nuitka_bool tmp_cmp_expr_right_12;
assert(coroutine_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_12 = coroutine_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
tmp_condition_result_16 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_expression_value_46;
PyObject *tmp_expression_value_47;
PyObject *tmp_called_value_20;
PyObject *tmp_await_result_6;
coroutine->m_frame->m_frame.f_lineno = 397;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_20 = coroutine_heap->tmp_with_3__exit;
coroutine->m_frame->m_frame.f_lineno = 397;
tmp_expression_value_47 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_20, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_21);

coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_46 = ASYNC_AWAIT(tstate, tmp_expression_value_47, await_exit);
CHECK_OBJECT(tmp_expression_value_47);
Py_DECREF(tmp_expression_value_47);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_21);

coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_47, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 12;
coroutine->m_yield_from = tmp_expression_value_46;
coroutine->m_awaiting = true;
return NULL;

yield_return_12:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_47, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_21);

coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
tmp_await_result_6 = yield_return_value;
CHECK_OBJECT(tmp_await_result_6);
Py_DECREF(tmp_await_result_6);
}
branch_no_16:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_21;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_21;

goto try_except_handler_3;
// End of try:
try_end_19:;
{
bool tmp_condition_result_17;
nuitka_bool tmp_cmp_expr_left_13;
nuitka_bool tmp_cmp_expr_right_13;
assert(coroutine_heap->tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_13 = coroutine_heap->tmp_with_3__indicator;
tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
tmp_condition_result_17 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_called_value_21;
PyObject *tmp_await_result_7;
coroutine->m_frame->m_frame.f_lineno = 397;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
tmp_called_value_21 = coroutine_heap->tmp_with_3__exit;
coroutine->m_frame->m_frame.f_lineno = 397;
tmp_expression_value_49 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_21, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_48 = ASYNC_AWAIT(tstate, tmp_expression_value_49, await_exit);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_49, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 13;
coroutine->m_yield_from = tmp_expression_value_48;
coroutine->m_awaiting = true;
return NULL;

yield_return_13:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_49, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 397;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_3;
}
tmp_await_result_7 = yield_return_value;
CHECK_OBJECT(tmp_await_result_7);
Py_DECREF(tmp_await_result_7);
}
branch_no_17:;
goto try_end_20;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_22 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_22 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_3__source);
coroutine_heap->tmp_with_3__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_3__enter);
coroutine_heap->tmp_with_3__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_3__exit);
coroutine_heap->tmp_with_3__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_22;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_22;

goto try_except_handler_2;
// End of try:
try_end_20:;
goto try_end_21;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_23 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_23 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 8.
coroutine_heap->exception_preserved_8 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_23);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_23);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_23, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_23 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_23);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_23, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_23);
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_50;
tmp_expression_value_50 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_expression_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_CancelScope);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_assign_source_36 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_shield_tuple);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
assert(coroutine_heap->tmp_with_4__source == NULL);
coroutine_heap->tmp_with_4__source = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_51 = coroutine_heap->tmp_with_4__source;
tmp_called_value_23 = LOOKUP_SPECIAL(tstate, tmp_expression_value_51, const_str_plain___enter__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_assign_source_37 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_23);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
assert(coroutine_heap->tmp_with_4__enter == NULL);
coroutine_heap->tmp_with_4__enter = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_52 = coroutine_heap->tmp_with_4__source;
tmp_assign_source_38 = LOOKUP_SPECIAL(tstate, tmp_expression_value_52, const_str_plain___exit__);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
assert(coroutine_heap->tmp_with_4__exit == NULL);
coroutine_heap->tmp_with_4__exit = tmp_assign_source_38;
}
{
nuitka_bool tmp_assign_source_39;
tmp_assign_source_39 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_39;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_55;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_expression_value_56;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_expression_value_57;
PyObject *tmp_kw_call_dict_value_1_3;
PyObject *tmp_kw_call_dict_value_2_2;
PyObject *tmp_expression_value_58;
PyObject *tmp_await_result_8;
coroutine->m_frame->m_frame.f_lineno = 470;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_work_res));
tmp_expression_value_55 = Nuitka_Cell_GET(coroutine_heap->var_work_res);
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_stop);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_24);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}

tmp_expression_value_56 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_kw_call_arg_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_24);

coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_kw_call_arg_value_0_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 472;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}

tmp_expression_value_57 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_environment_id);
if (tmp_kw_call_dict_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_kw_call_arg_value_0_3);

coroutine_heap->exception_lineno = 472;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}
tmp_kw_call_dict_value_1_3 = Py_True;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 474;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}

tmp_expression_value_58 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_dict_value_2_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain__extra_headers);
if (tmp_kw_call_dict_value_2_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_24);
Py_DECREF(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);

coroutine_heap->exception_lineno = 474;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}
coroutine->m_frame->m_frame.f_lineno = 470;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_2};
    tmp_expression_value_54 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_24, args, kw_values, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
}

CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_kw_call_arg_value_0_3);
Py_DECREF(tmp_kw_call_arg_value_0_3);
CHECK_OBJECT(tmp_kw_call_dict_value_0_3);
Py_DECREF(tmp_kw_call_dict_value_0_3);
CHECK_OBJECT(tmp_kw_call_dict_value_2_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
if (tmp_expression_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}
tmp_expression_value_53 = ASYNC_AWAIT(tstate, tmp_expression_value_54, await_normal);
CHECK_OBJECT(tmp_expression_value_54);
Py_DECREF(tmp_expression_value_54);
if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_54, sizeof(PyObject *), &tmp_called_value_24, sizeof(PyObject *), &tmp_expression_value_55, sizeof(PyObject *), &tmp_kw_call_arg_value_0_3, sizeof(PyObject *), &tmp_expression_value_56, sizeof(PyObject *), &tmp_kw_call_dict_value_0_3, sizeof(PyObject *), &tmp_expression_value_57, sizeof(PyObject *), &tmp_kw_call_dict_value_1_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_2, sizeof(PyObject *), &tmp_expression_value_58, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 14;
coroutine->m_yield_from = tmp_expression_value_53;
coroutine->m_awaiting = true;
return NULL;

yield_return_14:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_54, sizeof(PyObject *), &tmp_called_value_24, sizeof(PyObject *), &tmp_expression_value_55, sizeof(PyObject *), &tmp_kw_call_arg_value_0_3, sizeof(PyObject *), &tmp_expression_value_56, sizeof(PyObject *), &tmp_kw_call_dict_value_0_3, sizeof(PyObject *), &tmp_expression_value_57, sizeof(PyObject *), &tmp_kw_call_dict_value_1_3, sizeof(PyObject *), &tmp_kw_call_dict_value_2_2, sizeof(PyObject *), &tmp_expression_value_58, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_29;
}
tmp_await_result_8 = yield_return_value;
CHECK_OBJECT(tmp_await_result_8);
Py_DECREF(tmp_await_result_8);
}
goto try_end_22;
// Exception handler code:
try_except_handler_29:;
coroutine_heap->exception_keeper_lineno_24 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_24 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 6.
coroutine_heap->exception_preserved_6 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_24);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_24);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_24, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_24 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_24);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_24, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_24);
// Tried code:
{
bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
tmp_cmp_expr_left_14 = EXC_TYPE(tstate);
tmp_cmp_expr_right_14 = PyExc_Exception;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_18 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_40); 
assert(coroutine_heap->var_e == NULL);
Py_INCREF(tmp_assign_source_40);
coroutine_heap->var_e = tmp_assign_source_40;
}
// Tried code:
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_25 = module_var_accessor_anthropic$lib$environments$_worker$_is_status(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 477;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_15 = coroutine_heap->var_e;
tmp_args_element_value_16 = mod_consts.const_int_pos_409;
coroutine->m_frame->m_frame.f_lineno = 477;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 477;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 477;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}
tmp_condition_result_19 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_59;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_60;
PyObject *tmp_args_element_value_19;
tmp_expression_value_59 = module_var_accessor_anthropic$lib$environments$_worker$log(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_error);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}
tmp_args_element_value_17 = mod_consts.const_str_digest_8e99db8f687e5e04037877cabe8ddd5e;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_26);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}

tmp_expression_value_60 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_id);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_26);

coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_19 = coroutine_heap->var_e;
coroutine->m_frame->m_frame.f_lineno = 478;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_31;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_19:;
goto try_end_23;
// Exception handler code:
try_except_handler_31:;
coroutine_heap->exception_keeper_lineno_25 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_25 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_25;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_25;

goto try_except_handler_30;
// End of try:
try_end_23:;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

goto branch_end_18;
branch_no_18:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 469;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_30;
branch_end_18:;
goto try_end_24;
// Exception handler code:
try_except_handler_30:;
coroutine_heap->exception_keeper_lineno_26 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_26 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 6.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_6);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_26;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_26;

goto try_except_handler_28;
// End of try:
try_end_24:;
// Restore previous exception id 6.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_6);

goto try_end_22;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_22:;
goto try_end_25;
// Exception handler code:
try_except_handler_28:;
coroutine_heap->exception_keeper_lineno_27 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_27 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 7.
coroutine_heap->exception_preserved_7 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_27);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_27);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_27, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_27 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_27);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_27, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_27);
// Tried code:
{
bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
tmp_cmp_expr_left_15 = EXC_TYPE(tstate);
tmp_cmp_expr_right_15 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_20 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
nuitka_bool tmp_assign_source_41;
tmp_assign_source_41 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_41;
}
{
bool tmp_condition_result_21;
PyObject *tmp_operand_value_6;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_27 = coroutine_heap->tmp_with_4__exit;
tmp_args_element_value_20 = EXC_TYPE(tstate);
tmp_args_element_value_21 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_21); 
tmp_args_element_value_22 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_22 == NULL) {
    tmp_args_element_value_22 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 468;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_27, call_args);
}

if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_32;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_32;
}
tmp_condition_result_21 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 468;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_32;
branch_no_21:;
goto branch_end_20;
branch_no_20:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 468;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_32;
branch_end_20:;
goto try_end_26;
// Exception handler code:
try_except_handler_32:;
coroutine_heap->exception_keeper_lineno_28 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_28 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 7.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_7);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_28;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_28;

goto try_except_handler_27;
// End of try:
try_end_26:;
// Restore previous exception id 7.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_7);

goto try_end_25;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_25:;
goto try_end_27;
// Exception handler code:
try_except_handler_27:;
coroutine_heap->exception_keeper_lineno_29 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_29 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_22;
nuitka_bool tmp_cmp_expr_left_16;
nuitka_bool tmp_cmp_expr_right_16;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_16 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_16 = NUITKA_BOOL_TRUE;
tmp_condition_result_22 = (tmp_cmp_expr_left_16 == tmp_cmp_expr_right_16) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_called_value_28;
PyObject *tmp_call_result_11;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_28 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_call_result_11 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_28, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_29);

coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_22:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_29;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_29;

goto try_except_handler_26;
// End of try:
try_end_27:;
{
bool tmp_condition_result_23;
nuitka_bool tmp_cmp_expr_left_17;
nuitka_bool tmp_cmp_expr_right_17;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_17 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
tmp_condition_result_23 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_called_value_29;
PyObject *tmp_call_result_12;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_29 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_call_result_12 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_29, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_26;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
branch_no_23:;
goto try_end_28;
// Exception handler code:
try_except_handler_26:;
coroutine_heap->exception_keeper_lineno_30 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_30 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_30;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_30;

goto try_except_handler_25;
// End of try:
try_end_28:;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
Py_DECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
Py_DECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
Py_DECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 395;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_25:;
coroutine_heap->exception_keeper_lineno_31 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_31 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 8.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_8);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_31;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_31;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_21:;
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
CHECK_OBJECT(coroutine_heap->tmp_with_3__source);
Py_DECREF(coroutine_heap->tmp_with_3__source);
coroutine_heap->tmp_with_3__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_3__enter);
Py_DECREF(coroutine_heap->tmp_with_3__enter);
coroutine_heap->tmp_with_3__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_3__exit);
Py_DECREF(coroutine_heap->tmp_with_3__exit);
coroutine_heap->tmp_with_3__exit = NULL;
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_61;
tmp_expression_value_61 = module_var_accessor_anthropic$lib$environments$_worker$anyio(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_anyio);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_CancelScope);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_assign_source_42 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_shield_tuple);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
assert(coroutine_heap->tmp_with_4__source == NULL);
coroutine_heap->tmp_with_4__source = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_31;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_62 = coroutine_heap->tmp_with_4__source;
tmp_called_value_31 = LOOKUP_SPECIAL(tstate, tmp_expression_value_62, const_str_plain___enter__);
if (tmp_called_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_assign_source_43 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_31);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
assert(coroutine_heap->tmp_with_4__enter == NULL);
coroutine_heap->tmp_with_4__enter = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_expression_value_63;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
tmp_expression_value_63 = coroutine_heap->tmp_with_4__source;
tmp_assign_source_44 = LOOKUP_SPECIAL(tstate, tmp_expression_value_63, const_str_plain___exit__);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
assert(coroutine_heap->tmp_with_4__exit == NULL);
coroutine_heap->tmp_with_4__exit = tmp_assign_source_44;
}
{
nuitka_bool tmp_assign_source_45;
tmp_assign_source_45 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_45;
}
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_64;
PyObject *tmp_expression_value_65;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_66;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_expression_value_67;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_expression_value_68;
PyObject *tmp_kw_call_dict_value_1_4;
PyObject *tmp_kw_call_dict_value_2_3;
PyObject *tmp_expression_value_69;
PyObject *tmp_await_result_9;
coroutine->m_frame->m_frame.f_lineno = 470;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_work_res));
tmp_expression_value_66 = Nuitka_Cell_GET(coroutine_heap->var_work_res);
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_stop);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_32);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}

tmp_expression_value_67 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_kw_call_arg_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_id);
if (tmp_kw_call_arg_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_32);

coroutine_heap->exception_lineno = 471;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_32);
Py_DECREF(tmp_kw_call_arg_value_0_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 472;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}

tmp_expression_value_68 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts.const_str_plain_environment_id);
if (tmp_kw_call_dict_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_32);
Py_DECREF(tmp_kw_call_arg_value_0_4);

coroutine_heap->exception_lineno = 472;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}
tmp_kw_call_dict_value_1_4 = Py_True;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_32);
Py_DECREF(tmp_kw_call_arg_value_0_4);
Py_DECREF(tmp_kw_call_dict_value_0_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 474;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}

tmp_expression_value_69 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_dict_value_2_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts.const_str_plain__extra_headers);
if (tmp_kw_call_dict_value_2_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_32);
Py_DECREF(tmp_kw_call_arg_value_0_4);
Py_DECREF(tmp_kw_call_dict_value_0_4);

coroutine_heap->exception_lineno = 474;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}
coroutine->m_frame->m_frame.f_lineno = 470;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_3};
    tmp_expression_value_65 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_32, args, kw_values, mod_consts.const_tuple_800af3ec308551da1cd346072514538c_tuple);
}

CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_kw_call_arg_value_0_4);
Py_DECREF(tmp_kw_call_arg_value_0_4);
CHECK_OBJECT(tmp_kw_call_dict_value_0_4);
Py_DECREF(tmp_kw_call_dict_value_0_4);
CHECK_OBJECT(tmp_kw_call_dict_value_2_3);
Py_DECREF(tmp_kw_call_dict_value_2_3);
if (tmp_expression_value_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}
tmp_expression_value_64 = ASYNC_AWAIT(tstate, tmp_expression_value_65, await_normal);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
if (tmp_expression_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_65, sizeof(PyObject *), &tmp_called_value_32, sizeof(PyObject *), &tmp_expression_value_66, sizeof(PyObject *), &tmp_kw_call_arg_value_0_4, sizeof(PyObject *), &tmp_expression_value_67, sizeof(PyObject *), &tmp_kw_call_dict_value_0_4, sizeof(PyObject *), &tmp_expression_value_68, sizeof(PyObject *), &tmp_kw_call_dict_value_1_4, sizeof(PyObject *), &tmp_kw_call_dict_value_2_3, sizeof(PyObject *), &tmp_expression_value_69, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 15;
coroutine->m_yield_from = tmp_expression_value_64;
coroutine->m_awaiting = true;
return NULL;

yield_return_15:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_65, sizeof(PyObject *), &tmp_called_value_32, sizeof(PyObject *), &tmp_expression_value_66, sizeof(PyObject *), &tmp_kw_call_arg_value_0_4, sizeof(PyObject *), &tmp_expression_value_67, sizeof(PyObject *), &tmp_kw_call_dict_value_0_4, sizeof(PyObject *), &tmp_expression_value_68, sizeof(PyObject *), &tmp_kw_call_dict_value_1_4, sizeof(PyObject *), &tmp_kw_call_dict_value_2_3, sizeof(PyObject *), &tmp_expression_value_69, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 470;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_36;
}
tmp_await_result_9 = yield_return_value;
CHECK_OBJECT(tmp_await_result_9);
Py_DECREF(tmp_await_result_9);
}
goto try_end_29;
// Exception handler code:
try_except_handler_36:;
coroutine_heap->exception_keeper_lineno_32 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_32 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 6.
coroutine_heap->exception_preserved_6 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_32);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_32);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_32, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_32 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_32);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_32, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_32);
// Tried code:
{
bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
tmp_cmp_expr_left_18 = EXC_TYPE(tstate);
tmp_cmp_expr_right_18 = PyExc_Exception;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_24 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_24 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_46); 
assert(coroutine_heap->var_e == NULL);
Py_INCREF(tmp_assign_source_46);
coroutine_heap->var_e = tmp_assign_source_46;
}
// Tried code:
{
bool tmp_condition_result_25;
PyObject *tmp_operand_value_7;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
tmp_called_value_33 = module_var_accessor_anthropic$lib$environments$_worker$_is_status(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__is_status);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 477;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_23 = coroutine_heap->var_e;
tmp_args_element_value_24 = mod_consts.const_int_pos_409;
coroutine->m_frame->m_frame.f_lineno = 477;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
}

if (tmp_operand_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 477;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
CHECK_OBJECT(tmp_operand_value_7);
Py_DECREF(tmp_operand_value_7);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 477;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}
tmp_condition_result_25 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_70;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_expression_value_71;
PyObject *tmp_args_element_value_27;
tmp_expression_value_70 = module_var_accessor_anthropic$lib$environments$_worker$log(tstate);
if (unlikely(tmp_expression_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_error);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}
tmp_args_element_value_25 = mod_consts.const_str_digest_8e99db8f687e5e04037877cabe8ddd5e;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_34);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_item);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}

tmp_expression_value_71 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_args_element_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_id);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_34);

coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}
CHECK_OBJECT(coroutine_heap->var_e);
tmp_args_element_value_27 = coroutine_heap->var_e;
coroutine->m_frame->m_frame.f_lineno = 478;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_34, call_args);
}

CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 478;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_38;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
branch_no_25:;
goto try_end_30;
// Exception handler code:
try_except_handler_38:;
coroutine_heap->exception_keeper_lineno_33 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_33 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_33;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_33;

goto try_except_handler_37;
// End of try:
try_end_30:;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

goto branch_end_24;
branch_no_24:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 469;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_37;
branch_end_24:;
goto try_end_31;
// Exception handler code:
try_except_handler_37:;
coroutine_heap->exception_keeper_lineno_34 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_34 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 6.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_6);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_34;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_34;

goto try_except_handler_35;
// End of try:
try_end_31:;
// Restore previous exception id 6.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_6);

goto try_end_29;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_29:;
goto try_end_32;
// Exception handler code:
try_except_handler_35:;
coroutine_heap->exception_keeper_lineno_35 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_35 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 7.
coroutine_heap->exception_preserved_7 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_35);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_35);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_35, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_35 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_35);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_35, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_35);
// Tried code:
{
bool tmp_condition_result_26;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
tmp_cmp_expr_left_19 = EXC_TYPE(tstate);
tmp_cmp_expr_right_19 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_26 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
nuitka_bool tmp_assign_source_47;
tmp_assign_source_47 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_4__indicator = tmp_assign_source_47;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_8;
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_35 = coroutine_heap->tmp_with_4__exit;
tmp_args_element_value_28 = EXC_TYPE(tstate);
tmp_args_element_value_29 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_29); 
tmp_args_element_value_30 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_30 == NULL) {
    tmp_args_element_value_30 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 468;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_operand_value_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_35, call_args);
}

if (tmp_operand_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_39;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
CHECK_OBJECT(tmp_operand_value_8);
Py_DECREF(tmp_operand_value_8);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_39;
}
tmp_condition_result_27 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 468;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_39;
branch_no_27:;
goto branch_end_26;
branch_no_26:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 468;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoococooooooo";
goto try_except_handler_39;
branch_end_26:;
goto try_end_33;
// Exception handler code:
try_except_handler_39:;
coroutine_heap->exception_keeper_lineno_36 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_36 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 7.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_7);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_36;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_36;

goto try_except_handler_34;
// End of try:
try_end_33:;
// Restore previous exception id 7.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_7);

goto try_end_32;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_32:;
goto try_end_34;
// Exception handler code:
try_except_handler_34:;
coroutine_heap->exception_keeper_lineno_37 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_37 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_28;
nuitka_bool tmp_cmp_expr_left_20;
nuitka_bool tmp_cmp_expr_right_20;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_20 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_20 = NUITKA_BOOL_TRUE;
tmp_condition_result_28 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
if (tmp_condition_result_28 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_called_value_36;
PyObject *tmp_call_result_14;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_36 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_call_result_14 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_36, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_37);

coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
branch_no_28:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_37;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_37;

goto try_except_handler_33;
// End of try:
try_end_34:;
{
bool tmp_condition_result_29;
nuitka_bool tmp_cmp_expr_left_21;
nuitka_bool tmp_cmp_expr_right_21;
assert(coroutine_heap->tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_21 = coroutine_heap->tmp_with_4__indicator;
tmp_cmp_expr_right_21 = NUITKA_BOOL_TRUE;
tmp_condition_result_29 = (tmp_cmp_expr_left_21 == tmp_cmp_expr_right_21) ? true : false;
if (tmp_condition_result_29 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_called_value_37;
PyObject *tmp_call_result_15;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
tmp_called_value_37 = coroutine_heap->tmp_with_4__exit;
coroutine->m_frame->m_frame.f_lineno = 468;
tmp_call_result_15 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_37, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 468;
coroutine_heap->type_description_1 = "cccoococooooooo";
    goto try_except_handler_33;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
branch_no_29:;
goto try_end_35;
// Exception handler code:
try_except_handler_33:;
coroutine_heap->exception_keeper_lineno_38 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_38 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_38;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_38;

goto frame_exception_exit_1;
// End of try:
try_end_35:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine_heap->var_AgentToolContext,
    coroutine_heap->var_worker_client,
    coroutine_heap->var_work_res,
    coroutine_heap->var_session_id,
    coroutine_heap->var_tg,
    coroutine_heap->var_stop,
    coroutine_heap->var__heartbeat,
    coroutine_heap->var_env,
    coroutine_heap->var_tools,
    coroutine_heap->var_calls,
    coroutine_heap->var__,
    coroutine_heap->var_e
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
CHECK_OBJECT(coroutine_heap->tmp_with_4__source);
Py_DECREF(coroutine_heap->tmp_with_4__source);
coroutine_heap->tmp_with_4__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_4__enter);
Py_DECREF(coroutine_heap->tmp_with_4__enter);
coroutine_heap->tmp_with_4__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_4__exit);
Py_DECREF(coroutine_heap->tmp_with_4__exit);
coroutine_heap->tmp_with_4__exit = NULL;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_AgentToolContext);
CHECK_OBJECT(coroutine_heap->var_AgentToolContext);
Py_DECREF(coroutine_heap->var_AgentToolContext);
coroutine_heap->var_AgentToolContext = NULL;
CHECK_OBJECT(coroutine_heap->var_worker_client);
CHECK_OBJECT(coroutine_heap->var_worker_client);
Py_DECREF(coroutine_heap->var_worker_client);
coroutine_heap->var_worker_client = NULL;
CHECK_OBJECT(coroutine_heap->var_work_res);
CHECK_OBJECT(coroutine_heap->var_work_res);
Py_DECREF(coroutine_heap->var_work_res);
coroutine_heap->var_work_res = NULL;
CHECK_OBJECT(coroutine_heap->var_session_id);
CHECK_OBJECT(coroutine_heap->var_session_id);
Py_DECREF(coroutine_heap->var_session_id);
coroutine_heap->var_session_id = NULL;
CHECK_OBJECT(coroutine_heap->var_tg);
CHECK_OBJECT(coroutine_heap->var_tg);
Py_DECREF(coroutine_heap->var_tg);
coroutine_heap->var_tg = NULL;
Py_XDECREF(coroutine_heap->var_stop);
coroutine_heap->var_stop = NULL;
Py_XDECREF(coroutine_heap->var__heartbeat);
coroutine_heap->var__heartbeat = NULL;
Py_XDECREF(coroutine_heap->var_env);
coroutine_heap->var_env = NULL;
Py_XDECREF(coroutine_heap->var_tools);
coroutine_heap->var_tools = NULL;
Py_XDECREF(coroutine_heap->var_calls);
coroutine_heap->var_calls = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_39 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_39 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_AgentToolContext);
coroutine_heap->var_AgentToolContext = NULL;
Py_XDECREF(coroutine_heap->var_worker_client);
coroutine_heap->var_worker_client = NULL;
CHECK_OBJECT(coroutine_heap->var_work_res);
CHECK_OBJECT(coroutine_heap->var_work_res);
Py_DECREF(coroutine_heap->var_work_res);
coroutine_heap->var_work_res = NULL;
Py_XDECREF(coroutine_heap->var_session_id);
coroutine_heap->var_session_id = NULL;
CHECK_OBJECT(coroutine_heap->var_tg);
CHECK_OBJECT(coroutine_heap->var_tg);
Py_DECREF(coroutine_heap->var_tg);
coroutine_heap->var_tg = NULL;
Py_XDECREF(coroutine_heap->var_stop);
coroutine_heap->var_stop = NULL;
Py_XDECREF(coroutine_heap->var__heartbeat);
coroutine_heap->var__heartbeat = NULL;
Py_XDECREF(coroutine_heap->var_env);
coroutine_heap->var_env = NULL;
Py_XDECREF(coroutine_heap->var_tools);
coroutine_heap->var_tools = NULL;
Py_XDECREF(coroutine_heap->var_calls);
coroutine_heap->var_calls = NULL;
Py_XDECREF(coroutine_heap->var__);
coroutine_heap->var__ = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_39;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_39;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item_context,
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain__handle_item,
        mod_consts.const_str_digest_5825a58a39e5f0756a213cf1b7a34d18,
        code_objects_d5f280f907bc9c8686b026288cd572ac,
        closure,
        3,
#if 1
        sizeof(struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_work_id = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_environment_id = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_stop_ev = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[6];
tmp_closure_1[0] = par_environment_id;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[0];
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_stop_ev;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = self->m_closure[1];
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_work_id;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = self->m_closure[2];
Py_INCREF(tmp_closure_1[5]);
tmp_return_value = MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_work_id);
CHECK_OBJECT(par_work_id);
Py_DECREF(par_work_id);
par_work_id = NULL;
CHECK_OBJECT(par_environment_id);
CHECK_OBJECT(par_environment_id);
Py_DECREF(par_environment_id);
par_environment_id = NULL;
CHECK_OBJECT(par_stop_ev);
CHECK_OBJECT(par_stop_ev);
Py_DECREF(par_stop_ev);
par_stop_ev = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
PyObject *tmp_return_value;
};
#endif

static PyObject *anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat_locals *coroutine_heap = (struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_250587d1bfd806f9e59903c5ef2c4d21, module_anthropic$lib$environments$_worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 406;
tmp_called_value_1 = module_var_accessor_anthropic$lib$environments$_worker$_heartbeat_loop(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__heartbeat_loop);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_res);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 407;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 408;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_environment_id);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 409;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_stop_ev);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 410;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__extra_headers);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 411;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 406;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_fb3e3de984995720e9ae963eeb5efbaf_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 406;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tg);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_cancel_scope);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 414;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cancel);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 405;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccccc";
goto try_except_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tg);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[3]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_cancel_scope);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 414;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_cancel);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 414;
coroutine_heap->type_description_1 = "cccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[4],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
    coroutine->m_closure[5],
    coroutine->m_closure[1],
    coroutine->m_closure[3]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat_context,
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain__heartbeat,
        mod_consts.const_str_digest_f17807333edc398307e2a79c03a8cdd4,
        code_objects_250587d1bfd806f9e59903c5ef2c4d21,
        closure,
        6,
#if 1
        sizeof(struct anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat$$$coroutine__1__heartbeat_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop,
        mod_consts.const_str_plain__heartbeat_loop,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5620fe8836ea4cdb1613d8a6ad8424ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_digest_d403cfe61bd80b246ca172d87efeeb83,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__2__require(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__2__require,
        mod_consts.const_str_plain__require,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a75406a14b2ef3ca070dc1aa0fc6d2e2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_digest_f8e7a56d229853326a715349d9c2d26e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__3___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4b709038a9aad3dcefad61343de87949,
#endif
        code_objects_f268b557f2b668788bf147f446937aa6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__4__tools_for(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__4__tools_for,
        mod_consts.const_str_plain__tools_for,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d8c0d16d3d813b719e87b65c74cd9ea5,
#endif
        code_objects_cb606090b59428ae99698eac0de35b2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__5_run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__5_run,
        mod_consts.const_str_plain_run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_54e210d61974a494d63e2b97cde8ac8f,
#endif
        code_objects_3f7fd7e77fb8efd44d7c2c8425be904a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_digest_7e9d058cd84f469238989e766fd774eb,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__6_handle_item(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__6_handle_item,
        mod_consts.const_str_plain_handle_item,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2b7be114d63bf671e341d3232a6b9742,
#endif
        code_objects_608d27a3b309fe7815fa8a9466b46a9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_digest_de402023c88e18fbe71f97018e6e5e3a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__7__handle_item(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__7__handle_item,
        mod_consts.const_str_plain__handle_item,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5825a58a39e5f0756a213cf1b7a34d18,
#endif
        code_objects_d5f280f907bc9c8686b026288cd572ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        mod_consts.const_str_digest_52ab3fe27ebc50259551f0078655b45f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat,
        mod_consts.const_str_plain__heartbeat,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f17807333edc398307e2a79c03a8cdd4,
#endif
        code_objects_250587d1bfd806f9e59903c5ef2c4d21,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$environments$_worker,
        NULL,
        closure,
        3
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

static function_impl_code const function_table_anthropic$lib$environments$_worker[] = {
impl_anthropic$lib$environments$_worker$$$function__7__handle_item$$$coroutine__1__handle_item$$$function__1__heartbeat,
impl_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop,
impl_anthropic$lib$environments$_worker$$$function__2__require,
impl_anthropic$lib$environments$_worker$$$function__3___init__,
impl_anthropic$lib$environments$_worker$$$function__4__tools_for,
impl_anthropic$lib$environments$_worker$$$function__5_run,
impl_anthropic$lib$environments$_worker$$$function__6_handle_item,
impl_anthropic$lib$environments$_worker$$$function__7__handle_item,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$environments$_worker);
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
        module_anthropic$lib$environments$_worker,
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
        function_table_anthropic$lib$environments$_worker,
        sizeof(function_table_anthropic$lib$environments$_worker) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib.environments._worker";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$environments$_worker(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$environments$_worker");

    // Store the module for future use.
    module_anthropic$lib$environments$_worker = module;

    moduledict_anthropic$lib$environments$_worker = MODULE_DICT(module_anthropic$lib$environments$_worker);

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
        PRINT_STRING("anthropic$lib$environments$_worker: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$environments$_worker: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$environments$_worker: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.environments._worker" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$environments$_worker\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$environments$_worker,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$environments$_worker,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$environments$_worker,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$environments$_worker,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$environments$_worker,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$environments$_worker);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$environments$_worker);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_worker;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_6017b0d7374997a32a3d54b0856d0ca4;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$environments$_worker = MAKE_MODULE_FRAME(code_objects_47d01d7ae2c365a094f4b76ddc4d970d, module_anthropic$lib$environments$_worker);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_worker);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_worker) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$environments$_worker$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$environments$_worker$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 32;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 33;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_import_from_1__module = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_False;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_10);
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
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_11);
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
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_12);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_Sequence_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 35;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Sequence);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_anyio;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 37;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_anyio, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__retry;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_TRANSIENT_ERRORS_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 39;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_TRANSIENT_ERRORS,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TRANSIENT_ERRORS);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__poller;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_45ed5cd3cf3ccb2b9f9ddd8a3d392df1_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 40;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain__is_status,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__is_status);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_status, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_aiter_work,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_aiter_work);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_aiter_work, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain__is_fatal_4xx,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain__is_fatal_4xx);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__is_fatal_4xx, tmp_assign_source_19);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Headers_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 41;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Headers);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__scoped_client;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain__copy_client_with_bearer_auth_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_2;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 42;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain__copy_client_with_bearer_auth,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain__copy_client_with_bearer_auth);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_client_with_bearer_auth, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_a2dee852a2f51ede75ba9d6c1334039a;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_BetaSelfHostedWork_str_plain_BetaSessionWorkData_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 43;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_BetaSelfHostedWork,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_BetaSelfHostedWork);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSelfHostedWork, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_BetaSessionWorkData,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_BetaSessionWorkData);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaSessionWorkData, tmp_assign_source_24);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_digest_022244632048bd42f0e02c4d1cb6aa8d;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anthropic$lib$environments$_worker;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_e2de6402cbcbe5eecf543e519c11b1d4_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_2;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 44;
tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_12 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_DEFAULT_MAX_IDLE,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_IDLE, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_13 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain_BetaAnyRunnableTool,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BetaAnyRunnableTool);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_BetaAnyRunnableTool, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_anthropic$lib$environments$_worker,
        mod_consts.const_str_plain__run_session_tools,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain__run_session_tools);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__run_session_tools, tmp_assign_source_28);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_LIST2(tstate, mod_consts.const_str_plain_EnvironmentWorker,mod_consts.const_str_plain_EnvironmentWorkerTools);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$environments$_worker$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 63;
tmp_assign_source_30 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_01d070cbcbb173627df2c32bff921a9a_tuple, 0)
);

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = mod_consts.const_float_30_0;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_DEFAULT, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = mod_consts.const_float_90_0;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TTL_DEFAULT, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_str_plain_NO_HEARTBEAT;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_HEARTBEAT_SENTINEL, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_expression_value_1 = module_var_accessor_anthropic$lib$environments$_worker$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_anthropic$lib$environments$_worker$Sequence(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = module_var_accessor_anthropic$lib$environments$_worker$BetaAnyRunnableTool(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaAnyRunnableTool);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_2;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_expression_value_3 = module_var_accessor_anthropic$lib$environments$_worker$Callable(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_AgentToolContext);
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_2);
tmp_expression_value_4 = module_var_accessor_anthropic$lib$environments$_worker$Sequence(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto tuple_build_exception_2;
}
tmp_subscript_value_4 = module_var_accessor_anthropic$lib$environments$_worker$BetaAnyRunnableTool(tstate);
if (unlikely(tmp_subscript_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BetaAnyRunnableTool);
}

if (tmp_subscript_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_3);
goto tuple_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_EnvironmentWorkerTools, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_tuple_arg_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_anthropic$lib$environments$_worker$TRANSIENT_ERRORS(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TRANSIENT_ERRORS);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_tuple_type_TimeoutError_tuple;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 1, tmp_tuple_element_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_tuple_arg_1 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
}
if (tmp_tuple_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_assign_source_35 = PySequence_Tuple(tmp_tuple_arg_1);
CHECK_OBJECT(tmp_tuple_arg_1);
Py_DECREF(tmp_tuple_arg_1);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS, tmp_assign_source_35);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c;
tmp_ass_subscribed_1 = module_var_accessor_anthropic$lib$environments$_worker$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__HEARTBEAT_TRANSIENT_ERRORS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_8a4f87827e19ac07d540ff86fcec5e60);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_7b393be4aca4cbaaa8dd3e8d4a8d25b0);

tmp_assign_source_36 = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__1__heartbeat_loop(tstate, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__heartbeat_loop, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_549a04bde7a7d4db85c2e76aca143cf3);

tmp_assign_source_37 = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__2__require(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain__require, tmp_assign_source_37);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_39;
}
// Tried code:
{
PyObject *tmp_assign_source_40;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_01d070cbcbb173627df2c32bff921a9a;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_877a82028484e0ec27ff29dbaf8146ae;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_EnvironmentWorker;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_166;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2 = MAKE_CLASS_FRAME(tstate, code_objects_f7853ca735e4bcb8e3bc7b57060e919b, module_anthropic$lib$environments$_worker, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2);
assert(Py_REFCNT(frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_3;
tmp_dict_key_1 = mod_consts.const_str_plain_environment_id;
tmp_dict_value_1 = Py_None;
tmp_kw_defaults_2 = _PyDict_NewPresized( 8 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_environment_key;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_tools;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_workdir;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_unrestricted_paths;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_idle;
tmp_dict_value_1 = module_var_accessor_anthropic$lib$environments$_worker$DEFAULT_MAX_IDLE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_IDLE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_worker_id;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_extra_headers;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_87ce300d51b3acffab36fbe281e5f614);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__3___init__(tstate, tmp_kw_defaults_2, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_7;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e3fc18a71683feec5174acbb583aeaa8);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__4__tools_for(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, mod_consts.const_str_plain__tools_for, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__5_run(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, mod_consts.const_str_plain_run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_6;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_23d2dfea07eb30a1fc294c91bacc3ca6);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_e39228a6f095f5c30881027aaeb6c61f);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__6_handle_item(tstate, tmp_kw_defaults_3, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, mod_consts.const_str_plain_handle_item, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_dc809830807a7c93df6184f0b81dcea9);

tmp_dictset_value = MAKE_FUNCTION_anthropic$lib$environments$_worker$$$function__7__handle_item(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, mod_consts.const_str_plain__handle_item, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_8be3cfe5b4a856a8e3491d11cfbd2a7a_tuple;
tmp_result = DICT_SET_ITEM(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_4 = mod_consts.const_str_plain_EnvironmentWorker;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$lib$environments$_worker->m_frame.f_lineno = 166;
tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;

    goto try_except_handler_7;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_41;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_40 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_40);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166);
locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166);
locals_anthropic$lib$environments$_worker$$$class__1_EnvironmentWorker_166 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 166;
goto try_except_handler_5;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)mod_consts.const_str_plain_EnvironmentWorker, tmp_assign_source_40);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$environments$_worker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$environments$_worker->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$environments$_worker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$environments$_worker);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$environments$_worker", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib.environments._worker" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$environments$_worker);
    return module_anthropic$lib$environments$_worker;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$environments$_worker, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$environments$_worker", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

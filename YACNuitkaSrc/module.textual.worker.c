/* Generated code for Python module 'textual$worker'
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



/* The "module_textual$worker" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$worker;
PyDictObject *moduledict_textual$worker;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_error;
PyObject *const_str_digest_2c9f87964fec5deb62f1b6a004323ce2;
PyObject *const_str_plain_active_worker;
PyObject *const_str_plain_NoActiveWorker;
PyObject *const_tuple_str_digest_8a9fd31286279c9bf9b8443471168909_tuple;
PyObject *const_str_digest_1fbdc0d6c07a174703f6fe1bfda320b0;
PyObject *const_str_plain_text;
PyObject *const_str_plain_worker;
PyObject *const_str_plain_state;
PyObject *const_str_digest_5b5a96ec68d4cba22d06361fa9ee6fbd;
PyObject *const_str_plain_self;
PyObject *const_str_plain___rich_repr__;
PyObject *const_str_digest_345de99035f06d3081563cc6f9e9ba75;
PyObject *const_str_plain__node;
PyObject *const_str_plain__work;
PyObject *const_str_plain_group;
PyObject *const_slice_none_int_pos_1000_none;
PyObject *const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
PyObject *const_str_plain_description;
PyObject *const_str_plain_exit_on_error;
PyObject *const_str_plain_Event;
PyObject *const_str_plain_cancelled_event;
PyObject *const_str_plain__thread_worker;
PyObject *const_str_plain_WorkerState;
PyObject *const_str_plain_PENDING;
PyObject *const_str_plain__state;
PyObject *const_str_plain__error;
PyObject *const_str_plain__completed_steps;
PyObject *const_str_plain__total_steps;
PyObject *const_str_plain__cancelled;
PyObject *const_str_plain_monotonic;
PyObject *const_str_plain__created_time;
PyObject *const_str_plain__result;
PyObject *const_str_plain__task;
PyObject *const_str_plain_post_message;
PyObject *const_str_plain_StateChanged;
PyObject *const_str_digest_1c78fdc7aedc7b2cca90cc970ba0759f;
PyObject *const_str_plain__ReprText;
PyObject *const_str_plain_default;
PyObject *const_str_plain_progress;
PyObject *const_str_plain_round;
PyObject *const_str_digest_e2181b9f90b0d9a1fe1f6b0cb9c72390;
PyObject *const_str_digest_ef7c7d0a4260498f508ab797672b8dd0;
PyObject *const_str_digest_f79353036fb310a9be7b3f613dfa77b9;
PyObject *const_str_digest_16c27e1bbfec4cc404721dba8c0f3cb0;
PyObject *const_str_digest_cc1d68f111b4de666aa5b88bde1d119a;
PyObject *const_str_plain_RUNNING;
PyObject *const_str_digest_309893b1b7e6a4a6b3aa9149ac5ff3f3;
PyObject *const_str_plain_CANCELLED;
PyObject *const_str_plain_ERROR;
PyObject *const_str_plain_SUCCESS;
PyObject *const_str_digest_f1692d6d3ddd649471366e6387004ce9;
PyObject *const_str_digest_bd0959c262811f57463783283fa0b7d4;
PyObject *const_str_digest_ccc7fb7287b957c1f72a0cf517ef8750;
PyObject *const_str_plain_max;
PyObject *const_str_plain_min;
PyObject *const_int_pos_100;
PyObject *const_float_100_0;
PyObject *const_str_digest_cb22f6b7d8ca1e15684704d866363aa8;
PyObject *const_str_digest_d61e30d742d39908309c0ae2c90ff881;
PyObject *const_str_digest_47cafd71320df5a6d392905ae3476baf;
PyObject *const_str_digest_f7f96e153fb354cf8dd98d87b8320943;
PyObject *const_str_digest_42ed1419d5de4b82859af9dba97b19ee;
PyObject *const_str_digest_6e9f44e67af578db3d2bea110f4d123e;
PyObject *const_dict_de4b99e577cff0f8cd485eeebdcaaddb;
PyObject *const_str_digest_a6c34ef085a771a3c3ad018da3a2f107;
PyObject *const_str_plain_run_awaitable;
PyObject *const_str_digest_e9bd98eab5a5387a7d56ece893a6495d;
PyObject *const_dict_39c3cc391bbd3bffae8e2419475e88fa;
PyObject *const_str_digest_cc002779dc018c468135bfbcc515b6b2;
PyObject *const_str_plain_run_coroutine;
PyObject *const_str_digest_205440327a2ca4be39742718e82456aa;
PyObject *const_dict_9ef4cf2172f051173ddecf698f380693;
PyObject *const_str_digest_8ee681c1328df41292e5a7a559818eb6;
PyObject *const_str_plain_run_callable;
PyObject *const_str_digest_b9b7460973961fbc45c26069e0424e8c;
PyObject *const_str_plain_iscoroutinefunction;
PyObject *const_str_plain_func;
PyObject *const_str_plain_isawaitable;
PyObject *const_str_plain_callable;
PyObject *const_str_plain_WorkerError;
PyObject *const_tuple_str_digest_a69635bd83e22a7ebf0be791d479b50d_tuple;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_get_running_loop;
PyObject *const_str_plain_run_in_executor;
PyObject *const_str_plain__run_threaded;
PyObject *const_str_digest_adc650af413c9746b07b94ee16d752da;
PyObject *const_dict_9990409ba96e3712d4ef78c5ec54b4d9;
PyObject *const_str_plain_do_work;
PyObject *const_str_digest_417b4f76bd74b9e58a87ae05471588d5;
PyObject *const_str_plain_run;
PyObject *const_str_plain_set;
PyObject *const_str_plain_work;
PyObject *const_str_digest_93cf1c4a8dea125511265e97d796212b;
PyObject *const_tuple_str_digest_d2ee694f9c3293707527dfa0133506b0_tuple;
PyObject *const_tuple_str_digest_52fbff37d1c19a70dca49f64f6b37edb_tuple;
PyObject *const_str_plain__run_async;
PyObject *const_str_digest_558a63321765bbda46bdf6e4dc9c6f10;
PyObject *const_str_digest_61edaf4c280bbaaeef664be1f6006389;
PyObject *const_str_digest_7e5f6b270737299a8c28b0bbcb527099;
PyObject *const_str_digest_5ee291a49a8dbc2fe6fa18d619580611;
PyObject *const_str_plain_app;
PyObject *const_str_plain__context;
PyObject *const_str_plain_log;
PyObject *const_str_plain_CancelledError;
PyObject *const_str_plain_failed;
PyObject *const_str_digest_4628878707b5a75034889e1dd73311bc;
PyObject *const_tuple_str_plain_Traceback_tuple;
PyObject *const_str_plain_Traceback;
PyObject *const_str_plain_WorkerFailed;
PyObject *const_str_plain__handle_exception;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain__run;
PyObject *const_str_digest_e04f2427b8aef23ba7adc0b9788c4622;
PyObject *const_str_plain_create_task;
PyObject *const_dict_0ad0f2b7cb54d0c67274659574aa61da;
PyObject *const_str_digest_35123ee4df9039652f7463042f2bab18;
PyObject *const_str_plain_task_done_callback;
PyObject *const_str_digest_7884576585753e891c0d9a00f43acb1c;
PyObject *const_str_plain_add_done_callback;
PyObject *const_str_digest_cbba31558cd5c23d61afbc3f8ee7827a;
PyObject *const_str_plain_done_callback;
PyObject *const_str_plain_cancel;
PyObject *const_str_digest_61415b799ce3653e2bd93bc682c021be;
PyObject *const_str_digest_c94946c32dc50765619198f36ee0871f;
PyObject *const_str_plain_DeadlockError;
PyObject *const_tuple_str_digest_863360513d89cced18508e8a9e026869_tuple;
PyObject *const_tuple_str_digest_7fca01c453f7a9457231a06b4dc97622_tuple;
PyObject *const_str_plain_WorkerCancelled;
PyObject *const_tuple_str_digest_5fed38f250e70bc7a191dc0bf09b3085_tuple;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_ResultType;
PyObject *const_str_plain_wait;
PyObject *const_str_digest_b6c33b038512975fe3359657ded47c3f;
PyObject *const_str_digest_1cee9403611b6a0871bbf97f4f499cee;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_contextvars;
PyObject *const_tuple_str_plain_ContextVar_tuple;
PyObject *const_str_plain_ContextVar;
PyObject *const_str_plain_threading;
PyObject *const_tuple_str_plain_Event_tuple;
PyObject *const_str_plain_time;
PyObject *const_tuple_str_plain_monotonic_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Coroutine;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Union;
PyObject *const_str_digest_0266ac3c468cbbaf99b230132943e04e;
PyObject *const_str_plain_rich;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_digest_14bc17522953bd7736a9eecd7e365b1a;
PyObject *const_tuple_str_plain_Message_tuple;
PyObject *const_str_plain_Message;
PyObject *const_tuple_str_plain_active_worker_tuple;
PyObject *const_str_digest_ad8138792cf74702f08214ab7fcb77ff;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
PyObject *const_str_digest_3f3a0e31af04edbf63a7950d7db17938;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_41;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_b85b85374014dbb684426eac53c92820;
PyObject *const_int_pos_45;
PyObject *const_str_digest_9a3a99e037627e959bbab47e96d8a5c2;
PyObject *const_int_pos_49;
PyObject *const_dict_40590d330e43fae5606a4323fd783149;
PyObject *const_str_digest_7b8f27bf337e9e178ec41362e26c601b;
PyObject *const_tuple_str_plain_error_tuple;
PyObject *const_str_digest_170a6cde92fd2f9b742385e7af77ceaf;
PyObject *const_int_pos_57;
PyObject *const_str_digest_ea9f9e8d592d48d28f4e485562f9784e;
PyObject *const_int_pos_61;
PyObject *const_dict_286b3bb8e672ca23e7416233f7a106ee;
PyObject *const_str_plain_get_current_worker;
PyObject *const_str_plain_Enum;
PyObject *const_str_digest_83bbd2792c834c69b525f91c1e1d0ad2;
PyObject *const_int_pos_82;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_int_pos_5;
PyObject *const_tuple_str_plain_ResultType_tuple;
PyObject *const_str_plain_WorkType;
PyObject *const_str_digest_b7250620857c485c6c504dc3aa94fa05;
PyObject *const_int_pos_108;
PyObject *const_dict_df05d742a8dbb0b86f60b40616eaa1e9;
PyObject *const_str_digest_30ddd328a471962442620d2a6dcf6c14;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_5cf86c5a88259b6ae4db5ff5a898be19;
PyObject *const_tuple_str_plain_text_tuple;
PyObject *const_str_plain_Worker;
PyObject *const_str_plain_auto;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_angular_tuple;
PyObject *const_str_digest_054515d35f87792271c36bfa4089fe69;
PyObject *const_int_pos_119;
PyObject *const_dict_d17dcf72a9a26be7932520504bbdd724;
PyObject *const_str_digest_489e22bebf3a9d665cb8019ec8b0cfbd;
PyObject *const_str_digest_93a118ed27bedbc6be44f6e1f0ee0d31;
PyObject *const_int_pos_123;
PyObject *const_dict_e1b3f91790b90002cb81e37458a58a63;
PyObject *const_str_digest_4111e6fbac773a6af4f09c751207da71;
PyObject *const_dict_a367242e045973b662a9e05f7c4b4498;
PyObject *const_tuple_str_plain_worker_str_plain_state_tuple;
PyObject *const_dict_2d7b52bca93d3de0e8a9a24767e220cf;
PyObject *const_dict_e5e8f06941b5786dd0fe6e0e99574432;
PyObject *const_str_digest_8834476875fc7d67b20f6e64e8825b39;
PyObject *const_str_plain_property;
PyObject *const_dict_9db337a68f75ed2c98b7c204be7ead11;
PyObject *const_str_plain_node;
PyObject *const_str_digest_31aaf3096212b4c14d7e3b407f2ee78a;
PyObject *const_dict_fb453232650fbadb863e4311cde31e8e;
PyObject *const_str_digest_8ef446c8ddd98c2119890795f4de81c8;
PyObject *const_str_plain_setter;
PyObject *const_dict_8cda9ea3be6302628fbdf21b1226b8f5;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_is_cancelled;
PyObject *const_str_digest_26bce359a148aecb730834972c040dd7;
PyObject *const_str_plain_is_running;
PyObject *const_str_digest_afd6d425aa40ebd29df69c1d66eb8b8f;
PyObject *const_str_plain_is_finished;
PyObject *const_str_digest_8ea11108446f35968be5d9e275073388;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_plain_completed_steps;
PyObject *const_str_digest_edb64d919a8bced23773ebf8b9c2ab43;
PyObject *const_dict_4ceb13db20db0a5d6b10c13b92db4345;
PyObject *const_str_plain_total_steps;
PyObject *const_str_digest_3d2b19cfc648280372e2579eb2a1ac56;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_str_digest_e9b06641b3fa0634dda7f31fb773e72c;
PyObject *const_dict_e8bf69b86c75f170d087bf4f8a6a9cf9;
PyObject *const_str_plain_result;
PyObject *const_str_digest_bfc31f7bb28b0dff02aab7e1b68f15b8;
PyObject *const_dict_9886bc989bd4ef336593ffab967f448c;
PyObject *const_str_digest_0324e33764cc0060c5de1197787e911e;
PyObject *const_tuple_none_int_neg_1_tuple;
PyObject *const_dict_b45ecaf8a4e947ee5d1384958153ad2a;
PyObject *const_str_plain_update;
PyObject *const_str_digest_abd52926cfb573ff6840130e7a002a0e;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_dict_b43e34c7c104cc783a7bafb5a69992ea;
PyObject *const_str_plain_advance;
PyObject *const_str_digest_44739ee341d18331887aee0d4a0174a4;
PyObject *const_dict_d031bb36b9892720d442b91d4ea4b297;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_5bdfb6acd321709c09b57b968077e597;
PyObject *const_str_plain__start;
PyObject *const_str_digest_e69130d426dec6ed3a7921fed309c730;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_1c9470943025f7bb66adee9813568b05;
PyObject *const_tuple_962224401c89ead87737c533e9d2d256_tuple;
PyObject *const_str_digest_90e6cb3fd2008424da5a08ff5f44bb95;
PyObject *const_str_digest_35f4b3e19e65da3f2a7afae95d95e85b;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_6697013183a359f5925aab5be2a9ebf0_tuple;
PyObject *const_tuple_dd0e16764619758b02892d5f29fae8cd_tuple;
PyObject *const_tuple_str_plain_self_str_plain_error_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_text_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_1e1adf82a858d284e14f43cdff417143_tuple;
PyObject *const_tuple_830faff4e0cb68ac6b4441665491cb1e_tuple;
PyObject *const_tuple_60ef38d674d31ad06e9bea2bb9a9e140_tuple;
PyObject *const_tuple_str_plain_self_str_plain_steps_tuple;
PyObject *const_tuple_str_plain_self_str_plain_work_tuple;
PyObject *const_tuple_str_plain_work_str_plain_do_work_tuple;
PyObject *const_tuple_str_plain_work_str_plain_self_tuple;
PyObject *const_tuple_str_plain_work_str_plain_run_awaitable_tuple;
PyObject *const_tuple_str_plain_run_awaitable_tuple;
PyObject *const_tuple_str_plain_self_str_plain_state_str_plain_changed_tuple;
PyObject *const_tuple_str_plain__task_str_plain_done_callback_str_plain_self_tuple;
PyObject *const_tuple_str_plain_done_callback_str_plain_self_tuple;
PyObject *const_tuple_cb3677c5675884da0dccd2a8b3645cdb_tuple;
PyObject *const_tuple_str_plain_self_str_plain_error_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[288];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.worker"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c9f87964fec5deb62f1b6a004323ce2);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_active_worker);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoActiveWorker);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a9fd31286279c9bf9b8443471168909_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_1fbdc0d6c07a174703f6fe1bfda320b0);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_worker);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b5a96ec68d4cba22d06361fa9ee6fbd);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_345de99035f06d3081563cc6f9e9ba75);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__node);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__work);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1000_none);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_exit_on_error);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_event);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__thread_worker);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerState);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_PENDING);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__state);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__error);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__completed_steps);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__total_steps);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__cancelled);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__created_time);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__result);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__task);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_message);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateChanged);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c78fdc7aedc7b2cca90cc970ba0759f);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__ReprText);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_progress);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_round);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2181b9f90b0d9a1fe1f6b0cb9c72390);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef7c7d0a4260498f508ab797672b8dd0);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_f79353036fb310a9be7b3f613dfa77b9);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_16c27e1bbfec4cc404721dba8c0f3cb0);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc1d68f111b4de666aa5b88bde1d119a);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_RUNNING);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_309893b1b7e6a4a6b3aa9149ac5ff3f3);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_CANCELLED);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUCCESS);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_f1692d6d3ddd649471366e6387004ce9);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_bd0959c262811f57463783283fa0b7d4);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccc7fb7287b957c1f72a0cf517ef8750);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_float_100_0);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb22f6b7d8ca1e15684704d866363aa8);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_d61e30d742d39908309c0ae2c90ff881);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_47cafd71320df5a6d392905ae3476baf);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7f96e153fb354cf8dd98d87b8320943);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_42ed1419d5de4b82859af9dba97b19ee);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e9f44e67af578db3d2bea110f4d123e);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_de4b99e577cff0f8cd485eeebdcaaddb);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6c34ef085a771a3c3ad018da3a2f107);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_awaitable);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9bd98eab5a5387a7d56ece893a6495d);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_39c3cc391bbd3bffae8e2419475e88fa);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc002779dc018c468135bfbcc515b6b2);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_coroutine);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_205440327a2ca4be39742718e82456aa);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_dict_9ef4cf2172f051173ddecf698f380693);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ee681c1328df41292e5a7a559818eb6);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_callable);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9b7460973961fbc45c26069e0424e8c);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_iscoroutinefunction);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_isawaitable);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerError);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a69635bd83e22a7ebf0be791d479b50d_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_executor);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_threaded);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_adc650af413c9746b07b94ee16d752da);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_do_work);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_417b4f76bd74b9e58a87ae05471588d5);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_set);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_work);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_93cf1c4a8dea125511265e97d796212b);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d2ee694f9c3293707527dfa0133506b0_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_52fbff37d1c19a70dca49f64f6b37edb_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_async);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_558a63321765bbda46bdf6e4dc9c6f10);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_61edaf4c280bbaaeef664be1f6006389);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e5f6b270737299a8c28b0bbcb527099);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ee291a49a8dbc2fe6fa18d619580611);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain__context);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelledError);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_failed);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_4628878707b5a75034889e1dd73311bc);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Traceback_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_Traceback);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerFailed);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_exception);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain__run);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_e04f2427b8aef23ba7adc0b9788c4622);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_task);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_dict_0ad0f2b7cb54d0c67274659574aa61da);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_35123ee4df9039652f7463042f2bab18);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_task_done_callback);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_7884576585753e891c0d9a00f43acb1c);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_done_callback);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbba31558cd5c23d61afbc3f8ee7827a);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_done_callback);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_61415b799ce3653e2bd93bc682c021be);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_c94946c32dc50765619198f36ee0871f);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeadlockError);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_863360513d89cced18508e8a9e026869_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7fca01c453f7a9457231a06b4dc97622_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerCancelled);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5fed38f250e70bc7a191dc0bf09b3085_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResultType);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6c33b038512975fe3359657ded47c3f);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cee9403611b6a0871bbf97f4f499cee);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextvars);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContextVar_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContextVar);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Event_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_monotonic_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_rich);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAlias_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_Message);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_active_worker_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad8138792cf74702f08214ab7fcb77ff);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f3a0e31af04edbf63a7950d7db17938);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_int_pos_41);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_b85b85374014dbb684426eac53c92820);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_9a3a99e037627e959bbab47e96d8a5c2);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_49);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_40590d330e43fae5606a4323fd783149);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b8f27bf337e9e178ec41362e26c601b);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_170a6cde92fd2f9b742385e7af77ceaf);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_int_pos_57);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea9f9e8d592d48d28f4e485562f9784e);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_int_pos_61);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_286b3bb8e672ca23e7416233f7a106ee);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_worker);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_83bbd2792c834c69b525f91c1e1d0ad2);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_82);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResultType_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_WorkType);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7250620857c485c6c504dc3aa94fa05);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_int_pos_108);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_30ddd328a471962442620d2a6dcf6c14);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_5cf86c5a88259b6ae4db5ff5a898be19);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_Worker);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_auto);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_angular_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_054515d35f87792271c36bfa4089fe69);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_int_pos_119);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_dict_d17dcf72a9a26be7932520504bbdd724);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_digest_489e22bebf3a9d665cb8019ec8b0cfbd);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_93a118ed27bedbc6be44f6e1f0ee0d31);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_int_pos_123);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_dict_e1b3f91790b90002cb81e37458a58a63);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_4111e6fbac773a6af4f09c751207da71);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_worker_str_plain_state_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_dict_2d7b52bca93d3de0e8a9a24767e220cf);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_dict_e5e8f06941b5786dd0fe6e0e99574432);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_8834476875fc7d67b20f6e64e8825b39);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_dict_9db337a68f75ed2c98b7c204be7ead11);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_plain_node);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_31aaf3096212b4c14d7e3b407f2ee78a);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_dict_fb453232650fbadb863e4311cde31e8e);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ef446c8ddd98c2119890795f4de81c8);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_dict_8cda9ea3be6302628fbdf21b1226b8f5);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_cancelled);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_digest_26bce359a148aecb730834972c040dd7);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_running);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_str_digest_afd6d425aa40ebd29df69c1d66eb8b8f);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_finished);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ea11108446f35968be5d9e275073388);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain_completed_steps);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_digest_edb64d919a8bced23773ebf8b9c2ab43);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_plain_total_steps);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d2b19cfc648280372e2579eb2a1ac56);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_e9b06641b3fa0634dda7f31fb773e72c);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_dict_e8bf69b86c75f170d087bf4f8a6a9cf9);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfc31f7bb28b0dff02aab7e1b68f15b8);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_0324e33764cc0060c5de1197787e911e);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_tuple_none_int_neg_1_tuple);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_dict_b45ecaf8a4e947ee5d1384958153ad2a);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_digest_abd52926cfb573ff6840130e7a002a0e);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_dict_b43e34c7c104cc783a7bafb5a69992ea);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_plain_advance);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_digest_44739ee341d18331887aee0d4a0174a4);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_dict_d031bb36b9892720d442b91d4ea4b297);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_dict_5bdfb6acd321709c09b57b968077e597);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_plain__start);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_digest_e69130d426dec6ed3a7921fed309c730);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c9470943025f7bb66adee9813568b05);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_tuple_962224401c89ead87737c533e9d2d256_tuple);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_digest_90e6cb3fd2008424da5a08ff5f44bb95);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_digest_35f4b3e19e65da3f2a7afae95d95e85b);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_tuple_6697013183a359f5925aab5be2a9ebf0_tuple);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_tuple_dd0e16764619758b02892d5f29fae8cd_tuple);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_error_str_plain___class___tuple);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_tuple_1e1adf82a858d284e14f43cdff417143_tuple);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_tuple_830faff4e0cb68ac6b4441665491cb1e_tuple);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_tuple_60ef38d674d31ad06e9bea2bb9a9e140_tuple);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_steps_tuple);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_work_tuple);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_work_str_plain_do_work_tuple);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_work_str_plain_self_tuple);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_work_str_plain_run_awaitable_tuple);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_awaitable_tuple);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_changed_tuple);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__task_str_plain_done_callback_str_plain_self_tuple);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_done_callback_str_plain_self_tuple);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_tuple_cb3677c5675884da0dccd2a8b3645cdb_tuple);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_error_tuple);
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
void checkModuleConstants_textual$worker(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c9f87964fec5deb62f1b6a004323ce2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c9f87964fec5deb62f1b6a004323ce2);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_active_worker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_active_worker);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoActiveWorker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoActiveWorker);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_8a9fd31286279c9bf9b8443471168909_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_8a9fd31286279c9bf9b8443471168909_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_1fbdc0d6c07a174703f6fe1bfda320b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1fbdc0d6c07a174703f6fe1bfda320b0);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_worker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_worker);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b5a96ec68d4cba22d06361fa9ee6fbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b5a96ec68d4cba22d06361fa9ee6fbd);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain___rich_repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___rich_repr__);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_345de99035f06d3081563cc6f9e9ba75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_345de99035f06d3081563cc6f9e9ba75);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__node));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__node);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__work);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_pos_1000_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_pos_1000_none);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_exit_on_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exit_on_error);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancelled_event);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__thread_worker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__thread_worker);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkerState);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_PENDING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PENDING);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__state);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__error);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__completed_steps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__completed_steps);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__total_steps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__total_steps);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cancelled);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_monotonic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_monotonic);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__created_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__created_time);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__result);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__task);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_message);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateChanged));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateChanged);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c78fdc7aedc7b2cca90cc970ba0759f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c78fdc7aedc7b2cca90cc970ba0759f);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__ReprText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ReprText);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_progress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_progress);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_round));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_round);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2181b9f90b0d9a1fe1f6b0cb9c72390));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2181b9f90b0d9a1fe1f6b0cb9c72390);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef7c7d0a4260498f508ab797672b8dd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef7c7d0a4260498f508ab797672b8dd0);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_f79353036fb310a9be7b3f613dfa77b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f79353036fb310a9be7b3f613dfa77b9);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_16c27e1bbfec4cc404721dba8c0f3cb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16c27e1bbfec4cc404721dba8c0f3cb0);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc1d68f111b4de666aa5b88bde1d119a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc1d68f111b4de666aa5b88bde1d119a);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_RUNNING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RUNNING);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_309893b1b7e6a4a6b3aa9149ac5ff3f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_309893b1b7e6a4a6b3aa9149ac5ff3f3);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_CANCELLED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CANCELLED);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUCCESS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SUCCESS);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_f1692d6d3ddd649471366e6387004ce9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f1692d6d3ddd649471366e6387004ce9);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_bd0959c262811f57463783283fa0b7d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bd0959c262811f57463783283fa0b7d4);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccc7fb7287b957c1f72a0cf517ef8750));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccc7fb7287b957c1f72a0cf517ef8750);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_float_100_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_100_0);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb22f6b7d8ca1e15684704d866363aa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb22f6b7d8ca1e15684704d866363aa8);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_d61e30d742d39908309c0ae2c90ff881));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d61e30d742d39908309c0ae2c90ff881);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_47cafd71320df5a6d392905ae3476baf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47cafd71320df5a6d392905ae3476baf);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7f96e153fb354cf8dd98d87b8320943));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7f96e153fb354cf8dd98d87b8320943);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_42ed1419d5de4b82859af9dba97b19ee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42ed1419d5de4b82859af9dba97b19ee);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e9f44e67af578db3d2bea110f4d123e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e9f44e67af578db3d2bea110f4d123e);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_de4b99e577cff0f8cd485eeebdcaaddb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_de4b99e577cff0f8cd485eeebdcaaddb);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6c34ef085a771a3c3ad018da3a2f107));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6c34ef085a771a3c3ad018da3a2f107);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_awaitable);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9bd98eab5a5387a7d56ece893a6495d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9bd98eab5a5387a7d56ece893a6495d);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_39c3cc391bbd3bffae8e2419475e88fa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_39c3cc391bbd3bffae8e2419475e88fa);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc002779dc018c468135bfbcc515b6b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc002779dc018c468135bfbcc515b6b2);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_coroutine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_coroutine);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_205440327a2ca4be39742718e82456aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_205440327a2ca4be39742718e82456aa);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_dict_9ef4cf2172f051173ddecf698f380693));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9ef4cf2172f051173ddecf698f380693);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ee681c1328df41292e5a7a559818eb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ee681c1328df41292e5a7a559818eb6);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_callable);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9b7460973961fbc45c26069e0424e8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9b7460973961fbc45c26069e0424e8c);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_iscoroutinefunction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iscoroutinefunction);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_isawaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isawaitable);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkerError);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a69635bd83e22a7ebf0be791d479b50d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a69635bd83e22a7ebf0be791d479b50d_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_running_loop);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_executor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_in_executor);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_threaded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_threaded);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_adc650af413c9746b07b94ee16d752da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_adc650af413c9746b07b94ee16d752da);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_do_work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_do_work);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_417b4f76bd74b9e58a87ae05471588d5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_417b4f76bd74b9e58a87ae05471588d5);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_work));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_work);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_93cf1c4a8dea125511265e97d796212b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93cf1c4a8dea125511265e97d796212b);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d2ee694f9c3293707527dfa0133506b0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d2ee694f9c3293707527dfa0133506b0_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_52fbff37d1c19a70dca49f64f6b37edb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_52fbff37d1c19a70dca49f64f6b37edb_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_async));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_async);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_558a63321765bbda46bdf6e4dc9c6f10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_558a63321765bbda46bdf6e4dc9c6f10);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_61edaf4c280bbaaeef664be1f6006389));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61edaf4c280bbaaeef664be1f6006389);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e5f6b270737299a8c28b0bbcb527099));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e5f6b270737299a8c28b0bbcb527099);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ee291a49a8dbc2fe6fa18d619580611));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ee291a49a8dbc2fe6fa18d619580611);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain__context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__context);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelledError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelledError);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_failed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_failed);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_4628878707b5a75034889e1dd73311bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4628878707b5a75034889e1dd73311bc);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Traceback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Traceback_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_Traceback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Traceback);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerFailed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkerFailed);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_exception);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain__run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_e04f2427b8aef23ba7adc0b9788c4622));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e04f2427b8aef23ba7adc0b9788c4622);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_task);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_dict_0ad0f2b7cb54d0c67274659574aa61da));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0ad0f2b7cb54d0c67274659574aa61da);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_35123ee4df9039652f7463042f2bab18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35123ee4df9039652f7463042f2bab18);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_task_done_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_task_done_callback);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_7884576585753e891c0d9a00f43acb1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7884576585753e891c0d9a00f43acb1c);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_done_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_done_callback);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbba31558cd5c23d61afbc3f8ee7827a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbba31558cd5c23d61afbc3f8ee7827a);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_done_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_done_callback);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_61415b799ce3653e2bd93bc682c021be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61415b799ce3653e2bd93bc682c021be);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_c94946c32dc50765619198f36ee0871f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c94946c32dc50765619198f36ee0871f);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeadlockError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeadlockError);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_863360513d89cced18508e8a9e026869_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_863360513d89cced18508e8a9e026869_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7fca01c453f7a9457231a06b4dc97622_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7fca01c453f7a9457231a06b4dc97622_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkerCancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkerCancelled);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5fed38f250e70bc7a191dc0bf09b3085_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5fed38f250e70bc7a191dc0bf09b3085_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResultType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResultType);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6c33b038512975fe3359657ded47c3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6c33b038512975fe3359657ded47c3f);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cee9403611b6a0871bbf97f4f499cee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cee9403611b6a0871bbf97f4f499cee);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextvars));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextvars);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ContextVar_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ContextVar_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContextVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContextVar);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Event_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_monotonic_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_monotonic_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Coroutine);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_rich));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rich);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Message_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Message);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_active_worker_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_active_worker_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad8138792cf74702f08214ab7fcb77ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad8138792cf74702f08214ab7fcb77ff);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f3a0e31af04edbf63a7950d7db17938));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f3a0e31af04edbf63a7950d7db17938);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_int_pos_41));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_41);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_b85b85374014dbb684426eac53c92820));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b85b85374014dbb684426eac53c92820);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_9a3a99e037627e959bbab47e96d8a5c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9a3a99e037627e959bbab47e96d8a5c2);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_49));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_49);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_40590d330e43fae5606a4323fd783149));
CHECK_OBJECT_DEEP(mod_consts.const_dict_40590d330e43fae5606a4323fd783149);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b8f27bf337e9e178ec41362e26c601b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b8f27bf337e9e178ec41362e26c601b);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_error_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_170a6cde92fd2f9b742385e7af77ceaf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_170a6cde92fd2f9b742385e7af77ceaf);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_int_pos_57));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_57);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea9f9e8d592d48d28f4e485562f9784e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea9f9e8d592d48d28f4e485562f9784e);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_int_pos_61));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_61);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_286b3bb8e672ca23e7416233f7a106ee));
CHECK_OBJECT_DEEP(mod_consts.const_dict_286b3bb8e672ca23e7416233f7a106ee);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_worker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_current_worker);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_83bbd2792c834c69b525f91c1e1d0ad2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83bbd2792c834c69b525f91c1e1d0ad2);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_82));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_82);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResultType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResultType_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_WorkType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WorkType);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7250620857c485c6c504dc3aa94fa05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7250620857c485c6c504dc3aa94fa05);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_int_pos_108));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_108);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_30ddd328a471962442620d2a6dcf6c14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30ddd328a471962442620d2a6dcf6c14);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_5cf86c5a88259b6ae4db5ff5a898be19));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5cf86c5a88259b6ae4db5ff5a898be19);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_text_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_Worker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Worker);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_auto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auto);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_angular_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_angular_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_054515d35f87792271c36bfa4089fe69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_054515d35f87792271c36bfa4089fe69);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_int_pos_119));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_119);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_dict_d17dcf72a9a26be7932520504bbdd724));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d17dcf72a9a26be7932520504bbdd724);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_digest_489e22bebf3a9d665cb8019ec8b0cfbd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_489e22bebf3a9d665cb8019ec8b0cfbd);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_93a118ed27bedbc6be44f6e1f0ee0d31));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93a118ed27bedbc6be44f6e1f0ee0d31);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_int_pos_123));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_123);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_dict_e1b3f91790b90002cb81e37458a58a63));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e1b3f91790b90002cb81e37458a58a63);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_4111e6fbac773a6af4f09c751207da71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4111e6fbac773a6af4f09c751207da71);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_worker_str_plain_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_worker_str_plain_state_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_dict_2d7b52bca93d3de0e8a9a24767e220cf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2d7b52bca93d3de0e8a9a24767e220cf);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_dict_e5e8f06941b5786dd0fe6e0e99574432));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e5e8f06941b5786dd0fe6e0e99574432);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_8834476875fc7d67b20f6e64e8825b39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8834476875fc7d67b20f6e64e8825b39);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_dict_9db337a68f75ed2c98b7c204be7ead11));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9db337a68f75ed2c98b7c204be7ead11);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_plain_node));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_node);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_31aaf3096212b4c14d7e3b407f2ee78a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31aaf3096212b4c14d7e3b407f2ee78a);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_dict_fb453232650fbadb863e4311cde31e8e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb453232650fbadb863e4311cde31e8e);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ef446c8ddd98c2119890795f4de81c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ef446c8ddd98c2119890795f4de81c8);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_dict_8cda9ea3be6302628fbdf21b1226b8f5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8cda9ea3be6302628fbdf21b1226b8f5);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_cancelled);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_digest_26bce359a148aecb730834972c040dd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26bce359a148aecb730834972c040dd7);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_running));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_running);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_str_digest_afd6d425aa40ebd29df69c1d66eb8b8f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_afd6d425aa40ebd29df69c1d66eb8b8f);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_finished));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_finished);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ea11108446f35968be5d9e275073388));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ea11108446f35968be5d9e275073388);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain_completed_steps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completed_steps);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_digest_edb64d919a8bced23773ebf8b9c2ab43));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edb64d919a8bced23773ebf8b9c2ab43);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_plain_total_steps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_total_steps);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d2b19cfc648280372e2579eb2a1ac56));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d2b19cfc648280372e2579eb2a1ac56);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_e9b06641b3fa0634dda7f31fb773e72c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e9b06641b3fa0634dda7f31fb773e72c);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_dict_e8bf69b86c75f170d087bf4f8a6a9cf9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8bf69b86c75f170d087bf4f8a6a9cf9);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfc31f7bb28b0dff02aab7e1b68f15b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfc31f7bb28b0dff02aab7e1b68f15b8);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_0324e33764cc0060c5de1197787e911e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0324e33764cc0060c5de1197787e911e);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_tuple_none_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_int_neg_1_tuple);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_dict_b45ecaf8a4e947ee5d1384958153ad2a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b45ecaf8a4e947ee5d1384958153ad2a);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_digest_abd52926cfb573ff6840130e7a002a0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abd52926cfb573ff6840130e7a002a0e);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_dict_b43e34c7c104cc783a7bafb5a69992ea));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b43e34c7c104cc783a7bafb5a69992ea);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_plain_advance));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_advance);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_digest_44739ee341d18331887aee0d4a0174a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44739ee341d18331887aee0d4a0174a4);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_dict_d031bb36b9892720d442b91d4ea4b297));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d031bb36b9892720d442b91d4ea4b297);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_dict_5bdfb6acd321709c09b57b968077e597));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5bdfb6acd321709c09b57b968077e597);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_plain__start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__start);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_digest_e69130d426dec6ed3a7921fed309c730));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e69130d426dec6ed3a7921fed309c730);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c9470943025f7bb66adee9813568b05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c9470943025f7bb66adee9813568b05);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_tuple_962224401c89ead87737c533e9d2d256_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_962224401c89ead87737c533e9d2d256_tuple);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_digest_90e6cb3fd2008424da5a08ff5f44bb95));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90e6cb3fd2008424da5a08ff5f44bb95);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_digest_35f4b3e19e65da3f2a7afae95d95e85b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35f4b3e19e65da3f2a7afae95d95e85b);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_tuple_6697013183a359f5925aab5be2a9ebf0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6697013183a359f5925aab5be2a9ebf0_tuple);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_tuple_dd0e16764619758b02892d5f29fae8cd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dd0e16764619758b02892d5f29fae8cd_tuple);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_error_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_error_str_plain___class___tuple);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_tuple_1e1adf82a858d284e14f43cdff417143_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1e1adf82a858d284e14f43cdff417143_tuple);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_tuple_830faff4e0cb68ac6b4441665491cb1e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_830faff4e0cb68ac6b4441665491cb1e_tuple);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_tuple_60ef38d674d31ad06e9bea2bb9a9e140_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_60ef38d674d31ad06e9bea2bb9a9e140_tuple);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_steps_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_steps_tuple);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_work_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_work_tuple);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_work_str_plain_do_work_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_work_str_plain_do_work_tuple);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_work_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_work_str_plain_self_tuple);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_work_str_plain_run_awaitable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_work_str_plain_run_awaitable_tuple);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_awaitable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_run_awaitable_tuple);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_changed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_changed_tuple);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__task_str_plain_done_callback_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__task_str_plain_done_callback_str_plain_self_tuple);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_done_callback_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_done_callback_str_plain_self_tuple);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_tuple_cb3677c5675884da0dccd2a8b3645cdb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cb3677c5675884da0dccd2a8b3645cdb_tuple);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_error_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 26
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
static PyObject *module_var_accessor_textual$worker$Awaitable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Awaitable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Awaitable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Awaitable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Awaitable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$ContextVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ContextVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContextVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContextVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ContextVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ContextVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ContextVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ContextVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ContextVar);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$Coroutine(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Coroutine);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Coroutine);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Coroutine, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Coroutine);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Coroutine, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Coroutine);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Coroutine);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Coroutine);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$DeadlockError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DeadlockError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeadlockError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeadlockError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeadlockError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeadlockError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DeadlockError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DeadlockError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeadlockError);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$Event(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Event);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$Generic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$Message(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$NoActiveWorker(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_NoActiveWorker);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoActiveWorker);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoActiveWorker, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NoActiveWorker);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NoActiveWorker, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_NoActiveWorker);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_NoActiveWorker);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NoActiveWorker);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$ResultType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResultType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResultType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResultType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResultType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$WorkerCancelled(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerCancelled);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerCancelled);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerCancelled, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerCancelled);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerCancelled, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerCancelled);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerCancelled);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerCancelled);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$WorkerError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerError);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$WorkerFailed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerFailed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerFailed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerFailed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerFailed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerFailed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerFailed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerFailed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerFailed);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$WorkerState(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerState);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerState);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerState, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WorkerState);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WorkerState, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerState);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerState);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerState);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$_ReprText(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain__ReprText);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ReprText);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ReprText, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ReprText);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ReprText, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain__ReprText);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain__ReprText);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ReprText);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$active_worker(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_active_worker);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_active_worker);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_active_worker, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_active_worker);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_active_worker, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_active_worker);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_active_worker);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_active_worker);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$monotonic(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_monotonic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_monotonic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_monotonic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_monotonic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_monotonic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_monotonic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_monotonic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_monotonic);
    }

    return result;
}

static PyObject *module_var_accessor_textual$worker$rich(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$worker->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$worker->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$worker->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rich);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rich, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rich);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_75ac449976e0d788d462a09bcd687f95;
static PyCodeObject *code_objects_84de9cfbeb9d5dff1d29096153795283;
static PyCodeObject *code_objects_d31047df710cb51c3e93d5f8a637fcf6;
static PyCodeObject *code_objects_92685fc3f30ff39e3f0669e16ee92e0e;
static PyCodeObject *code_objects_917c4e6b5a0d6d87249fde6867b2e2e1;
static PyCodeObject *code_objects_cff4fc3e8a32a748d175d73392c54d28;
static PyCodeObject *code_objects_7841691d522e6e24c67ed7b94ac598ca;
static PyCodeObject *code_objects_6c6a2fbc8ffc182d99725e1a9080d182;
static PyCodeObject *code_objects_3ea9dcc777b2e300ec038cb85fd059c0;
static PyCodeObject *code_objects_bf6d24ec516d2712217f07bd7978038d;
static PyCodeObject *code_objects_a7669f6cbb0505099ac3eb6dd1419c66;
static PyCodeObject *code_objects_3272340dcb2c544e3b9c249fdec2a2ce;
static PyCodeObject *code_objects_acfcbcc2f5cf8292d6f903d2879aef78;
static PyCodeObject *code_objects_d0ed07d2a8afdbc7d07079a0588d348c;
static PyCodeObject *code_objects_ac9403189def0620cd8c8ce7c1d57341;
static PyCodeObject *code_objects_e3823ab49ecafb8629a35934686bf42a;
static PyCodeObject *code_objects_edcc0b71d700124b23aa1447480bda2e;
static PyCodeObject *code_objects_17e778a56566426c46279b3f73cc110a;
static PyCodeObject *code_objects_686498afd0467f9d438deb2f6d59a4ee;
static PyCodeObject *code_objects_33cba2742207e7ccd8021330efa0104b;
static PyCodeObject *code_objects_6ba9b91a88dda4b652145ed3430f8cf9;
static PyCodeObject *code_objects_2c2ec94868309512a0cbfc8a9f01e8e7;
static PyCodeObject *code_objects_846674b693d45cc231ba5984b34c3d64;
static PyCodeObject *code_objects_bd6809bceef5204563e745bfde442b13;
static PyCodeObject *code_objects_5ad521684fc279eb1fcb9315439c3647;
static PyCodeObject *code_objects_b0fecfa5487b24d7bcc3a464b9f7b9e3;
static PyCodeObject *code_objects_312f5f2b32bdfbb840d431884cacf99f;
static PyCodeObject *code_objects_2612874cf5accf42d9a94cb51996a020;
static PyCodeObject *code_objects_232996e130447a7878474a5c5aef6a29;
static PyCodeObject *code_objects_776d783daa9379896e6e6d86e3952cb9;
static PyCodeObject *code_objects_d6a8b95e91d4071b3813b3f36110a24d;
static PyCodeObject *code_objects_e96c6d85e2f7b3f62a3a7dd30fb0d658;
static PyCodeObject *code_objects_e1ae63384b4da2bf99f217127337a4e3;
static PyCodeObject *code_objects_88a5f957242d574a4bf3093c0cb7d7c6;
static PyCodeObject *code_objects_1b9762ddacd722d3e2ba555b0e37bcf6;
static PyCodeObject *code_objects_e8a271ffd9ef21d41c2529cd63caab31;
static PyCodeObject *code_objects_80b238ebe05b117ee170336a82781ed9;
static PyCodeObject *code_objects_ad7278ce344bbb30d633f576e6ea9d35;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_90e6cb3fd2008424da5a08ff5f44bb95); CHECK_OBJECT(module_filename_obj);
code_objects_75ac449976e0d788d462a09bcd687f95 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_35f4b3e19e65da3f2a7afae95d95e85b, mod_consts.const_str_digest_35f4b3e19e65da3f2a7afae95d95e85b, NULL, NULL, 0, 0, 0);
code_objects_84de9cfbeb9d5dff1d29096153795283 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_StateChanged, mod_consts.const_str_digest_93a118ed27bedbc6be44f6e1f0ee0d31, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d31047df710cb51c3e93d5f8a637fcf6 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Worker, mod_consts.const_str_plain_Worker, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_92685fc3f30ff39e3f0669e16ee92e0e = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WorkerFailed, mod_consts.const_str_plain_WorkerFailed, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_917c4e6b5a0d6d87249fde6867b2e2e1 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WorkerState, mod_consts.const_str_plain_WorkerState, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cff4fc3e8a32a748d175d73392c54d28 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4111e6fbac773a6af4f09c751207da71, mod_consts.const_tuple_6697013183a359f5925aab5be2a9ebf0_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_7841691d522e6e24c67ed7b94ac598ca = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_8834476875fc7d67b20f6e64e8825b39, mod_consts.const_tuple_dd0e16764619758b02892d5f29fae8cd_tuple, NULL, 3, 5, 0);
code_objects_6c6a2fbc8ffc182d99725e1a9080d182 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_7b8f27bf337e9e178ec41362e26c601b, mod_consts.const_tuple_str_plain_self_str_plain_error_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_3ea9dcc777b2e300ec038cb85fd059c0 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_30ddd328a471962442620d2a6dcf6c14, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple, NULL, 2, 0, 0);
code_objects_bf6d24ec516d2712217f07bd7978038d = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_5cf86c5a88259b6ae4db5ff5a898be19, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a7669f6cbb0505099ac3eb6dd1419c66 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_repr__, mod_consts.const_str_digest_345de99035f06d3081563cc6f9e9ba75, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3272340dcb2c544e3b9c249fdec2a2ce = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___rich_repr__, mod_consts.const_str_digest_e2181b9f90b0d9a1fe1f6b0cb9c72390, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_acfcbcc2f5cf8292d6f903d2879aef78 = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__run, mod_consts.const_str_digest_e04f2427b8aef23ba7adc0b9788c4622, mod_consts.const_tuple_1e1adf82a858d284e14f43cdff417143_tuple, NULL, 2, 0, 0);
code_objects_d0ed07d2a8afdbc7d07079a0588d348c = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__run_async, mod_consts.const_str_digest_558a63321765bbda46bdf6e4dc9c6f10, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ac9403189def0620cd8c8ce7c1d57341 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__run_threaded, mod_consts.const_str_digest_adc650af413c9746b07b94ee16d752da, mod_consts.const_tuple_830faff4e0cb68ac6b4441665491cb1e_tuple, NULL, 1, 0, 0);
code_objects_e3823ab49ecafb8629a35934686bf42a = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__start, mod_consts.const_str_digest_e69130d426dec6ed3a7921fed309c730, mod_consts.const_tuple_60ef38d674d31ad06e9bea2bb9a9e140_tuple, NULL, 3, 0, 0);
code_objects_edcc0b71d700124b23aa1447480bda2e = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_advance, mod_consts.const_str_digest_44739ee341d18331887aee0d4a0174a4, mod_consts.const_tuple_str_plain_self_str_plain_steps_tuple, NULL, 2, 0, 0);
code_objects_17e778a56566426c46279b3f73cc110a = MAKE_CODE_OBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancel, mod_consts.const_str_digest_1c9470943025f7bb66adee9813568b05, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_686498afd0467f9d438deb2f6d59a4ee = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_completed_steps, mod_consts.const_str_digest_edb64d919a8bced23773ebf8b9c2ab43, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_33cba2742207e7ccd8021330efa0104b = MAKE_CODE_OBJECT(module_filename_obj, 294, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_do_work, mod_consts.const_str_digest_417b4f76bd74b9e58a87ae05471588d5, mod_consts.const_tuple_str_plain_self_str_plain_work_tuple, mod_consts.const_tuple_str_plain_self_str_plain_work_tuple, 0, 0, 0);
code_objects_6ba9b91a88dda4b652145ed3430f8cf9 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_error, mod_consts.const_str_digest_0324e33764cc0060c5de1197787e911e, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2c2ec94868309512a0cbfc8a9f01e8e7 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_current_worker, mod_consts.const_str_plain_get_current_worker, NULL, NULL, 0, 0, 0);
code_objects_846674b693d45cc231ba5984b34c3d64 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_cancelled, mod_consts.const_str_digest_26bce359a148aecb730834972c040dd7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bd6809bceef5204563e745bfde442b13 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_finished, mod_consts.const_str_digest_8ea11108446f35968be5d9e275073388, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5ad521684fc279eb1fcb9315439c3647 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_running, mod_consts.const_str_digest_afd6d425aa40ebd29df69c1d66eb8b8f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b0fecfa5487b24d7bcc3a464b9f7b9e3 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_node, mod_consts.const_str_digest_31aaf3096212b4c14d7e3b407f2ee78a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_312f5f2b32bdfbb840d431884cacf99f = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_progress, mod_consts.const_str_digest_e9b06641b3fa0634dda7f31fb773e72c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2612874cf5accf42d9a94cb51996a020 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_result, mod_consts.const_str_digest_bfc31f7bb28b0dff02aab7e1b68f15b8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_232996e130447a7878474a5c5aef6a29 = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run, mod_consts.const_str_digest_7e5f6b270737299a8c28b0bbcb527099, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_776d783daa9379896e6e6d86e3952cb9 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_awaitable, mod_consts.const_str_digest_e9bd98eab5a5387a7d56ece893a6495d, mod_consts.const_tuple_str_plain_work_str_plain_do_work_tuple, mod_consts.const_tuple_str_plain_self_tuple, 1, 0, 0);
code_objects_d6a8b95e91d4071b3813b3f36110a24d = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_callable, mod_consts.const_str_digest_b9b7460973961fbc45c26069e0424e8c, mod_consts.const_tuple_str_plain_work_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 1, 0, 0);
code_objects_e96c6d85e2f7b3f62a3a7dd30fb0d658 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run_coroutine, mod_consts.const_str_digest_205440327a2ca4be39742718e82456aa, mod_consts.const_tuple_str_plain_work_str_plain_run_awaitable_tuple, mod_consts.const_tuple_str_plain_run_awaitable_tuple, 1, 0, 0);
code_objects_e1ae63384b4da2bf99f217127337a4e3 = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_state, mod_consts.const_str_digest_8ef446c8ddd98c2119890795f4de81c8, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_88a5f957242d574a4bf3093c0cb7d7c6 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_state, mod_consts.const_str_digest_8ef446c8ddd98c2119890795f4de81c8, mod_consts.const_tuple_str_plain_self_str_plain_state_str_plain_changed_tuple, NULL, 2, 0, 0);
code_objects_1b9762ddacd722d3e2ba555b0e37bcf6 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_task_done_callback, mod_consts.const_str_digest_7884576585753e891c0d9a00f43acb1c, mod_consts.const_tuple_str_plain__task_str_plain_done_callback_str_plain_self_tuple, mod_consts.const_tuple_str_plain_done_callback_str_plain_self_tuple, 1, 0, 0);
code_objects_e8a271ffd9ef21d41c2529cd63caab31 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_total_steps, mod_consts.const_str_digest_3d2b19cfc648280372e2579eb2a1ac56, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_80b238ebe05b117ee170336a82781ed9 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_abd52926cfb573ff6840130e7a002a0e, mod_consts.const_tuple_cb3677c5675884da0dccd2a8b3645cdb_tuple, NULL, 3, 0, 0);
code_objects_ad7278ce344bbb30d633f576e6ea9d35 = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait, mod_consts.const_str_digest_b6c33b038512975fe3359657ded47c3f, mod_consts.const_tuple_str_plain_self_str_plain_error_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$worker$$$function__23__run_async$$$coroutine__1__run_async(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$worker$$$function__24_run$$$coroutine__1_run(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$worker$$$function__25__run$$$coroutine__1__run(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$worker$$$function__28_wait$$$coroutine__1_wait(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__10_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__11_state(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__12_is_cancelled(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__13_is_running(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__14_is_finished(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__15_completed_steps(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__16_total_steps(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__17_progress(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__18_result(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__19_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__20_update(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__21_advance(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__23__run_async(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__24_run(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__25__run(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__26__start(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__26__start$$$function__1_task_done_callback(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__27_cancel(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__28_wait(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__2_get_current_worker(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__3___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__4___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__5___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__6___rich_repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__7___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__8___rich_repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$worker$$$function__9_node(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$worker$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_error = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6c6a2fbc8ffc182d99725e1a9080d182, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$worker$$$function__1___init__ = cache_frame_frame_textual$worker$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_error);
tmp_assattr_value_1 = par_error;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_error, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 54;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$worker, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_2c9f87964fec5deb62f1b6a004323ce2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_error);
tmp_operand_value_1 = par_error;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_textual$worker$$$function__1___init__->m_frame.f_lineno = 54;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__1___init__,
    type_description_1,
    par_self,
    par_error,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__1___init__ == cache_frame_frame_textual$worker$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__1___init__);
    cache_frame_frame_textual$worker$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__1___init__);

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
CHECK_OBJECT(par_error);
Py_DECREF(par_error);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_error);
Py_DECREF(par_error);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__2_get_current_worker(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__2_get_current_worker;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__2_get_current_worker = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__2_get_current_worker)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__2_get_current_worker);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__2_get_current_worker == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__2_get_current_worker = MAKE_FUNCTION_FRAME(tstate, code_objects_2c2ec94868309512a0cbfc8a9f01e8e7, module_textual$worker, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__2_get_current_worker->m_type_description == NULL);
frame_frame_textual$worker$$$function__2_get_current_worker = cache_frame_frame_textual$worker$$$function__2_get_current_worker;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__2_get_current_worker);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__2_get_current_worker) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$worker$active_worker(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_active_worker);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_1;
}
frame_frame_textual$worker$$$function__2_get_current_worker->m_frame.f_lineno = 75;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__2_get_current_worker, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__2_get_current_worker, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_LookupError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_2 = module_var_accessor_textual$worker$NoActiveWorker(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NoActiveWorker);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto try_except_handler_2;
}
frame_frame_textual$worker$$$function__2_get_current_worker->m_frame.f_lineno = 77;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_8a9fd31286279c9bf9b8443471168909_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_2;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_2;
}
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 79;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 74;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$worker$$$function__2_get_current_worker->m_frame)) {
        frame_frame_textual$worker$$$function__2_get_current_worker->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__2_get_current_worker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__2_get_current_worker->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__2_get_current_worker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__2_get_current_worker,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__2_get_current_worker == cache_frame_frame_textual$worker$$$function__2_get_current_worker) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__2_get_current_worker);
    cache_frame_frame_textual$worker$$$function__2_get_current_worker = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__2_get_current_worker);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_textual$worker$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3ea9dcc777b2e300ec038cb85fd059c0, module_textual$worker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__3___init__->m_type_description == NULL);
frame_frame_textual$worker$$$function__3___init__ = cache_frame_frame_textual$worker$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__3___init__);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_text);
tmp_assattr_value_1 = par_text;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_text, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__3___init__,
    type_description_1,
    par_self,
    par_text
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__3___init__ == cache_frame_frame_textual$worker$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__3___init__);
    cache_frame_frame_textual$worker$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__3___init__);

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
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__4___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__4___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__4___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__4___repr__)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__4___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__4___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__4___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bf6d24ec516d2712217f07bd7978038d, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__4___repr__->m_type_description == NULL);
frame_frame_textual$worker$$$function__4___repr__ = cache_frame_frame_textual$worker$$$function__4___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__4___repr__);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__4___repr__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_text);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__4___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__4___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__4___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__4___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__4___repr__ == cache_frame_frame_textual$worker$$$function__4___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__4___repr__);
    cache_frame_frame_textual$worker$$$function__4___repr__ = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__4___repr__);

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


static PyObject *impl_textual$worker$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_worker = python_pars[1];
PyObject *par_state = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cff4fc3e8a32a748d175d73392c54d28, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__5___init__->m_type_description == NULL);
frame_frame_textual$worker$$$function__5___init__ = cache_frame_frame_textual$worker$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__5___init__);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_worker);
tmp_assattr_value_1 = par_worker;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_worker, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_state);
tmp_assattr_value_2 = par_state;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_state, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$worker, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__5___init__->m_frame.f_lineno = 135;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__5___init__,
    type_description_1,
    par_self,
    par_worker,
    par_state,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__5___init__ == cache_frame_frame_textual$worker$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__5___init__);
    cache_frame_frame_textual$worker$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__5___init__);

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
CHECK_OBJECT(par_worker);
Py_DECREF(par_worker);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_worker);
Py_DECREF(par_worker);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__6___rich_repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr__(tstate, tmp_closure_1);

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
struct textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals *generator_heap = (struct textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a7669f6cbb0505099ac3eb6dd1419c66, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_worker);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 138;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_state);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 139;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    generator->m_closure[0]
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr___context,
        module_textual$worker,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_345de99035f06d3081563cc6f9e9ba75,
#endif
        code_objects_a7669f6cbb0505099ac3eb6dd1419c66,
        closure,
        1,
#if 1
        sizeof(struct textual$worker$$$function__6___rich_repr__$$$genobj__1___rich_repr___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$worker$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_node = python_pars[1];
PyObject *par_work = python_pars[2];
PyObject *par_name = python_pars[3];
PyObject *par_group = python_pars[4];
PyObject *par_description = python_pars[5];
PyObject *par_exit_on_error = python_pars[6];
PyObject *par_thread = python_pars[7];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_7841691d522e6e24c67ed7b94ac598ca, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__7___init__->m_type_description == NULL);
frame_frame_textual$worker$$$function__7___init__ = cache_frame_frame_textual$worker$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__7___init__);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_node);
tmp_assattr_value_1 = par_node;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__node, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_work);
tmp_assattr_value_2 = par_work;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__work, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_name);
tmp_assattr_value_3 = par_name;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_name, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_group);
tmp_assattr_value_4 = par_group;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_group, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_description);
tmp_len_arg_1 = par_description;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1000;
tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_description);
tmp_assattr_value_5 = par_description;
Py_INCREF(tmp_assattr_value_5);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_description);
tmp_expression_value_1 = par_description;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_pos_1000_none;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_3501979af1b70861f5e9d6a0f04129bf;
tmp_assattr_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_description, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_exit_on_error);
tmp_assattr_value_6 = par_exit_on_error;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_exit_on_error, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_1;
PyObject *tmp_assattr_target_7;
tmp_called_value_1 = module_var_accessor_textual$worker$Event(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Event);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__7___init__->m_frame.f_lineno = 171;
tmp_assattr_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_cancelled_event, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_thread);
tmp_assattr_value_8 = par_thread;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__thread_worker, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_9;
tmp_expression_value_2 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_PENDING);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain__state, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__state);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_state, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain__error, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
tmp_assattr_value_12 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain__completed_steps, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
tmp_assattr_value_13 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain__total_steps, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
tmp_assattr_value_14 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain__cancelled, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_called_value_2;
PyObject *tmp_assattr_target_15;
tmp_called_value_2 = module_var_accessor_textual$worker$monotonic(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_monotonic);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__7___init__->m_frame.f_lineno = 180;
tmp_assattr_value_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assattr_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain__created_time, tmp_assattr_value_15);
CHECK_OBJECT(tmp_assattr_value_15);
Py_DECREF(tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_assattr_target_16;
tmp_assattr_value_16 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain__result, tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_assattr_target_17;
tmp_assattr_value_17 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain__task, tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__node);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_post_message);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_StateChanged);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__state);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__7___init__->m_frame.f_lineno = 183;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 183;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__7___init__->m_frame.f_lineno = 183;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__7___init__,
    type_description_1,
    par_self,
    par_node,
    par_work,
    par_name,
    par_group,
    par_description,
    par_exit_on_error,
    par_thread
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__7___init__ == cache_frame_frame_textual$worker$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__7___init__);
    cache_frame_frame_textual$worker$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__7___init__);

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
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_group);
Py_DECREF(par_group);
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_exit_on_error);
Py_DECREF(par_exit_on_error);
CHECK_OBJECT(par_thread);
Py_DECREF(par_thread);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_group);
Py_DECREF(par_group);
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_exit_on_error);
Py_DECREF(par_exit_on_error);
CHECK_OBJECT(par_thread);
Py_DECREF(par_thread);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__8___rich_repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr__(tstate, tmp_closure_1);

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
struct textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr___locals *generator_heap = (struct textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_3272340dcb2c544e3b9c249fdec2a2ce, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_textual$worker$_ReprText(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__ReprText);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_state);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 186;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_expression_value_4;
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_tuple_element_1 = const_str_plain_name;
tmp_expression_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM0(tmp_expression_value_4, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_name);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_expression_value_4, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_empty;
PyTuple_SET_ITEM0(tmp_expression_value_4, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_expression_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_4;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_tuple_element_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_tuple_element_2 = mod_consts.const_str_plain_group;
tmp_expression_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM0(tmp_expression_value_6, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 188;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}

tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_group);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 188;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_expression_value_6, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_plain_default;
PyTuple_SET_ITEM0(tmp_expression_value_6, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_6;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 188;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
{
PyObject *tmp_expression_value_8;
PyObject *tmp_tuple_element_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
tmp_tuple_element_3 = mod_consts.const_str_plain_description;
tmp_expression_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM0(tmp_expression_value_8, 0, tmp_tuple_element_3);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_3;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_description);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_expression_value_8, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = const_str_empty;
PyTuple_SET_ITEM0(tmp_expression_value_8, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 4;
return tmp_expression_value_8;
yield_return_4:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 189;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
{
PyObject *tmp_expression_value_10;
PyObject *tmp_tuple_element_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_5;
tmp_tuple_element_4 = mod_consts.const_str_plain_progress;
tmp_expression_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_3;
PyTuple_SET_ITEM0(tmp_expression_value_10, 0, tmp_tuple_element_4);
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_round);
assert(tmp_called_value_2 != NULL);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_4;
}

tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_progress);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_4;
}
tmp_args_element_value_3 = const_int_pos_1;
generator->m_frame->m_frame.f_lineno = 190;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "c";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_expression_value_10, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = const_float_0_0;
PyTuple_SET_ITEM0(tmp_expression_value_10, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_expression_value_10);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 5;
return tmp_expression_value_10;
yield_return_5:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_yield_result_5 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_5);
Py_DECREF(tmp_yield_result_5);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    generator->m_closure[0]
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr___context,
        module_textual$worker,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_e2181b9f90b0d9a1fe1f6b0cb9c72390,
#endif
        code_objects_3272340dcb2c544e3b9c249fdec2a2ce,
        closure,
        1,
#if 1
        sizeof(struct textual$worker$$$function__8___rich_repr__$$$genobj__1___rich_repr___locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$worker$$$function__9_node(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__9_node;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__9_node = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__9_node)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__9_node);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__9_node == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__9_node = MAKE_FUNCTION_FRAME(tstate, code_objects_b0fecfa5487b24d7bcc3a464b9f7b9e3, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__9_node->m_type_description == NULL);
frame_frame_textual$worker$$$function__9_node = cache_frame_frame_textual$worker$$$function__9_node;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__9_node);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__9_node) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__node);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__9_node, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__9_node->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__9_node, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__9_node,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__9_node == cache_frame_frame_textual$worker$$$function__9_node) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__9_node);
    cache_frame_frame_textual$worker$$$function__9_node = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__9_node);

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


static PyObject *impl_textual$worker$$$function__10_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__10_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__10_state = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__10_state)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__10_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__10_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__10_state = MAKE_FUNCTION_FRAME(tstate, code_objects_e1ae63384b4da2bf99f217127337a4e3, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__10_state->m_type_description == NULL);
frame_frame_textual$worker$$$function__10_state = cache_frame_frame_textual$worker$$$function__10_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__10_state);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__10_state) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__10_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__10_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__10_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__10_state,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__10_state == cache_frame_frame_textual$worker$$$function__10_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__10_state);
    cache_frame_frame_textual$worker$$$function__10_state = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__10_state);

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


static PyObject *impl_textual$worker$$$function__11_state(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_state = python_pars[1];
PyObject *var_changed = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__11_state;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__11_state = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__11_state)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__11_state);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__11_state == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__11_state = MAKE_FUNCTION_FRAME(tstate, code_objects_88a5f957242d574a4bf3093c0cb7d7c6, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__11_state->m_type_description == NULL);
frame_frame_textual$worker$$$function__11_state = cache_frame_frame_textual$worker$$$function__11_state;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__11_state);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__11_state) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_cmp_expr_left_1 = par_state;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__state);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_changed == NULL);
var_changed = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_state);
tmp_assattr_value_1 = par_state;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__state, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_changed);
tmp_truth_name_1 = CHECK_IF_TRUE(var_changed);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "ooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__node);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_post_message);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_self);
tmp_args_element_value_2 = par_self;
CHECK_OBJECT(par_state);
tmp_args_element_value_3 = par_state;
frame_frame_textual$worker$$$function__11_state->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_StateChanged,
        call_args
    );
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 208;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__11_state->m_frame.f_lineno = 208;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__11_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__11_state->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__11_state, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__11_state,
    type_description_1,
    par_self,
    par_state,
    var_changed
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__11_state == cache_frame_frame_textual$worker$$$function__11_state) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__11_state);
    cache_frame_frame_textual$worker$$$function__11_state = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__11_state);

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
CHECK_OBJECT(var_changed);
CHECK_OBJECT(var_changed);
Py_DECREF(var_changed);
var_changed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_changed);
var_changed = NULL;
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
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__12_is_cancelled(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__12_is_cancelled;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__12_is_cancelled = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__12_is_cancelled)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__12_is_cancelled);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__12_is_cancelled == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__12_is_cancelled = MAKE_FUNCTION_FRAME(tstate, code_objects_846674b693d45cc231ba5984b34c3d64, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__12_is_cancelled->m_type_description == NULL);
frame_frame_textual$worker$$$function__12_is_cancelled = cache_frame_frame_textual$worker$$$function__12_is_cancelled;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__12_is_cancelled);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__12_is_cancelled) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__cancelled);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__12_is_cancelled, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__12_is_cancelled->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__12_is_cancelled, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__12_is_cancelled,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__12_is_cancelled == cache_frame_frame_textual$worker$$$function__12_is_cancelled) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__12_is_cancelled);
    cache_frame_frame_textual$worker$$$function__12_is_cancelled = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__12_is_cancelled);

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


static PyObject *impl_textual$worker$$$function__13_is_running(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__13_is_running;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__13_is_running = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__13_is_running)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__13_is_running);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__13_is_running == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__13_is_running = MAKE_FUNCTION_FRAME(tstate, code_objects_5ad521684fc279eb1fcb9315439c3647, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__13_is_running->m_type_description == NULL);
frame_frame_textual$worker$$$function__13_is_running = cache_frame_frame_textual$worker$$$function__13_is_running;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__13_is_running);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__13_is_running) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_RUNNING);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 221;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__13_is_running, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__13_is_running->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__13_is_running, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__13_is_running,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__13_is_running == cache_frame_frame_textual$worker$$$function__13_is_running) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__13_is_running);
    cache_frame_frame_textual$worker$$$function__13_is_running = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__13_is_running);

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


static PyObject *impl_textual$worker$$$function__14_is_finished(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__14_is_finished;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__14_is_finished = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__14_is_finished)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__14_is_finished);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__14_is_finished == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__14_is_finished = MAKE_FUNCTION_FRAME(tstate, code_objects_bd6809bceef5204563e745bfde442b13, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__14_is_finished->m_type_description == NULL);
frame_frame_textual$worker$$$function__14_is_finished = cache_frame_frame_textual$worker$$$function__14_is_finished;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__14_is_finished);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__14_is_finished) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CANCELLED);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_expression_value_3 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ERROR);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
tmp_expression_value_4 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_SUCCESS);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__14_is_finished, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__14_is_finished->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__14_is_finished, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__14_is_finished,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__14_is_finished == cache_frame_frame_textual$worker$$$function__14_is_finished) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__14_is_finished);
    cache_frame_frame_textual$worker$$$function__14_is_finished = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__14_is_finished);

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


static PyObject *impl_textual$worker$$$function__15_completed_steps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__15_completed_steps;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__15_completed_steps = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__15_completed_steps)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__15_completed_steps);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__15_completed_steps == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__15_completed_steps = MAKE_FUNCTION_FRAME(tstate, code_objects_686498afd0467f9d438deb2f6d59a4ee, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__15_completed_steps->m_type_description == NULL);
frame_frame_textual$worker$$$function__15_completed_steps = cache_frame_frame_textual$worker$$$function__15_completed_steps;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__15_completed_steps);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__15_completed_steps) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__completed_steps);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__15_completed_steps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__15_completed_steps->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__15_completed_steps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__15_completed_steps,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__15_completed_steps == cache_frame_frame_textual$worker$$$function__15_completed_steps) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__15_completed_steps);
    cache_frame_frame_textual$worker$$$function__15_completed_steps = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__15_completed_steps);

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


static PyObject *impl_textual$worker$$$function__16_total_steps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__16_total_steps;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__16_total_steps = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__16_total_steps)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__16_total_steps);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__16_total_steps == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__16_total_steps = MAKE_FUNCTION_FRAME(tstate, code_objects_e8a271ffd9ef21d41c2529cd63caab31, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__16_total_steps->m_type_description == NULL);
frame_frame_textual$worker$$$function__16_total_steps = cache_frame_frame_textual$worker$$$function__16_total_steps;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__16_total_steps);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__16_total_steps) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__total_steps);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__16_total_steps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__16_total_steps->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__16_total_steps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__16_total_steps,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__16_total_steps == cache_frame_frame_textual$worker$$$function__16_total_steps) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__16_total_steps);
    cache_frame_frame_textual$worker$$$function__16_total_steps = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__16_total_steps);

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


static PyObject *impl_textual$worker$$$function__17_progress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__17_progress;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__17_progress = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__17_progress)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__17_progress);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__17_progress == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__17_progress = MAKE_FUNCTION_FRAME(tstate, code_objects_312f5f2b32bdfbb840d431884cacf99f, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__17_progress->m_type_description == NULL);
frame_frame_textual$worker$$$function__17_progress = cache_frame_frame_textual$worker$$$function__17_progress;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__17_progress);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__17_progress) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__total_steps);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
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
tmp_return_value = const_float_0_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
tmp_args_element_value_3 = mod_consts.const_int_pos_100;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__completed_steps);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__total_steps);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 250;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_float_100_0;
tmp_args_element_value_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__17_progress->m_frame.f_lineno = 250;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__17_progress->m_frame.f_lineno = 250;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__17_progress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__17_progress->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__17_progress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__17_progress,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__17_progress == cache_frame_frame_textual$worker$$$function__17_progress) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__17_progress);
    cache_frame_frame_textual$worker$$$function__17_progress = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__17_progress);

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


static PyObject *impl_textual$worker$$$function__18_result(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__18_result;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__18_result = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__18_result)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__18_result);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__18_result == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__18_result = MAKE_FUNCTION_FRAME(tstate, code_objects_2612874cf5accf42d9a94cb51996a020, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__18_result->m_type_description == NULL);
frame_frame_textual$worker$$$function__18_result = cache_frame_frame_textual$worker$$$function__18_result;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__18_result);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__18_result) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__result);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__18_result, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__18_result->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__18_result, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__18_result,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__18_result == cache_frame_frame_textual$worker$$$function__18_result) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__18_result);
    cache_frame_frame_textual$worker$$$function__18_result = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__18_result);

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


static PyObject *impl_textual$worker$$$function__19_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__19_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__19_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__19_error)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__19_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__19_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__19_error = MAKE_FUNCTION_FRAME(tstate, code_objects_6ba9b91a88dda4b652145ed3430f8cf9, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__19_error->m_type_description == NULL);
frame_frame_textual$worker$$$function__19_error = cache_frame_frame_textual$worker$$$function__19_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__19_error);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__19_error) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__error);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__19_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__19_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__19_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__19_error,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__19_error == cache_frame_frame_textual$worker$$$function__19_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__19_error);
    cache_frame_frame_textual$worker$$$function__19_error = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__19_error);

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


static PyObject *impl_textual$worker$$$function__20_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_completed_steps = python_pars[1];
PyObject *par_total_steps = python_pars[2];
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__20_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__20_update = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__20_update)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__20_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__20_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__20_update = MAKE_FUNCTION_FRAME(tstate, code_objects_80b238ebe05b117ee170336a82781ed9, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__20_update->m_type_description == NULL);
frame_frame_textual$worker$$$function__20_update = cache_frame_frame_textual$worker$$$function__20_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__20_update);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__20_update) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_completed_steps);
tmp_cmp_expr_left_1 = par_completed_steps;
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__completed_steps);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_completed_steps);
tmp_iadd_expr_right_1 = par_completed_steps;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__completed_steps, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_total_steps);
tmp_cmp_expr_left_2 = par_total_steps;
tmp_cmp_expr_right_2 = const_int_neg_1;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
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
PyObject *tmp_assattr_value_2;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_total_steps);
tmp_cmp_expr_left_3 = par_total_steps;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assattr_value_2 = Py_None;
Py_INCREF(tmp_assattr_value_2);
goto condexpr_end_1;
condexpr_false_1:;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
CHECK_OBJECT(par_total_steps);
tmp_args_element_value_2 = par_total_steps;
frame_frame_textual$worker$$$function__20_update->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__total_steps, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__20_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__20_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__20_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__20_update,
    type_description_1,
    par_self,
    par_completed_steps,
    par_total_steps
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__20_update == cache_frame_frame_textual$worker$$$function__20_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__20_update);
    cache_frame_frame_textual$worker$$$function__20_update = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__20_update);

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
CHECK_OBJECT(par_completed_steps);
Py_DECREF(par_completed_steps);
CHECK_OBJECT(par_total_steps);
Py_DECREF(par_total_steps);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_completed_steps);
Py_DECREF(par_completed_steps);
CHECK_OBJECT(par_total_steps);
Py_DECREF(par_total_steps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__21_advance(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_steps = python_pars[1];
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__21_advance;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__21_advance = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__21_advance)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__21_advance);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__21_advance == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__21_advance = MAKE_FUNCTION_FRAME(tstate, code_objects_edcc0b71d700124b23aa1447480bda2e, module_textual$worker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__21_advance->m_type_description == NULL);
frame_frame_textual$worker$$$function__21_advance = cache_frame_frame_textual$worker$$$function__21_advance;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__21_advance);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__21_advance) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__completed_steps);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_steps);
tmp_iadd_expr_right_1 = par_steps;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__completed_steps, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__21_advance, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__21_advance->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__21_advance, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__21_advance,
    type_description_1,
    par_self,
    par_steps
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__21_advance == cache_frame_frame_textual$worker$$$function__21_advance) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__21_advance);
    cache_frame_frame_textual$worker$$$function__21_advance = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__21_advance);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_steps);
Py_DECREF(par_steps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__22__run_threaded(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded(tstate, tmp_closure_1);

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
struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded_locals {
struct Nuitka_CellObject *var_run_awaitable;
PyObject *var_run_coroutine;
PyObject *var_run_callable;
PyObject *var_runner;
PyObject *var_loop;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded_locals *coroutine_heap = (struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_run_awaitable = Nuitka_Cell_NewEmpty();
coroutine_heap->var_run_coroutine = NULL;
coroutine_heap->var_run_callable = NULL;
coroutine_heap->var_runner = NULL;
coroutine_heap->var_loop = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_de4b99e577cff0f8cd485eeebdcaaddb);
tmp_closure_1[0] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_1 = MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable(tstate, tmp_annotations_1, tmp_closure_1);

assert(Nuitka_Cell_GET(coroutine_heap->var_run_awaitable) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_run_awaitable, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_39c3cc391bbd3bffae8e2419475e88fa);
tmp_closure_2[0] = coroutine_heap->var_run_awaitable;
Py_INCREF(tmp_closure_2[0]);
tmp_assign_source_2 = MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine(tstate, tmp_annotations_2, tmp_closure_2);

assert(coroutine_heap->var_run_coroutine == NULL);
coroutine_heap->var_run_coroutine = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_annotations_3;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_9ef4cf2172f051173ddecf698f380693);
tmp_closure_3[0] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_3[0]);
tmp_assign_source_3 = MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable(tstate, tmp_annotations_3, tmp_closure_3);

assert(coroutine_heap->var_run_callable == NULL);
coroutine_heap->var_run_callable = tmp_assign_source_3;
}
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ac9403189def0620cd8c8ce7c1d57341, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
int tmp_truth_name_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
int tmp_truth_name_2;
tmp_expression_value_1 = module_var_accessor_textual$worker$inspect(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_iscoroutinefunction);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__work);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 312;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 313;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__work);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 313;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_func);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 313;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_expression_value_5 = module_var_accessor_textual$worker$inspect(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_iscoroutinefunction);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__work);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_func);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 314;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_2);

coroutine_heap->exception_lineno = 314;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_right_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_1 = tmp_and_left_value_1;
and_end_1:;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(coroutine_heap->var_run_coroutine);
tmp_assign_source_4 = coroutine_heap->var_run_coroutine;
assert(coroutine_heap->var_runner == NULL);
Py_INCREF(tmp_assign_source_4);
coroutine_heap->var_runner = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
int tmp_truth_name_3;
tmp_expression_value_8 = module_var_accessor_textual$worker$inspect(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_isawaitable);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__work);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 317;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_3);

coroutine_heap->exception_lineno = 317;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_run_awaitable));
tmp_assign_source_5 = Nuitka_Cell_GET(coroutine_heap->var_run_awaitable);
assert(coroutine_heap->var_runner == NULL);
Py_INCREF(tmp_assign_source_5);
coroutine_heap->var_runner = tmp_assign_source_5;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_10;
int tmp_truth_name_4;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_4 != NULL);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__work);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 319;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_4);

coroutine_heap->exception_lineno = 319;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(coroutine_heap->var_run_callable);
tmp_assign_source_6 = coroutine_heap->var_run_callable;
assert(coroutine_heap->var_runner == NULL);
Py_INCREF(tmp_assign_source_6);
coroutine_heap->var_runner = tmp_assign_source_6;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_textual$worker$WorkerError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 322;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 322;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_a69635bd83e22a7ebf0be791d479b50d_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 322;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 322;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 322;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccoooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_textual$worker$asyncio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 324;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 324;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_running_loop);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 324;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_loop == NULL);
coroutine_heap->var_loop = tmp_assign_source_7;
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(coroutine_heap->var_loop);
tmp_cmp_expr_left_1 = coroutine_heap->var_loop;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
coroutine->m_frame->m_frame.f_lineno = 325;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 325;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccoooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_14;
coroutine->m_frame->m_frame.f_lineno = 326;
CHECK_OBJECT(coroutine_heap->var_loop);
tmp_expression_value_13 = coroutine_heap->var_loop;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_run_in_executor);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 326;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = Py_None;
CHECK_OBJECT(coroutine_heap->var_runner);
tmp_args_element_value_6 = coroutine_heap->var_runner;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 326;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__work);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_6);

coroutine_heap->exception_lineno = 326;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 326;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_expression_value_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 326;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = ASYNC_AWAIT(tstate, tmp_expression_value_12, await_normal);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 326;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_11;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 326;
coroutine_heap->type_description_1 = "ccoooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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
    coroutine->m_closure[0],
    coroutine_heap->var_run_awaitable,
    coroutine_heap->var_run_coroutine,
    coroutine_heap->var_run_callable,
    coroutine_heap->var_runner,
    coroutine_heap->var_loop
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
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_run_awaitable);
CHECK_OBJECT(coroutine_heap->var_run_awaitable);
Py_DECREF(coroutine_heap->var_run_awaitable);
coroutine_heap->var_run_awaitable = NULL;
CHECK_OBJECT(coroutine_heap->var_run_coroutine);
CHECK_OBJECT(coroutine_heap->var_run_coroutine);
Py_DECREF(coroutine_heap->var_run_coroutine);
coroutine_heap->var_run_coroutine = NULL;
CHECK_OBJECT(coroutine_heap->var_run_callable);
CHECK_OBJECT(coroutine_heap->var_run_callable);
Py_DECREF(coroutine_heap->var_run_callable);
coroutine_heap->var_run_callable = NULL;
CHECK_OBJECT(coroutine_heap->var_runner);
CHECK_OBJECT(coroutine_heap->var_runner);
Py_DECREF(coroutine_heap->var_runner);
coroutine_heap->var_runner = NULL;
CHECK_OBJECT(coroutine_heap->var_loop);
CHECK_OBJECT(coroutine_heap->var_loop);
Py_DECREF(coroutine_heap->var_loop);
coroutine_heap->var_loop = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->var_run_awaitable);
CHECK_OBJECT(coroutine_heap->var_run_awaitable);
Py_DECREF(coroutine_heap->var_run_awaitable);
coroutine_heap->var_run_awaitable = NULL;
CHECK_OBJECT(coroutine_heap->var_run_coroutine);
CHECK_OBJECT(coroutine_heap->var_run_coroutine);
Py_DECREF(coroutine_heap->var_run_coroutine);
coroutine_heap->var_run_coroutine = NULL;
CHECK_OBJECT(coroutine_heap->var_run_callable);
CHECK_OBJECT(coroutine_heap->var_run_callable);
Py_DECREF(coroutine_heap->var_run_callable);
coroutine_heap->var_run_callable = NULL;
Py_XDECREF(coroutine_heap->var_runner);
coroutine_heap->var_runner = NULL;
Py_XDECREF(coroutine_heap->var_loop);
coroutine_heap->var_loop = NULL;
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

static PyObject *MAKE_COROUTINE_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded_context,
        module_textual$worker,
        mod_consts.const_str_plain__run_threaded,
        mod_consts.const_str_digest_adc650af413c9746b07b94ee16d752da,
        code_objects_ac9403189def0620cd8c8ce7c1d57341,
        closure,
        1,
#if 1
        sizeof(struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_work = Nuitka_Cell_New1(python_pars[0]);
PyObject *var_do_work = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9);
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_work;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_do_work == NULL);
var_do_work = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable = MAKE_FUNCTION_FRAME(tstate, code_objects_776d783daa9379896e6e6d86e3952cb9, module_textual$worker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable->m_type_description == NULL);
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable = cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
tmp_expression_value_1 = module_var_accessor_textual$worker$asyncio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_run);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_do_work);
tmp_called_value_2 = var_do_work;
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable->m_frame.f_lineno = 298;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 298;
type_description_1 = "co";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable->m_frame.f_lineno = 298;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "co";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable,
    type_description_1,
    par_work,
    var_do_work
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable == cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable);
    cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_work);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
par_work = NULL;
CHECK_OBJECT(var_do_work);
CHECK_OBJECT(var_do_work);
Py_DECREF(var_do_work);
var_do_work = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_work);
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
par_work = NULL;
CHECK_OBJECT(var_do_work);
CHECK_OBJECT(var_do_work);
Py_DECREF(var_do_work);
var_do_work = NULL;
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


static PyObject *impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work(tstate, tmp_closure_1);

goto function_return_exit;
}

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
struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work_locals *coroutine_heap = (struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_33cba2742207e7ccd8021330efa0104b, module_textual$worker, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_textual$worker$active_worker(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_active_worker);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_set);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 295;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 295;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
coroutine->m_frame->m_frame.f_lineno = 296;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_work);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 296;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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

goto function_return_exit;

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
    coroutine->m_closure[1]
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work_context,
        module_textual$worker,
        mod_consts.const_str_plain_do_work,
        mod_consts.const_str_digest_417b4f76bd74b9e58a87ae05471588d5,
        code_objects_33cba2742207e7ccd8021330efa0104b,
        closure,
        2,
#if 1
        sizeof(struct textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work$$$coroutine__1_do_work_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_work = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine = MAKE_FUNCTION_FRAME(tstate, code_objects_e96c6d85e2f7b3f62a3a7dd30fb0d658, module_textual$worker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine->m_type_description == NULL);
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine = cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_run_awaitable);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 304;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_work);
tmp_called_value_2 = par_work;
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine->m_frame.f_lineno = 304;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine->m_frame.f_lineno = 304;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine,
    type_description_1,
    par_work,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine == cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine);
    cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_work);
Py_DECREF(par_work);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_work = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable = MAKE_FUNCTION_FRAME(tstate, code_objects_d6a8b95e91d4071b3813b3f36110a24d, module_textual$worker, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable->m_type_description == NULL);
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable = cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_textual$worker$active_worker(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_active_worker);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_set);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 308;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable->m_frame.f_lineno = 308;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
CHECK_OBJECT(par_work);
tmp_called_value_2 = par_work;
frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable->m_frame.f_lineno = 309;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable,
    type_description_1,
    par_work,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable == cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable);
    cache_frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_work);
Py_DECREF(par_work);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_work);
Py_DECREF(par_work);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__23__run_async(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_textual$worker$$$function__23__run_async$$$coroutine__1__run_async(tstate, tmp_closure_1);

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
struct textual$worker$$$function__23__run_async$$$coroutine__1__run_async_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *textual$worker$$$function__23__run_async$$$coroutine__1__run_async_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__23__run_async$$$coroutine__1__run_async_locals *coroutine_heap = (struct textual$worker$$$function__23__run_async$$$coroutine__1__run_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d0ed07d2a8afdbc7d07079a0588d348c, module_textual$worker, sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
int tmp_truth_name_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
int tmp_truth_name_2;
tmp_expression_value_1 = module_var_accessor_textual$worker$inspect(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 335;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_iscoroutinefunction);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 335;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 335;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__work);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 335;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 335;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 335;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 335;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 335;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 336;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__work);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 336;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain_func);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 336;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_expression_value_5 = module_var_accessor_textual$worker$inspect(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_iscoroutinefunction);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__work);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_func);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 337;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_2);

coroutine_heap->exception_lineno = 337;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_right_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_right_value_1 = tmp_and_left_value_1;
and_end_1:;
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
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_instance_1;
coroutine->m_frame->m_frame.f_lineno = 339;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 339;
tmp_expression_value_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__work);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_11;
int tmp_truth_name_3;
tmp_expression_value_10 = module_var_accessor_textual$worker$inspect(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_isawaitable);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__work);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_3);

coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 340;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_3);

coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
coroutine->m_frame->m_frame.f_lineno = 341;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 341;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__work);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 341;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = ASYNC_AWAIT(tstate, tmp_expression_value_13, await_normal);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 341;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_12;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_expression_value_14, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 341;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_15;
int tmp_truth_name_4;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_4 != NULL);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__work);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 342;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_4);

coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_textual$worker$WorkerError(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerError);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 343;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_d2ee694f9c3293707527dfa0133506b0_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 343;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 343;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "c";
goto frame_exception_exit_1;
}
branch_no_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_textual$worker$WorkerError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 344;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_52fbff37d1c19a70dca49f64f6b37edb_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 344;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 344;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "c";
goto frame_exception_exit_1;
}

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

goto function_return_exit;

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
    coroutine->m_closure[0]
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$worker$$$function__23__run_async$$$coroutine__1__run_async(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$worker$$$function__23__run_async$$$coroutine__1__run_async_context,
        module_textual$worker,
        mod_consts.const_str_plain__run_async,
        mod_consts.const_str_digest_558a63321765bbda46bdf6e4dc9c6f10,
        code_objects_d0ed07d2a8afdbc7d07079a0588d348c,
        closure,
        1,
#if 1
        sizeof(struct textual$worker$$$function__23__run_async$$$coroutine__1__run_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$worker$$$function__24_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_textual$worker$$$function__24_run$$$coroutine__1_run(tstate, tmp_closure_1);

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
struct textual$worker$$$function__24_run$$$coroutine__1_run_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *textual$worker$$$function__24_run$$$coroutine__1_run_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__24_run$$$coroutine__1_run_locals *coroutine_heap = (struct textual$worker$$$function__24_run$$$coroutine__1_run_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_232996e130447a7878474a5c5aef6a29, module_textual$worker, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_called_instance_2;
coroutine->m_frame->m_frame.f_lineno = 354;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__thread_worker);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 355;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__run_threaded);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 355;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain__run_async);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 355;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_expression_value_3, sizeof(PyObject *), &tmp_attribute_value_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_expression_value_3, sizeof(PyObject *), &tmp_attribute_value_1, sizeof(PyObject *), &tmp_truth_name_1, sizeof(int), &tmp_called_instance_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 354;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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

goto function_return_exit;

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
    coroutine->m_closure[0]
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$worker$$$function__24_run$$$coroutine__1_run(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$worker$$$function__24_run$$$coroutine__1_run_context,
        module_textual$worker,
        mod_consts.const_str_plain_run,
        mod_consts.const_str_digest_7e5f6b270737299a8c28b0bbcb527099,
        code_objects_232996e130447a7878474a5c5aef6a29,
        closure,
        1,
#if 1
        sizeof(struct textual$worker$$$function__24_run$$$coroutine__1_run_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$worker$$$function__25__run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_app = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_app;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_textual$worker$$$function__25__run$$$coroutine__1__run(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_app);
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
par_app = NULL;
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
struct textual$worker$$$function__25__run$$$coroutine__1__run_locals {
PyObject *var_error;
PyObject *var_Traceback;
PyObject *var_worker_failed;
nuitka_bool tmp_try_except_1__unhandled_indicator;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
};
#endif

static PyObject *textual$worker$$$function__25__run$$$coroutine__1__run_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__25__run$$$coroutine__1__run_locals *coroutine_heap = (struct textual$worker$$$function__25__run$$$coroutine__1__run_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_error = NULL;
coroutine_heap->var_Traceback = NULL;
coroutine_heap->var_worker_failed = NULL;
coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_acfcbcc2f5cf8292d6f903d2879aef78, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 364;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__context);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 364;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_textual$worker$active_worker(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_active_worker);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 365;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_set);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 365;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 365;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 365;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 365;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_1;
tmp_expression_value_4 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_RUNNING);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_state, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_log);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_worker);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 368;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_2;
coroutine->m_frame->m_frame.f_lineno = 370;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 370;
tmp_expression_value_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_run);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
tmp_expression_value_7 = ASYNC_AWAIT(tstate, tmp_expression_value_8, await_normal);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_7;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
tmp_assattr_value_2 = yield_return_value;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__result, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
}
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_9;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_9 = module_var_accessor_textual$worker$asyncio(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_CancelledError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_6;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 371;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_6;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_7); 
assert(coroutine_heap->var_error == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var_error = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_assattr_target_3;
tmp_expression_value_10 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_CANCELLED);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_state, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 372;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(coroutine_heap->var_error);
tmp_assattr_value_4 = coroutine_heap->var_error;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}

tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__error, tmp_assattr_value_4);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}

tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_log);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_worker);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 374;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_error);
coroutine_heap->var_error = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_6;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->var_error);
coroutine_heap->var_error = NULL;

goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_Exception;
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
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_8); 
assert(coroutine_heap->var_error == NULL);
Py_INCREF(tmp_assign_source_8);
coroutine_heap->var_error = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_assattr_target_5;
tmp_expression_value_13 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_ERROR);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_assattr_target_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_state, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 376;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(coroutine_heap->var_error);
tmp_assattr_value_6 = coroutine_heap->var_error;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_assattr_target_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__error, tmp_assattr_value_6);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_log);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_worker);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_args_element_value_5 = mod_consts.const_str_plain_failed;
CHECK_OBJECT(coroutine_heap->var_error);
tmp_operand_value_1 = coroutine_heap->var_error;
tmp_args_element_value_6 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 378;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 378;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_4628878707b5a75034889e1dd73311bc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Traceback_tuple;
tmp_level_value_1 = const_int_0;
coroutine->m_frame->m_frame.f_lineno = 379;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 379;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Traceback,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Traceback);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 379;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->var_Traceback == NULL);
coroutine_heap->var_Traceback = tmp_assign_source_9;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_7;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_log);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_worker);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(coroutine_heap->var_Traceback);
tmp_called_value_7 = coroutine_heap->var_Traceback;
coroutine->m_frame->m_frame.f_lineno = 381;
tmp_args_element_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_6);

coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 381;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_exit_on_error);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_19;
tmp_called_value_8 = module_var_accessor_textual$worker$WorkerFailed(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerFailed);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__error);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
coroutine->m_frame->m_frame.f_lineno = 383;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 383;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
assert(coroutine_heap->var_worker_failed == NULL);
coroutine_heap->var_worker_failed = tmp_assign_source_10;
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_9;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}

tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
CHECK_OBJECT(coroutine_heap->var_worker_failed);
tmp_args_element_value_9 = coroutine_heap->var_worker_failed;
coroutine->m_frame->m_frame.f_lineno = 384;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain__handle_exception, tmp_args_element_value_9);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_3:;
goto try_end_3;
// Exception handler code:
try_except_handler_8:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_error);
coroutine_heap->var_error = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
Py_XDECREF(coroutine_heap->var_error);
coroutine_heap->var_error = NULL;

goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 369;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_6;
branch_end_2:;
branch_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
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
PyObject *tmp_assattr_value_7;
PyObject *tmp_expression_value_20;
PyObject *tmp_assattr_target_7;
tmp_expression_value_20 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_SUCCESS);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_assattr_value_7);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_assattr_target_7 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_state, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 386;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_10;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_expression_value_22 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_log);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_worker);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_10 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 387;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

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
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_5 = (coroutine_heap->tmp_res != 0) ? true : false;
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
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_11;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_10 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_11 = EXC_TYPE(tstate);
tmp_args_element_value_12 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_12); 
tmp_args_element_value_13 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_13 == NULL) {
    tmp_args_element_value_13 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 364;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_9;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_9;
}
tmp_condition_result_6 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 364;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_9;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 364;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "ccooo";
goto try_except_handler_9;
branch_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

goto try_except_handler_3;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_7;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_7 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_5;
nuitka_bool tmp_cmp_expr_right_5;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_5 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_8;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_11 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 364;
tmp_call_result_8 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_11, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_7);

coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_7:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_7;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = coroutine_heap->tmp_with_1__indicator;
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
PyObject *tmp_call_result_9;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_12 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 364;
tmp_call_result_9 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_12, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 364;
coroutine_heap->type_description_1 = "ccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_8:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_8 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_8;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;

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
    coroutine->m_closure[0],
    coroutine_heap->var_error,
    coroutine_heap->var_Traceback,
    coroutine_heap->var_worker_failed
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_Traceback);
coroutine_heap->var_Traceback = NULL;
Py_XDECREF(coroutine_heap->var_worker_failed);
coroutine_heap->var_worker_failed = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_9 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_Traceback);
coroutine_heap->var_Traceback = NULL;
Py_XDECREF(coroutine_heap->var_worker_failed);
coroutine_heap->var_worker_failed = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_9;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

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

static PyObject *MAKE_COROUTINE_textual$worker$$$function__25__run$$$coroutine__1__run(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$worker$$$function__25__run$$$coroutine__1__run_context,
        module_textual$worker,
        mod_consts.const_str_plain__run,
        mod_consts.const_str_digest_e04f2427b8aef23ba7adc0b9788c4622,
        code_objects_acfcbcc2f5cf8292d6f903d2879aef78,
        closure,
        2,
#if 1
        sizeof(struct textual$worker$$$function__25__run$$$coroutine__1__run_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$worker$$$function__26__start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_app = python_pars[1];
struct Nuitka_CellObject *par_done_callback = Nuitka_Cell_New1(python_pars[2]);
PyObject *var_task_done_callback = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__26__start;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__26__start = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__26__start)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__26__start);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__26__start == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__26__start = MAKE_FUNCTION_FRAME(tstate, code_objects_e3823ab49ecafb8629a35934686bf42a, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__26__start->m_type_description == NULL);
frame_frame_textual$worker$$$function__26__start = cache_frame_frame_textual$worker$$$function__26__start;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__26__start);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__26__start) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__task);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 398;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
tmp_expression_value_2 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_RUNNING);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_state, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_2;
tmp_expression_value_3 = module_var_accessor_textual$worker$asyncio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_create_task);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_called_instance_1 = Nuitka_Cell_GET(par_self);
CHECK_OBJECT(par_app);
tmp_args_element_value_2 = par_app;
frame_frame_textual$worker$$$function__26__start->m_frame.f_lineno = 401;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__run, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 401;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__26__start->m_frame.f_lineno = 401;
tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__task, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0ad0f2b7cb54d0c67274659574aa61da);
tmp_closure_1[0] = par_done_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_textual$worker$$$function__26__start$$$function__1_task_done_callback(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_task_done_callback == NULL);
var_task_done_callback = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(par_self));
tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__task);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_task_done_callback);
tmp_args_element_value_3 = var_task_done_callback;
frame_frame_textual$worker$$$function__26__start->m_frame.f_lineno = 414;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_add_done_callback, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_1 = "coco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__26__start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__26__start->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__26__start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__26__start,
    type_description_1,
    par_self,
    par_app,
    par_done_callback,
    var_task_done_callback
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__26__start == cache_frame_frame_textual$worker$$$function__26__start) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__26__start);
    cache_frame_frame_textual$worker$$$function__26__start = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__26__start);

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
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_done_callback);
CHECK_OBJECT(par_done_callback);
Py_DECREF(par_done_callback);
par_done_callback = NULL;
Py_XDECREF(var_task_done_callback);
var_task_done_callback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_done_callback);
CHECK_OBJECT(par_done_callback);
Py_DECREF(par_done_callback);
par_done_callback = NULL;
Py_XDECREF(var_task_done_callback);
var_task_done_callback = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_app);
Py_DECREF(par_app);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__26__start$$$function__1_task_done_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par__task = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_1b9762ddacd722d3e2ba555b0e37bcf6, module_textual$worker, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback->m_type_description == NULL);
frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback = cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_done_callback);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 411;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
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
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_done_callback);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 412;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 412;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback->m_frame.f_lineno = 412;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback,
    type_description_1,
    par__task,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback == cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback);
    cache_frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__26__start$$$function__1_task_done_callback);

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
CHECK_OBJECT(par__task);
Py_DECREF(par__task);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par__task);
Py_DECREF(par__task);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$worker$$$function__27_cancel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$worker$$$function__27_cancel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$worker$$$function__27_cancel = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$worker$$$function__27_cancel)) {
    Py_XDECREF(cache_frame_frame_textual$worker$$$function__27_cancel);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$worker$$$function__27_cancel == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$worker$$$function__27_cancel = MAKE_FUNCTION_FRAME(tstate, code_objects_17e778a56566426c46279b3f73cc110a, module_textual$worker, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$worker$$$function__27_cancel->m_type_description == NULL);
frame_frame_textual$worker$$$function__27_cancel = cache_frame_frame_textual$worker$$$function__27_cancel;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$function__27_cancel);
assert(Py_REFCNT(frame_frame_textual$worker$$$function__27_cancel) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__cancelled, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__task);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__task);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__27_cancel->m_frame.f_lineno = 420;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_cancel);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_cancelled_event);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_textual$worker$$$function__27_cancel->m_frame.f_lineno = 421;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_set);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$function__27_cancel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$function__27_cancel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$function__27_cancel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$function__27_cancel,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$worker$$$function__27_cancel == cache_frame_frame_textual$worker$$$function__27_cancel) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$worker$$$function__27_cancel);
    cache_frame_frame_textual$worker$$$function__27_cancel = NULL;
}

assertFrameObject(frame_frame_textual$worker$$$function__27_cancel);

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


static PyObject *impl_textual$worker$$$function__28_wait(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_textual$worker$$$function__28_wait$$$coroutine__1_wait(tstate, tmp_closure_1);

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
struct textual$worker$$$function__28_wait$$$coroutine__1_wait_locals {
PyObject *var_error;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$worker$$$function__28_wait$$$coroutine__1_wait_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$worker$$$function__28_wait$$$coroutine__1_wait_locals *coroutine_heap = (struct textual$worker$$$function__28_wait$$$coroutine__1_wait_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_error = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ad7278ce344bbb30d633f576e6ea9d35, module_textual$worker, sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$worker$active_worker(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_active_worker);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 434;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 434;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 434;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 434;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 434;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$worker$DeadlockError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_DeadlockError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 435;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 435;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_863360513d89cced18508e8a9e026869_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 435;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 435;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 435;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "co";
goto try_except_handler_1;
}
branch_no_1:;
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_LookupError;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 433;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "co";
goto try_except_handler_2;
branch_no_2:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 442;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 442;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 442;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_PENDING);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 442;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 442;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_textual$worker$WorkerError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 443;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 443;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_7fca01c453f7a9457231a06b4dc97622_tuple);

if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 443;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 443;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 443;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "co";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 444;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__task);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 444;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 446;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_3;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__task);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

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
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_8;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_expression_value_8 = module_var_accessor_textual$worker$asyncio(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_CancelledError);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_4;
}
tmp_condition_result_5 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(coroutine_heap->var_error == NULL);
Py_INCREF(tmp_assign_source_1);
coroutine_heap->var_error = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_1;
tmp_expression_value_9 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_CANCELLED);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_5;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_state, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(coroutine_heap->var_error);
tmp_assattr_value_2 = coroutine_heap->var_error;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 449;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_5;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__error, tmp_assattr_value_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 449;
coroutine_heap->type_description_1 = "co";
    goto try_except_handler_5;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_error);
coroutine_heap->var_error = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto try_except_handler_4;
// End of try:
try_end_4:;
Py_XDECREF(coroutine_heap->var_error);
coroutine_heap->var_error = NULL;

goto branch_end_5;
branch_no_5:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 445;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "co";
goto try_except_handler_4;
branch_end_5:;
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ERROR);
if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_6);

coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
CHECK_OBJECT(tmp_cmp_expr_right_6);
Py_DECREF(tmp_cmp_expr_right_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 450;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_12;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__error);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_3;
coroutine->m_frame->m_frame.f_lineno = 451;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_3 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_3;
coroutine_heap->exception_lineno = 451;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "co";
goto frame_exception_exit_1;
}
branch_no_7:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_raise_type_input_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_13;
tmp_called_value_4 = module_var_accessor_textual$worker$WorkerFailed(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerFailed);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 452;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 452;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__error);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 452;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 452;
tmp_raise_type_input_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_raise_type_input_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 452;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_raise_type_4 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_3);
CHECK_OBJECT(tmp_raise_type_input_3);
Py_DECREF(tmp_raise_type_input_3);
if (tmp_raise_type_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 452;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_4;
coroutine_heap->exception_lineno = 452;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "co";
goto frame_exception_exit_1;
}
goto branch_end_6;
branch_no_6:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_state);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = module_var_accessor_textual$worker$WorkerState(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerState);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_8);

coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_CANCELLED);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 453;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_raise_type_input_4;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_textual$worker$WorkerCancelled(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_WorkerCancelled);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 454;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 454;
tmp_raise_type_input_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_5fed38f250e70bc7a191dc0bf09b3085_tuple);

if (tmp_raise_type_input_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 454;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_raise_type_5 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_4);
CHECK_OBJECT(tmp_raise_type_input_4);
Py_DECREF(tmp_raise_type_input_4);
if (tmp_raise_type_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 454;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine_heap->exception_state.exception_value = tmp_raise_type_5;
coroutine_heap->exception_lineno = 454;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "co";
goto frame_exception_exit_1;
}
branch_no_8:;
branch_end_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_16;
tmp_called_value_6 = module_var_accessor_textual$worker$cast(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_ResultType;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__result);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 455;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 455;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}

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

goto function_return_exit;

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
    coroutine_heap->var_error
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$worker$$$function__28_wait$$$coroutine__1_wait(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$worker$$$function__28_wait$$$coroutine__1_wait_context,
        module_textual$worker,
        mod_consts.const_str_plain_wait,
        mod_consts.const_str_digest_b6c33b038512975fe3359657ded47c3f,
        code_objects_ad7278ce344bbb30d633f576e6ea9d35,
        closure,
        1,
#if 1
        sizeof(struct textual$worker$$$function__28_wait$$$coroutine__1_wait_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__10_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__10_state,
        mod_consts.const_str_plain_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ef446c8ddd98c2119890795f4de81c8,
#endif
        code_objects_e1ae63384b4da2bf99f217127337a4e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_f79353036fb310a9be7b3f613dfa77b9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__11_state(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__11_state,
        mod_consts.const_str_plain_state,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ef446c8ddd98c2119890795f4de81c8,
#endif
        code_objects_88a5f957242d574a4bf3093c0cb7d7c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_16c27e1bbfec4cc404721dba8c0f3cb0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__12_is_cancelled(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__12_is_cancelled,
        mod_consts.const_str_plain_is_cancelled,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_26bce359a148aecb730834972c040dd7,
#endif
        code_objects_846674b693d45cc231ba5984b34c3d64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_cc1d68f111b4de666aa5b88bde1d119a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__13_is_running(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__13_is_running,
        mod_consts.const_str_plain_is_running,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_afd6d425aa40ebd29df69c1d66eb8b8f,
#endif
        code_objects_5ad521684fc279eb1fcb9315439c3647,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_309893b1b7e6a4a6b3aa9149ac5ff3f3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__14_is_finished(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__14_is_finished,
        mod_consts.const_str_plain_is_finished,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ea11108446f35968be5d9e275073388,
#endif
        code_objects_bd6809bceef5204563e745bfde442b13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_f1692d6d3ddd649471366e6387004ce9,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__15_completed_steps(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__15_completed_steps,
        mod_consts.const_str_plain_completed_steps,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_edb64d919a8bced23773ebf8b9c2ab43,
#endif
        code_objects_686498afd0467f9d438deb2f6d59a4ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_bd0959c262811f57463783283fa0b7d4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__16_total_steps(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__16_total_steps,
        mod_consts.const_str_plain_total_steps,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3d2b19cfc648280372e2579eb2a1ac56,
#endif
        code_objects_e8a271ffd9ef21d41c2529cd63caab31,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_ccc7fb7287b957c1f72a0cf517ef8750,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__17_progress(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__17_progress,
        mod_consts.const_str_plain_progress,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e9b06641b3fa0634dda7f31fb773e72c,
#endif
        code_objects_312f5f2b32bdfbb840d431884cacf99f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_cb22f6b7d8ca1e15684704d866363aa8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__18_result(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__18_result,
        mod_consts.const_str_plain_result,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bfc31f7bb28b0dff02aab7e1b68f15b8,
#endif
        code_objects_2612874cf5accf42d9a94cb51996a020,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_d61e30d742d39908309c0ae2c90ff881,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__19_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__19_error,
        mod_consts.const_str_plain_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0324e33764cc0060c5de1197787e911e,
#endif
        code_objects_6ba9b91a88dda4b652145ed3430f8cf9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_47cafd71320df5a6d392905ae3476baf,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b8f27bf337e9e178ec41362e26c601b,
#endif
        code_objects_6c6a2fbc8ffc182d99725e1a9080d182,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__20_update(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__20_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_abd52926cfb573ff6840130e7a002a0e,
#endif
        code_objects_80b238ebe05b117ee170336a82781ed9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_f7f96e153fb354cf8dd98d87b8320943,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__21_advance(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__21_advance,
        mod_consts.const_str_plain_advance,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_44739ee341d18331887aee0d4a0174a4,
#endif
        code_objects_edcc0b71d700124b23aa1447480bda2e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_42ed1419d5de4b82859af9dba97b19ee,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__22__run_threaded,
        mod_consts.const_str_plain__run_threaded,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_adc650af413c9746b07b94ee16d752da,
#endif
        code_objects_ac9403189def0620cd8c8ce7c1d57341,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_6e9f44e67af578db3d2bea110f4d123e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable,
        mod_consts.const_str_plain_run_awaitable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e9bd98eab5a5387a7d56ece893a6495d,
#endif
        code_objects_776d783daa9379896e6e6d86e3952cb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_a6c34ef085a771a3c3ad018da3a2f107,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work,
        mod_consts.const_str_plain_do_work,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_417b4f76bd74b9e58a87ae05471588d5,
#endif
        code_objects_33cba2742207e7ccd8021330efa0104b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine,
        mod_consts.const_str_plain_run_coroutine,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_205440327a2ca4be39742718e82456aa,
#endif
        code_objects_e96c6d85e2f7b3f62a3a7dd30fb0d658,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_cc002779dc018c468135bfbcc515b6b2,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable,
        mod_consts.const_str_plain_run_callable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b9b7460973961fbc45c26069e0424e8c,
#endif
        code_objects_d6a8b95e91d4071b3813b3f36110a24d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_8ee681c1328df41292e5a7a559818eb6,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__23__run_async(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__23__run_async,
        mod_consts.const_str_plain__run_async,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_558a63321765bbda46bdf6e4dc9c6f10,
#endif
        code_objects_d0ed07d2a8afdbc7d07079a0588d348c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_93cf1c4a8dea125511265e97d796212b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__24_run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__24_run,
        mod_consts.const_str_plain_run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7e5f6b270737299a8c28b0bbcb527099,
#endif
        code_objects_232996e130447a7878474a5c5aef6a29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_61edaf4c280bbaaeef664be1f6006389,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__25__run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__25__run,
        mod_consts.const_str_plain__run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e04f2427b8aef23ba7adc0b9788c4622,
#endif
        code_objects_acfcbcc2f5cf8292d6f903d2879aef78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_5ee291a49a8dbc2fe6fa18d619580611,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__26__start(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__26__start,
        mod_consts.const_str_plain__start,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e69130d426dec6ed3a7921fed309c730,
#endif
        code_objects_e3823ab49ecafb8629a35934686bf42a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_cbba31558cd5c23d61afbc3f8ee7827a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__26__start$$$function__1_task_done_callback(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__26__start$$$function__1_task_done_callback,
        mod_consts.const_str_plain_task_done_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7884576585753e891c0d9a00f43acb1c,
#endif
        code_objects_1b9762ddacd722d3e2ba555b0e37bcf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_35123ee4df9039652f7463042f2bab18,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__27_cancel(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__27_cancel,
        mod_consts.const_str_plain_cancel,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c9470943025f7bb66adee9813568b05,
#endif
        code_objects_17e778a56566426c46279b3f73cc110a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_61415b799ce3653e2bd93bc682c021be,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__28_wait(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__28_wait,
        mod_consts.const_str_plain_wait,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6c33b038512975fe3359657ded47c3f,
#endif
        code_objects_ad7278ce344bbb30d633f576e6ea9d35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_c94946c32dc50765619198f36ee0871f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__2_get_current_worker(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__2_get_current_worker,
        mod_consts.const_str_plain_get_current_worker,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2c2ec94868309512a0cbfc8a9f01e8e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_1fbdc0d6c07a174703f6fe1bfda320b0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__3___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30ddd328a471962442620d2a6dcf6c14,
#endif
        code_objects_3ea9dcc777b2e300ec038cb85fd059c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__4___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__4___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5cf86c5a88259b6ae4db5ff5a898be19,
#endif
        code_objects_bf6d24ec516d2712217f07bd7978038d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__5___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4111e6fbac773a6af4f09c751207da71,
#endif
        code_objects_cff4fc3e8a32a748d175d73392c54d28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_5b5a96ec68d4cba22d06361fa9ee6fbd,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__6___rich_repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__6___rich_repr__,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_345de99035f06d3081563cc6f9e9ba75,
#endif
        code_objects_a7669f6cbb0505099ac3eb6dd1419c66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__7___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8834476875fc7d67b20f6e64e8825b39,
#endif
        code_objects_7841691d522e6e24c67ed7b94ac598ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_1c78fdc7aedc7b2cca90cc970ba0759f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__8___rich_repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__8___rich_repr__,
        mod_consts.const_str_plain___rich_repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e2181b9f90b0d9a1fe1f6b0cb9c72390,
#endif
        code_objects_3272340dcb2c544e3b9c249fdec2a2ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$worker$$$function__9_node(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$worker$$$function__9_node,
        mod_consts.const_str_plain_node,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_31aaf3096212b4c14d7e3b407f2ee78a,
#endif
        code_objects_b0fecfa5487b24d7bcc3a464b9f7b9e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$worker,
        mod_consts.const_str_digest_ef7c7d0a4260498f508ab797672b8dd0,
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

static function_impl_code const function_table_textual$worker[] = {
impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable,
impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__2_run_coroutine,
impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__3_run_callable,
impl_textual$worker$$$function__22__run_threaded$$$coroutine__1__run_threaded$$$function__1_run_awaitable$$$function__1_do_work,
impl_textual$worker$$$function__26__start$$$function__1_task_done_callback,
impl_textual$worker$$$function__1___init__,
impl_textual$worker$$$function__2_get_current_worker,
impl_textual$worker$$$function__3___init__,
impl_textual$worker$$$function__4___repr__,
impl_textual$worker$$$function__5___init__,
impl_textual$worker$$$function__6___rich_repr__,
impl_textual$worker$$$function__7___init__,
impl_textual$worker$$$function__8___rich_repr__,
impl_textual$worker$$$function__9_node,
impl_textual$worker$$$function__10_state,
impl_textual$worker$$$function__11_state,
impl_textual$worker$$$function__12_is_cancelled,
impl_textual$worker$$$function__13_is_running,
impl_textual$worker$$$function__14_is_finished,
impl_textual$worker$$$function__15_completed_steps,
impl_textual$worker$$$function__16_total_steps,
impl_textual$worker$$$function__17_progress,
impl_textual$worker$$$function__18_result,
impl_textual$worker$$$function__19_error,
impl_textual$worker$$$function__20_update,
impl_textual$worker$$$function__21_advance,
impl_textual$worker$$$function__22__run_threaded,
impl_textual$worker$$$function__23__run_async,
impl_textual$worker$$$function__24_run,
impl_textual$worker$$$function__25__run,
impl_textual$worker$$$function__26__start,
impl_textual$worker$$$function__27_cancel,
impl_textual$worker$$$function__28_wait,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$worker);
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
        module_textual$worker,
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
        function_table_textual$worker,
        sizeof(function_table_textual$worker) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.worker";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$worker(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$worker");

    // Store the module for future use.
    module_textual$worker = module;

    moduledict_textual$worker = MODULE_DICT(module_textual$worker);

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
        PRINT_STRING("textual$worker: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$worker: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$worker: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.worker" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$worker\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$worker,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$worker,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$worker,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$worker,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$worker,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$worker);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$worker);
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

        UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
struct Nuitka_CellObject *outline_8_var___class__ = NULL;
PyObject *tmp_Worker$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Worker$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Worker$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Worker$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Worker$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$worker$$$class__1_NoActiveWorker_41 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_textual$worker$$$class__2_WorkerError_45 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_textual$worker$$$class__3_WorkerFailed_49 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$class__3_WorkerFailed_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_textual$worker$$$class__4_DeadlockError_57 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_textual$worker$$$class__5_WorkerCancelled_61 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_textual$worker$$$class__6_WorkerState_82 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$class__6_WorkerState_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
PyObject *locals_textual$worker$$$class__7__ReprText_108 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
PyObject *locals_textual$worker$$$class__8_Worker_119 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$class__8_Worker_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
PyObject *locals_textual$worker$$$class__9_StateChanged_123 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$worker$$$class__9_StateChanged_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_1cee9403611b6a0871bbf97f4f499cee;
UPDATE_STRING_DICT0(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$worker = MAKE_MODULE_FRAME(code_objects_75ac449976e0d788d462a09bcd687f95, module_textual$worker);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker);
assert(Py_REFCNT(frame_frame_textual$worker) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$worker$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$worker$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 10;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 11;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_plain_inspect;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 12;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_contextvars;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ContextVar_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 13;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_ContextVar,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ContextVar);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ContextVar, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Event_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 14;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Event,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Event);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_monotonic_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 15;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_monotonic,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_monotonic);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_monotonic, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_12 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_12);
tmp_import_from_1__module = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_13);
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Awaitable,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Awaitable);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Coroutine,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Coroutine);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Coroutine, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_0266ac3c468cbbaf99b230132943e04e;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = Py_None;
tmp_level_value_7 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 27;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_rich, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_TypeAlias_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 28;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_TypeAlias);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a;
tmp_globals_arg_value_9 = (PyObject *)moduledict_textual$worker;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_Message_tuple;
tmp_level_value_9 = const_int_0;
frame_frame_textual$worker->m_frame.f_lineno = 30;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$worker,
        mod_consts.const_str_plain_Message,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Message);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Message, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_textual$worker$ContextVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ContextVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
frame_frame_textual$worker->m_frame.f_lineno = 37;
tmp_assign_source_24 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_active_worker_tuple);

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_active_worker, tmp_assign_source_24);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_ad8138792cf74702f08214ab7fcb77ff;
tmp_ass_subscribed_1 = module_var_accessor_textual$worker$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_active_worker;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

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
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

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
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_NoActiveWorker;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 41;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_10, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 41;

    goto try_except_handler_2;
}
frame_frame_textual$worker->m_frame.f_lineno = 41;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 41;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_29;
}
branch_end_1:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$worker$$$class__1_NoActiveWorker_41 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__1_NoActiveWorker_41, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_3f3a0e31af04edbf63a7950d7db17938;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__1_NoActiveWorker_41, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_NoActiveWorker;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__1_NoActiveWorker_41, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_41;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__1_NoActiveWorker_41, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__1_NoActiveWorker_41, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__1_NoActiveWorker_41, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_NoActiveWorker;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_textual$worker$$$class__1_NoActiveWorker_41;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 41;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_textual$worker$$$class__1_NoActiveWorker_41);
locals_textual$worker$$$class__1_NoActiveWorker_41 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__1_NoActiveWorker_41);
locals_textual$worker$$$class__1_NoActiveWorker_41 = NULL;
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
exception_lineno = 41;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_NoActiveWorker, tmp_assign_source_30);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_2;
tmp_direct_call_arg1_2 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_WorkerError;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 45;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_11, tmp_default_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

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


exception_lineno = 45;

    goto try_except_handler_5;
}
frame_frame_textual$worker->m_frame.f_lineno = 45;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_36;
}
branch_end_4:;
{
PyObject *tmp_assign_source_37;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$worker$$$class__2_WorkerError_45 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__2_WorkerError_45, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_b85b85374014dbb684426eac53c92820;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__2_WorkerError_45, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_WorkerError;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__2_WorkerError_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__2_WorkerError_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__2_WorkerError_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__2_WorkerError_45, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_WorkerError;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_textual$worker$$$class__2_WorkerError_45;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 45;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

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
Py_DECREF(locals_textual$worker$$$class__2_WorkerError_45);
locals_textual$worker$$$class__2_WorkerError_45 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__2_WorkerError_45);
locals_textual$worker$$$class__2_WorkerError_45 = NULL;
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
exception_lineno = 45;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerError, tmp_assign_source_37);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
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
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
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
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_textual$worker$WorkerError(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerError);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_assign_source_39 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_39, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_40 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_13 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_42;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_WorkerFailed;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 49;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_43;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_12, tmp_default_value_3);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_8;
}
frame_frame_textual$worker->m_frame.f_lineno = 49;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 49;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_44;
}
branch_end_7:;
{
PyObject *tmp_assign_source_45;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$worker$$$class__3_WorkerFailed_49 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__3_WorkerFailed_49, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_9a3a99e037627e959bbab47e96d8a5c2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__3_WorkerFailed_49, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_WorkerFailed;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__3_WorkerFailed_49, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_49;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__3_WorkerFailed_49, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
frame_frame_textual$worker$$$class__3_WorkerFailed_2 = MAKE_CLASS_FRAME(tstate, code_objects_92685fc3f30ff39e3f0669e16ee92e0e, module_textual$worker, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$class__3_WorkerFailed_2);
assert(Py_REFCNT(frame_frame_textual$worker$$$class__3_WorkerFailed_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_40590d330e43fae5606a4323fd783149);
tmp_closure_1[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__3_WorkerFailed_49, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$class__3_WorkerFailed_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$class__3_WorkerFailed_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$class__3_WorkerFailed_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$class__3_WorkerFailed_2,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_textual$worker$$$class__3_WorkerFailed_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_10;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_error_tuple;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__3_WorkerFailed_49, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__3_WorkerFailed_49, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_WorkerFailed;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_textual$worker$$$class__3_WorkerFailed_49;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 49;
tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_10;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_46);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_45 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_45);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_textual$worker$$$class__3_WorkerFailed_49);
locals_textual$worker$$$class__3_WorkerFailed_49 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__3_WorkerFailed_49);
locals_textual$worker$$$class__3_WorkerFailed_49 = NULL;
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
exception_lineno = 49;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerFailed, tmp_assign_source_45);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
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
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_textual$worker$WorkerError(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerError);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto try_except_handler_11;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_DeadlockError;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 57;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_13, tmp_default_value_4);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_11;
}
frame_frame_textual$worker->m_frame.f_lineno = 57;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 57;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_52;
}
branch_end_10:;
{
PyObject *tmp_assign_source_53;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_textual$worker$$$class__4_DeadlockError_57 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__4_DeadlockError_57, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_digest_170a6cde92fd2f9b742385e7af77ceaf;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__4_DeadlockError_57, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_DeadlockError;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__4_DeadlockError_57, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_57;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__4_DeadlockError_57, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__4_DeadlockError_57, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__4_DeadlockError_57, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
branch_no_12:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_DeadlockError;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_textual$worker$$$class__4_DeadlockError_57;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 57;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_54;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_53 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_textual$worker$$$class__4_DeadlockError_57);
locals_textual$worker$$$class__4_DeadlockError_57 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__4_DeadlockError_57);
locals_textual$worker$$$class__4_DeadlockError_57 = NULL;
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
exception_lineno = 57;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_DeadlockError, tmp_assign_source_53);
}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
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
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_textual$worker$WorkerError(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WorkerError);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 61;

    goto try_except_handler_14;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_55, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_WorkerCancelled;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 61;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_14, tmp_default_value_5);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_14;
}
frame_frame_textual$worker->m_frame.f_lineno = 61;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 61;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_60;
}
branch_end_13:;
{
PyObject *tmp_assign_source_61;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_textual$worker$$$class__5_WorkerCancelled_61 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__5_WorkerCancelled_61, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_digest_ea9f9e8d592d48d28f4e485562f9784e;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__5_WorkerCancelled_61, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_WorkerCancelled;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__5_WorkerCancelled_61, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_61;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__5_WorkerCancelled_61, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__5_WorkerCancelled_61, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__5_WorkerCancelled_61, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
branch_no_15:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_WorkerCancelled;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_textual$worker$$$class__5_WorkerCancelled_61;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 61;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_16;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_62;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_61 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_textual$worker$$$class__5_WorkerCancelled_61);
locals_textual$worker$$$class__5_WorkerCancelled_61 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__5_WorkerCancelled_61);
locals_textual$worker$$$class__5_WorkerCancelled_61 = NULL;
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
exception_lineno = 61;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerCancelled, tmp_assign_source_61);
}
goto try_end_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
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
{
PyObject *tmp_assign_source_63;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_286b3bb8e672ca23e7416233f7a106ee);

tmp_assign_source_63 = MAKE_FUNCTION_textual$worker$$$function__2_get_current_worker(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_worker, tmp_assign_source_63);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_64;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_31;
tmp_expression_value_31 = module_var_accessor_textual$worker$enum(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_Enum);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_assign_source_64 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_64, 0, tmp_tuple_element_19);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_65 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_32 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_32, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_67 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_67;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_34;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_WorkerState;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 82;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_68;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_35 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_36;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_36, tmp_name_value_15, tmp_default_value_6);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_37;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_37 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_17;
}
frame_frame_textual$worker->m_frame.f_lineno = 82;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_69;
}
branch_end_16:;
{
PyObject *tmp_assign_source_70;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_textual$worker$$$class__6_WorkerState_82 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_digest_83bbd2792c834c69b525f91c1e1d0ad2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_WorkerState;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_82;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
frame_frame_textual$worker$$$class__6_WorkerState_3 = MAKE_CLASS_FRAME(tstate, code_objects_917c4e6b5a0d6d87249fde6867b2e2e1, module_textual$worker, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$class__6_WorkerState_3);
assert(Py_REFCNT(frame_frame_textual$worker$$$class__6_WorkerState_3) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain_PENDING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain_RUNNING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_3;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain_CANCELLED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain_ERROR, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dictset_value = mod_consts.const_int_pos_5;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain_SUCCESS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_3;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$class__6_WorkerState_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$class__6_WorkerState_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$class__6_WorkerState_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$class__6_WorkerState_3,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_textual$worker$$$class__6_WorkerState_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_19;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__6_WorkerState_82, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
branch_no_18:;
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_WorkerState;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_textual$worker$$$class__6_WorkerState_82;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 82;
tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_19;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_71;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_70 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_70);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_textual$worker$$$class__6_WorkerState_82);
locals_textual$worker$$$class__6_WorkerState_82 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__6_WorkerState_82);
locals_textual$worker$$$class__6_WorkerState_82 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 82;
goto try_except_handler_17;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkerState, tmp_assign_source_70);
}
goto try_end_7;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_14;
tmp_called_value_14 = module_var_accessor_textual$worker$TypeVar(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;

    goto frame_exception_exit_1;
}
frame_frame_textual$worker->m_frame.f_lineno = 97;
tmp_assign_source_72 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_14, mod_consts.const_tuple_str_plain_ResultType_tuple);

if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_ResultType, tmp_assign_source_72);
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_7;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_24;
tmp_expression_value_38 = module_var_accessor_textual$worker$Union(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_expression_value_39 = module_var_accessor_textual$worker$Callable(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;

    goto frame_exception_exit_1;
}
tmp_tuple_element_24 = MAKE_LIST_EMPTY(tstate, 0);
tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_25;
PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_24);
tmp_expression_value_40 = module_var_accessor_textual$worker$Coroutine(tstate);
if (unlikely(tmp_expression_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Coroutine);
}

if (tmp_expression_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;

    goto tuple_build_exception_7;
}
tmp_tuple_element_25 = Py_None;
tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = Py_None;
PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = module_var_accessor_textual$worker$ResultType(tstate);
assert(!(tmp_tuple_element_25 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_9, 2, tmp_tuple_element_25);
tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_subscript_value_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;

    goto frame_exception_exit_1;
}
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_11;
PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_23);
tmp_expression_value_41 = module_var_accessor_textual$worker$Callable(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto tuple_build_exception_8;
}
tmp_tuple_element_26 = MAKE_LIST_EMPTY(tstate, 0);
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = module_var_accessor_textual$worker$ResultType(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResultType);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_26);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_subscript_value_10);
goto tuple_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_23);
tmp_expression_value_42 = module_var_accessor_textual$worker$Awaitable(tstate);
if (unlikely(tmp_expression_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Awaitable);
}

if (tmp_expression_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto tuple_build_exception_8;
}
tmp_subscript_value_11 = module_var_accessor_textual$worker$ResultType(tstate);
if (unlikely(tmp_subscript_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResultType);
}

if (tmp_subscript_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto tuple_build_exception_8;
}
tmp_tuple_element_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_11);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_subscript_value_7, 2, tmp_tuple_element_23);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_subscript_value_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_assign_source_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_WorkType, tmp_assign_source_73);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_2 = module_var_accessor_textual$worker$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_WorkType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_7;
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_75;
}
// Tried code:
{
PyObject *tmp_assign_source_76;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_textual$worker$$$class__7__ReprText_108 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_result = DICT_SET_ITEM(locals_textual$worker$$$class__7__ReprText_108, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_b7250620857c485c6c504dc3aa94fa05;
tmp_result = DICT_SET_ITEM(locals_textual$worker$$$class__7__ReprText_108, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain__ReprText;
tmp_result = DICT_SET_ITEM(locals_textual$worker$$$class__7__ReprText_108, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_108;
tmp_result = DICT_SET_ITEM(locals_textual$worker$$$class__7__ReprText_108, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_df05d742a8dbb0b86f60b40616eaa1e9);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__3___init__(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_textual$worker$$$class__7__ReprText_108, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__4___repr__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_textual$worker$$$class__7__ReprText_108, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain_text_tuple;
tmp_result = DICT_SET_ITEM(locals_textual$worker$$$class__7__ReprText_108, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_13;
tmp_called_value_15 = (PyObject *)&PyType_Type;
tmp_tuple_element_27 = mod_consts.const_str_plain__ReprText;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
tmp_tuple_element_27 = locals_textual$worker$$$class__7__ReprText_108;
PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 108;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_22;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_77;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_76 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_76);
goto try_return_handler_22;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
Py_DECREF(locals_textual$worker$$$class__7__ReprText_108);
locals_textual$worker$$$class__7__ReprText_108 = NULL;
goto try_return_handler_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__7__ReprText_108);
locals_textual$worker$$$class__7__ReprText_108 = NULL;
// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto try_except_handler_21;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 108;
goto try_except_handler_20;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain__ReprText, tmp_assign_source_76);
}
goto try_end_8;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_78;
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_12;
tmp_expression_value_43 = module_var_accessor_textual$worker$Generic(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_subscript_value_12 = module_var_accessor_textual$worker$ResultType(tstate);
if (unlikely(tmp_subscript_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResultType);
}

if (tmp_subscript_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_12);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_assign_source_78 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_78, 0, tmp_tuple_element_28);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_78;
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_79 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_79;
}
{
PyObject *tmp_assign_source_80;
tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_13, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_81 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_81;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_82;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_tuple_element_29 = mod_consts.const_str_plain_Worker;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 119;
tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_82;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_30;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_30 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_16, tmp_default_value_7);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_30);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_23;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_23;
}
frame_frame_textual$worker->m_frame.f_lineno = 119;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 119;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_23;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_83;
tmp_assign_source_83 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_83;
}
branch_end_19:;
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_17;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_args_element_value_1;
tmp_expression_value_51 = module_var_accessor_textual$worker$rich(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto try_except_handler_23;
}
tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, const_str_plain_repr);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_23;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_auto);
CHECK_OBJECT(tmp_expression_value_50);
Py_DECREF(tmp_expression_value_50);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_23;
}
frame_frame_textual$worker->m_frame.f_lineno = 118;
tmp_called_value_17 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_angular_tuple);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_23;
}
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_textual$worker$$$class__8_Worker_119 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_digest_054515d35f87792271c36bfa4089fe69;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_plain_Worker;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_int_pos_119;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
frame_frame_textual$worker$$$class__8_Worker_4 = MAKE_CLASS_FRAME(tstate, code_objects_d31047df710cb51c3e93d5f8a637fcf6, module_textual$worker, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$class__8_Worker_4);
assert(Py_REFCNT(frame_frame_textual$worker$$$class__8_Worker_4) == 2);

// Framed code:
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_85;
PyObject *tmp_tuple_element_31;
tmp_tuple_element_31 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_Message);

if (tmp_tuple_element_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_31 = module_var_accessor_textual$worker$Message(tstate);
if (unlikely(tmp_tuple_element_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_tuple_element_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
        Py_INCREF(tmp_tuple_element_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_26;
    }
}

tmp_assign_source_85 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_85, 0, tmp_tuple_element_31);
assert(tmp_Worker$class_container$class_creation_1__bases_orig == NULL);
tmp_Worker$class_container$class_creation_1__bases_orig = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_8 = tmp_Worker$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_86 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
assert(tmp_Worker$class_container$class_creation_1__bases == NULL);
tmp_Worker$class_container$class_creation_1__bases = tmp_assign_source_86;
}
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = DICT_COPY(tstate, mod_consts.const_dict_d17dcf72a9a26be7932520504bbdd724);
assert(tmp_Worker$class_container$class_creation_1__class_decl_dict == NULL);
tmp_Worker$class_container$class_creation_1__class_decl_dict = tmp_assign_source_87;
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_28;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_Worker$class_container$class_creation_1__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_condition_result_28 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
tmp_expression_value_52 = tmp_Worker$class_container$class_creation_1__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_52, tmp_subscript_value_14, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
tmp_bases_value_8 = tmp_Worker$class_container$class_creation_1__bases;
tmp_assign_source_88 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
assert(tmp_Worker$class_container$class_creation_1__metaclass == NULL);
tmp_Worker$class_container$class_creation_1__metaclass = tmp_assign_source_88;
}
{
bool tmp_condition_result_29;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__metaclass);
tmp_expression_value_53 = tmp_Worker$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_condition_result_29 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_29 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_89;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_54;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__metaclass);
tmp_expression_value_54 = tmp_Worker$class_container$class_creation_1__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_tuple_element_32 = mod_consts.const_str_plain_StateChanged;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
tmp_tuple_element_32 = tmp_Worker$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_32);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_15 = tmp_Worker$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 123;
tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
assert(tmp_Worker$class_container$class_creation_1__prepared == NULL);
tmp_Worker$class_container$class_creation_1__prepared = tmp_assign_source_89;
}
{
bool tmp_condition_result_30;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_55;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__prepared);
tmp_expression_value_55 = tmp_Worker$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_30 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_33;
PyObject *tmp_expression_value_56;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__metaclass);
tmp_expression_value_56 = tmp_Worker$class_container$class_creation_1__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_33 = BUILTIN_GETATTR(tstate, tmp_expression_value_56, tmp_name_value_17, tmp_default_value_8);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_57;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__prepared);
tmp_type_arg_16 = tmp_Worker$class_container$class_creation_1__prepared;
tmp_expression_value_57 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_57 == NULL));
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_57);
Py_DECREF(tmp_expression_value_57);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_33);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_26;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 123;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 123;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_26;
}
branch_no_22:;
goto branch_end_21;
branch_no_21:;
{
PyObject *tmp_assign_source_90;
tmp_assign_source_90 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Worker$class_container$class_creation_1__prepared == NULL);
tmp_Worker$class_container$class_creation_1__prepared = tmp_assign_source_90;
}
branch_end_21:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_58;
PyObject *tmp_args_element_value_2;
tmp_expression_value_58 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_rich);

if (tmp_expression_value_58 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_58 = module_var_accessor_textual$worker$rich(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rich);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_2 = "o";
    goto try_except_handler_26;
}
        Py_INCREF(tmp_expression_value_58);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_26;
    }
}

tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, const_str_plain_repr);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto try_except_handler_26;
}
outline_8_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__prepared);
tmp_set_locals_9 = tmp_Worker$class_container$class_creation_1__prepared;
locals_textual$worker$$$class__9_StateChanged_123 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ba1ec5b62e4684d46d5a4475a364a8f2;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_digest_489e22bebf3a9d665cb8019ec8b0cfbd;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_digest_93a118ed27bedbc6be44f6e1f0ee0d31;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_int_pos_123;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
frame_frame_textual$worker$$$class__9_StateChanged_5 = MAKE_CLASS_FRAME(tstate, code_objects_84de9cfbeb9d5dff1d29096153795283, module_textual$worker, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$worker$$$class__9_StateChanged_5);
assert(Py_REFCNT(frame_frame_textual$worker$$$class__9_StateChanged_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_5;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_e1b3f91790b90002cb81e37458a58a63);
tmp_closure_2[0] = outline_8_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__5___init__(tstate, tmp_annotations_5, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_3 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__6___rich_repr__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, mod_consts.const_str_plain___rich_repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_3 = "c";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$class__9_StateChanged_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$class__9_StateChanged_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$class__9_StateChanged_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$class__9_StateChanged_5,
    type_description_3,
    outline_8_var___class__
);



assertFrameObject(frame_frame_textual$worker$$$class__9_StateChanged_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_4:;
type_description_2 = "o";
goto try_except_handler_28;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_worker_str_plain_state_tuple;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
{
nuitka_bool tmp_condition_result_31;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
tmp_cmp_expr_left_7 = tmp_Worker$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_7 = tmp_Worker$class_container$class_creation_1__bases_orig;
tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Worker$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__9_StateChanged_123, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
branch_no_23:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__metaclass);
tmp_called_value_20 = tmp_Worker$class_container$class_creation_1__metaclass;
tmp_tuple_element_34 = mod_consts.const_str_plain_StateChanged;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
tmp_tuple_element_34 = tmp_Worker$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_34);
tmp_tuple_element_34 = locals_textual$worker$$$class__9_StateChanged_123;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_34);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_16 = tmp_Worker$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 123;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_28;
}
assert(Nuitka_Cell_GET(outline_8_var___class__) == NULL);
Nuitka_Cell_SET(outline_8_var___class__, tmp_assign_source_91);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_8_var___class__));
tmp_args_element_value_2 = Nuitka_Cell_GET(outline_8_var___class__);
Py_INCREF(tmp_args_element_value_2);
goto try_return_handler_28;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
Py_DECREF(locals_textual$worker$$$class__9_StateChanged_123);
locals_textual$worker$$$class__9_StateChanged_123 = NULL;
goto try_return_handler_27;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__9_StateChanged_123);
locals_textual$worker$$$class__9_StateChanged_123 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto try_except_handler_27;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 123;
goto try_except_handler_26;
outline_result_18:;
frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 122;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_auto, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto try_except_handler_26;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_StateChanged, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_2 = "o";
    goto try_except_handler_26;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Worker$class_container$class_creation_1__bases_orig);
tmp_Worker$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Worker$class_container$class_creation_1__bases);
tmp_Worker$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Worker$class_container$class_creation_1__class_decl_dict);
tmp_Worker$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Worker$class_container$class_creation_1__metaclass);
tmp_Worker$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Worker$class_container$class_creation_1__prepared);
tmp_Worker$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto frame_exception_exit_4;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Worker$class_container$class_creation_1__bases_orig);
tmp_Worker$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__bases);
Py_DECREF(tmp_Worker$class_container$class_creation_1__bases);
tmp_Worker$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Worker$class_container$class_creation_1__class_decl_dict);
tmp_Worker$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Worker$class_container$class_creation_1__metaclass);
tmp_Worker$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Worker$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Worker$class_container$class_creation_1__prepared);
tmp_Worker$class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_7;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_2d7b52bca93d3de0e8a9a24767e220cf);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_e5e8f06941b5786dd0fe6e0e99574432);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__7___init__(tstate, tmp_kw_defaults_1, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_a367242e045973b662a9e05f7c4b4498);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__8___rich_repr__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain___rich_repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_9;
tmp_called_value_21 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_9db337a68f75ed2c98b7c204be7ead11);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$worker$$$function__9_node(tstate, tmp_annotations_9);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 192;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_node, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_10;
tmp_called_value_22 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_fb453232650fbadb863e4311cde31e8e);

tmp_args_element_value_4 = MAKE_FUNCTION_textual$worker$$$function__10_state(tstate, tmp_annotations_10);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 197;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_11;
tmp_called_instance_2 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_state);

if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);

exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_8cda9ea3be6302628fbdf21b1226b8f5);

tmp_args_element_value_5 = MAKE_FUNCTION_textual$worker$$$function__11_state(tstate, tmp_annotations_11);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 202;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_setter, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_state, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_12;
tmp_called_value_23 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_23 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_6 = MAKE_FUNCTION_textual$worker$$$function__12_is_cancelled(tstate, tmp_annotations_12);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 210;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_is_cancelled, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_13;
tmp_called_value_24 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_24 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_7 = MAKE_FUNCTION_textual$worker$$$function__13_is_running(tstate, tmp_annotations_13);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 218;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_is_running, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_14;
tmp_called_value_25 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_25 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_8 = MAKE_FUNCTION_textual$worker$$$function__14_is_finished(tstate, tmp_annotations_14);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 223;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_is_finished, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_15;
tmp_called_value_26 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_26 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_9 = MAKE_FUNCTION_textual$worker$$$function__15_completed_steps(tstate, tmp_annotations_15);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 232;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_completed_steps, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_16;
tmp_called_value_27 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_27 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_4ceb13db20db0a5d6b10c13b92db4345);

tmp_args_element_value_10 = MAKE_FUNCTION_textual$worker$$$function__16_total_steps(tstate, tmp_annotations_16);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 237;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_total_steps, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_17;
tmp_called_value_28 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_28 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_11 = MAKE_FUNCTION_textual$worker$$$function__17_progress(tstate, tmp_annotations_17);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 242;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_progress, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_18;
tmp_called_value_29 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_29 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_e8bf69b86c75f170d087bf4f8a6a9cf9);

tmp_args_element_value_12 = MAKE_FUNCTION_textual$worker$$$function__18_result(tstate, tmp_annotations_18);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 252;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_result, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_19;
tmp_called_value_30 = PyObject_GetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_property);

if (tmp_called_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_30 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_9886bc989bd4ef336593ffab967f448c);

tmp_args_element_value_13 = MAKE_FUNCTION_textual$worker$$$function__19_error(tstate, tmp_annotations_19);

frame_frame_textual$worker$$$class__8_Worker_4->m_frame.f_lineno = 257;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_20;
tmp_defaults_1 = mod_consts.const_tuple_none_int_neg_1_tuple;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_b45ecaf8a4e947ee5d1384958153ad2a);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__20_update(tstate, tmp_defaults_1, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_21;
tmp_defaults_2 = mod_consts.const_tuple_int_pos_1_tuple;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_b43e34c7c104cc783a7bafb5a69992ea);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__21_advance(tstate, tmp_defaults_2, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_advance, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__22__run_threaded(tstate, tmp_annotations_22);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain__run_threaded, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__23__run_async(tstate, tmp_annotations_23);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain__run_async, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__24_run(tstate, tmp_annotations_24);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_d031bb36b9892720d442b91d4ea4b297);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__25__run(tstate, tmp_annotations_25);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain__run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_26;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_5bdfb6acd321709c09b57b968077e597);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__26__start(tstate, tmp_defaults_3, tmp_annotations_26);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain__start, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__27_cancel(tstate, tmp_annotations_27);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_cancel, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_28;
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_9990409ba96e3712d4ef78c5ec54b4d9);

tmp_dictset_value = MAKE_FUNCTION_textual$worker$$$function__28_wait(tstate, tmp_annotations_28);

tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain_wait, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 423;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker$$$class__8_Worker_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker$$$class__8_Worker_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker$$$class__8_Worker_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$worker$$$class__8_Worker_4,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_textual$worker$$$class__8_Worker_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_3:;

goto try_except_handler_25;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_962224401c89ead87737c533e9d2d256_tuple;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$worker$$$class__8_Worker_119, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
branch_no_24:;
{
PyObject *tmp_assign_source_92;
PyObject *tmp_called_value_31;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_31 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_Worker;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_textual$worker$$$class__8_Worker_119;
PyTuple_SET_ITEM0(tmp_args_value_17, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_textual$worker->m_frame.f_lineno = 119;
tmp_assign_source_92 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_25;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_92;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_args_element_value_1 = outline_7_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
Py_DECREF(locals_textual$worker$$$class__8_Worker_119);
locals_textual$worker$$$class__8_Worker_119 = NULL;
goto try_return_handler_24;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$worker$$$class__8_Worker_119);
locals_textual$worker$$$class__8_Worker_119 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto try_except_handler_24;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 119;
goto try_except_handler_23;
outline_result_16:;
frame_frame_textual$worker->m_frame.f_lineno = 118;
tmp_assign_source_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_23;
}
UPDATE_STRING_DICT1(moduledict_textual$worker, (Nuitka_StringObject *)mod_consts.const_str_plain_Worker, tmp_assign_source_84);
}
goto try_end_10;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$worker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$worker->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$worker, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$worker);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$worker", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.worker" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$worker);
    return module_textual$worker;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$worker, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$worker", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

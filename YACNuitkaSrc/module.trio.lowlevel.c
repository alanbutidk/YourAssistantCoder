/* Generated code for Python module 'trio$lowlevel'
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



/* The "module_trio$lowlevel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$lowlevel;
PyDictObject *moduledict_trio$lowlevel;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_71b4552179e9cefe3da9f1e6247fc01d;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_select;
PyObject *const_str_plain__select;
PyObject *const_str_plain_sys;
PyObject *const_str_plain__t;
PyObject *const_str_plain__core;
PyObject *const_tuple_0a6893c848ac3c730f08d4d8dadc252e_tuple;
PyObject *const_str_plain_Abort;
PyObject *const_str_plain_ParkingLot;
PyObject *const_str_plain_ParkingLotStatistics;
PyObject *const_str_plain_RaiseCancelT;
PyObject *const_str_plain_RunStatistics;
PyObject *const_str_plain_RunVar;
PyObject *const_str_plain_RunVarToken;
PyObject *const_str_plain_Task;
PyObject *const_str_plain_TrioToken;
PyObject *const_str_plain_UnboundedQueue;
PyObject *const_str_plain_UnboundedQueueStatistics;
PyObject *const_str_plain_add_instrument;
PyObject *const_str_plain_add_parking_lot_breaker;
PyObject *const_str_plain_cancel_shielded_checkpoint;
PyObject *const_str_plain_checkpoint;
PyObject *const_str_plain_checkpoint_if_cancelled;
PyObject *const_str_plain_current_clock;
PyObject *const_str_plain_current_root_task;
PyObject *const_str_plain_current_statistics;
PyObject *const_str_plain_current_task;
PyObject *const_str_plain_current_trio_token;
PyObject *const_str_plain_currently_ki_protected;
PyObject *const_str_plain_disable_ki_protection;
PyObject *const_str_plain_enable_ki_protection;
PyObject *const_str_plain_in_trio_run;
PyObject *const_str_plain_in_trio_task;
PyObject *const_str_plain_notify_closing;
PyObject *const_str_plain_permanently_detach_coroutine_object;
PyObject *const_str_plain_reattach_detached_coroutine_object;
PyObject *const_str_plain_remove_instrument;
PyObject *const_str_plain_remove_parking_lot_breaker;
PyObject *const_str_plain_reschedule;
PyObject *const_str_plain_spawn_system_task;
PyObject *const_str_plain_start_guest_run;
PyObject *const_str_plain_start_thread_soon;
PyObject *const_str_plain_temporarily_detach_coroutine_object;
PyObject *const_str_plain_wait_readable;
PyObject *const_str_plain_wait_task_rescheduled;
PyObject *const_str_plain_wait_writable;
PyObject *const_str_plain__subprocess;
PyObject *const_tuple_str_plain_open_process_tuple;
PyObject *const_str_plain_open_process;
PyObject *const_tuple_8373196416d7f1530a22154276d8472c_tuple;
PyObject *const_str_plain_current_iocp;
PyObject *const_str_plain_monitor_completion_key;
PyObject *const_str_plain_readinto_overlapped;
PyObject *const_str_plain_register_with_iocp;
PyObject *const_str_plain_wait_overlapped;
PyObject *const_str_plain_write_overlapped;
PyObject *const_str_plain__wait_for_object;
PyObject *const_tuple_str_plain_WaitForSingleObject_tuple;
PyObject *const_str_plain_WaitForSingleObject;
PyObject *const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0;
PyObject *const_str_plain_modules;
PyObject *const_str_plain__unix_pipes;
PyObject *const_tuple_str_plain_FdStream_tuple;
PyObject *const_str_plain_FdStream;
PyObject *const_str_plain_epoll;
PyObject *const_tuple_4a449db8b995f0dd080c9930cc6b1aff_tuple;
PyObject *const_str_plain_current_kqueue;
PyObject *const_str_plain_monitor_kevent;
PyObject *const_str_plain_wait_kevent;
PyObject *const_str_digest_dd1430741ddad7ac203053aa05333739;
PyObject *const_str_digest_525f71feab1540bae8de1927ba489a17;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio.lowlevel"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_71b4552179e9cefe3da9f1e6247fc01d);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_select);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__select);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__t);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_0a6893c848ac3c730f08d4d8dadc252e_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Abort);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParkingLot);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParkingLotStatistics);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_RaiseCancelT);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStatistics);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunVar);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunVarToken);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_Task);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_TrioToken);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnboundedQueue);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnboundedQueueStatistics);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_instrument);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_parking_lot_breaker);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_shielded_checkpoint);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_clock);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_root_task);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_statistics);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_task);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_trio_token);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_currently_ki_protected);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_disable_ki_protection);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_ki_protection);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_in_trio_run);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_in_trio_task);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_notify_closing);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_permanently_detach_coroutine_object);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_reattach_detached_coroutine_object);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_instrument);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove_parking_lot_breaker);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_reschedule);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_spawn_system_task);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_guest_run);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_thread_soon);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_temporarily_detach_coroutine_object);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_readable);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_task_rescheduled);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_writable);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__subprocess);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_process_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_process);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_8373196416d7f1530a22154276d8472c_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_iocp);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_monitor_completion_key);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_readinto_overlapped);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_with_iocp);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_overlapped);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_write_overlapped);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__wait_for_object);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WaitForSingleObject_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForSingleObject);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_modules);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__unix_pipes);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FdStream_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_FdStream);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_epoll);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_4a449db8b995f0dd080c9930cc6b1aff_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_kqueue);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_monitor_kevent);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_kevent);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd1430741ddad7ac203053aa05333739);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_525f71feab1540bae8de1927ba489a17);
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
void checkModuleConstants_trio$lowlevel(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_71b4552179e9cefe3da9f1e6247fc01d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71b4552179e9cefe3da9f1e6247fc01d);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_select));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_select);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__select));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__select);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__t);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_0a6893c848ac3c730f08d4d8dadc252e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a6893c848ac3c730f08d4d8dadc252e_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Abort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Abort);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParkingLot));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParkingLot);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParkingLotStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParkingLotStatistics);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_RaiseCancelT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RaiseCancelT);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStatistics);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunVar);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunVarToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunVarToken);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_Task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Task);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_TrioToken));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TrioToken);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnboundedQueue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnboundedQueue);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnboundedQueueStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnboundedQueueStatistics);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_instrument));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_instrument);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_parking_lot_breaker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_parking_lot_breaker);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_shielded_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel_shielded_checkpoint);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint_if_cancelled);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_clock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_clock);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_root_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_root_task);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_statistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_statistics);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_task);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_trio_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_trio_token);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_currently_ki_protected));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_currently_ki_protected);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_disable_ki_protection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_disable_ki_protection);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_ki_protection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enable_ki_protection);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_in_trio_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_in_trio_run);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_in_trio_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_in_trio_task);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_notify_closing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notify_closing);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_permanently_detach_coroutine_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_permanently_detach_coroutine_object);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_reattach_detached_coroutine_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reattach_detached_coroutine_object);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_instrument));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove_instrument);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove_parking_lot_breaker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove_parking_lot_breaker);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_reschedule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reschedule);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_spawn_system_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_spawn_system_task);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_guest_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_guest_run);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_thread_soon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_thread_soon);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_temporarily_detach_coroutine_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_temporarily_detach_coroutine_object);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_readable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_readable);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_task_rescheduled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_task_rescheduled);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_writable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_writable);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__subprocess);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_process_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_process_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_process);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_8373196416d7f1530a22154276d8472c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8373196416d7f1530a22154276d8472c_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_iocp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_iocp);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_monitor_completion_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_monitor_completion_key);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_readinto_overlapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readinto_overlapped);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_with_iocp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_register_with_iocp);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_overlapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_overlapped);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_write_overlapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write_overlapped);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__wait_for_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__wait_for_object);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WaitForSingleObject_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WaitForSingleObject_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForSingleObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WaitForSingleObject);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modules);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__unix_pipes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unix_pipes);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FdStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FdStream_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_FdStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FdStream);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_epoll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_epoll);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_4a449db8b995f0dd080c9930cc6b1aff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4a449db8b995f0dd080c9930cc6b1aff_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_kqueue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_kqueue);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_monitor_kevent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_monitor_kevent);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_kevent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_kevent);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd1430741ddad7ac203053aa05333739));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd1430741ddad7ac203053aa05333739);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_525f71feab1540bae8de1927ba489a17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_525f71feab1540bae8de1927ba489a17);
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
static PyObject *module_var_accessor_trio$lowlevel$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$lowlevel->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$lowlevel$_select(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$lowlevel->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$lowlevel->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__select);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$lowlevel->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__select);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__select, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__select);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__select, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__select);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__select);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__select);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_41ab033459198375a0fc42507a6e31c5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dd1430741ddad7ac203053aa05333739); CHECK_OBJECT(module_filename_obj);
code_objects_41ab033459198375a0fc42507a6e31c5 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_525f71feab1540bae8de1927ba489a17, mod_consts.const_str_digest_525f71feab1540bae8de1927ba489a17, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_trio$lowlevel[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$lowlevel);
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
        module_trio$lowlevel,
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
        function_table_trio$lowlevel,
        sizeof(function_table_trio$lowlevel) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio.lowlevel";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$lowlevel(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$lowlevel");

    // Store the module for future use.
    module_trio$lowlevel = module;

    moduledict_trio$lowlevel = MODULE_DICT(module_trio$lowlevel);

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
        PRINT_STRING("trio$lowlevel: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$lowlevel: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$lowlevel: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio.lowlevel" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$lowlevel\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$lowlevel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$lowlevel,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$lowlevel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$lowlevel);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$lowlevel);
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

        UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$lowlevel;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_71b4552179e9cefe3da9f1e6247fc01d;
UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$lowlevel = MAKE_MODULE_FRAME(code_objects_41ab033459198375a0fc42507a6e31c5, module_trio$lowlevel);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$lowlevel);
assert(Py_REFCNT(frame_frame_trio$lowlevel) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$lowlevel$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$lowlevel$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_select;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$lowlevel;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$lowlevel->m_frame.f_lineno = 7;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__select, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain__t, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__core;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$lowlevel;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_0a6893c848ac3c730f08d4d8dadc252e_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_trio$lowlevel->m_frame.f_lineno = 14;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_Abort,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Abort);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Abort, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_ParkingLot,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ParkingLot);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_ParkingLot, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_ParkingLotStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ParkingLotStatistics);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_ParkingLotStatistics, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_RaiseCancelT,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_RaiseCancelT);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RaiseCancelT, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_RunStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_RunStatistics);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStatistics, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_RunVar,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_RunVar);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunVar, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_RunVarToken,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_RunVarToken);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_RunVarToken, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_Task,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Task);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_Task, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_9 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_TrioToken,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_TrioToken);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_TrioToken, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_10 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_UnboundedQueue,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_UnboundedQueue);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_UnboundedQueue, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_11 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_UnboundedQueueStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_UnboundedQueueStatistics);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_UnboundedQueueStatistics, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_12 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_add_instrument,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_add_instrument);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_add_instrument, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_13 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_add_parking_lot_breaker,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_add_parking_lot_breaker);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_add_parking_lot_breaker, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_14 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_cancel_shielded_checkpoint,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_cancel_shielded_checkpoint);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_cancel_shielded_checkpoint, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_15 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_checkpoint,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_checkpoint);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_16 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_checkpoint_if_cancelled,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint_if_cancelled, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_17 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_current_clock,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_current_clock);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_clock, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_18 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_current_root_task,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_current_root_task);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_root_task, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_19 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_current_statistics,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_current_statistics);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_statistics, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_20 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_current_task,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_current_task);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_task, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_21 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_current_trio_token,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_current_trio_token);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_trio_token, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_22 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_currently_ki_protected,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_currently_ki_protected);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_currently_ki_protected, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_23 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_disable_ki_protection,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_disable_ki_protection);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_disable_ki_protection, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_24 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_enable_ki_protection,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_ki_protection, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_25 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_in_trio_run,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_in_trio_run);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_in_trio_run, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_26 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_in_trio_task,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_in_trio_task);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_in_trio_task, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_27 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_notify_closing,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_notify_closing);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_notify_closing, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_28 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_permanently_detach_coroutine_object,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_permanently_detach_coroutine_object);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_permanently_detach_coroutine_object, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_29 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_reattach_detached_coroutine_object,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_reattach_detached_coroutine_object);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_reattach_detached_coroutine_object, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_30 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_remove_instrument,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_remove_instrument);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_instrument, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_31 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_remove_parking_lot_breaker,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_remove_parking_lot_breaker);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_remove_parking_lot_breaker, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_32 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_reschedule,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_reschedule);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_reschedule, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_33 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_spawn_system_task,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_spawn_system_task);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_spawn_system_task, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_34 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_start_guest_run,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_start_guest_run);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_start_guest_run, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_35 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_start_thread_soon,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_start_thread_soon);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_start_thread_soon, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_36 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_temporarily_detach_coroutine_object,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_temporarily_detach_coroutine_object);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_temporarily_detach_coroutine_object, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_37 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_wait_readable,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_wait_readable);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_readable, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_38 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_wait_task_rescheduled,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_wait_task_rescheduled);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_task_rescheduled, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_39 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_wait_writable,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_wait_writable);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_writable, tmp_assign_source_46);
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
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__subprocess;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$lowlevel;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_open_process_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_trio$lowlevel->m_frame.f_lineno = 55;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_open_process,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_open_process);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_open_process, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__core;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$lowlevel;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_8373196416d7f1530a22154276d8472c_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_trio$lowlevel->m_frame.f_lineno = 66;
tmp_assign_source_48 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_48;
}
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_41 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_current_iocp,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_current_iocp);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_iocp, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_42 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_monitor_completion_key,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_monitor_completion_key);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_monitor_completion_key, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_43 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_readinto_overlapped,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_readinto_overlapped);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_readinto_overlapped, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_44 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_register_with_iocp,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_register_with_iocp);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_register_with_iocp, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_45 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_wait_overlapped,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_wait_overlapped);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_overlapped, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_46 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_write_overlapped,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_write_overlapped);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_write_overlapped, tmp_assign_source_54);
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
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_47;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__wait_for_object;
tmp_globals_arg_value_5 = (PyObject *)moduledict_trio$lowlevel;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_WaitForSingleObject_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_trio$lowlevel->m_frame.f_lineno = 77;
tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_WaitForSingleObject,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_WaitForSingleObject);
}

CHECK_OBJECT(tmp_import_name_from_47);
Py_DECREF(tmp_import_name_from_47);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_WaitForSingleObject, tmp_assign_source_55);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_modules);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__unix_pipes;
tmp_globals_arg_value_6 = (PyObject *)moduledict_trio$lowlevel;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_FdStream_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_trio$lowlevel->m_frame.f_lineno = 83;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_FdStream,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_FdStream);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_FdStream, tmp_assign_source_56);
}
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_trio$lowlevel$_select(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__select);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain_epoll);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_cmp_expr_left_2 = mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0;
tmp_expression_value_3 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_3 == NULL));
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_modules);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? true : false;
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
{
PyObject *tmp_assign_source_57;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__core;
tmp_globals_arg_value_7 = (PyObject *)moduledict_trio$lowlevel;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_4a449db8b995f0dd080c9930cc6b1aff_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_trio$lowlevel->m_frame.f_lineno = 89;
tmp_assign_source_57 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_57;
}
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_49;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_49 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_current_kqueue,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_current_kqueue);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_current_kqueue, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_50;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_50 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_monitor_kevent,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_monitor_kevent);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_monitor_kevent, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_51;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_51 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_trio$lowlevel,
        mod_consts.const_str_plain_wait_kevent,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_wait_kevent);
}

if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio$lowlevel, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_kevent, tmp_assign_source_60);
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
branch_no_2:;
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$lowlevel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$lowlevel->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$lowlevel, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$lowlevel);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
if (DICT_REMOVE_ITEM((PyObject *)moduledict_trio$lowlevel, mod_consts.const_str_plain_sys) == false) {
    CLEAR_ERROR_OCCURRED(tstate);
}


    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$lowlevel", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio.lowlevel" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$lowlevel);
    return module_trio$lowlevel;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$lowlevel", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

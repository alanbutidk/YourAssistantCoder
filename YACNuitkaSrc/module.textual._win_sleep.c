/* Generated code for Python module 'textual$_win_sleep'
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



/* The "module_textual$_win_sleep" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_win_sleep;
PyDictObject *moduledict_textual$_win_sleep;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_ef805723c2ab77a2a7e51b8036e1af85;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_sleep;
PyObject *const_str_plain_secs;
PyObject *const_str_plain_time_sleep_coro;
PyObject *const_str_digest_a754ec84ba70f252ddeb04b6cf3dcda6;
PyObject *const_str_digest_f79d11f5e8d0c30f0e4810027b3473a4;
PyObject *const_str_plain_no_sleep_coro;
PyObject *const_str_plain_max;
PyObject *const_float_0_001;
PyObject *const_float_0_0005;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_CreateWaitableTimerExW;
PyObject *const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION;
PyObject *const_str_plain_TIMER_ALL_ACCESS;
PyObject *const_str_plain_SetWaitableTimer;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_LARGE_INTEGER;
PyObject *const_int_neg_10000000;
PyObject *const_str_plain_CloseHandle;
PyObject *const_str_plain_CreateEventExW;
PyObject *const_str_digest_5e98b5d05173087cb7a0c89c48dfb9fb;
PyObject *const_str_plain_cancel_inner;
PyObject *const_str_digest_48c3f382430a0ad15d34669512ad20bc;
PyObject *const_str_digest_b1847062fb0da73d2eb0aa7aa0eaaee0;
PyObject *const_str_plain_cancel;
PyObject *const_str_digest_8b106915567e5938df471e564114072e;
PyObject *const_str_digest_dbd3133685870043c5116748b2407a4b;
PyObject *const_str_plain_wait_inner;
PyObject *const_str_digest_b3686409082b25662637d4e9f03d1d71;
PyObject *const_str_digest_67f8d0f20f743943b8403c47b673c643;
PyObject *const_str_plain_wait;
PyObject *const_str_digest_53039b705855cc3646ed44f364aaa236;
PyObject *const_str_digest_3d4e81667e93ff3623c048a22aee67c6;
PyObject *const_str_plain_SetEvent;
PyObject *const_str_plain_cancel_event;
PyObject *const_str_plain_get_running_loop;
PyObject *const_str_plain_run_in_executor;
PyObject *const_str_plain_WaitForMultipleObjects;
PyObject *const_int_pos_2;
PyObject *const_str_plain_pointer;
PyObject *const_str_plain_HANDLE;
PyObject *const_str_plain_timer;
PyObject *const_str_plain_INFINITE;
PyObject *const_str_plain_WAIT_FAILED;
PyObject *const_str_plain_time_sleep;
PyObject *const_str_plain_sleep_for;
PyObject *const_str_plain_CancelledError;
PyObject *const_str_digest_3648ddcaac69c1f0b1618352831d2d8b;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_time;
PyObject *const_tuple_str_plain_sleep_tuple;
PyObject *const_str_plain_Coroutine;
PyObject *const_int_hex_ffffffff;
PyObject *const_int_pos_2031619;
PyObject *const_dict_bfc885aa1e057ef345f6d7e0eb158a14;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_windll;
PyObject *const_dict_0759db674680d22ca232443f74b574fd;
PyObject *const_str_digest_272755c366696375ed5f24e134ac018d;
PyObject *const_str_digest_94a4acfe5d6172e3875378a38fd352e8;
PyObject *const_tuple_str_plain_cancel_inner_tuple;
PyObject *const_tuple_str_plain_cancel_event_tuple;
PyObject *const_tuple_str_plain_secs_tuple;
PyObject *const_tuple_392aa4fa18f60e573b4ea804026561e9_tuple;
PyObject *const_tuple_5baf74fe4620764772fdfa2b3a340677_tuple;
PyObject *const_tuple_ceb21f2834084d49ef0e922cb1bbee69_tuple;
PyObject *const_tuple_str_plain_cancel_event_str_plain_timer_str_plain_sleep_for_tuple;
PyObject *const_tuple_str_plain_cancel_event_str_plain_sleep_for_str_plain_timer_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[71];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._win_sleep"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef805723c2ab77a2a7e51b8036e1af85);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_secs);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_time_sleep_coro);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_a754ec84ba70f252ddeb04b6cf3dcda6);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_f79d11f5e8d0c30f0e4810027b3473a4);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_no_sleep_coro);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_float_0_001);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_float_0_0005);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateWaitableTimerExW);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_TIMER_ALL_ACCESS);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetWaitableTimer);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_LARGE_INTEGER);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_int_neg_10000000);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_CloseHandle);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEventExW);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e98b5d05173087cb7a0c89c48dfb9fb);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_inner);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_48c3f382430a0ad15d34669512ad20bc);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1847062fb0da73d2eb0aa7aa0eaaee0);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b106915567e5938df471e564114072e);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbd3133685870043c5116748b2407a4b);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_inner);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_b3686409082b25662637d4e9f03d1d71);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_67f8d0f20f743943b8403c47b673c643);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_53039b705855cc3646ed44f364aaa236);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d4e81667e93ff3623c048a22aee67c6);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetEvent);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_event);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_executor);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForMultipleObjects);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_pointer);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_timer);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_INFINITE);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_FAILED);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_time_sleep);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_for);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelledError);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_3648ddcaac69c1f0b1618352831d2d8b);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sleep_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_int_pos_2031619);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_bfc885aa1e057ef345f6d7e0eb158a14);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_0759db674680d22ca232443f74b574fd);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_272755c366696375ed5f24e134ac018d);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_94a4acfe5d6172e3875378a38fd352e8);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_inner_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_event_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_secs_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_392aa4fa18f60e573b4ea804026561e9_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_5baf74fe4620764772fdfa2b3a340677_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_ceb21f2834084d49ef0e922cb1bbee69_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_event_str_plain_timer_str_plain_sleep_for_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_event_str_plain_sleep_for_str_plain_timer_tuple);
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
void checkModuleConstants_textual$_win_sleep(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef805723c2ab77a2a7e51b8036e1af85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef805723c2ab77a2a7e51b8036e1af85);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_secs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_secs);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_time_sleep_coro));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time_sleep_coro);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_a754ec84ba70f252ddeb04b6cf3dcda6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a754ec84ba70f252ddeb04b6cf3dcda6);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_f79d11f5e8d0c30f0e4810027b3473a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f79d11f5e8d0c30f0e4810027b3473a4);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_no_sleep_coro));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_no_sleep_coro);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_float_0_001));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_001);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_float_0_0005));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_0005);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateWaitableTimerExW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateWaitableTimerExW);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_TIMER_ALL_ACCESS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TIMER_ALL_ACCESS);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetWaitableTimer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetWaitableTimer);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byref);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_LARGE_INTEGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LARGE_INTEGER);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_int_neg_10000000));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_10000000);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_CloseHandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CloseHandle);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEventExW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateEventExW);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e98b5d05173087cb7a0c89c48dfb9fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e98b5d05173087cb7a0c89c48dfb9fb);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_inner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel_inner);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_48c3f382430a0ad15d34669512ad20bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48c3f382430a0ad15d34669512ad20bc);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1847062fb0da73d2eb0aa7aa0eaaee0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1847062fb0da73d2eb0aa7aa0eaaee0);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b106915567e5938df471e564114072e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b106915567e5938df471e564114072e);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbd3133685870043c5116748b2407a4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbd3133685870043c5116748b2407a4b);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_inner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_inner);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_b3686409082b25662637d4e9f03d1d71));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b3686409082b25662637d4e9f03d1d71);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_67f8d0f20f743943b8403c47b673c643));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67f8d0f20f743943b8403c47b673c643);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_53039b705855cc3646ed44f364aaa236));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53039b705855cc3646ed44f364aaa236);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d4e81667e93ff3623c048a22aee67c6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d4e81667e93ff3623c048a22aee67c6);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetEvent);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel_event);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_running_loop);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_executor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_in_executor);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForMultipleObjects));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WaitForMultipleObjects);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_pointer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pointer);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HANDLE);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_timer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timer);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_INFINITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INFINITE);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_FAILED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_FAILED);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_time_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time_sleep);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_for));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep_for);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelledError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelledError);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_3648ddcaac69c1f0b1618352831d2d8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3648ddcaac69c1f0b1618352831d2d8b);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_sleep_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_sleep_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_Coroutine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Coroutine);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_ffffffff);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_int_pos_2031619));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2031619);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_bfc885aa1e057ef345f6d7e0eb158a14));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bfc885aa1e057ef345f6d7e0eb158a14);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_windll);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_0759db674680d22ca232443f74b574fd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0759db674680d22ca232443f74b574fd);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_272755c366696375ed5f24e134ac018d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_272755c366696375ed5f24e134ac018d);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_94a4acfe5d6172e3875378a38fd352e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_94a4acfe5d6172e3875378a38fd352e8);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_inner_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cancel_inner_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cancel_event_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_secs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_secs_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_392aa4fa18f60e573b4ea804026561e9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_392aa4fa18f60e573b4ea804026561e9_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_5baf74fe4620764772fdfa2b3a340677_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5baf74fe4620764772fdfa2b3a340677_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_ceb21f2834084d49ef0e922cb1bbee69_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ceb21f2834084d49ef0e922cb1bbee69_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_event_str_plain_timer_str_plain_sleep_for_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cancel_event_str_plain_timer_str_plain_sleep_for_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cancel_event_str_plain_sleep_for_str_plain_timer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cancel_event_str_plain_sleep_for_str_plain_timer_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 12
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
static PyObject *module_var_accessor_textual$_win_sleep$CREATE_WAITABLE_TIMER_HIGH_RESOLUTION(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HANDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HANDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HANDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HANDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$INFINITE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_INFINITE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INFINITE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INFINITE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INFINITE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INFINITE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_INFINITE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_INFINITE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INFINITE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$LARGE_INTEGER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_LARGE_INTEGER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LARGE_INTEGER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LARGE_INTEGER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LARGE_INTEGER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LARGE_INTEGER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_LARGE_INTEGER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_LARGE_INTEGER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LARGE_INTEGER);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$TIMER_ALL_ACCESS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_TIMER_ALL_ACCESS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TIMER_ALL_ACCESS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TIMER_ALL_ACCESS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TIMER_ALL_ACCESS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TIMER_ALL_ACCESS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_TIMER_ALL_ACCESS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_TIMER_ALL_ACCESS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TIMER_ALL_ACCESS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$WAIT_FAILED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_FAILED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WAIT_FAILED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WAIT_FAILED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WAIT_FAILED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WAIT_FAILED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_FAILED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_FAILED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_FAILED);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$kernel32(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_kernel32);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_kernel32, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_kernel32);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_kernel32, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$no_sleep_coro(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_no_sleep_coro);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_no_sleep_coro);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_no_sleep_coro, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_no_sleep_coro);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_no_sleep_coro, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_no_sleep_coro);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_no_sleep_coro);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_no_sleep_coro);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$time_sleep(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time_sleep);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time_sleep, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time_sleep);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time_sleep, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_win_sleep$time_sleep_coro(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_win_sleep->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_win_sleep->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep_coro);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_win_sleep->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time_sleep_coro);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time_sleep_coro, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_time_sleep_coro);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_time_sleep_coro, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep_coro);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep_coro);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep_coro);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ae18510ebbdc44414fecfc8242ce4f05;
static PyCodeObject *code_objects_2037be222e966bf02bd3d4c6fda18e3e;
static PyCodeObject *code_objects_e3b809ad7d2170924a5254c088b8fa64;
static PyCodeObject *code_objects_1a8f8456fc6119694d65edea92c13bfe;
static PyCodeObject *code_objects_94c0f9d08712503d89f320302d788e40;
static PyCodeObject *code_objects_d145544c2a108551269d23953c40b2e9;
static PyCodeObject *code_objects_f4cf167c556c5c78a70c83fc3b3c6dc1;
static PyCodeObject *code_objects_6c8a89a0dc61a84f1ad7071a9130f559;
static PyCodeObject *code_objects_509ece82fe2421144d223418e52a0268;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_272755c366696375ed5f24e134ac018d); CHECK_OBJECT(module_filename_obj);
code_objects_ae18510ebbdc44414fecfc8242ce4f05 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_94a4acfe5d6172e3875378a38fd352e8, mod_consts.const_str_digest_94a4acfe5d6172e3875378a38fd352e8, NULL, NULL, 0, 0, 0);
code_objects_2037be222e966bf02bd3d4c6fda18e3e = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancel, mod_consts.const_str_digest_8b106915567e5938df471e564114072e, mod_consts.const_tuple_str_plain_cancel_inner_tuple, mod_consts.const_tuple_str_plain_cancel_inner_tuple, 0, 0, 0);
code_objects_e3b809ad7d2170924a5254c088b8fa64 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cancel_inner, mod_consts.const_str_digest_48c3f382430a0ad15d34669512ad20bc, mod_consts.const_tuple_str_plain_cancel_event_tuple, mod_consts.const_tuple_str_plain_cancel_event_tuple, 0, 0, 0);
code_objects_1a8f8456fc6119694d65edea92c13bfe = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_no_sleep_coro, mod_consts.const_str_plain_no_sleep_coro, NULL, NULL, 0, 0, 0);
code_objects_94c0f9d08712503d89f320302d788e40 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep, mod_consts.const_str_plain_sleep, mod_consts.const_tuple_str_plain_secs_tuple, NULL, 1, 0, 0);
code_objects_d145544c2a108551269d23953c40b2e9 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep, mod_consts.const_str_plain_sleep, mod_consts.const_tuple_392aa4fa18f60e573b4ea804026561e9_tuple, NULL, 1, 0, 0);
code_objects_f4cf167c556c5c78a70c83fc3b3c6dc1 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_time_sleep_coro, mod_consts.const_str_plain_time_sleep_coro, mod_consts.const_tuple_str_plain_secs_tuple, NULL, 1, 0, 0);
code_objects_6c8a89a0dc61a84f1ad7071a9130f559 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait, mod_consts.const_str_digest_53039b705855cc3646ed44f364aaa236, mod_consts.const_tuple_5baf74fe4620764772fdfa2b3a340677_tuple, mod_consts.const_tuple_ceb21f2834084d49ef0e922cb1bbee69_tuple, 0, 0, 0);
code_objects_509ece82fe2421144d223418e52a0268 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_inner, mod_consts.const_str_digest_b3686409082b25662637d4e9f03d1d71, mod_consts.const_tuple_str_plain_cancel_event_str_plain_timer_str_plain_sleep_for_tuple, mod_consts.const_tuple_str_plain_cancel_event_str_plain_sleep_for_str_plain_timer_tuple, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__1_time_sleep_coro(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__2_sleep(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__3_no_sleep_coro(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__4_wait(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_textual$_win_sleep$$$function__1_time_sleep_coro(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_secs = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_secs;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_secs);
CHECK_OBJECT(par_secs);
Py_DECREF(par_secs);
par_secs = NULL;
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
struct textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro_locals *coroutine_heap = (struct textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f4cf167c556c5c78a70c83fc3b3c6dc1, module_textual$_win_sleep, sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 24;
tmp_expression_value_3 = module_var_accessor_textual$_win_sleep$asyncio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 24;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_sleep);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 24;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_secs);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 24;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 24;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 24;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 24;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 24;
coroutine_heap->type_description_1 = "c";
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

static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro_context,
        module_textual$_win_sleep,
        mod_consts.const_str_plain_time_sleep_coro,
        NULL,
        code_objects_f4cf167c556c5c78a70c83fc3b3c6dc1,
        closure,
        1,
#if 1
        sizeof(struct textual$_win_sleep$$$function__1_time_sleep_coro$$$coroutine__1_time_sleep_coro_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_win_sleep$$$function__2_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_secs = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_win_sleep$$$function__2_sleep;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_win_sleep$$$function__2_sleep = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_win_sleep$$$function__2_sleep)) {
    Py_XDECREF(cache_frame_frame_textual$_win_sleep$$$function__2_sleep);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_win_sleep$$$function__2_sleep == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_win_sleep$$$function__2_sleep = MAKE_FUNCTION_FRAME(tstate, code_objects_94c0f9d08712503d89f320302d788e40, module_textual$_win_sleep, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_win_sleep$$$function__2_sleep->m_type_description == NULL);
frame_frame_textual$_win_sleep$$$function__2_sleep = cache_frame_frame_textual$_win_sleep$$$function__2_sleep;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_win_sleep$$$function__2_sleep);
assert(Py_REFCNT(frame_frame_textual$_win_sleep$$$function__2_sleep) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$_win_sleep$time_sleep_coro(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time_sleep_coro);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_secs);
tmp_args_element_value_1 = par_secs;
frame_frame_textual$_win_sleep$$$function__2_sleep->m_frame.f_lineno = 36;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_win_sleep$$$function__2_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_win_sleep$$$function__2_sleep->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_win_sleep$$$function__2_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_win_sleep$$$function__2_sleep,
    type_description_1,
    par_secs
);


// Release cached frame if used for exception.
if (frame_frame_textual$_win_sleep$$$function__2_sleep == cache_frame_frame_textual$_win_sleep$$$function__2_sleep) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_win_sleep$$$function__2_sleep);
    cache_frame_frame_textual$_win_sleep$$$function__2_sleep = NULL;
}

assertFrameObject(frame_frame_textual$_win_sleep$$$function__2_sleep);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_secs);
Py_DECREF(par_secs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_secs);
Py_DECREF(par_secs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_win_sleep$$$function__3_no_sleep_coro(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro(tstate);

goto function_return_exit;

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
struct textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro_locals *coroutine_heap = (struct textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro_context,
        module_textual$_win_sleep,
        mod_consts.const_str_plain_no_sleep_coro,
        NULL,
        code_objects_1a8f8456fc6119694d65edea92c13bfe,
        NULL,
        0,
#if 1
        sizeof(struct textual$_win_sleep$$$function__3_no_sleep_coro$$$coroutine__1_no_sleep_coro_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_win_sleep$$$function__4_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_secs = python_pars[0];
struct Nuitka_CellObject *var_sleep_for = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_timer = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_cancel_event = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_cancel_inner = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_cancel = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_wait_inner = Nuitka_Cell_NewEmpty();
PyObject *var_wait = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_win_sleep$$$function__4_sleep;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_win_sleep$$$function__4_sleep = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_win_sleep$$$function__4_sleep)) {
    Py_XDECREF(cache_frame_frame_textual$_win_sleep$$$function__4_sleep);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_win_sleep$$$function__4_sleep == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_win_sleep$$$function__4_sleep = MAKE_FUNCTION_FRAME(tstate, code_objects_d145544c2a108551269d23953c40b2e9, module_textual$_win_sleep, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_win_sleep$$$function__4_sleep->m_type_description == NULL);
frame_frame_textual$_win_sleep$$$function__4_sleep = cache_frame_frame_textual$_win_sleep$$$function__4_sleep;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_win_sleep$$$function__4_sleep);
assert(Py_REFCNT(frame_frame_textual$_win_sleep$$$function__4_sleep) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
CHECK_OBJECT(par_secs);
tmp_sub_expr_left_1 = par_secs;
tmp_sub_expr_right_1 = mod_consts.const_float_0_001;
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 59;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_sleep_for) == NULL);
Nuitka_Cell_SET(var_sleep_for, tmp_assign_source_1);

}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_sleep_for));
tmp_cmp_expr_left_1 = Nuitka_Cell_GET(var_sleep_for);
tmp_cmp_expr_right_1 = mod_consts.const_float_0_0005;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_textual$_win_sleep$no_sleep_coro(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_no_sleep_coro);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 62;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_1 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CreateWaitableTimerExW);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = Py_None;
tmp_args_element_value_4 = Py_None;
tmp_args_element_value_5 = module_var_accessor_textual$_win_sleep$CREATE_WAITABLE_TIMER_HIGH_RESOLUTION(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 67;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_textual$_win_sleep$TIMER_ALL_ACCESS(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TIMER_ALL_ACCESS);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 68;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 64;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_timer) == NULL);
Nuitka_Cell_SET(var_timer, tmp_assign_source_2);

}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(Nuitka_Cell_GET(var_timer));
tmp_operand_value_1 = Nuitka_Cell_GET(var_timer);
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "occcccco";
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
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
tmp_called_value_4 = module_var_accessor_textual$_win_sleep$time_sleep_coro(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time_sleep_coro);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_sleep_for));
tmp_args_element_value_7 = Nuitka_Cell_GET(var_sleep_for);
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 71;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_11;
PyObject *tmp_int_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_expression_value_2 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_SetWaitableTimer);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_timer));
tmp_args_element_value_8 = Nuitka_Cell_GET(var_timer);
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_byref);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 75;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_textual$_win_sleep$LARGE_INTEGER(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LARGE_INTEGER);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 75;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_sleep_for));
tmp_mult_expr_left_1 = Nuitka_Cell_GET(var_sleep_for);
tmp_mult_expr_right_1 = mod_consts.const_int_neg_10000000;
tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 75;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 75;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 75;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 75;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 75;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 75;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = const_int_0;
tmp_args_element_value_13 = Py_None;
tmp_args_element_value_14 = Py_None;
tmp_args_element_value_15 = const_int_0;
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 73;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_16;
tmp_called_instance_1 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_timer));
tmp_args_element_value_16 = Nuitka_Cell_GET(var_timer);
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 81;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_CloseHandle, tmp_args_element_value_16);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_17;
tmp_called_value_8 = module_var_accessor_textual$_win_sleep$time_sleep_coro(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time_sleep_coro);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_sleep_for));
tmp_args_element_value_17 = Nuitka_Cell_GET(var_sleep_for);
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 82;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_17);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_expression_value_4 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CreateEventExW);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_18 = Py_None;
tmp_args_element_value_19 = Py_None;
tmp_args_element_value_20 = const_int_0;
tmp_args_element_value_21 = module_var_accessor_textual$_win_sleep$TIMER_ALL_ACCESS(tstate);
if (unlikely(tmp_args_element_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TIMER_ALL_ACCESS);
}

if (tmp_args_element_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 84;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 84;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_cancel_event) == NULL);
Nuitka_Cell_SET(var_cancel_event, tmp_assign_source_3);

}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(Nuitka_Cell_GET(var_cancel_event));
tmp_operand_value_3 = Nuitka_Cell_GET(var_cancel_event);
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_22;
tmp_called_instance_2 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_timer));
tmp_args_element_value_22 = Nuitka_Cell_GET(var_timer);
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 86;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_CloseHandle, tmp_args_element_value_22);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_23;
tmp_called_value_10 = module_var_accessor_textual$_win_sleep$time_sleep_coro(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time_sleep_coro);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_sleep_for));
tmp_args_element_value_23 = Nuitka_Cell_GET(var_sleep_for);
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 87;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_23);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "occcccco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
PyObject *tmp_assign_source_4;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = var_cancel_event;
Py_INCREF(tmp_closure_1[0]);
tmp_assign_source_4 = MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner(tstate, tmp_closure_1);

assert(Nuitka_Cell_GET(var_cancel_inner) == NULL);
Nuitka_Cell_SET(var_cancel_inner, tmp_assign_source_4);

}
{
PyObject *tmp_assign_source_5;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = var_cancel_inner;
Py_INCREF(tmp_closure_2[0]);
tmp_assign_source_5 = MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel(tstate, tmp_closure_2);

assert(Nuitka_Cell_GET(var_cancel) == NULL);
Nuitka_Cell_SET(var_cancel, tmp_assign_source_5);

}
{
PyObject *tmp_assign_source_6;
struct Nuitka_CellObject *tmp_closure_3[3];
tmp_closure_3[0] = var_cancel_event;
Py_INCREF(tmp_closure_3[0]);
tmp_closure_3[1] = var_sleep_for;
Py_INCREF(tmp_closure_3[1]);
tmp_closure_3[2] = var_timer;
Py_INCREF(tmp_closure_3[2]);
tmp_assign_source_6 = MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner(tstate, tmp_closure_3);

assert(Nuitka_Cell_GET(var_wait_inner) == NULL);
Nuitka_Cell_SET(var_wait_inner, tmp_assign_source_6);

}
{
PyObject *tmp_assign_source_7;
struct Nuitka_CellObject *tmp_closure_4[4];
tmp_closure_4[0] = var_cancel;
Py_INCREF(tmp_closure_4[0]);
tmp_closure_4[1] = var_cancel_event;
Py_INCREF(tmp_closure_4[1]);
tmp_closure_4[2] = var_timer;
Py_INCREF(tmp_closure_4[2]);
tmp_closure_4[3] = var_wait_inner;
Py_INCREF(tmp_closure_4[3]);
tmp_assign_source_7 = MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__4_wait(tstate, tmp_closure_4);

assert(var_wait == NULL);
var_wait = tmp_assign_source_7;
}
{
PyObject *tmp_called_value_11;
CHECK_OBJECT(var_wait);
tmp_called_value_11 = var_wait;
frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame.f_lineno = 121;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "occcccco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_win_sleep$$$function__4_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_win_sleep$$$function__4_sleep->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_win_sleep$$$function__4_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_win_sleep$$$function__4_sleep,
    type_description_1,
    par_secs,
    var_sleep_for,
    var_timer,
    var_cancel_event,
    var_cancel_inner,
    var_cancel,
    var_wait_inner,
    var_wait
);


// Release cached frame if used for exception.
if (frame_frame_textual$_win_sleep$$$function__4_sleep == cache_frame_frame_textual$_win_sleep$$$function__4_sleep) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_win_sleep$$$function__4_sleep);
    cache_frame_frame_textual$_win_sleep$$$function__4_sleep = NULL;
}

assertFrameObject(frame_frame_textual$_win_sleep$$$function__4_sleep);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_sleep_for);
CHECK_OBJECT(var_sleep_for);
Py_DECREF(var_sleep_for);
var_sleep_for = NULL;
CHECK_OBJECT(var_timer);
CHECK_OBJECT(var_timer);
Py_DECREF(var_timer);
var_timer = NULL;
CHECK_OBJECT(var_cancel_event);
CHECK_OBJECT(var_cancel_event);
Py_DECREF(var_cancel_event);
var_cancel_event = NULL;
CHECK_OBJECT(var_cancel_inner);
CHECK_OBJECT(var_cancel_inner);
Py_DECREF(var_cancel_inner);
var_cancel_inner = NULL;
CHECK_OBJECT(var_cancel);
CHECK_OBJECT(var_cancel);
Py_DECREF(var_cancel);
var_cancel = NULL;
CHECK_OBJECT(var_wait_inner);
CHECK_OBJECT(var_wait_inner);
Py_DECREF(var_wait_inner);
var_wait_inner = NULL;
Py_XDECREF(var_wait);
var_wait = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_sleep_for);
CHECK_OBJECT(var_sleep_for);
Py_DECREF(var_sleep_for);
var_sleep_for = NULL;
CHECK_OBJECT(var_timer);
CHECK_OBJECT(var_timer);
Py_DECREF(var_timer);
var_timer = NULL;
CHECK_OBJECT(var_cancel_event);
CHECK_OBJECT(var_cancel_event);
Py_DECREF(var_cancel_event);
var_cancel_event = NULL;
CHECK_OBJECT(var_cancel_inner);
CHECK_OBJECT(var_cancel_inner);
Py_DECREF(var_cancel_inner);
var_cancel_inner = NULL;
CHECK_OBJECT(var_cancel);
CHECK_OBJECT(var_cancel);
Py_DECREF(var_cancel);
var_cancel = NULL;
CHECK_OBJECT(var_wait_inner);
CHECK_OBJECT(var_wait_inner);
Py_DECREF(var_wait_inner);
var_wait_inner = NULL;
Py_XDECREF(var_wait);
var_wait = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_secs);
Py_DECREF(par_secs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_secs);
Py_DECREF(par_secs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner)) {
    Py_XDECREF(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner = MAKE_FUNCTION_FRAME(tstate, code_objects_e3b809ad7d2170924a5254c088b8fa64, module_textual$_win_sleep, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner->m_type_description == NULL);
frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner = cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner);
assert(Py_REFCNT(frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SetEvent);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cancel_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner->m_frame.f_lineno = 91;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner == cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner);
    cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner = NULL;
}

assertFrameObject(frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner);

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


static PyObject *impl_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel(tstate, tmp_closure_1);

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
struct textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel_locals *coroutine_heap = (struct textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel_locals *)coroutine->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2037be222e966bf02bd3d4c6fda18e3e, module_textual$_win_sleep, sizeof(void *));
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 95;
tmp_called_instance_1 = module_var_accessor_textual$_win_sleep$asyncio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 95;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_running_loop);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_in_executor);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = Py_None;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cancel_inner);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 95;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 95;
coroutine_heap->type_description_1 = "c";
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

static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel_context,
        module_textual$_win_sleep,
        mod_consts.const_str_plain_cancel,
        mod_consts.const_str_digest_8b106915567e5938df471e564114072e,
        code_objects_2037be222e966bf02bd3d4c6fda18e3e,
        closure,
        1,
#if 1
        sizeof(struct textual$_win_sleep$$$function__4_sleep$$$function__2_cancel$$$coroutine__1_cancel_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner)) {
    Py_XDECREF(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner = MAKE_FUNCTION_FRAME(tstate, code_objects_509ece82fe2421144d223418e52a0268, module_textual$_win_sleep, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner->m_type_description == NULL);
frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner = cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner);
assert(Py_REFCNT(frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_expression_value_1 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_WaitForMultipleObjects);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_int_pos_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pointer);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 102;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_mult_expr_left_1 = module_var_accessor_textual$_win_sleep$HANDLE(tstate);
if (unlikely(tmp_mult_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 102;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_2;
tmp_called_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 102;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cancel_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[2]);
frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_called_value_2);

exception_lineno = 102;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner->m_frame.f_lineno = 102;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 102;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = Py_False;
tmp_args_element_value_7 = module_var_accessor_textual$_win_sleep$INFINITE(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INFINITE);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 104;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner->m_frame.f_lineno = 100;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_textual$_win_sleep$WAIT_FAILED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WAIT_FAILED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 106;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_8;
tmp_called_value_4 = module_var_accessor_textual$_win_sleep$time_sleep(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time_sleep);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sleep_for);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 108;
type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_8 = Nuitka_Cell_GET(self->m_closure[1]);
frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner->m_frame.f_lineno = 108;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner,
    type_description_1,
    self->m_closure[0],
    self->m_closure[2],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner == cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner);
    cache_frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner = NULL;
}

assertFrameObject(frame_frame_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner);

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


static PyObject *impl_textual$_win_sleep$$$function__4_sleep$$$function__4_wait(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = self->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = self->m_closure[2];
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = self->m_closure[3];
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait(tstate, tmp_closure_1);

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
struct textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
PyObject *tmp_return_value;
};
#endif

static PyObject *textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait_locals *coroutine_heap = (struct textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6c8a89a0dc61a84f1ad7071a9130f559, module_textual$_win_sleep, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
// Tried code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_called_instance_1 = module_var_accessor_textual$_win_sleep$asyncio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 113;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_running_loop);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_in_executor);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = Py_None;
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_wait_inner);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 113;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_2;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_4 = module_var_accessor_textual$_win_sleep$asyncio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_CancelledError);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 114;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 115;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cancel);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}

tmp_called_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 115;
tmp_expression_value_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 115;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_3;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
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
coroutine_heap->type_description_1 = "cccc";
goto try_except_handler_3;
goto branch_end_1;
branch_no_1:;
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
coroutine_heap->type_description_1 = "cccc";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_1;
// End of try:
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_7 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_CloseHandle);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timer);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 118;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
tmp_expression_value_8 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_CloseHandle);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cancel_event);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 119;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
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
coroutine_heap->type_description_1 = "cccc";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
tmp_expression_value_9 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_CloseHandle);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_timer);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 118;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 118;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
tmp_expression_value_10 = module_var_accessor_textual$_win_sleep$kernel32(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_CloseHandle);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cancel_event);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 119;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 119;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
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
    coroutine->m_closure[3],
    coroutine->m_closure[0],
    coroutine->m_closure[2],
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

static PyObject *MAKE_COROUTINE_textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait_context,
        module_textual$_win_sleep,
        mod_consts.const_str_plain_wait,
        mod_consts.const_str_digest_53039b705855cc3646ed44f364aaa236,
        code_objects_6c8a89a0dc61a84f1ad7071a9130f559,
        closure,
        4,
#if 1
        sizeof(struct textual$_win_sleep$$$function__4_sleep$$$function__4_wait$$$coroutine__1_wait_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__1_time_sleep_coro(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__1_time_sleep_coro,
        mod_consts.const_str_plain_time_sleep_coro,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f4cf167c556c5c78a70c83fc3b3c6dc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_ef805723c2ab77a2a7e51b8036e1af85,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__2_sleep(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__2_sleep,
        mod_consts.const_str_plain_sleep,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_94c0f9d08712503d89f320302d788e40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_a754ec84ba70f252ddeb04b6cf3dcda6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__3_no_sleep_coro(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__3_no_sleep_coro,
        mod_consts.const_str_plain_no_sleep_coro,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1a8f8456fc6119694d65edea92c13bfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_f79d11f5e8d0c30f0e4810027b3473a4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__4_sleep,
        mod_consts.const_str_plain_sleep,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d145544c2a108551269d23953c40b2e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_3d4e81667e93ff3623c048a22aee67c6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner,
        mod_consts.const_str_plain_cancel_inner,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_48c3f382430a0ad15d34669512ad20bc,
#endif
        code_objects_e3b809ad7d2170924a5254c088b8fa64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_5e98b5d05173087cb7a0c89c48dfb9fb,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel,
        mod_consts.const_str_plain_cancel,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b106915567e5938df471e564114072e,
#endif
        code_objects_2037be222e966bf02bd3d4c6fda18e3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_b1847062fb0da73d2eb0aa7aa0eaaee0,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner,
        mod_consts.const_str_plain_wait_inner,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b3686409082b25662637d4e9f03d1d71,
#endif
        code_objects_509ece82fe2421144d223418e52a0268,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_dbd3133685870043c5116748b2407a4b,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep$$$function__4_wait(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_win_sleep$$$function__4_sleep$$$function__4_wait,
        mod_consts.const_str_plain_wait,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53039b705855cc3646ed44f364aaa236,
#endif
        code_objects_6c8a89a0dc61a84f1ad7071a9130f559,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_textual$_win_sleep,
        mod_consts.const_str_digest_67f8d0f20f743943b8403c47b673c643,
        closure,
        4
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

static function_impl_code const function_table_textual$_win_sleep[] = {
impl_textual$_win_sleep$$$function__4_sleep$$$function__1_cancel_inner,
impl_textual$_win_sleep$$$function__4_sleep$$$function__2_cancel,
impl_textual$_win_sleep$$$function__4_sleep$$$function__3_wait_inner,
impl_textual$_win_sleep$$$function__4_sleep$$$function__4_wait,
impl_textual$_win_sleep$$$function__1_time_sleep_coro,
impl_textual$_win_sleep$$$function__2_sleep,
impl_textual$_win_sleep$$$function__3_no_sleep_coro,
impl_textual$_win_sleep$$$function__4_sleep,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_win_sleep);
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
        module_textual$_win_sleep,
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
        function_table_textual$_win_sleep,
        sizeof(function_table_textual$_win_sleep) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._win_sleep";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_win_sleep(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_win_sleep");

    // Store the module for future use.
    module_textual$_win_sleep = module;

    moduledict_textual$_win_sleep = MODULE_DICT(module_textual$_win_sleep);

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
        PRINT_STRING("textual$_win_sleep: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_win_sleep: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_win_sleep: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._win_sleep" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_win_sleep\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_win_sleep,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_win_sleep,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_win_sleep,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_win_sleep,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_win_sleep,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_win_sleep);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_win_sleep);
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

        UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_textual$_win_sleep;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_3648ddcaac69c1f0b1618352831d2d8b;
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_win_sleep = MAKE_MODULE_FRAME(code_objects_ae18510ebbdc44414fecfc8242ce4f05, module_textual$_win_sleep);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_win_sleep);
assert(Py_REFCNT(frame_frame_textual$_win_sleep) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_win_sleep$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_win_sleep$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_win_sleep;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_win_sleep->m_frame.f_lineno = 9;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_win_sleep;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_sleep_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_win_sleep->m_frame.f_lineno = 10;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$_win_sleep,
        mod_consts.const_str_plain_sleep,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_sleep);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$_win_sleep,
        mod_consts.const_str_plain_Coroutine,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Coroutine);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_Coroutine, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST1(tstate, mod_consts.const_str_plain_sleep);
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = mod_consts.const_int_hex_ffffffff;
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_INFINITE, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = mod_consts.const_int_hex_ffffffff;
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_FAILED, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_CREATE_WAITABLE_TIMER_HIGH_RESOLUTION, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_int_pos_2031619;
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_TIMER_ALL_ACCESS, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_bfc885aa1e057ef345f6d7e0eb158a14);

tmp_assign_source_13 = MAKE_FUNCTION_textual$_win_sleep$$$function__1_time_sleep_coro(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_time_sleep_coro, tmp_assign_source_13);
}
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_15 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_16 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_16);
tmp_import_from_1__module = tmp_assign_source_16;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$_win_sleep,
        mod_consts.const_str_plain_HANDLE,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HANDLE);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$_win_sleep,
        mod_consts.const_str_plain_LARGE_INTEGER,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_LARGE_INTEGER);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_LARGE_INTEGER, tmp_assign_source_18);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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

goto try_except_handler_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_windll);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_1;
}
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kernel32);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32, tmp_assign_source_19);
}
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_20;
}
// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_win_sleep, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_win_sleep, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
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
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0759db674680d22ca232443f74b574fd);

tmp_assign_source_21 = MAKE_FUNCTION_textual$_win_sleep$$$function__2_sleep(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep, tmp_assign_source_21);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 27;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$_win_sleep->m_frame)) {
        frame_frame_textual$_win_sleep->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_3;
branch_end_1:;
goto try_end_3;
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
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_win_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_win_sleep->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_win_sleep, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_win_sleep);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
bool tmp_condition_result_2;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_22;

tmp_assign_source_22 = MAKE_FUNCTION_textual$_win_sleep$$$function__3_no_sleep_coro(tstate);

UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_no_sleep_coro, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0759db674680d22ca232443f74b574fd);

tmp_assign_source_23 = MAKE_FUNCTION_textual$_win_sleep$$$function__4_sleep(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$_win_sleep, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep, tmp_assign_source_23);
}
branch_no_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_win_sleep", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._win_sleep" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_win_sleep);
    return module_textual$_win_sleep;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_win_sleep, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_win_sleep", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

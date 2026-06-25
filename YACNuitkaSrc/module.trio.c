/* Generated code for Python module 'trio'
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



/* The "module_trio" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio;
PyDictObject *moduledict_trio;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_0214fee26011a5068b3f2c66e4a7e7fd;
PyObject *const_str_plain_environ;
PyObject *const_tuple_e942865e62a35bc9f7d50c088d3be183_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain__core;
PyObject *const_tuple_str_plain_TASK_STATUS_IGNORED_tuple;
PyObject *const_str_plain_TASK_STATUS_IGNORED;
PyObject *const_tuple_9d2ddc49678aefbd2a63bb776392da09_tuple;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_from_thread;
PyObject *const_str_plain_lowlevel;
PyObject *const_str_plain_socket;
PyObject *const_str_plain_to_thread;
PyObject *const_str_plain__channel;
PyObject *const_tuple_81470ba530aa7840292219d8636dbd6b_tuple;
PyObject *const_str_plain_MemoryChannelStatistics;
PyObject *const_str_plain_MemoryReceiveChannel;
PyObject *const_str_plain_MemorySendChannel;
PyObject *const_str_plain_as_safe_channel;
PyObject *const_str_plain_open_memory_channel;
PyObject *const_tuple_f8782a74e08396c5fe4009b9d45d97f4_tuple;
PyObject *const_str_plain_BrokenResourceError;
PyObject *const_str_plain_BusyResourceError;
PyObject *const_str_plain_Cancelled;
PyObject *const_str_plain_CancelScope;
PyObject *const_str_plain_ClosedResourceError;
PyObject *const_str_plain_EndOfChannel;
PyObject *const_str_plain_Nursery;
PyObject *const_str_plain_RunFinishedError;
PyObject *const_str_plain_TaskStatus;
PyObject *const_str_plain_TrioInternalError;
PyObject *const_str_plain_WouldBlock;
PyObject *const_str_plain_current_effective_deadline;
PyObject *const_str_plain_current_time;
PyObject *const_str_plain_open_nursery;
PyObject *const_str_plain_run;
PyObject *const_str_plain__deprecate;
PyObject *const_tuple_str_plain_TrioDeprecationWarning_tuple;
PyObject *const_str_plain_TrioDeprecationWarning;
PyObject *const_str_plain__dtls;
PyObject *const_tuple_dde0d67a345d6a82f2d1f0d590f1cad6_tuple;
PyObject *const_str_plain_DTLSChannel;
PyObject *const_str_plain_DTLSChannelStatistics;
PyObject *const_str_plain_DTLSEndpoint;
PyObject *const_str_plain__file_io;
PyObject *const_tuple_str_plain_open_file_str_plain_wrap_file_tuple;
PyObject *const_str_plain_open_file;
PyObject *const_str_plain_wrap_file;
PyObject *const_str_plain__highlevel_generic;
PyObject *const_tuple_str_plain_StapledStream_str_plain_aclose_forcefully_tuple;
PyObject *const_str_plain_StapledStream;
PyObject *const_str_plain_aclose_forcefully;
PyObject *const_str_plain__highlevel_open_tcp_listeners;
PyObject *const_tuple_str_plain_open_tcp_listeners_str_plain_serve_tcp_tuple;
PyObject *const_str_plain_open_tcp_listeners;
PyObject *const_str_plain_serve_tcp;
PyObject *const_str_plain__highlevel_open_tcp_stream;
PyObject *const_tuple_str_plain_open_tcp_stream_tuple;
PyObject *const_str_plain_open_tcp_stream;
PyObject *const_str_plain__highlevel_open_unix_stream;
PyObject *const_tuple_str_plain_open_unix_socket_tuple;
PyObject *const_str_plain_open_unix_socket;
PyObject *const_str_plain__highlevel_serve_listeners;
PyObject *const_tuple_str_plain_serve_listeners_tuple;
PyObject *const_str_plain_serve_listeners;
PyObject *const_str_plain__highlevel_socket;
PyObject *const_tuple_str_plain_SocketListener_str_plain_SocketStream_tuple;
PyObject *const_str_plain_SocketListener;
PyObject *const_str_plain_SocketStream;
PyObject *const_str_plain__highlevel_ssl_helpers;
PyObject *const_tuple_f4742391337343a6cff2d2f90ba4f63c_tuple;
PyObject *const_str_plain_open_ssl_over_tcp_listeners;
PyObject *const_str_plain_open_ssl_over_tcp_stream;
PyObject *const_str_plain_serve_ssl_over_tcp;
PyObject *const_str_plain__path;
PyObject *const_tuple_str_plain_Path_str_plain_PosixPath_str_plain_WindowsPath_tuple;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_PosixPath;
PyObject *const_str_plain_WindowsPath;
PyObject *const_str_plain__signals;
PyObject *const_tuple_str_plain_open_signal_receiver_tuple;
PyObject *const_str_plain_open_signal_receiver;
PyObject *const_str_plain__ssl;
PyObject *const_tuple_f5e743744a6e57c280cf71b89f8a1a83_tuple;
PyObject *const_str_plain_NeedHandshakeError;
PyObject *const_str_plain_SSLListener;
PyObject *const_str_plain_SSLStream;
PyObject *const_str_plain__subprocess;
PyObject *const_tuple_str_plain_Process_str_plain_run_process_tuple;
PyObject *const_str_plain_Process;
PyObject *const_str_plain_run_process;
PyObject *const_str_plain__sync;
PyObject *const_tuple_2b80d9288209d02e9c2ebcae57122adb_tuple;
PyObject *const_str_plain_CapacityLimiter;
PyObject *const_str_plain_CapacityLimiterStatistics;
PyObject *const_str_plain_Condition;
PyObject *const_str_plain_ConditionStatistics;
PyObject *const_str_plain_Event;
PyObject *const_str_plain_EventStatistics;
PyObject *const_str_plain_Lock;
PyObject *const_str_plain_LockStatistics;
PyObject *const_str_plain_Semaphore;
PyObject *const_str_plain_StrictFIFOLock;
PyObject *const_str_plain__timeouts;
PyObject *const_tuple_e119caea17743732360b71c4c7027628_tuple;
PyObject *const_str_plain_TooSlowError;
PyObject *const_str_plain_fail_after;
PyObject *const_str_plain_fail_at;
PyObject *const_str_plain_move_on_after;
PyObject *const_str_plain_move_on_at;
PyObject *const_str_plain_sleep;
PyObject *const_str_plain_sleep_forever;
PyObject *const_str_plain_sleep_until;
PyObject *const_str_plain__version;
PyObject *const_tuple_str_plain___version___tuple;
PyObject *const_str_plain___version__;
PyObject *const_tuple_str_plain__deprecate_tuple;
PyObject *const_str_plain_deprecate_attributes;
PyObject *const_str_plain_trio;
PyObject *const_str_plain__util;
PyObject *const_tuple_str_plain_fixup_module_metadata_tuple;
PyObject *const_str_plain_fixup_module_metadata;
PyObject *const_str_digest_ef080479810da322f9ed3e8ecbaa4f39;
PyObject *const_str_digest_d748ff4e5fb240e4389d3aebe28ba02c;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[128];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_0214fee26011a5068b3f2c66e4a7e7fd);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_e942865e62a35bc9f7d50c088d3be183_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TASK_STATUS_IGNORED_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_9d2ddc49678aefbd2a63bb776392da09_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_thread);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_socket);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__channel);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_81470ba530aa7840292219d8636dbd6b_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryChannelStatistics);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryReceiveChannel);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_MemorySendChannel);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_as_safe_channel);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_memory_channel);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_f8782a74e08396c5fe4009b9d45d97f4_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_BrokenResourceError);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_BusyResourceError);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_Cancelled);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClosedResourceError);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfChannel);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Nursery);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunFinishedError);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_TaskStatus);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_TrioInternalError);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_WouldBlock);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_effective_deadline);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_time);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_nursery);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__deprecate);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TrioDeprecationWarning_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_TrioDeprecationWarning);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__dtls);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_dde0d67a345d6a82f2d1f0d590f1cad6_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_DTLSChannel);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_DTLSChannelStatistics);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_DTLSEndpoint);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain__file_io);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_file_str_plain_wrap_file_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_file);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_file);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_generic);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StapledStream_str_plain_aclose_forcefully_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_StapledStream);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose_forcefully);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_tcp_listeners);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_tcp_listeners_str_plain_serve_tcp_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_listeners);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_serve_tcp);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_tcp_stream);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_tcp_stream_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_stream);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_unix_stream);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_unix_socket_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_unix_socket);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_serve_listeners);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_serve_listeners_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_serve_listeners);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_socket);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketListener_str_plain_SocketStream_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_ssl_helpers);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_f4742391337343a6cff2d2f90ba4f63c_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_listeners);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_stream);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_serve_ssl_over_tcp);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__path);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_str_plain_PosixPath_str_plain_WindowsPath_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_PosixPath);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_WindowsPath);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__signals);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_signal_receiver_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_signal_receiver);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__ssl);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_f5e743744a6e57c280cf71b89f8a1a83_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_NeedHandshakeError);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLListener);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_SSLStream);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__subprocess);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Process_str_plain_run_process_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_Process);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_process);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__sync);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_2b80d9288209d02e9c2ebcae57122adb_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_CapacityLimiter);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_CapacityLimiterStatistics);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_Condition);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConditionStatistics);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventStatistics);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lock);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_LockStatistics);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Semaphore);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrictFIFOLock);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain__timeouts);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_e119caea17743732360b71c4c7027628_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_TooSlowError);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail_at);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_at);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_forever);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_until);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain__version);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__deprecate_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate_attributes);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__util);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fixup_module_metadata_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_fixup_module_metadata);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef080479810da322f9ed3e8ecbaa4f39);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_d748ff4e5fb240e4389d3aebe28ba02c);
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
void checkModuleConstants_trio(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_0214fee26011a5068b3f2c66e4a7e7fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0214fee26011a5068b3f2c66e4a7e7fd);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_e942865e62a35bc9f7d50c088d3be183_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e942865e62a35bc9f7d50c088d3be183_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TASK_STATUS_IGNORED_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TASK_STATUS_IGNORED_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_TASK_STATUS_IGNORED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TASK_STATUS_IGNORED);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_9d2ddc49678aefbd2a63bb776392da09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9d2ddc49678aefbd2a63bb776392da09_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_thread);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lowlevel);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_socket);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_thread);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__channel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__channel);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_81470ba530aa7840292219d8636dbd6b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_81470ba530aa7840292219d8636dbd6b_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryChannelStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryChannelStatistics);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemoryReceiveChannel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemoryReceiveChannel);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_MemorySendChannel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MemorySendChannel);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_as_safe_channel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_as_safe_channel);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_memory_channel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_memory_channel);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_f8782a74e08396c5fe4009b9d45d97f4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f8782a74e08396c5fe4009b9d45d97f4_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_BrokenResourceError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BrokenResourceError);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_BusyResourceError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BusyResourceError);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_Cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Cancelled);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelScope);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClosedResourceError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClosedResourceError);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_EndOfChannel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EndOfChannel);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Nursery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Nursery);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunFinishedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunFinishedError);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_TaskStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TaskStatus);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_TrioInternalError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TrioInternalError);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_WouldBlock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WouldBlock);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_effective_deadline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_effective_deadline);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_time);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_nursery));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_nursery);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__deprecate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__deprecate);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TrioDeprecationWarning_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TrioDeprecationWarning_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_TrioDeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TrioDeprecationWarning);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__dtls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dtls);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_dde0d67a345d6a82f2d1f0d590f1cad6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dde0d67a345d6a82f2d1f0d590f1cad6_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_DTLSChannel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DTLSChannel);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_DTLSChannelStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DTLSChannelStatistics);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_DTLSEndpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DTLSEndpoint);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain__file_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__file_io);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_file_str_plain_wrap_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_file_str_plain_wrap_file_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_file);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_wrap_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wrap_file);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_generic);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_StapledStream_str_plain_aclose_forcefully_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_StapledStream_str_plain_aclose_forcefully_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_StapledStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StapledStream);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose_forcefully));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose_forcefully);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_tcp_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_open_tcp_listeners);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_tcp_listeners_str_plain_serve_tcp_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_tcp_listeners_str_plain_serve_tcp_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_tcp_listeners);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_serve_tcp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serve_tcp);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_tcp_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_open_tcp_stream);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_tcp_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_tcp_stream_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_tcp_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_tcp_stream);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_open_unix_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_open_unix_stream);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_unix_socket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_unix_socket_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_unix_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_unix_socket);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_serve_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_serve_listeners);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_serve_listeners_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_serve_listeners_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_serve_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serve_listeners);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_socket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_socket);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketListener_str_plain_SocketStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SocketListener_str_plain_SocketStream_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketListener);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketStream);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__highlevel_ssl_helpers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__highlevel_ssl_helpers);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_f4742391337343a6cff2d2f90ba4f63c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f4742391337343a6cff2d2f90ba4f63c_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_listeners));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_ssl_over_tcp_listeners);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_ssl_over_tcp_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_ssl_over_tcp_stream);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_serve_ssl_over_tcp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serve_ssl_over_tcp);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__path);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_str_plain_PosixPath_str_plain_WindowsPath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_str_plain_PosixPath_str_plain_WindowsPath_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_PosixPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PosixPath);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_WindowsPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WindowsPath);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__signals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__signals);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_signal_receiver_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_signal_receiver_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_signal_receiver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_signal_receiver);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__ssl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ssl);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_f5e743744a6e57c280cf71b89f8a1a83_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f5e743744a6e57c280cf71b89f8a1a83_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_NeedHandshakeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NeedHandshakeError);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLListener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSLListener);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_SSLStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SSLStream);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__subprocess);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Process_str_plain_run_process_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Process_str_plain_run_process_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_Process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Process);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_process);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sync);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_2b80d9288209d02e9c2ebcae57122adb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2b80d9288209d02e9c2ebcae57122adb_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_CapacityLimiter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CapacityLimiter);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_CapacityLimiterStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CapacityLimiterStatistics);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_Condition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Condition);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConditionStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConditionStatistics);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventStatistics);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Lock);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_LockStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LockStatistics);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Semaphore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Semaphore);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrictFIFOLock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrictFIFOLock);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain__timeouts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__timeouts);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_e119caea17743732360b71c4c7027628_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e119caea17743732360b71c4c7027628_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_TooSlowError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TooSlowError);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail_after);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail_at);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move_on_after);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move_on_at);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_forever));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep_forever);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_until));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep_until);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain__version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__version);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___version___tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__deprecate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__deprecate_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_deprecate_attributes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deprecate_attributes);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__util));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__util);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_fixup_module_metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_fixup_module_metadata_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_fixup_module_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fixup_module_metadata);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef080479810da322f9ed3e8ecbaa4f39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef080479810da322f9ed3e8ecbaa4f39);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_d748ff4e5fb240e4389d3aebe28ba02c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d748ff4e5fb240e4389d3aebe28ba02c);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_trio$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_deprecate(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecate);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__deprecate);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__deprecate, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__deprecate);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__deprecate, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecate);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecate);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecate);
    }

    return result;
}

static PyObject *module_var_accessor_trio$abc(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_trio$fixup_module_metadata(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_fixup_module_metadata);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fixup_module_metadata);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fixup_module_metadata, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fixup_module_metadata);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fixup_module_metadata, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_fixup_module_metadata);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_fixup_module_metadata);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fixup_module_metadata);
    }

    return result;
}

static PyObject *module_var_accessor_trio$from_thread(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_from_thread);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_thread);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_thread, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_from_thread);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_from_thread, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_from_thread);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_from_thread);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_from_thread);
    }

    return result;
}

static PyObject *module_var_accessor_trio$lowlevel(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_lowlevel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lowlevel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lowlevel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lowlevel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lowlevel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_lowlevel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_lowlevel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lowlevel);
    }

    return result;
}

static PyObject *module_var_accessor_trio$socket(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_socket);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_socket, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_socket);
    }

    return result;
}

static PyObject *module_var_accessor_trio$to_thread(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_thread);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_thread, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_to_thread);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_to_thread, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dae3d9453fcbde982105052bae91622f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ef080479810da322f9ed3e8ecbaa4f39); CHECK_OBJECT(module_filename_obj);
code_objects_dae3d9453fcbde982105052bae91622f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d748ff4e5fb240e4389d3aebe28ba02c, mod_consts.const_str_digest_d748ff4e5fb240e4389d3aebe28ba02c, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_trio[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_trio);
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
        module_trio,
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
        function_table_trio,
        sizeof(function_table_trio) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio";
#endif

// Internal entry point for module code.
PyObject *module_code_trio(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio");

    // Store the module for future use.
    module_trio = module;

    moduledict_trio = MODULE_DICT(module_trio);

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
        PRINT_STRING("trio: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio);
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

        UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_10__module = NULL;
PyObject *tmp_import_from_11__module = NULL;
PyObject *tmp_import_from_12__module = NULL;
PyObject *tmp_import_from_13__module = NULL;
PyObject *tmp_import_from_14__module = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
PyObject *tmp_import_from_9__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_0214fee26011a5068b3f2c66e4a7e7fd;
UPDATE_STRING_DICT0(moduledict_trio, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio = MAKE_MODULE_FRAME(code_objects_dae3d9453fcbde982105052bae91622f, module_trio);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio);
assert(Py_REFCNT(frame_frame_trio) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_trio->m_frame.f_lineno = 1;
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
frame_frame_trio->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_trio->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_trio->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_e942865e62a35bc9f7d50c088d3be183_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_trio$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_trio$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__core;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_TASK_STATUS_IGNORED_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 22;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_TASK_STATUS_IGNORED,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_TASK_STATUS_IGNORED);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_TASK_STATUS_IGNORED, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_9d2ddc49678aefbd2a63bb776392da09_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 25;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_abc,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_abc);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_9);
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
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_from_thread,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_from_thread);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_from_thread, tmp_assign_source_10);
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
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_lowlevel,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_lowlevel);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_lowlevel, tmp_assign_source_11);
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
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_socket,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_socket);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_socket, tmp_assign_source_12);
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
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_to_thread,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_to_thread);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__channel;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_81470ba530aa7840292219d8636dbd6b_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 26;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_MemoryChannelStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_MemoryChannelStatistics);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryChannelStatistics, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_MemoryReceiveChannel,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_MemoryReceiveChannel);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_MemoryReceiveChannel, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_MemorySendChannel,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_MemorySendChannel);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_MemorySendChannel, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_as_safe_channel,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_as_safe_channel);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_as_safe_channel, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_memory_channel,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_open_memory_channel);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_memory_channel, tmp_assign_source_19);
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
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__core;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_f8782a74e08396c5fe4009b9d45d97f4_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 33;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_BrokenResourceError,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_BrokenResourceError);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_BrokenResourceError, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_BusyResourceError,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_BusyResourceError);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_BusyResourceError, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Cancelled,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Cancelled);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Cancelled, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_CancelScope,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_CancelScope);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelScope, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_16 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_ClosedResourceError,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ClosedResourceError);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_ClosedResourceError, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_17 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_EndOfChannel,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_EndOfChannel);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_EndOfChannel, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_18 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Nursery,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_Nursery);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Nursery, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_19 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_RunFinishedError,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_RunFinishedError);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_RunFinishedError, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_TaskStatus,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_TaskStatus);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskStatus, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_21 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_TrioInternalError,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_TrioInternalError);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_TrioInternalError, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_22 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_WouldBlock,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_WouldBlock);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_WouldBlock, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_23 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_current_effective_deadline,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_current_effective_deadline);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_current_effective_deadline, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_24 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_current_time,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_current_time);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_current_time, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_25 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_nursery,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_open_nursery);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_nursery, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_26 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_run,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_run);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_run, tmp_assign_source_35);
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
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__deprecate;
tmp_globals_arg_value_5 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_TrioDeprecationWarning_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 50;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_TrioDeprecationWarning,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_TrioDeprecationWarning);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_TrioDeprecationWarning, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__dtls;
tmp_globals_arg_value_6 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_dde0d67a345d6a82f2d1f0d590f1cad6_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 51;
tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_28 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_DTLSChannel,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_DTLSChannel);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_DTLSChannel, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_29 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_DTLSChannelStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_DTLSChannelStatistics);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_DTLSChannelStatistics, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_30 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_DTLSEndpoint,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_DTLSEndpoint);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_DTLSEndpoint, tmp_assign_source_40);
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
PyObject *tmp_assign_source_41;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__file_io;
tmp_globals_arg_value_7 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_open_file_str_plain_wrap_file_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 56;
tmp_assign_source_41 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_31 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_file,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_open_file);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_file, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_32 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_wrap_file,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_wrap_file);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_wrap_file, tmp_assign_source_43);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__highlevel_generic;
tmp_globals_arg_value_8 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_StapledStream_str_plain_aclose_forcefully_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 57;
tmp_assign_source_44 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_44;
}
// Tried code:
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_33 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_StapledStream,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_StapledStream);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_StapledStream, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_34 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_aclose_forcefully,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_aclose_forcefully);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_aclose_forcefully, tmp_assign_source_46);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
{
PyObject *tmp_assign_source_47;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__highlevel_open_tcp_listeners;
tmp_globals_arg_value_9 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_open_tcp_listeners_str_plain_serve_tcp_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 61;
tmp_assign_source_47 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_47;
}
// Tried code:
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_35 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_tcp_listeners,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_open_tcp_listeners);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_tcp_listeners, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_36 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_serve_tcp,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_serve_tcp);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_serve_tcp, tmp_assign_source_49);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__highlevel_open_tcp_stream;
tmp_globals_arg_value_10 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_open_tcp_stream_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 65;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_tcp_stream,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_open_tcp_stream);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_tcp_stream, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__highlevel_open_unix_stream;
tmp_globals_arg_value_11 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_open_unix_socket_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 66;
tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_unix_socket,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_open_unix_socket);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_unix_socket, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain__highlevel_serve_listeners;
tmp_globals_arg_value_12 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_serve_listeners_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 67;
tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_serve_listeners,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_serve_listeners);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_serve_listeners, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain__highlevel_socket;
tmp_globals_arg_value_13 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_SocketListener_str_plain_SocketStream_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 68;
tmp_assign_source_53 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_53;
}
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_40 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_SocketListener,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_SocketListener);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketListener, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_41 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_SocketStream,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_SocketStream);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream, tmp_assign_source_55);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain__highlevel_ssl_helpers;
tmp_globals_arg_value_14 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_f4742391337343a6cff2d2f90ba4f63c_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 72;
tmp_assign_source_56 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_9__module == NULL);
tmp_import_from_9__module = tmp_assign_source_56;
}
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_42 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_ssl_over_tcp_listeners,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_open_ssl_over_tcp_listeners);
}

if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_ssl_over_tcp_listeners, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_43 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_ssl_over_tcp_stream,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_open_ssl_over_tcp_stream);
}

if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_ssl_over_tcp_stream, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_44 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_serve_ssl_over_tcp,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_serve_ssl_over_tcp);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_serve_ssl_over_tcp, tmp_assign_source_59);
}
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_9__module);
CHECK_OBJECT(tmp_import_from_9__module);
Py_DECREF(tmp_import_from_9__module);
tmp_import_from_9__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_import_from_9__module);
CHECK_OBJECT(tmp_import_from_9__module);
Py_DECREF(tmp_import_from_9__module);
tmp_import_from_9__module = NULL;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain__path;
tmp_globals_arg_value_15 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_Path_str_plain_PosixPath_str_plain_WindowsPath_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 77;
tmp_assign_source_60 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_10__module == NULL);
tmp_import_from_10__module = tmp_assign_source_60;
}
// Tried code:
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_45 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_Path);
}

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_46 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_PosixPath,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_PosixPath);
}

if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_PosixPath, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_47;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_47 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_WindowsPath,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_WindowsPath);
}

if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_WindowsPath, tmp_assign_source_63);
}
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_10__module);
CHECK_OBJECT(tmp_import_from_10__module);
Py_DECREF(tmp_import_from_10__module);
tmp_import_from_10__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_import_from_10__module);
CHECK_OBJECT(tmp_import_from_10__module);
Py_DECREF(tmp_import_from_10__module);
tmp_import_from_10__module = NULL;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain__signals;
tmp_globals_arg_value_16 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_open_signal_receiver_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 78;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_open_signal_receiver,
        const_int_0
    );
} else {
    tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_open_signal_receiver);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_open_signal_receiver, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain__ssl;
tmp_globals_arg_value_17 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_f5e743744a6e57c280cf71b89f8a1a83_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 79;
tmp_assign_source_65 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_11__module == NULL);
tmp_import_from_11__module = tmp_assign_source_65;
}
// Tried code:
{
PyObject *tmp_assign_source_66;
PyObject *tmp_import_name_from_49;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_49 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_NeedHandshakeError,
        const_int_0
    );
} else {
    tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_NeedHandshakeError);
}

if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_NeedHandshakeError, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_50;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_50 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_SSLListener,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_SSLListener);
}

if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLListener, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_import_name_from_51;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_51 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_SSLStream,
        const_int_0
    );
} else {
    tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_SSLStream);
}

if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto try_except_handler_11;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_SSLStream, tmp_assign_source_68);
}
goto try_end_11;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_11__module);
CHECK_OBJECT(tmp_import_from_11__module);
Py_DECREF(tmp_import_from_11__module);
tmp_import_from_11__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_import_from_11__module);
CHECK_OBJECT(tmp_import_from_11__module);
Py_DECREF(tmp_import_from_11__module);
tmp_import_from_11__module = NULL;
{
PyObject *tmp_assign_source_69;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain__subprocess;
tmp_globals_arg_value_18 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_Process_str_plain_run_process_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 84;
tmp_assign_source_69 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_12__module == NULL);
tmp_import_from_12__module = tmp_assign_source_69;
}
// Tried code:
{
PyObject *tmp_assign_source_70;
PyObject *tmp_import_name_from_52;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_52 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Process,
        const_int_0
    );
} else {
    tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_Process);
}

if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Process, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_import_name_from_53;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_53 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_run_process,
        const_int_0
    );
} else {
    tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_run_process);
}

if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_run_process, tmp_assign_source_71);
}
goto try_end_12;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_12__module);
CHECK_OBJECT(tmp_import_from_12__module);
Py_DECREF(tmp_import_from_12__module);
tmp_import_from_12__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_import_from_12__module);
CHECK_OBJECT(tmp_import_from_12__module);
Py_DECREF(tmp_import_from_12__module);
tmp_import_from_12__module = NULL;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain__sync;
tmp_globals_arg_value_19 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_2b80d9288209d02e9c2ebcae57122adb_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 85;
tmp_assign_source_72 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_13__module == NULL);
tmp_import_from_13__module = tmp_assign_source_72;
}
// Tried code:
{
PyObject *tmp_assign_source_73;
PyObject *tmp_import_name_from_54;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_54 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_CapacityLimiter,
        const_int_0
    );
} else {
    tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain_CapacityLimiter);
}

if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_CapacityLimiter, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_import_name_from_55;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_55 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_CapacityLimiterStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain_CapacityLimiterStatistics);
}

if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_CapacityLimiterStatistics, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_import_name_from_56;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_56 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Condition,
        const_int_0
    );
} else {
    tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain_Condition);
}

if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Condition, tmp_assign_source_75);
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_import_name_from_57;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_57 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_ConditionStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain_ConditionStatistics);
}

if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_ConditionStatistics, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_import_name_from_58;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_58 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Event,
        const_int_0
    );
} else {
    tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain_Event);
}

if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_77);
}
{
PyObject *tmp_assign_source_78;
PyObject *tmp_import_name_from_59;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_59 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_EventStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain_EventStatistics);
}

if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_EventStatistics, tmp_assign_source_78);
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_import_name_from_60;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_60 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Lock,
        const_int_0
    );
} else {
    tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_plain_Lock);
}

if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Lock, tmp_assign_source_79);
}
{
PyObject *tmp_assign_source_80;
PyObject *tmp_import_name_from_61;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_61 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_LockStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain_LockStatistics);
}

if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_LockStatistics, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_import_name_from_62;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_62 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_Semaphore,
        const_int_0
    );
} else {
    tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain_Semaphore);
}

if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_Semaphore, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_import_name_from_63;
CHECK_OBJECT(tmp_import_from_13__module);
tmp_import_name_from_63 = tmp_import_from_13__module;
if (PyModule_Check(tmp_import_name_from_63)) {
    tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_63,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_StrictFIFOLock,
        const_int_0
    );
} else {
    tmp_assign_source_82 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts.const_str_plain_StrictFIFOLock);
}

if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto try_except_handler_13;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_StrictFIFOLock, tmp_assign_source_82);
}
goto try_end_13;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_13__module);
CHECK_OBJECT(tmp_import_from_13__module);
Py_DECREF(tmp_import_from_13__module);
tmp_import_from_13__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_import_from_13__module);
CHECK_OBJECT(tmp_import_from_13__module);
Py_DECREF(tmp_import_from_13__module);
tmp_import_from_13__module = NULL;
{
PyObject *tmp_assign_source_83;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain__timeouts;
tmp_globals_arg_value_20 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_e119caea17743732360b71c4c7027628_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 97;
tmp_assign_source_83 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_14__module == NULL);
tmp_import_from_14__module = tmp_assign_source_83;
}
// Tried code:
{
PyObject *tmp_assign_source_84;
PyObject *tmp_import_name_from_64;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_64 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_64)) {
    tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_64,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_TooSlowError,
        const_int_0
    );
} else {
    tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts.const_str_plain_TooSlowError);
}

if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_TooSlowError, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_import_name_from_65;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_65 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_65)) {
    tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_65,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_fail_after,
        const_int_0
    );
} else {
    tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts.const_str_plain_fail_after);
}

if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_after, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
PyObject *tmp_import_name_from_66;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_66 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_66)) {
    tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_66,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_fail_at,
        const_int_0
    );
} else {
    tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts.const_str_plain_fail_at);
}

if (tmp_assign_source_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_at, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_import_name_from_67;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_67 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_67)) {
    tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_67,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_move_on_after,
        const_int_0
    );
} else {
    tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts.const_str_plain_move_on_after);
}

if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_after, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_import_name_from_68;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_68 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_68)) {
    tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_68,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_move_on_at,
        const_int_0
    );
} else {
    tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts.const_str_plain_move_on_at);
}

if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_at, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_import_name_from_69;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_69 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_69)) {
    tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_69,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_sleep,
        const_int_0
    );
} else {
    tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts.const_str_plain_sleep);
}

if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep, tmp_assign_source_89);
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_import_name_from_70;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_70 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_70)) {
    tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_70,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_sleep_forever,
        const_int_0
    );
} else {
    tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts.const_str_plain_sleep_forever);
}

if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_forever, tmp_assign_source_90);
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_import_name_from_71;
CHECK_OBJECT(tmp_import_from_14__module);
tmp_import_name_from_71 = tmp_import_from_14__module;
if (PyModule_Check(tmp_import_name_from_71)) {
    tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_71,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_sleep_until,
        const_int_0
    );
} else {
    tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts.const_str_plain_sleep_until);
}

if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_until, tmp_assign_source_91);
}
goto try_end_14;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_14__module);
CHECK_OBJECT(tmp_import_from_14__module);
Py_DECREF(tmp_import_from_14__module);
tmp_import_from_14__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_import_from_14__module);
CHECK_OBJECT(tmp_import_from_14__module);
Py_DECREF(tmp_import_from_14__module);
tmp_import_from_14__module = NULL;
{
PyObject *tmp_assign_source_92;
PyObject *tmp_import_name_from_72;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain__version;
tmp_globals_arg_value_21 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 107;
tmp_import_name_from_72 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_72)) {
    tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_72,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_72);
Py_DECREF(tmp_import_name_from_72);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_92);
}
{
PyObject *tmp_assign_source_93;
PyObject *tmp_import_name_from_73;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = const_str_empty;
tmp_globals_arg_value_22 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain__deprecate_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 114;
tmp_import_name_from_73 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_73)) {
    tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_73,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain__deprecate,
        const_int_0
    );
} else {
    tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts.const_str_plain__deprecate);
}

CHECK_OBJECT(tmp_import_name_from_73);
Py_DECREF(tmp_import_name_from_73);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecate, tmp_assign_source_93);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
tmp_called_instance_1 = module_var_accessor_trio$_deprecate(tstate);
assert(!(tmp_called_instance_1 == NULL));
tmp_call_arg_element_1 = mod_consts.const_str_plain_trio;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_trio->m_frame.f_lineno = 116;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_deprecate_attributes,
        call_args
    );
}

CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_94;
PyObject *tmp_import_name_from_74;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain__util;
tmp_globals_arg_value_23 = (PyObject *)moduledict_trio;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_fixup_module_metadata_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_trio->m_frame.f_lineno = 124;
tmp_import_name_from_74 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_74)) {
    tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_74,
        (PyObject *)moduledict_trio,
        mod_consts.const_str_plain_fixup_module_metadata,
        const_int_0
    );
} else {
    tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts.const_str_plain_fixup_module_metadata);
}

CHECK_OBJECT(tmp_import_name_from_74);
Py_DECREF(tmp_import_name_from_74);
if (tmp_assign_source_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio, (Nuitka_StringObject *)mod_consts.const_str_plain_fixup_module_metadata, tmp_assign_source_94);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_trio$fixup_module_metadata(tstate);
assert(!(tmp_called_value_3 == NULL));
tmp_args_element_value_2 = mod_consts.const_str_plain_trio;
tmp_args_element_value_3 = (PyObject *)moduledict_trio;
frame_frame_trio->m_frame.f_lineno = 126;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_4;
tmp_called_value_4 = module_var_accessor_trio$fixup_module_metadata(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fixup_module_metadata);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_trio$lowlevel(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lowlevel);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_trio$lowlevel(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lowlevel);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 127;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_4);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 127;

    goto frame_exception_exit_1;
}
frame_frame_trio->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_6;
tmp_called_value_5 = module_var_accessor_trio$fixup_module_metadata(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fixup_module_metadata);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_trio$socket(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___name__);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_trio$socket(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_socket);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_6);

exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_6);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 128;

    goto frame_exception_exit_1;
}
frame_frame_trio->m_frame.f_lineno = 128;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_8;
tmp_called_value_6 = module_var_accessor_trio$fixup_module_metadata(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fixup_module_metadata);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_trio$abc(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_trio$abc(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_8);

exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_8);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_8);

exception_lineno = 129;

    goto frame_exception_exit_1;
}
frame_frame_trio->m_frame.f_lineno = 129;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_10;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_10;
tmp_called_value_7 = module_var_accessor_trio$fixup_module_metadata(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fixup_module_metadata);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto frame_exception_exit_1;
}
tmp_expression_value_9 = module_var_accessor_trio$from_thread(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_thread);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain___name__);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto frame_exception_exit_1;
}
tmp_expression_value_10 = module_var_accessor_trio$from_thread(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_from_thread);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_10);

exception_lineno = 130;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_10);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_10);

exception_lineno = 130;

    goto frame_exception_exit_1;
}
frame_frame_trio->m_frame.f_lineno = 130;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_12;
tmp_called_value_8 = module_var_accessor_trio$fixup_module_metadata(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fixup_module_metadata);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto frame_exception_exit_1;
}
tmp_expression_value_11 = module_var_accessor_trio$to_thread(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto frame_exception_exit_1;
}
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain___name__);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto frame_exception_exit_1;
}
tmp_expression_value_12 = module_var_accessor_trio$to_thread(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_12);

exception_lineno = 131;

    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_12);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_12);

exception_lineno = 131;

    goto frame_exception_exit_1;
}
frame_frame_trio->m_frame.f_lineno = 131;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_trio, mod_consts.const_str_plain_fixup_module_metadata);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fixup_module_metadata);

exception_lineno = 132;

    goto frame_exception_exit_1;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_trio, mod_consts.const_str_plain_TYPE_CHECKING);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TYPE_CHECKING);

exception_lineno = 133;

    goto frame_exception_exit_1;
}



// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio);
    return module_trio;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

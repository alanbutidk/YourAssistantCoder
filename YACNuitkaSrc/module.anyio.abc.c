/* Generated code for Python module 'anyio$abc'
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



/* The "module_anyio$abc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$abc;
PyDictObject *moduledict_anyio$abc;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_03b6a876e7c00d0645434ecbd2e1d0e5_tuple;
PyObject *const_str_plain_abc;
PyObject *const_tuple_c60244c33b9956f1336683b75d72b26d_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain__eventloop;
PyObject *const_tuple_str_plain_AsyncBackend_tuple;
PyObject *const_str_plain_AsyncBackend;
PyObject *const_str_plain__resources;
PyObject *const_tuple_str_plain_AsyncResource_tuple;
PyObject *const_str_plain_AsyncResource;
PyObject *const_str_plain__sockets;
PyObject *const_tuple_str_plain_ConnectedUDPSocket_tuple;
PyObject *const_str_plain_ConnectedUDPSocket;
PyObject *const_tuple_str_plain_ConnectedUNIXDatagramSocket_tuple;
PyObject *const_str_plain_ConnectedUNIXDatagramSocket;
PyObject *const_tuple_str_plain_IPAddressType_tuple;
PyObject *const_str_plain_IPAddressType;
PyObject *const_tuple_str_plain_IPSockAddrType_tuple;
PyObject *const_str_plain_IPSockAddrType;
PyObject *const_tuple_str_plain_SocketAttribute_tuple;
PyObject *const_str_plain_SocketAttribute;
PyObject *const_tuple_str_plain_SocketListener_tuple;
PyObject *const_str_plain_SocketListener;
PyObject *const_tuple_str_plain_SocketStream_tuple;
PyObject *const_str_plain_SocketStream;
PyObject *const_tuple_str_plain_UDPPacketType_tuple;
PyObject *const_str_plain_UDPPacketType;
PyObject *const_tuple_str_plain_UDPSocket_tuple;
PyObject *const_str_plain_UDPSocket;
PyObject *const_tuple_str_plain_UNIXDatagramPacketType_tuple;
PyObject *const_str_plain_UNIXDatagramPacketType;
PyObject *const_tuple_str_plain_UNIXDatagramSocket_tuple;
PyObject *const_str_plain_UNIXDatagramSocket;
PyObject *const_tuple_str_plain_UNIXSocketStream_tuple;
PyObject *const_str_plain_UNIXSocketStream;
PyObject *const_str_plain__streams;
PyObject *const_tuple_str_plain_AnyByteReceiveStream_tuple;
PyObject *const_str_plain_AnyByteReceiveStream;
PyObject *const_tuple_str_plain_AnyByteSendStream_tuple;
PyObject *const_str_plain_AnyByteSendStream;
PyObject *const_tuple_str_plain_AnyByteStream_tuple;
PyObject *const_str_plain_AnyByteStream;
PyObject *const_tuple_str_plain_AnyByteStreamConnectable_tuple;
PyObject *const_str_plain_AnyByteStreamConnectable;
PyObject *const_tuple_str_plain_AnyUnreliableByteReceiveStream_tuple;
PyObject *const_str_plain_AnyUnreliableByteReceiveStream;
PyObject *const_tuple_str_plain_AnyUnreliableByteSendStream_tuple;
PyObject *const_str_plain_AnyUnreliableByteSendStream;
PyObject *const_tuple_str_plain_AnyUnreliableByteStream_tuple;
PyObject *const_str_plain_AnyUnreliableByteStream;
PyObject *const_tuple_str_plain_ByteReceiveStream_tuple;
PyObject *const_str_plain_ByteReceiveStream;
PyObject *const_tuple_str_plain_ByteSendStream_tuple;
PyObject *const_str_plain_ByteSendStream;
PyObject *const_tuple_str_plain_ByteStream_tuple;
PyObject *const_str_plain_ByteStream;
PyObject *const_tuple_str_plain_ByteStreamConnectable_tuple;
PyObject *const_str_plain_ByteStreamConnectable;
PyObject *const_tuple_str_plain_Listener_tuple;
PyObject *const_str_plain_Listener;
PyObject *const_tuple_str_plain_ObjectReceiveStream_tuple;
PyObject *const_str_plain_ObjectReceiveStream;
PyObject *const_tuple_str_plain_ObjectSendStream_tuple;
PyObject *const_str_plain_ObjectSendStream;
PyObject *const_tuple_str_plain_ObjectStream_tuple;
PyObject *const_str_plain_ObjectStream;
PyObject *const_tuple_str_plain_ObjectStreamConnectable_tuple;
PyObject *const_str_plain_ObjectStreamConnectable;
PyObject *const_tuple_str_plain_UnreliableObjectReceiveStream_tuple;
PyObject *const_str_plain_UnreliableObjectReceiveStream;
PyObject *const_tuple_str_plain_UnreliableObjectSendStream_tuple;
PyObject *const_str_plain_UnreliableObjectSendStream;
PyObject *const_tuple_str_plain_UnreliableObjectStream_tuple;
PyObject *const_str_plain_UnreliableObjectStream;
PyObject *const_str_plain__subprocesses;
PyObject *const_tuple_str_plain_Process_tuple;
PyObject *const_str_plain_Process;
PyObject *const_str_plain__tasks;
PyObject *const_tuple_str_plain_TaskGroup_tuple;
PyObject *const_str_plain_TaskGroup;
PyObject *const_tuple_str_plain_TaskStatus_tuple;
PyObject *const_str_plain_TaskStatus;
PyObject *const_str_plain__testing;
PyObject *const_tuple_str_plain_TestRunner_tuple;
PyObject *const_str_plain_TestRunner;
PyObject *const_str_digest_a3313cf1cd08a6b5c069b88376b67374;
PyObject *const_tuple_763f13f06690e204e08b3231cc0f0775_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_CapacityLimiter;
PyObject *const_str_plain_Condition;
PyObject *const_str_plain_Event;
PyObject *const_str_plain_Lock;
PyObject *const_str_plain_Semaphore;
PyObject *const_str_digest_8a36a375d9bfed9fede77bf4dd3eead4;
PyObject *const_tuple_str_plain_CancelScope_tuple;
PyObject *const_str_plain_CancelScope;
PyObject *const_str_plain_from_thread;
PyObject *const_tuple_str_plain_BlockingPortal_tuple;
PyObject *const_str_plain_BlockingPortal;
PyObject *const_str_plain_values;
PyObject *const_str_plain___value;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_2e5b531eb8f55fdf36f965f59a0b3ae2_tuple;
PyObject *const_str_digest_09782a87826d0fc4ab4e8eac381d62a4;
PyObject *const_str_digest_c4384236481dcd4be21c9e5369732d19;
PyObject *const_str_digest_4e6849a7d665789735849913997a86d4;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[111];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio.abc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_03b6a876e7c00d0645434ecbd2e1d0e5_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_c60244c33b9956f1336683b75d72b26d_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__eventloop);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBackend_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBackend);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__resources);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncResource_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResource);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__sockets);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectedUDPSocket_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUDPSocket);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectedUNIXDatagramSocket_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUNIXDatagramSocket);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IPAddressType_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPAddressType);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IPSockAddrType_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPSockAddrType);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketAttribute_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketAttribute);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketListener_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketStream_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UDPPacketType_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_UDPPacketType);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UDPSocket_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_UDPSocket);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNIXDatagramPacketType_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramPacketType);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNIXDatagramSocket_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramSocket);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNIXSocketStream_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXSocketStream);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__streams);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteReceiveStream_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteReceiveStream);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteSendStream_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteSendStream);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteStream_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteStream);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteStreamConnectable_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteStreamConnectable);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyUnreliableByteReceiveStream_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUnreliableByteReceiveStream);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyUnreliableByteSendStream_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUnreliableByteSendStream);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyUnreliableByteStream_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUnreliableByteStream);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteReceiveStream_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteReceiveStream);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteSendStream_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteSendStream);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteStream_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStream);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteStreamConnectable_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStreamConnectable);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Listener_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectReceiveStream_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectReceiveStream);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectSendStream_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectSendStream);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectStream_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectStream);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectStreamConnectable_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectStreamConnectable);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnreliableObjectReceiveStream_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectReceiveStream);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnreliableObjectSendStream_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectSendStream);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnreliableObjectStream_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectStream);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain__subprocesses);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Process_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_Process);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__tasks);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskGroup_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_TaskGroup);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskStatus_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_TaskStatus);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__testing);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TestRunner_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_TestRunner);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3313cf1cd08a6b5c069b88376b67374);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_763f13f06690e204e08b3231cc0f0775_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_CapacityLimiter);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_Condition);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_Lock);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Semaphore);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a36a375d9bfed9fede77bf4dd3eead4);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CancelScope_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_thread);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BlockingPortal_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_BlockingPortal);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___value);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2e5b531eb8f55fdf36f965f59a0b3ae2_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_09782a87826d0fc4ab4e8eac381d62a4);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4384236481dcd4be21c9e5369732d19);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e6849a7d665789735849913997a86d4);
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
void checkModuleConstants_anyio$abc(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_03b6a876e7c00d0645434ecbd2e1d0e5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03b6a876e7c00d0645434ecbd2e1d0e5_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_c60244c33b9956f1336683b75d72b26d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c60244c33b9956f1336683b75d72b26d_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__eventloop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__eventloop);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncBackend_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncBackend_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncBackend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncBackend);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__resources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__resources);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncResource_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncResource);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__sockets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sockets);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectedUDPSocket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConnectedUDPSocket_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUDPSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectedUDPSocket);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ConnectedUNIXDatagramSocket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ConnectedUNIXDatagramSocket_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectedUNIXDatagramSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectedUNIXDatagramSocket);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IPAddressType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_IPAddressType_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPAddressType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPAddressType);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IPSockAddrType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_IPSockAddrType_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPSockAddrType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPSockAddrType);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketAttribute_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SocketAttribute_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketAttribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketAttribute);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketListener_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SocketListener_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketListener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketListener);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_SocketStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_SocketStream_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketStream);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UDPPacketType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UDPPacketType_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_UDPPacketType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UDPPacketType);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UDPSocket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UDPSocket_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_UDPSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UDPSocket);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNIXDatagramPacketType_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UNIXDatagramPacketType_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramPacketType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNIXDatagramPacketType);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNIXDatagramSocket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UNIXDatagramSocket_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXDatagramSocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNIXDatagramSocket);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UNIXSocketStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UNIXSocketStream_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_UNIXSocketStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UNIXSocketStream);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__streams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__streams);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteReceiveStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyByteReceiveStream_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteReceiveStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyByteReceiveStream);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteSendStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyByteSendStream_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteSendStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyByteSendStream);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyByteStream_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyByteStream);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyByteStreamConnectable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyByteStreamConnectable_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyByteStreamConnectable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyByteStreamConnectable);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyUnreliableByteReceiveStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyUnreliableByteReceiveStream_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUnreliableByteReceiveStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyUnreliableByteReceiveStream);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyUnreliableByteSendStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyUnreliableByteSendStream_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUnreliableByteSendStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyUnreliableByteSendStream);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AnyUnreliableByteStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AnyUnreliableByteStream_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUnreliableByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyUnreliableByteStream);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteReceiveStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ByteReceiveStream_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteReceiveStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteReceiveStream);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteSendStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ByteSendStream_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteSendStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteSendStream);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ByteStream_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteStream);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ByteStreamConnectable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ByteStreamConnectable_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteStreamConnectable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteStreamConnectable);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Listener_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Listener_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectReceiveStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ObjectReceiveStream_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectReceiveStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ObjectReceiveStream);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectSendStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ObjectSendStream_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectSendStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ObjectSendStream);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ObjectStream_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ObjectStream);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ObjectStreamConnectable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ObjectStreamConnectable_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_ObjectStreamConnectable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ObjectStreamConnectable);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnreliableObjectReceiveStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UnreliableObjectReceiveStream_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectReceiveStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnreliableObjectReceiveStream);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnreliableObjectSendStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UnreliableObjectSendStream_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectSendStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnreliableObjectSendStream);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_UnreliableObjectStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_UnreliableObjectStream_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnreliableObjectStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnreliableObjectStream);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain__subprocesses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__subprocesses);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Process_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Process_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_Process));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Process);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__tasks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tasks);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskGroup_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TaskGroup_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_TaskGroup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TaskGroup);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TaskStatus_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TaskStatus_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_TaskStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TaskStatus);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__testing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__testing);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TestRunner_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TestRunner_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_TestRunner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TestRunner);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3313cf1cd08a6b5c069b88376b67374));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3313cf1cd08a6b5c069b88376b67374);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_763f13f06690e204e08b3231cc0f0775_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_763f13f06690e204e08b3231cc0f0775_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_CapacityLimiter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CapacityLimiter);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_Condition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Condition);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_Lock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Lock);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Semaphore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Semaphore);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a36a375d9bfed9fede77bf4dd3eead4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a36a375d9bfed9fede77bf4dd3eead4);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CancelScope_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CancelScope_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelScope);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_thread);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BlockingPortal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BlockingPortal_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_BlockingPortal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BlockingPortal);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___value);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2e5b531eb8f55fdf36f965f59a0b3ae2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2e5b531eb8f55fdf36f965f59a0b3ae2_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_09782a87826d0fc4ab4e8eac381d62a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09782a87826d0fc4ab4e8eac381d62a4);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4384236481dcd4be21c9e5369732d19));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4384236481dcd4be21c9e5369732d19);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e6849a7d665789735849913997a86d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e6849a7d665789735849913997a86d4);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_anyio$abc$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$abc$__value(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$abc->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$abc->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain___value);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$abc->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___value);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___value, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___value);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___value, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain___value);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain___value);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___value);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_b3431e547686cb5109c9a45a71be2844;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c4384236481dcd4be21c9e5369732d19); CHECK_OBJECT(module_filename_obj);
code_objects_b3431e547686cb5109c9a45a71be2844 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4e6849a7d665789735849913997a86d4, mod_consts.const_str_digest_4e6849a7d665789735849913997a86d4, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_anyio$abc[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$abc);
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
        module_anyio$abc,
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
        function_table_anyio$abc,
        sizeof(function_table_anyio$abc) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio.abc";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$abc(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$abc");

    // Store the module for future use.
    module_anyio$abc = module;

    moduledict_anyio$abc = MODULE_DICT(module_anyio$abc);

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
        PRINT_STRING("anyio$abc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$abc: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$abc: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$abc\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$abc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$abc,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$abc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$abc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$abc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$abc);
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

        UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$abc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$abc = MAKE_MODULE_FRAME(code_objects_b3431e547686cb5109c9a45a71be2844, module_anyio$abc);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$abc);
assert(Py_REFCNT(frame_frame_anyio$abc) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_anyio$abc->m_frame.f_lineno = 1;
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
frame_frame_anyio$abc->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 3);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_anyio$abc->m_frame.f_lineno = 1;
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
frame_frame_anyio$abc->m_frame.f_lineno = 1;
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
frame_frame_anyio$abc->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_03b6a876e7c00d0645434ecbd2e1d0e5_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_abc;
frame_frame_anyio$abc->m_frame.f_lineno = 1;
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
frame_frame_anyio$abc->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_anyio$abc->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_c60244c33b9956f1336683b75d72b26d_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$abc$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$abc$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_anyio$abc$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_anyio$abc$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__eventloop;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncBackend_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AsyncBackend,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncBackend);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncBackend, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__resources;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_AsyncResource_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 4;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AsyncResource,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_AsyncResource);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncResource, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ConnectedUDPSocket_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 5;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ConnectedUDPSocket,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ConnectedUDPSocket);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectedUDPSocket, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ConnectedUNIXDatagramSocket_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ConnectedUNIXDatagramSocket,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ConnectedUNIXDatagramSocket);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectedUNIXDatagramSocket, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_IPAddressType_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 7;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_IPAddressType,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_IPAddressType);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_IPAddressType, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_IPSockAddrType_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_IPSockAddrType,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_IPSockAddrType);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_IPSockAddrType, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_SocketAttribute_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_SocketAttribute,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_SocketAttribute);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketAttribute, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_8 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_SocketListener_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 10;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_SocketListener,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_SocketListener);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketListener, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_9 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_SocketStream_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 11;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_SocketStream,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_SocketStream);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_SocketStream, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_10 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_UDPPacketType_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 12;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UDPPacketType,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_UDPPacketType);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPPacketType, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_11 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_UDPSocket_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 13;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UDPSocket,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_UDPSocket);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UDPSocket, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_12 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_UNIXDatagramPacketType_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 14;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UNIXDatagramPacketType,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_UNIXDatagramPacketType);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramPacketType, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_13 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_UNIXDatagramSocket_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 15;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UNIXDatagramSocket,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_UNIXDatagramSocket);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXDatagramSocket, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain__sockets;
tmp_globals_arg_value_14 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_UNIXSocketStream_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 16;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UNIXSocketStream,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_UNIXSocketStream);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UNIXSocketStream, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_15 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_AnyByteReceiveStream_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 17;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AnyByteReceiveStream,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_AnyByteReceiveStream);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyByteReceiveStream, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_16 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_AnyByteSendStream_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 18;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AnyByteSendStream,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_AnyByteSendStream);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyByteSendStream, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_17 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_AnyByteStream_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 19;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AnyByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_AnyByteStream);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyByteStream, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_18 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_AnyByteStreamConnectable_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 20;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AnyByteStreamConnectable,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_AnyByteStreamConnectable);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyByteStreamConnectable, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_19 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_AnyUnreliableByteReceiveStream_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 21;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AnyUnreliableByteReceiveStream,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_AnyUnreliableByteReceiveStream);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyUnreliableByteReceiveStream, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_20 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_AnyUnreliableByteSendStream_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 22;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AnyUnreliableByteSendStream,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_AnyUnreliableByteSendStream);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyUnreliableByteSendStream, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_21 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_AnyUnreliableByteStream_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 23;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_AnyUnreliableByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_AnyUnreliableByteStream);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyUnreliableByteStream, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_22 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_ByteReceiveStream_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 24;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ByteReceiveStream,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ByteReceiveStream);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteReceiveStream, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_23 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_ByteSendStream_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 25;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ByteSendStream,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ByteSendStream);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteSendStream, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_24 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_ByteStream_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 26;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ByteStream,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_ByteStream);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStream, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_25 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_ByteStreamConnectable_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 27;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ByteStreamConnectable,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_ByteStreamConnectable);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ByteStreamConnectable, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_26 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_Listener_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 28;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
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
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_Listener,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_Listener);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_27 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_ObjectReceiveStream_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 29;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ObjectReceiveStream,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_ObjectReceiveStream);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectReceiveStream, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_28 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_ObjectSendStream_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 30;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ObjectSendStream,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ObjectSendStream);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectSendStream, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_29 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_ObjectStream_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 31;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ObjectStream,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ObjectStream);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectStream, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_30 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_ObjectStreamConnectable_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 32;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_ObjectStreamConnectable,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_ObjectStreamConnectable);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_ObjectStreamConnectable, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_31 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_UnreliableObjectReceiveStream_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 33;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UnreliableObjectReceiveStream,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_UnreliableObjectReceiveStream);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectReceiveStream, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_32 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_UnreliableObjectSendStream_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 34;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UnreliableObjectSendStream,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_UnreliableObjectSendStream);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectSendStream, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain__streams;
tmp_globals_arg_value_33 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_UnreliableObjectStream_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 35;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_UnreliableObjectStream,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_UnreliableObjectStream);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_UnreliableObjectStream, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_plain__subprocesses;
tmp_globals_arg_value_34 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_Process_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 36;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_Process,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_Process);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_Process, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_plain__tasks;
tmp_globals_arg_value_35 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_TaskGroup_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 37;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_TaskGroup,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_TaskGroup);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskGroup, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_plain__tasks;
tmp_globals_arg_value_36 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_TaskStatus_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 38;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_TaskStatus,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_TaskStatus);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_TaskStatus, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_37;
PyObject *tmp_globals_arg_value_37;
PyObject *tmp_locals_arg_value_37;
PyObject *tmp_fromlist_value_37;
PyObject *tmp_level_value_37;
tmp_name_value_37 = mod_consts.const_str_plain__testing;
tmp_globals_arg_value_37 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_37 = Py_None;
tmp_fromlist_value_37 = mod_consts.const_tuple_str_plain_TestRunner_tuple;
tmp_level_value_37 = const_int_pos_1;
frame_frame_anyio$abc->m_frame.f_lineno = 39;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_TestRunner,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_TestRunner);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_TestRunner, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_name_value_38;
PyObject *tmp_globals_arg_value_38;
PyObject *tmp_locals_arg_value_38;
PyObject *tmp_fromlist_value_38;
PyObject *tmp_level_value_38;
tmp_name_value_38 = mod_consts.const_str_digest_a3313cf1cd08a6b5c069b88376b67374;
tmp_globals_arg_value_38 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_38 = Py_None;
tmp_fromlist_value_38 = mod_consts.const_tuple_763f13f06690e204e08b3231cc0f0775_tuple;
tmp_level_value_38 = mod_consts.const_int_pos_2;
frame_frame_anyio$abc->m_frame.f_lineno = 43;
tmp_assign_source_43 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_43;
}
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_38 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_CapacityLimiter,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_CapacityLimiter);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_CapacityLimiter, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_39 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_Condition,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_Condition);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_Condition, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_40 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_Event,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_Event);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_41 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_Lock,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_Lock);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_Lock, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_42 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_Semaphore,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_Semaphore);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_Semaphore, tmp_assign_source_48);
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
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_39;
PyObject *tmp_globals_arg_value_39;
PyObject *tmp_locals_arg_value_39;
PyObject *tmp_fromlist_value_39;
PyObject *tmp_level_value_39;
tmp_name_value_39 = mod_consts.const_str_digest_8a36a375d9bfed9fede77bf4dd3eead4;
tmp_globals_arg_value_39 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_39 = Py_None;
tmp_fromlist_value_39 = mod_consts.const_tuple_str_plain_CancelScope_tuple;
tmp_level_value_39 = mod_consts.const_int_pos_2;
frame_frame_anyio$abc->m_frame.f_lineno = 50;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_CancelScope,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_CancelScope);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelScope, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_44;
PyObject *tmp_name_value_40;
PyObject *tmp_globals_arg_value_40;
PyObject *tmp_locals_arg_value_40;
PyObject *tmp_fromlist_value_40;
PyObject *tmp_level_value_40;
tmp_name_value_40 = mod_consts.const_str_plain_from_thread;
tmp_globals_arg_value_40 = (PyObject *)moduledict_anyio$abc;
tmp_locals_arg_value_40 = Py_None;
tmp_fromlist_value_40 = mod_consts.const_tuple_str_plain_BlockingPortal_tuple;
tmp_level_value_40 = mod_consts.const_int_pos_2;
frame_frame_anyio$abc->m_frame.f_lineno = 51;
tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
if (tmp_import_name_from_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_anyio$abc,
        mod_consts.const_str_plain_BlockingPortal,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_BlockingPortal);
}

CHECK_OBJECT(tmp_import_name_from_44);
Py_DECREF(tmp_import_name_from_44);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain_BlockingPortal, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iter_arg_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = (PyObject *)moduledict_anyio$abc;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_values);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
frame_frame_anyio$abc->m_frame.f_lineno = 54;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_assign_source_51 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_51 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_51;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_52;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_52 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_52 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 54;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_53;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_53 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_anyio$abc, (Nuitka_StringObject *)mod_consts.const_str_plain___value, tmp_assign_source_53);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_41;
PyObject *tmp_default_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
tmp_expression_value_7 = module_var_accessor_anyio$abc$__value(tstate);
assert(!(tmp_expression_value_7 == NULL));
tmp_name_value_41 = const_str_plain___module__;
tmp_default_value_1 = const_str_empty;
tmp_expression_value_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_41, tmp_default_value_1);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
frame_frame_anyio$abc->m_frame.f_lineno = 55;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_2e5b531eb8f55fdf36f965f59a0b3ae2_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 55;

    goto try_except_handler_2;
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
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = mod_consts.const_str_digest_09782a87826d0fc4ab4e8eac381d62a4;
tmp_assattr_target_4 = module_var_accessor_anyio$abc$__value(tstate);
if (unlikely(tmp_assattr_target_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___value);
}

if (tmp_assattr_target_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto try_except_handler_2;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, const_str_plain___module__, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto try_except_handler_2;
}
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_anyio$abc, mod_consts.const_str_plain___value);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___value);

exception_lineno = 58;

    goto frame_exception_exit_1;
}



// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$abc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$abc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$abc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$abc);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$abc", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio.abc" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$abc);
    return module_anyio$abc;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$abc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$abc", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

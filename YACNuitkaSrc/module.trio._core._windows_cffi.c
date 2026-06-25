/* Generated code for Python module 'trio$_core$_windows_cffi'
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



/* The "module_trio$_core$_windows_cffi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_core$_windows_cffi;
PyDictObject *moduledict_trio$_core$_windows_cffi;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Handle;
PyObject *const_str_plain_ffi;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_HANDLE;
PyObject *const_str_plain_HandleArray;
PyObject *const_str_plain_new;
PyObject *const_str_digest_1328ecee6812b0cf6d95deb151865de1;
PyObject *const_str_chr_93;
PyObject *const_str_digest_0c1f06a10718bb142bbf944ff6627fb6;
PyObject *const_str_plain_getwinerror;
PyObject *const_str_digest_66b223a85ad1ddd0bf751cb469c04afe;
PyObject *const_str_plain_winerror;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_NewType;
PyObject *const_str_plain_NoReturn;
PyObject *const_str_plain_Protocol;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain__generated_windows_ffi;
PyObject *const_tuple_str_plain_ffi_tuple;
PyObject *const_str_plain_CData;
PyObject *const_str_plain_CType;
PyObject *const_str_plain_AlwaysNull;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain__Kernel32;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9743dfe42ce07e4b68c16e996201a909;
PyObject *const_str_digest_5a185f4b31dacce72ea33413203b2444;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_27;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_2af02fb010e9ded2e56908297157f12f;
PyObject *const_str_plain_CreateIoCompletionPort;
PyObject *const_str_digest_0c3029b09bc0436cf98c3756993a8746;
PyObject *const_dict_68d3aa1294f280925f223956308db6ce;
PyObject *const_str_plain_CreateEventA;
PyObject *const_str_digest_b111a523e37dedd088854e1180694cb2;
PyObject *const_dict_22b83cebfaad737f1cc251af4b964baf;
PyObject *const_str_plain_SetFileCompletionNotificationModes;
PyObject *const_str_digest_b63cf5c744002104f5cc6021d0b9cef0;
PyObject *const_dict_b3ed89abd783f14acb62924367fe9e5d;
PyObject *const_str_plain_PostQueuedCompletionStatus;
PyObject *const_str_digest_f7dc6b4aa69f30078d913fe4c4812f7d;
PyObject *const_dict_b537f87d09d13f93dbece323ba6ee49e;
PyObject *const_str_plain_CancelIoEx;
PyObject *const_str_digest_1dd64080b5c24ce1609e308f31669e8e;
PyObject *const_dict_4a2c03ee75ed8e4969ce5391116d155e;
PyObject *const_str_plain_WriteFile;
PyObject *const_str_digest_0bbfaca668cee3a484d4f737126d383a;
PyObject *const_dict_709a12194d5d657da176003b81ba0b95;
PyObject *const_str_plain_ReadFile;
PyObject *const_str_digest_1df45dfe9814b155a7e6d52c73298927;
PyObject *const_dict_c90a86c28545121503beeff7bf674474;
PyObject *const_str_plain_GetQueuedCompletionStatusEx;
PyObject *const_str_digest_4ec944a370917f1bfb237b301895b855;
PyObject *const_dict_aff99c8f89bee8086f6f385d8257ded1;
PyObject *const_str_plain_CreateFileW;
PyObject *const_str_digest_7bfaa49ff7bc97e877235bb63ab4f79b;
PyObject *const_dict_ee679f95cb019878c5aea5ebcb92b204;
PyObject *const_str_plain_WaitForSingleObject;
PyObject *const_str_digest_606c36ff06120db42658d338a1eabed5;
PyObject *const_dict_e150e79c886a0017da4d1804248d8a50;
PyObject *const_str_plain_WaitForMultipleObjects;
PyObject *const_str_digest_53addb26963e6195979c1ac43fb57cab;
PyObject *const_dict_dc164e4914730c46e04679d9724836e7;
PyObject *const_str_plain_SetEvent;
PyObject *const_str_digest_c243e8da5303a4d820a22a0b09c464a0;
PyObject *const_dict_4be1b0b333be8a0d92ac76ccdf18cec9;
PyObject *const_str_plain_CloseHandle;
PyObject *const_str_digest_833e289264a6df8756da8c32ebb1c22e;
PyObject *const_dict_f820f70dbe7bc1bdc4e28fcffb42f67e;
PyObject *const_str_plain_DeviceIoControl;
PyObject *const_str_digest_d37628eddadef20e4b76369a747ba584;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain__Nt;
PyObject *const_str_digest_7a45fef79323e185669eec05dfb87d87;
PyObject *const_int_pos_147;
PyObject *const_dict_8e7861719b79ba955b6351ebb18e784f;
PyObject *const_str_plain_RtlNtStatusToDosError;
PyObject *const_str_digest_c7be7d1aa23066d5dfadc76402126f9c;
PyObject *const_str_plain__Ws2;
PyObject *const_str_digest_45de60bc7b03a2f9c95860cccfd61e8b;
PyObject *const_int_pos_153;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_plain_WSAGetLastError;
PyObject *const_str_digest_c3e0033dbfa90f541cf45c25840d8bd5;
PyObject *const_dict_fd4defa68057cc51f445d39aeaa8ff1b;
PyObject *const_str_plain_WSAIoctl;
PyObject *const_str_digest_771a3193db8a3c3d7c85256226e20fb7;
PyObject *const_str_plain__DummyStruct;
PyObject *const_int_pos_174;
PyObject *const_str_plain_Offset;
PyObject *const_str_plain_OffsetHigh;
PyObject *const_str_plain__DummyUnion;
PyObject *const_int_pos_179;
PyObject *const_str_plain_DUMMYSTRUCTNAME;
PyObject *const_str_plain_object;
PyObject *const_str_plain_Pointer;
PyObject *const_str_plain__Overlapped;
PyObject *const_int_pos_184;
PyObject *const_str_plain_Internal;
PyObject *const_str_plain_InternalHigh;
PyObject *const_str_plain_DUMMYUNIONNAME;
PyObject *const_str_plain_hEvent;
PyObject *const_str_plain_dlopen;
PyObject *const_tuple_str_digest_f8064970d8ae84e0620e2c53fc1b883f_tuple;
PyObject *const_str_plain_kernel32;
PyObject *const_tuple_str_digest_2ee177f67bdc5cf1ebba6c7a49562615_tuple;
PyObject *const_str_plain_ntdll;
PyObject *const_tuple_str_digest_fdbcc1a8074f5e22f5bdf0b007c6e942_tuple;
PyObject *const_str_plain_ws2_32;
PyObject *const_tuple_str_plain_HANDLE_int_neg_1_tuple;
PyObject *const_str_plain_INVALID_HANDLE_VALUE;
PyObject *const_str_plain_IntEnum;
PyObject *const_str_plain_ErrorCodes;
PyObject *const_int_pos_206;
PyObject *const_int_pos_258;
PyObject *const_str_plain_STATUS_TIMEOUT;
PyObject *const_str_plain_WAIT_TIMEOUT;
PyObject *const_int_pos_128;
PyObject *const_str_plain_WAIT_ABANDONED;
PyObject *const_str_plain_WAIT_OBJECT_0;
PyObject *const_int_hex_ffffffff;
PyObject *const_str_plain_WAIT_FAILED;
PyObject *const_int_pos_997;
PyObject *const_str_plain_ERROR_IO_PENDING;
PyObject *const_int_pos_995;
PyObject *const_str_plain_ERROR_OPERATION_ABORTED;
PyObject *const_int_pos_735;
PyObject *const_str_plain_ERROR_ABANDONED_WAIT_0;
PyObject *const_int_pos_6;
PyObject *const_str_plain_ERROR_INVALID_HANDLE;
PyObject *const_int_pos_87;
PyObject *const_str_plain_ERROR_INVALID_PARAMETER;
PyObject *const_int_pos_1168;
PyObject *const_str_plain_ERROR_NOT_FOUND;
PyObject *const_int_pos_10038;
PyObject *const_str_plain_ERROR_NOT_SOCKET;
PyObject *const_str_plain_IntFlag;
PyObject *const_str_plain_FileFlags;
PyObject *const_int_pos_221;
PyObject *const_int_hex_80000000;
PyObject *const_str_plain_GENERIC_READ;
PyObject *const_int_pos_1048576;
PyObject *const_str_plain_SYNCHRONIZE;
PyObject *const_int_hex_40000000;
PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
PyObject *const_str_plain_FILE_SHARE_READ;
PyObject *const_int_pos_2;
PyObject *const_str_plain_FILE_SHARE_WRITE;
PyObject *const_int_pos_4;
PyObject *const_str_plain_FILE_SHARE_DELETE;
PyObject *const_str_plain_CREATE_NEW;
PyObject *const_str_plain_CREATE_ALWAYS;
PyObject *const_int_pos_3;
PyObject *const_str_plain_OPEN_EXISTING;
PyObject *const_str_plain_OPEN_ALWAYS;
PyObject *const_int_pos_5;
PyObject *const_str_plain_TRUNCATE_EXISTING;
PyObject *const_str_plain_AFDPollFlags;
PyObject *const_int_pos_235;
PyObject *const_str_plain_AFD_POLL_RECEIVE;
PyObject *const_str_plain_AFD_POLL_RECEIVE_EXPEDITED;
PyObject *const_str_plain_AFD_POLL_SEND;
PyObject *const_int_pos_8;
PyObject *const_str_plain_AFD_POLL_DISCONNECT;
PyObject *const_int_pos_16;
PyObject *const_str_plain_AFD_POLL_ABORT;
PyObject *const_int_pos_32;
PyObject *const_str_plain_AFD_POLL_LOCAL_CLOSE;
PyObject *const_int_pos_64;
PyObject *const_str_plain_AFD_POLL_CONNECT;
PyObject *const_str_plain_AFD_POLL_ACCEPT;
PyObject *const_int_pos_256;
PyObject *const_str_plain_AFD_POLL_CONNECT_FAIL;
PyObject *const_int_pos_512;
PyObject *const_str_plain_AFD_POLL_QOS;
PyObject *const_int_pos_1024;
PyObject *const_str_plain_AFD_POLL_GROUP_QOS;
PyObject *const_int_pos_2048;
PyObject *const_str_plain_AFD_POLL_ROUTING_INTERFACE_CHANGE;
PyObject *const_int_pos_4096;
PyObject *const_str_plain_AFD_POLL_EVENT_ADDRESS_LIST_CHANGE;
PyObject *const_str_plain_WSAIoctls;
PyObject *const_int_pos_255;
PyObject *const_int_hex_48000022;
PyObject *const_str_plain_SIO_BASE_HANDLE;
PyObject *const_int_hex_4800001c;
PyObject *const_str_plain_SIO_BSP_HANDLE_SELECT;
PyObject *const_int_hex_4800001d;
PyObject *const_str_plain_SIO_BSP_HANDLE_POLL;
PyObject *const_str_plain_CompletionModes;
PyObject *const_int_pos_261;
PyObject *const_str_plain_FILE_SKIP_COMPLETION_PORT_ON_SUCCESS;
PyObject *const_str_plain_FILE_SKIP_SET_EVENT_ON_HANDLE;
PyObject *const_str_plain_IoControlCodes;
PyObject *const_int_pos_266;
PyObject *const_int_pos_73764;
PyObject *const_str_plain_IOCTL_AFD_POLL;
PyObject *const_dict_3631500104b62622c629b03b7c417874;
PyObject *const_str_plain__handle;
PyObject *const_dict_e7fbb3211e7f0ae3425100cc6ed4f548;
PyObject *const_str_plain_handle_array;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_5f835d72b6648d14a89ccbecca4c0e94;
PyObject *const_dict_a73aaf4d19a679eb57cc4a219005178d;
PyObject *const_str_plain_raise_winerror;
PyObject *const_str_digest_0d1b12809ca746ccf26ad33232cff88e;
PyObject *const_str_digest_96b9c7ece7026c94ef58d66422c2296f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_hFile_str_plain_lpOverlapped_tuple;
PyObject *const_tuple_str_plain_self_str_plain_handle_tuple;
PyObject *const_tuple_262f0763ed6b33b1ebf439e58b194fe8_tuple;
PyObject *const_tuple_a0d6ce35e6159c13d6d48875e4fde831_tuple;
PyObject *const_tuple_bb502131b118174d52a6daf30057c905_tuple;
PyObject *const_tuple_070a1f90d3ad3d9af66a000c4cd8ab83_tuple;
PyObject *const_tuple_40f9cc092731be329f73e6dddc39d7ec_tuple;
PyObject *const_tuple_ec1ffe723d2b33ae13cc0ecb8ed7efc4_tuple;
PyObject *const_tuple_c129177893e03191de7b95cd72411934_tuple;
PyObject *const_tuple_str_plain_self_str_plain_status_tuple;
PyObject *const_tuple_str_plain_self_str_plain_handle_str_plain_flags_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_af3da9497fd2e95aba1f5b390b848d62_tuple;
PyObject *const_tuple_3e4a84d9d3492b132792397598f9e8fa_tuple;
PyObject *const_tuple_str_plain_self_str_plain_hHandle_str_plain_dwMilliseconds_tuple;
PyObject *const_tuple_e94937838bca7975661690a593d6a4a9_tuple;
PyObject *const_tuple_str_plain_obj_tuple;
PyObject *const_tuple_str_plain_count_tuple;
PyObject *const_tuple_927e5cea49bc40dae7a8c3cd6d3a12c0_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[235];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._core._windows_cffi"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Handle);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_ffi);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_HandleArray);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_new);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_1328ecee6812b0cf6d95deb151865de1);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_chr_93);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c1f06a10718bb142bbf944ff6627fb6);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_getwinerror);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_66b223a85ad1ddd0bf751cb469c04afe);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_winerror);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_NewType);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__generated_windows_ffi);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ffi_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_CData);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_CType);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_AlwaysNull);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__Kernel32);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a185f4b31dacce72ea33413203b2444);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_2af02fb010e9ded2e56908297157f12f);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateIoCompletionPort);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_0c3029b09bc0436cf98c3756993a8746);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_68d3aa1294f280925f223956308db6ce);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEventA);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_b111a523e37dedd088854e1180694cb2);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_dict_22b83cebfaad737f1cc251af4b964baf);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetFileCompletionNotificationModes);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_b63cf5c744002104f5cc6021d0b9cef0);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_dict_b3ed89abd783f14acb62924367fe9e5d);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_PostQueuedCompletionStatus);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_f7dc6b4aa69f30078d913fe4c4812f7d);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_b537f87d09d13f93dbece323ba6ee49e);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelIoEx);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_1dd64080b5c24ce1609e308f31669e8e);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_4a2c03ee75ed8e4969ce5391116d155e);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteFile);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bbfaca668cee3a484d4f737126d383a);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_709a12194d5d657da176003b81ba0b95);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadFile);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_1df45dfe9814b155a7e6d52c73298927);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_dict_c90a86c28545121503beeff7bf674474);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetQueuedCompletionStatusEx);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ec944a370917f1bfb237b301895b855);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_dict_aff99c8f89bee8086f6f385d8257ded1);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateFileW);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bfaa49ff7bc97e877235bb63ab4f79b);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_ee679f95cb019878c5aea5ebcb92b204);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForSingleObject);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_606c36ff06120db42658d338a1eabed5);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_e150e79c886a0017da4d1804248d8a50);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForMultipleObjects);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_53addb26963e6195979c1ac43fb57cab);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_dc164e4914730c46e04679d9724836e7);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetEvent);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_c243e8da5303a4d820a22a0b09c464a0);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_dict_4be1b0b333be8a0d92ac76ccdf18cec9);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_CloseHandle);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_833e289264a6df8756da8c32ebb1c22e);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_f820f70dbe7bc1bdc4e28fcffb42f67e);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeviceIoControl);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_d37628eddadef20e4b76369a747ba584);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__Nt);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a45fef79323e185669eec05dfb87d87);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_147);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_dict_8e7861719b79ba955b6351ebb18e784f);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_RtlNtStatusToDosError);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7be7d1aa23066d5dfadc76402126f9c);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__Ws2);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_45de60bc7b03a2f9c95860cccfd61e8b);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_153);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_WSAGetLastError);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3e0033dbfa90f541cf45c25840d8bd5);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_fd4defa68057cc51f445d39aeaa8ff1b);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_WSAIoctl);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_771a3193db8a3c3d7c85256226e20fb7);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__DummyStruct);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_pos_174);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Offset);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetHigh);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain__DummyUnion);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_int_pos_179);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_DUMMYSTRUCTNAME);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pointer);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain__Overlapped);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_184);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_Internal);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_InternalHigh);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_DUMMYUNIONNAME);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_hEvent);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_dlopen);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f8064970d8ae84e0620e2c53fc1b883f_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2ee177f67bdc5cf1ebba6c7a49562615_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_ntdll);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fdbcc1a8074f5e22f5bdf0b007c6e942_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_ws2_32);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HANDLE_int_neg_1_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorCodes);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_int_pos_206);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_258);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_STATUS_TIMEOUT);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_TIMEOUT);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_ABANDONED);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_OBJECT_0);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_FAILED);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_int_pos_997);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_IO_PENDING);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_int_pos_995);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_735);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_ABANDONED_WAIT_0);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_6);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_INVALID_HANDLE);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_int_pos_87);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_INVALID_PARAMETER);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_1168);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_NOT_FOUND);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_int_pos_10038);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_NOT_SOCKET);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_IntFlag);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileFlags);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_221);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_int_hex_80000000);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_GENERIC_READ);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_int_pos_1048576);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_SYNCHRONIZE);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_hex_40000000);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_READ);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_WRITE);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_DELETE);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_CREATE_NEW);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_CREATE_ALWAYS);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_EXISTING);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_ALWAYS);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRUNCATE_EXISTING);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFDPollFlags);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_235);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_RECEIVE);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_RECEIVE_EXPEDITED);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_SEND);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_DISCONNECT);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_ABORT);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_LOCAL_CLOSE);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_CONNECT);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_ACCEPT);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_CONNECT_FAIL);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_QOS);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_GROUP_QOS);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_int_pos_2048);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_ROUTING_INTERFACE_CHANGE);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_int_pos_4096);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_EVENT_ADDRESS_LIST_CHANGE);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_WSAIoctls);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_int_pos_255);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_int_hex_48000022);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIO_BASE_HANDLE);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_int_hex_4800001c);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIO_BSP_HANDLE_SELECT);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_int_hex_4800001d);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_SIO_BSP_HANDLE_POLL);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionModes);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_int_pos_261);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SKIP_COMPLETION_PORT_ON_SUCCESS);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SKIP_SET_EVENT_ON_HANDLE);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_IoControlCodes);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_int_pos_266);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_int_pos_73764);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_IOCTL_AFD_POLL);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_dict_3631500104b62622c629b03b7c417874);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_e7fbb3211e7f0ae3425100cc6ed4f548);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle_array);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_dict_5f835d72b6648d14a89ccbecca4c0e94);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_dict_a73aaf4d19a679eb57cc4a219005178d);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_winerror);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d1b12809ca746ccf26ad33232cff88e);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_96b9c7ece7026c94ef58d66422c2296f);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hFile_str_plain_lpOverlapped_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_262f0763ed6b33b1ebf439e58b194fe8_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_a0d6ce35e6159c13d6d48875e4fde831_tuple);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_tuple_bb502131b118174d52a6daf30057c905_tuple);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_070a1f90d3ad3d9af66a000c4cd8ab83_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_40f9cc092731be329f73e6dddc39d7ec_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_ec1ffe723d2b33ae13cc0ecb8ed7efc4_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_c129177893e03191de7b95cd72411934_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_status_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_handle_str_plain_flags_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_af3da9497fd2e95aba1f5b390b848d62_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_3e4a84d9d3492b132792397598f9e8fa_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hHandle_str_plain_dwMilliseconds_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_e94937838bca7975661690a593d6a4a9_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_count_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_927e5cea49bc40dae7a8c3cd6d3a12c0_tuple);
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
void checkModuleConstants_trio$_core$_windows_cffi(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Handle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Handle);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_ffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ffi);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HANDLE);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_HandleArray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HandleArray);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_new));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_1328ecee6812b0cf6d95deb151865de1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1328ecee6812b0cf6d95deb151865de1);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_chr_93));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_93);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c1f06a10718bb142bbf944ff6627fb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c1f06a10718bb142bbf944ff6627fb6);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_getwinerror));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getwinerror);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_66b223a85ad1ddd0bf751cb469c04afe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66b223a85ad1ddd0bf751cb469c04afe);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_winerror));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_winerror);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_NewType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NewType);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoReturn);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Protocol);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__generated_windows_ffi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__generated_windows_ffi);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ffi_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ffi_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_CData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CData);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_CType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CType);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_AlwaysNull));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AlwaysNull);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__Kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Kernel32);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a185f4b31dacce72ea33413203b2444));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a185f4b31dacce72ea33413203b2444);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_int_pos_27));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_27);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_2af02fb010e9ded2e56908297157f12f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2af02fb010e9ded2e56908297157f12f);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateIoCompletionPort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateIoCompletionPort);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_0c3029b09bc0436cf98c3756993a8746));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0c3029b09bc0436cf98c3756993a8746);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_68d3aa1294f280925f223956308db6ce));
CHECK_OBJECT_DEEP(mod_consts.const_dict_68d3aa1294f280925f223956308db6ce);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEventA));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateEventA);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_b111a523e37dedd088854e1180694cb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b111a523e37dedd088854e1180694cb2);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_dict_22b83cebfaad737f1cc251af4b964baf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_22b83cebfaad737f1cc251af4b964baf);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetFileCompletionNotificationModes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetFileCompletionNotificationModes);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_b63cf5c744002104f5cc6021d0b9cef0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b63cf5c744002104f5cc6021d0b9cef0);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_dict_b3ed89abd783f14acb62924367fe9e5d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b3ed89abd783f14acb62924367fe9e5d);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_PostQueuedCompletionStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PostQueuedCompletionStatus);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_f7dc6b4aa69f30078d913fe4c4812f7d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f7dc6b4aa69f30078d913fe4c4812f7d);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_b537f87d09d13f93dbece323ba6ee49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b537f87d09d13f93dbece323ba6ee49e);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelIoEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelIoEx);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_1dd64080b5c24ce1609e308f31669e8e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1dd64080b5c24ce1609e308f31669e8e);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_4a2c03ee75ed8e4969ce5391116d155e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4a2c03ee75ed8e4969ce5391116d155e);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteFile);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bbfaca668cee3a484d4f737126d383a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bbfaca668cee3a484d4f737126d383a);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_709a12194d5d657da176003b81ba0b95));
CHECK_OBJECT_DEEP(mod_consts.const_dict_709a12194d5d657da176003b81ba0b95);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadFile);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_1df45dfe9814b155a7e6d52c73298927));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1df45dfe9814b155a7e6d52c73298927);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_dict_c90a86c28545121503beeff7bf674474));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c90a86c28545121503beeff7bf674474);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetQueuedCompletionStatusEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetQueuedCompletionStatusEx);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ec944a370917f1bfb237b301895b855));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ec944a370917f1bfb237b301895b855);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_dict_aff99c8f89bee8086f6f385d8257ded1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aff99c8f89bee8086f6f385d8257ded1);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateFileW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateFileW);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bfaa49ff7bc97e877235bb63ab4f79b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bfaa49ff7bc97e877235bb63ab4f79b);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_ee679f95cb019878c5aea5ebcb92b204));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ee679f95cb019878c5aea5ebcb92b204);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForSingleObject));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WaitForSingleObject);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_606c36ff06120db42658d338a1eabed5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_606c36ff06120db42658d338a1eabed5);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_e150e79c886a0017da4d1804248d8a50));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e150e79c886a0017da4d1804248d8a50);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForMultipleObjects));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WaitForMultipleObjects);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_53addb26963e6195979c1ac43fb57cab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53addb26963e6195979c1ac43fb57cab);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_dc164e4914730c46e04679d9724836e7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dc164e4914730c46e04679d9724836e7);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetEvent);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_c243e8da5303a4d820a22a0b09c464a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c243e8da5303a4d820a22a0b09c464a0);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_dict_4be1b0b333be8a0d92ac76ccdf18cec9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4be1b0b333be8a0d92ac76ccdf18cec9);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_CloseHandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CloseHandle);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_833e289264a6df8756da8c32ebb1c22e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_833e289264a6df8756da8c32ebb1c22e);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_f820f70dbe7bc1bdc4e28fcffb42f67e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f820f70dbe7bc1bdc4e28fcffb42f67e);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeviceIoControl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeviceIoControl);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_d37628eddadef20e4b76369a747ba584));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d37628eddadef20e4b76369a747ba584);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__Nt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Nt);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a45fef79323e185669eec05dfb87d87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a45fef79323e185669eec05dfb87d87);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_147));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_147);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_dict_8e7861719b79ba955b6351ebb18e784f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8e7861719b79ba955b6351ebb18e784f);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_RtlNtStatusToDosError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RtlNtStatusToDosError);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7be7d1aa23066d5dfadc76402126f9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7be7d1aa23066d5dfadc76402126f9c);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__Ws2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Ws2);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_45de60bc7b03a2f9c95860cccfd61e8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45de60bc7b03a2f9c95860cccfd61e8b);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_153));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_153);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_WSAGetLastError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WSAGetLastError);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3e0033dbfa90f541cf45c25840d8bd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3e0033dbfa90f541cf45c25840d8bd5);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_fd4defa68057cc51f445d39aeaa8ff1b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fd4defa68057cc51f445d39aeaa8ff1b);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_WSAIoctl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WSAIoctl);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_771a3193db8a3c3d7c85256226e20fb7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_771a3193db8a3c3d7c85256226e20fb7);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__DummyStruct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DummyStruct);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_pos_174));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_174);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Offset);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetHigh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OffsetHigh);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain__DummyUnion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DummyUnion);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_int_pos_179));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_179);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_DUMMYSTRUCTNAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DUMMYSTRUCTNAME);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pointer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Pointer);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain__Overlapped));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Overlapped);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_184));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_184);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_Internal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Internal);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_InternalHigh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InternalHigh);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_DUMMYUNIONNAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DUMMYUNIONNAME);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_hEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hEvent);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_dlopen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dlopen);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_f8064970d8ae84e0620e2c53fc1b883f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_f8064970d8ae84e0620e2c53fc1b883f_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2ee177f67bdc5cf1ebba6c7a49562615_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2ee177f67bdc5cf1ebba6c7a49562615_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_ntdll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ntdll);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_fdbcc1a8074f5e22f5bdf0b007c6e942_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_fdbcc1a8074f5e22f5bdf0b007c6e942_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_ws2_32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ws2_32);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HANDLE_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HANDLE_int_neg_1_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_HANDLE_VALUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntEnum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IntEnum);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_ErrorCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ErrorCodes);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_int_pos_206));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_206);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_258));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_258);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_STATUS_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STATUS_TIMEOUT);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_TIMEOUT);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_int_pos_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_128);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_ABANDONED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_ABANDONED);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_OBJECT_0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_OBJECT_0);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_ffffffff);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_FAILED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_FAILED);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_int_pos_997));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_997);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_IO_PENDING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_IO_PENDING);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_int_pos_995));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_995);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_735));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_735);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_ABANDONED_WAIT_0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_ABANDONED_WAIT_0);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_6));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_6);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_INVALID_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_INVALID_HANDLE);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_int_pos_87));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_87);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_INVALID_PARAMETER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_INVALID_PARAMETER);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_1168));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1168);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_NOT_FOUND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_NOT_FOUND);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_int_pos_10038));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_10038);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_NOT_SOCKET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_NOT_SOCKET);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_IntFlag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IntFlag);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileFlags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileFlags);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_221));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_221);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_int_hex_80000000));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_80000000);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_GENERIC_READ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GENERIC_READ);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_int_pos_1048576));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1048576);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_SYNCHRONIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SYNCHRONIZE);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_hex_40000000));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_40000000);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_READ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SHARE_READ);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_WRITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SHARE_WRITE);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_DELETE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SHARE_DELETE);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_CREATE_NEW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CREATE_NEW);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_CREATE_ALWAYS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CREATE_ALWAYS);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_EXISTING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OPEN_EXISTING);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_ALWAYS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OPEN_ALWAYS);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRUNCATE_EXISTING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRUNCATE_EXISTING);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFDPollFlags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFDPollFlags);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_235));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_235);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_RECEIVE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_RECEIVE);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_RECEIVE_EXPEDITED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_RECEIVE_EXPEDITED);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_SEND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_SEND);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_DISCONNECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_DISCONNECT);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_ABORT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_ABORT);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_LOCAL_CLOSE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_LOCAL_CLOSE);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_CONNECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_CONNECT);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_ACCEPT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_ACCEPT);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_int_pos_256));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_256);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_CONNECT_FAIL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_CONNECT_FAIL);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_int_pos_512));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_512);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_QOS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_QOS);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1024);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_GROUP_QOS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_GROUP_QOS);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_int_pos_2048));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2048);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_ROUTING_INTERFACE_CHANGE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_ROUTING_INTERFACE_CHANGE);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_int_pos_4096));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4096);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFD_POLL_EVENT_ADDRESS_LIST_CHANGE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFD_POLL_EVENT_ADDRESS_LIST_CHANGE);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_WSAIoctls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WSAIoctls);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_int_pos_255));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_255);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_int_hex_48000022));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_48000022);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIO_BASE_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SIO_BASE_HANDLE);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_int_hex_4800001c));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_4800001c);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIO_BSP_HANDLE_SELECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SIO_BSP_HANDLE_SELECT);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_int_hex_4800001d));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_4800001d);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_SIO_BSP_HANDLE_POLL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SIO_BSP_HANDLE_POLL);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionModes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionModes);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_int_pos_261));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_261);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SKIP_COMPLETION_PORT_ON_SUCCESS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SKIP_COMPLETION_PORT_ON_SUCCESS);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SKIP_SET_EVENT_ON_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SKIP_SET_EVENT_ON_HANDLE);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_IoControlCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IoControlCodes);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_int_pos_266));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_266);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_int_pos_73764));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_73764);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_IOCTL_AFD_POLL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IOCTL_AFD_POLL);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_dict_3631500104b62622c629b03b7c417874));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3631500104b62622c629b03b7c417874);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_e7fbb3211e7f0ae3425100cc6ed4f548));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e7fbb3211e7f0ae3425100cc6ed4f548);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle_array);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_dict_5f835d72b6648d14a89ccbecca4c0e94));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f835d72b6648d14a89ccbecca4c0e94);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_dict_a73aaf4d19a679eb57cc4a219005178d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a73aaf4d19a679eb57cc4a219005178d);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_winerror));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_winerror);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d1b12809ca746ccf26ad33232cff88e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d1b12809ca746ccf26ad33232cff88e);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_96b9c7ece7026c94ef58d66422c2296f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96b9c7ece7026c94ef58d66422c2296f);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hFile_str_plain_lpOverlapped_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_hFile_str_plain_lpOverlapped_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_262f0763ed6b33b1ebf439e58b194fe8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_262f0763ed6b33b1ebf439e58b194fe8_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_a0d6ce35e6159c13d6d48875e4fde831_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a0d6ce35e6159c13d6d48875e4fde831_tuple);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_tuple_bb502131b118174d52a6daf30057c905_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bb502131b118174d52a6daf30057c905_tuple);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_070a1f90d3ad3d9af66a000c4cd8ab83_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_070a1f90d3ad3d9af66a000c4cd8ab83_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_40f9cc092731be329f73e6dddc39d7ec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_40f9cc092731be329f73e6dddc39d7ec_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_ec1ffe723d2b33ae13cc0ecb8ed7efc4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec1ffe723d2b33ae13cc0ecb8ed7efc4_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_c129177893e03191de7b95cd72411934_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c129177893e03191de7b95cd72411934_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_status_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_status_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_handle_str_plain_flags_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_handle_str_plain_flags_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_af3da9497fd2e95aba1f5b390b848d62_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_af3da9497fd2e95aba1f5b390b848d62_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_3e4a84d9d3492b132792397598f9e8fa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3e4a84d9d3492b132792397598f9e8fa_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_hHandle_str_plain_dwMilliseconds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_hHandle_str_plain_dwMilliseconds_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_e94937838bca7975661690a593d6a4a9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e94937838bca7975661690a593d6a4a9_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_obj_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_count_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_count_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_927e5cea49bc40dae7a8c3cd6d3a12c0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_927e5cea49bc40dae7a8c3cd6d3a12c0_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 10
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
static PyObject *module_var_accessor_trio$_core$_windows_cffi$CData(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_CData);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CData);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CData, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CData);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CData, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_CData);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_CData);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CData);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$Handle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Handle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Handle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Handle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Handle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Handle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Handle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Handle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Handle);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$HandleArray(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_HandleArray);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HandleArray);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HandleArray, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HandleArray);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HandleArray, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_HandleArray);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_HandleArray);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HandleArray);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$NewType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_NewType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NewType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NewType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NewType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NewType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_NewType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_NewType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NewType);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$Protocol(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Protocol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Protocol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$cast(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$enum(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enum);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_windows_cffi$ffi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_windows_cffi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_windows_cffi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_windows_cffi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ffi);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ffi, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ffi);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ffi, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8e82e23613ce5fcaa26178393218b521;
static PyCodeObject *code_objects_227f3326ce6f378fa5842068d0ee9e66;
static PyCodeObject *code_objects_d3dc8c5a8584cf10e2479682836eedfe;
static PyCodeObject *code_objects_4166fd65000202282a1c6dc4985b9bdf;
static PyCodeObject *code_objects_a956a09deb8aaff036a55a34273400b6;
static PyCodeObject *code_objects_032d281cf73cfcfbc7c6177825803f17;
static PyCodeObject *code_objects_f3ca3a479ed1a61440af776831dc68c3;
static PyCodeObject *code_objects_d761e753c5a9b80a45afdbba48726e8b;
static PyCodeObject *code_objects_16c5166da26eb4346e16e4255be58704;
static PyCodeObject *code_objects_71e2ff43817d42db70c94c46add493fb;
static PyCodeObject *code_objects_e42e7ad22a330eddb6782e16b2eca044;
static PyCodeObject *code_objects_4f36b18927f022d2c23a742bf5a8e610;
static PyCodeObject *code_objects_e704a914626718b9f2d0e1ffe8e2665d;
static PyCodeObject *code_objects_2f79ce093947952222ebca5db32dadd2;
static PyCodeObject *code_objects_f5bb673750ff2f6ddf7efa4ebf6199f8;
static PyCodeObject *code_objects_28d77804a54f0c460fdb18de08bb8dec;
static PyCodeObject *code_objects_ad79f28090824700b6521dd9f5903d87;
static PyCodeObject *code_objects_6589fa510183e4736d1359243bbce41f;
static PyCodeObject *code_objects_be69562fafd992bdbec80f9c1f1f35a8;
static PyCodeObject *code_objects_4311be2ab0dadf24791705f3a09116f1;
static PyCodeObject *code_objects_184a6af65cfc6054eb6ecf4f3edb075a;
static PyCodeObject *code_objects_3523128ca860ad61d9c4c4f97c455731;
static PyCodeObject *code_objects_5af9f48c751807c5e4d9b439cad83423;
static PyCodeObject *code_objects_802e72101e67bca38ecc093aa683d41a;
static PyCodeObject *code_objects_f83144ab4848befe1eb9bad0dfbddb59;
static PyCodeObject *code_objects_39a40a3722365424c5ebee33bfdb41fc;
static PyCodeObject *code_objects_a6dbae308725505d21c02eeb00f45415;
static PyCodeObject *code_objects_0751fe028d1d1ea38d6b07bc8ad36bc6;
static PyCodeObject *code_objects_cd4c8266a1fedbdd9e8210cca12c4d02;
static PyCodeObject *code_objects_d10607f8e4a508de791be3f19906b83f;
static PyCodeObject *code_objects_dbbf03f0368ac11dc70ea6ba623d3223;
static PyCodeObject *code_objects_9be688532c9fe11e4720a5ee38accfb9;
static PyCodeObject *code_objects_09483a2f07bebb9fd719d5f9dd98c299;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_0d1b12809ca746ccf26ad33232cff88e); CHECK_OBJECT(module_filename_obj);
code_objects_8e82e23613ce5fcaa26178393218b521 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_96b9c7ece7026c94ef58d66422c2296f, mod_consts.const_str_digest_96b9c7ece7026c94ef58d66422c2296f, NULL, NULL, 0, 0, 0);
code_objects_227f3326ce6f378fa5842068d0ee9e66 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AFDPollFlags, mod_consts.const_str_plain_AFDPollFlags, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d3dc8c5a8584cf10e2479682836eedfe = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CancelIoEx, mod_consts.const_str_digest_1dd64080b5c24ce1609e308f31669e8e, mod_consts.const_tuple_str_plain_self_str_plain_hFile_str_plain_lpOverlapped_tuple, NULL, 3, 0, 3);
code_objects_4166fd65000202282a1c6dc4985b9bdf = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CloseHandle, mod_consts.const_str_digest_833e289264a6df8756da8c32ebb1c22e, mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple, NULL, 2, 0, 2);
code_objects_a956a09deb8aaff036a55a34273400b6 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CompletionModes, mod_consts.const_str_plain_CompletionModes, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_032d281cf73cfcfbc7c6177825803f17 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CreateEventA, mod_consts.const_str_digest_b111a523e37dedd088854e1180694cb2, mod_consts.const_tuple_262f0763ed6b33b1ebf439e58b194fe8_tuple, NULL, 5, 0, 5);
code_objects_f3ca3a479ed1a61440af776831dc68c3 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CreateFileW, mod_consts.const_str_digest_7bfaa49ff7bc97e877235bb63ab4f79b, mod_consts.const_tuple_a0d6ce35e6159c13d6d48875e4fde831_tuple, NULL, 8, 0, 8);
code_objects_d761e753c5a9b80a45afdbba48726e8b = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CreateIoCompletionPort, mod_consts.const_str_digest_0c3029b09bc0436cf98c3756993a8746, mod_consts.const_tuple_bb502131b118174d52a6daf30057c905_tuple, NULL, 5, 0, 5);
code_objects_16c5166da26eb4346e16e4255be58704 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_DeviceIoControl, mod_consts.const_str_digest_d37628eddadef20e4b76369a747ba584, mod_consts.const_tuple_070a1f90d3ad3d9af66a000c4cd8ab83_tuple, NULL, 9, 0, 9);
code_objects_71e2ff43817d42db70c94c46add493fb = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ErrorCodes, mod_consts.const_str_plain_ErrorCodes, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e42e7ad22a330eddb6782e16b2eca044 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_FileFlags, mod_consts.const_str_plain_FileFlags, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4f36b18927f022d2c23a742bf5a8e610 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_GetQueuedCompletionStatusEx, mod_consts.const_str_digest_4ec944a370917f1bfb237b301895b855, mod_consts.const_tuple_40f9cc092731be329f73e6dddc39d7ec_tuple, NULL, 7, 0, 7);
code_objects_e704a914626718b9f2d0e1ffe8e2665d = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_IoControlCodes, mod_consts.const_str_plain_IoControlCodes, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2f79ce093947952222ebca5db32dadd2 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_PostQueuedCompletionStatus, mod_consts.const_str_digest_f7dc6b4aa69f30078d913fe4c4812f7d, mod_consts.const_tuple_ec1ffe723d2b33ae13cc0ecb8ed7efc4_tuple, NULL, 5, 0, 5);
code_objects_f5bb673750ff2f6ddf7efa4ebf6199f8 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ReadFile, mod_consts.const_str_digest_1df45dfe9814b155a7e6d52c73298927, mod_consts.const_tuple_c129177893e03191de7b95cd72411934_tuple, NULL, 6, 0, 6);
code_objects_28d77804a54f0c460fdb18de08bb8dec = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_RtlNtStatusToDosError, mod_consts.const_str_digest_c7be7d1aa23066d5dfadc76402126f9c, mod_consts.const_tuple_str_plain_self_str_plain_status_tuple, NULL, 2, 0, 2);
code_objects_ad79f28090824700b6521dd9f5903d87 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SetEvent, mod_consts.const_str_digest_c243e8da5303a4d820a22a0b09c464a0, mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple, NULL, 2, 0, 2);
code_objects_6589fa510183e4736d1359243bbce41f = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SetFileCompletionNotificationModes, mod_consts.const_str_digest_b63cf5c744002104f5cc6021d0b9cef0, mod_consts.const_tuple_str_plain_self_str_plain_handle_str_plain_flags_tuple, NULL, 3, 0, 3);
code_objects_be69562fafd992bdbec80f9c1f1f35a8 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WSAGetLastError, mod_consts.const_str_digest_c3e0033dbfa90f541cf45c25840d8bd5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4311be2ab0dadf24791705f3a09116f1 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WSAIoctl, mod_consts.const_str_digest_771a3193db8a3c3d7c85256226e20fb7, mod_consts.const_tuple_af3da9497fd2e95aba1f5b390b848d62_tuple, NULL, 10, 0, 10);
code_objects_184a6af65cfc6054eb6ecf4f3edb075a = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WSAIoctls, mod_consts.const_str_plain_WSAIoctls, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3523128ca860ad61d9c4c4f97c455731 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WaitForMultipleObjects, mod_consts.const_str_digest_53addb26963e6195979c1ac43fb57cab, mod_consts.const_tuple_3e4a84d9d3492b132792397598f9e8fa_tuple, NULL, 5, 0, 5);
code_objects_5af9f48c751807c5e4d9b439cad83423 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WaitForSingleObject, mod_consts.const_str_digest_606c36ff06120db42658d338a1eabed5, mod_consts.const_tuple_str_plain_self_str_plain_hHandle_str_plain_dwMilliseconds_tuple, NULL, 3, 0, 3);
code_objects_802e72101e67bca38ecc093aa683d41a = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WriteFile, mod_consts.const_str_digest_0bbfaca668cee3a484d4f737126d383a, mod_consts.const_tuple_e94937838bca7975661690a593d6a4a9_tuple, NULL, 6, 0, 6);
code_objects_f83144ab4848befe1eb9bad0dfbddb59 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__DummyStruct, mod_consts.const_str_plain__DummyStruct, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_39a40a3722365424c5ebee33bfdb41fc = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__DummyUnion, mod_consts.const_str_plain__DummyUnion, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a6dbae308725505d21c02eeb00f45415 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__Kernel32, mod_consts.const_str_plain__Kernel32, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0751fe028d1d1ea38d6b07bc8ad36bc6 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__Nt, mod_consts.const_str_plain__Nt, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cd4c8266a1fedbdd9e8210cca12c4d02 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__Overlapped, mod_consts.const_str_plain__Overlapped, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d10607f8e4a508de791be3f19906b83f = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__Ws2, mod_consts.const_str_plain__Ws2, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_dbbf03f0368ac11dc70ea6ba623d3223 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__handle, mod_consts.const_str_plain__handle, mod_consts.const_tuple_str_plain_obj_tuple, NULL, 1, 0, 0);
code_objects_9be688532c9fe11e4720a5ee38accfb9 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_handle_array, mod_consts.const_str_plain_handle_array, mod_consts.const_tuple_str_plain_count_tuple, NULL, 1, 0, 0);
code_objects_09483a2f07bebb9fd719d5f9dd98c299 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_raise_winerror, mod_consts.const_str_plain_raise_winerror, mod_consts.const_tuple_927e5cea49bc40dae7a8c3cd6d3a12c0_tuple, NULL, 1, 2, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__10_WaitForSingleObject(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__11_WaitForMultipleObjects(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__12_SetEvent(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__13_CloseHandle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__14_DeviceIoControl(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__15_RtlNtStatusToDosError(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__16_WSAGetLastError(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__17_WSAIoctl(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__18__handle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__19_handle_array(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__1_CreateIoCompletionPort(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__20_raise_winerror(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__2_CreateEventA(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__3_SetFileCompletionNotificationModes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__4_PostQueuedCompletionStatus(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__5_CancelIoEx(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__6_WriteFile(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__7_ReadFile(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__8_GetQueuedCompletionStatusEx(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__9_CreateFileW(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$_core$_windows_cffi$$$function__18__handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$function__18__handle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle = MAKE_FUNCTION_FRAME(tstate, code_objects_dbbf03f0368ac11dc70ea6ba623d3223, module_trio$_core$_windows_cffi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle->m_type_description == NULL);
frame_frame_trio$_core$_windows_cffi$$$function__18__handle = cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$function__18__handle);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$function__18__handle) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_1 = par_obj;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_1 = module_var_accessor_trio$_core$_windows_cffi$Handle(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Handle);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_plain_HANDLE;
CHECK_OBJECT(par_obj);
tmp_args_element_value_3 = par_obj;
frame_frame_trio$_core$_windows_cffi$$$function__18__handle->m_frame.f_lineno = 283;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_cast,
        call_args
    );
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi$$$function__18__handle->m_frame.f_lineno = 283;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_trio$_core$_windows_cffi$Handle(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Handle);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_obj);
tmp_args_element_value_4 = par_obj;
frame_frame_trio$_core$_windows_cffi$$$function__18__handle->m_frame.f_lineno = 284;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$function__18__handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$function__18__handle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$function__18__handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$function__18__handle,
    type_description_1,
    par_obj
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_windows_cffi$$$function__18__handle == cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle);
    cache_frame_frame_trio$_core$_windows_cffi$$$function__18__handle = NULL;
}

assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$function__18__handle);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_windows_cffi$$$function__19_handle_array(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_count = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array = MAKE_FUNCTION_FRAME(tstate, code_objects_9be688532c9fe11e4720a5ee38accfb9, module_trio$_core$_windows_cffi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array->m_type_description == NULL);
frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array = cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_called_value_1 = module_var_accessor_trio$_core$_windows_cffi$HandleArray(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HandleArray);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_new);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_1328ecee6812b0cf6d95deb151865de1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_count);
tmp_format_value_1 = par_count;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_93;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array->m_frame.f_lineno = 289;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array->m_frame.f_lineno = 289;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array,
    type_description_1,
    par_count
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array == cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array);
    cache_frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array = NULL;
}

assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$function__19_handle_array);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_count);
Py_DECREF(par_count);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_count);
Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_windows_cffi$$$function__20_raise_winerror(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_winerror = python_pars[0];
PyObject *par_filename = python_pars[1];
PyObject *par_filename2 = python_pars[2];
PyObject *var_err = NULL;
PyObject *var_msg = NULL;
PyObject *var__ = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror;
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
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror = MAKE_FUNCTION_FRAME(tstate, code_objects_09483a2f07bebb9fd719d5f9dd98c299, module_trio$_core$_windows_cffi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror->m_type_description == NULL);
frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror = cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_winerror);
tmp_cmp_expr_left_1 = par_winerror;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror->m_frame.f_lineno = 303;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_getwinerror);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_err == NULL);
var_err = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_err);
tmp_cmp_expr_left_2 = var_err;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_66b223a85ad1ddd0bf751cb469c04afe;
frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror->m_frame.f_lineno = 305;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 305;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_err);
tmp_iter_arg_1 = var_err;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = par_winerror;
    assert(old != NULL);
    par_winerror = tmp_assign_source_5;
    Py_INCREF(par_winerror);
    Py_DECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_msg == NULL);
Py_INCREF(tmp_assign_source_6);
var_msg = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_winerror);
tmp_args_element_value_1 = par_winerror;
frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror->m_frame.f_lineno = 308;
tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getwinerror, tmp_args_element_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_err == NULL);
var_err = tmp_assign_source_7;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_err);
tmp_cmp_expr_left_3 = var_err;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_66b223a85ad1ddd0bf751cb469c04afe;
frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror->m_frame.f_lineno = 310;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 310;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_err);
tmp_iter_arg_2 = var_err;
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_11);
var__ = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
assert(var_msg == NULL);
Py_INCREF(tmp_assign_source_12);
var_msg = tmp_assign_source_12;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

branch_end_1:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_make_exception_arg_7;
tmp_make_exception_arg_3 = const_int_0;
CHECK_OBJECT(var_msg);
tmp_make_exception_arg_4 = var_msg;
CHECK_OBJECT(par_filename);
tmp_make_exception_arg_5 = par_filename;
if (par_winerror == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_winerror);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}

tmp_make_exception_arg_6 = par_winerror;
CHECK_OBJECT(par_filename2);
tmp_make_exception_arg_7 = par_filename2;
frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_make_exception_arg_3, tmp_make_exception_arg_4, tmp_make_exception_arg_5, tmp_make_exception_arg_6, tmp_make_exception_arg_7};
    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS5(tstate, PyExc_OSError, call_args);
}

assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 313;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror,
    type_description_1,
    par_winerror,
    par_filename,
    par_filename2,
    var_err,
    var_msg,
    var__
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror == cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror);
    cache_frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror = NULL;
}

assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$function__20_raise_winerror);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_winerror);
par_winerror = NULL;
Py_XDECREF(var_err);
var_err = NULL;
Py_XDECREF(var_msg);
var_msg = NULL;
Py_XDECREF(var__);
var__ = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_filename);
Py_DECREF(par_filename);
CHECK_OBJECT(par_filename2);
Py_DECREF(par_filename2);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__10_WaitForSingleObject(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_WaitForSingleObject,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_606c36ff06120db42658d338a1eabed5,
#endif
        code_objects_5af9f48c751807c5e4d9b439cad83423,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__11_WaitForMultipleObjects(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_WaitForMultipleObjects,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53addb26963e6195979c1ac43fb57cab,
#endif
        code_objects_3523128ca860ad61d9c4c4f97c455731,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__12_SetEvent(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_SetEvent,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c243e8da5303a4d820a22a0b09c464a0,
#endif
        code_objects_ad79f28090824700b6521dd9f5903d87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__13_CloseHandle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_CloseHandle,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_833e289264a6df8756da8c32ebb1c22e,
#endif
        code_objects_4166fd65000202282a1c6dc4985b9bdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__14_DeviceIoControl(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_DeviceIoControl,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d37628eddadef20e4b76369a747ba584,
#endif
        code_objects_16c5166da26eb4346e16e4255be58704,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__15_RtlNtStatusToDosError(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_RtlNtStatusToDosError,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c7be7d1aa23066d5dfadc76402126f9c,
#endif
        code_objects_28d77804a54f0c460fdb18de08bb8dec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__16_WSAGetLastError(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_WSAGetLastError,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c3e0033dbfa90f541cf45c25840d8bd5,
#endif
        code_objects_be69562fafd992bdbec80f9c1f1f35a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__17_WSAIoctl(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_WSAIoctl,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_771a3193db8a3c3d7c85256226e20fb7,
#endif
        code_objects_4311be2ab0dadf24791705f3a09116f1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__18__handle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_windows_cffi$$$function__18__handle,
        mod_consts.const_str_plain__handle,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dbbf03f0368ac11dc70ea6ba623d3223,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__19_handle_array(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_windows_cffi$$$function__19_handle_array,
        mod_consts.const_str_plain_handle_array,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9be688532c9fe11e4720a5ee38accfb9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        mod_consts.const_str_digest_0c1f06a10718bb142bbf944ff6627fb6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__1_CreateIoCompletionPort(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_CreateIoCompletionPort,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0c3029b09bc0436cf98c3756993a8746,
#endif
        code_objects_d761e753c5a9b80a45afdbba48726e8b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__20_raise_winerror(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_windows_cffi$$$function__20_raise_winerror,
        mod_consts.const_str_plain_raise_winerror,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_09483a2f07bebb9fd719d5f9dd98c299,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__2_CreateEventA(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_CreateEventA,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b111a523e37dedd088854e1180694cb2,
#endif
        code_objects_032d281cf73cfcfbc7c6177825803f17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__3_SetFileCompletionNotificationModes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_SetFileCompletionNotificationModes,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b63cf5c744002104f5cc6021d0b9cef0,
#endif
        code_objects_6589fa510183e4736d1359243bbce41f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__4_PostQueuedCompletionStatus(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_PostQueuedCompletionStatus,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f7dc6b4aa69f30078d913fe4c4812f7d,
#endif
        code_objects_2f79ce093947952222ebca5db32dadd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__5_CancelIoEx(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_CancelIoEx,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1dd64080b5c24ce1609e308f31669e8e,
#endif
        code_objects_d3dc8c5a8584cf10e2479682836eedfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__6_WriteFile(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_WriteFile,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0bbfaca668cee3a484d4f737126d383a,
#endif
        code_objects_802e72101e67bca38ecc093aa683d41a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__7_ReadFile(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_ReadFile,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1df45dfe9814b155a7e6d52c73298927,
#endif
        code_objects_f5bb673750ff2f6ddf7efa4ebf6199f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__8_GetQueuedCompletionStatusEx(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_GetQueuedCompletionStatusEx,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ec944a370917f1bfb237b301895b855,
#endif
        code_objects_4f36b18927f022d2c23a742bf5a8e610,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__9_CreateFileW(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_CreateFileW,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7bfaa49ff7bc97e877235bb63ab4f79b,
#endif
        code_objects_f3ca3a479ed1a61440af776831dc68c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_windows_cffi,
        NULL,
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

static function_impl_code const function_table_trio$_core$_windows_cffi[] = {
impl_trio$_core$_windows_cffi$$$function__18__handle,
impl_trio$_core$_windows_cffi$$$function__19_handle_array,
impl_trio$_core$_windows_cffi$$$function__20_raise_winerror,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_core$_windows_cffi);
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
        module_trio$_core$_windows_cffi,
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
        function_table_trio$_core$_windows_cffi,
        sizeof(function_table_trio$_core$_windows_cffi) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._core._windows_cffi";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_core$_windows_cffi(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_core$_windows_cffi");

    // Store the module for future use.
    module_trio$_core$_windows_cffi = module;

    moduledict_trio$_core$_windows_cffi = MODULE_DICT(module_trio$_core$_windows_cffi);

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
        PRINT_STRING("trio$_core$_windows_cffi: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_core$_windows_cffi: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_core$_windows_cffi: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._core._windows_cffi" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_core$_windows_cffi\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_core$_windows_cffi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_core$_windows_cffi,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_core$_windows_cffi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_core$_windows_cffi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_core$_windows_cffi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_core$_windows_cffi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_core$_windows_cffi);
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

        UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
PyObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *outline_11_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_12__bases = NULL;
PyObject *tmp_class_container$class_creation_12__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_12__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_12__metaclass = NULL;
PyObject *tmp_class_container$class_creation_12__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
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
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_trio$_core$_windows_cffi$$$class__2__Nt_147 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_trio$_core$_windows_cffi$$$class__3__Ws2_153 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
PyObject *locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
PyObject *locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
PyObject *locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
PyObject *locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
PyObject *locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
PyObject *locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266 = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13;
NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_36;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_37;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_core$_windows_cffi = MAKE_MODULE_FRAME(code_objects_8e82e23613ce5fcaa26178393218b521, module_trio$_core$_windows_cffi);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_core$_windows_cffi$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_core$_windows_cffi$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_core$_windows_cffi;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 3;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_enum, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
tmp_import_from_1__module = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$_core$_windows_cffi,
        mod_consts.const_str_plain_NewType,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_NewType);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_NewType, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$_core$_windows_cffi,
        mod_consts.const_str_plain_NoReturn,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_NoReturn);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$_core$_windows_cffi,
        mod_consts.const_str_plain_Protocol,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Protocol);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Protocol, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$_core$_windows_cffi,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$_core$_windows_cffi,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_13);
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
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__generated_windows_ffi;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_core$_windows_cffi;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ffi_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 12;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_trio$_core$_windows_cffi,
        mod_consts.const_str_plain_ffi,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ffi);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_ffi, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
assert(!(tmp_expression_value_1 == NULL));
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CData);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_CData, tmp_assign_source_15);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_trio$_core$_windows_cffi$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_CData;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_CType);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_CType, tmp_assign_source_16);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_2 = module_var_accessor_trio$_core$_windows_cffi$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_CType;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = module_var_accessor_trio$_core$_windows_cffi$CData(tstate);
if (unlikely(tmp_assign_source_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CData);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_AlwaysNull, tmp_assign_source_17);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_3 = module_var_accessor_trio$_core$_windows_cffi$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_AlwaysNull;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_trio$_core$_windows_cffi$NewType(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NewType);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_Handle;
tmp_args_element_value_2 = module_var_accessor_trio$_core$_windows_cffi$CData(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CData);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 23;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_Handle, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_trio$_core$_windows_cffi$NewType(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NewType);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_plain_HandleArray;
tmp_args_element_value_4 = module_var_accessor_trio$_core$_windows_cffi$CData(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CData);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 24;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_HandleArray, tmp_assign_source_19);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_trio$_core$_windows_cffi$Protocol(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto try_except_handler_2;
}
tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

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
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_23;
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


exception_lineno = 27;

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
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain__Kernel32;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 27;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
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


exception_lineno = 27;

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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_3, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


exception_lineno = 27;

    goto try_except_handler_2;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 27;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 27;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_25;
}
branch_end_1:;
{
PyObject *tmp_assign_source_26;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_5a185f4b31dacce72ea33413203b2444;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain__Kernel32;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2 = MAKE_CLASS_FRAME(tstate, code_objects_a6dbae308725505d21c02eeb00f45415, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_2af02fb010e9ded2e56908297157f12f);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__1_CreateIoCompletionPort(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_CreateIoCompletionPort, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_68d3aa1294f280925f223956308db6ce);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__2_CreateEventA(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_CreateEventA, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_22b83cebfaad737f1cc251af4b964baf);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__3_SetFileCompletionNotificationModes(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_SetFileCompletionNotificationModes, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_b3ed89abd783f14acb62924367fe9e5d);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__4_PostQueuedCompletionStatus(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_PostQueuedCompletionStatus, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_b537f87d09d13f93dbece323ba6ee49e);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__5_CancelIoEx(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_CancelIoEx, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_4a2c03ee75ed8e4969ce5391116d155e);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__6_WriteFile(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_WriteFile, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_709a12194d5d657da176003b81ba0b95);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__7_ReadFile(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_ReadFile, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_c90a86c28545121503beeff7bf674474);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__8_GetQueuedCompletionStatusEx(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_GetQueuedCompletionStatusEx, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_aff99c8f89bee8086f6f385d8257ded1);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__9_CreateFileW(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_CreateFileW, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_ee679f95cb019878c5aea5ebcb92b204);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__10_WaitForSingleObject(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_WaitForSingleObject, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e150e79c886a0017da4d1804248d8a50);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__11_WaitForMultipleObjects(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_WaitForMultipleObjects, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_dc164e4914730c46e04679d9724836e7);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__12_SetEvent(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_SetEvent, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_4be1b0b333be8a0d92ac76ccdf18cec9);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__13_CloseHandle(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_CloseHandle, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_f820f70dbe7bc1bdc4e28fcffb42f67e);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__14_DeviceIoControl(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain_DeviceIoControl, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__1__Kernel32_2);

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
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

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


exception_lineno = 27;

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
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain__Kernel32;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 27;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_27;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_26 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_26);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27);
locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27);
locals_trio$_core$_windows_cffi$$$class__1__Kernel32_27 = NULL;
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
exception_lineno = 27;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain__Kernel32, tmp_assign_source_26);
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_trio$_core$_windows_cffi$Protocol(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto try_except_handler_5;
}
tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

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
tmp_expression_value_9 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_31;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_5;
}
tmp_tuple_element_6 = mod_consts.const_str_plain__Nt;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 147;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
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


exception_lineno = 147;

    goto try_except_handler_5;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 147;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 147;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_33;
}
branch_end_4:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_trio$_core$_windows_cffi$$$class__2__Nt_147 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__2__Nt_147, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_digest_7a45fef79323e185669eec05dfb87d87;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__2__Nt_147, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain__Nt;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__2__Nt_147, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_147;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__2__Nt_147, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3 = MAKE_CLASS_FRAME(tstate, code_objects_0751fe028d1d1ea38d6b07bc8ad36bc6, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_8e7861719b79ba955b6351ebb18e784f);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__15_RtlNtStatusToDosError(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__2__Nt_147, mod_consts.const_str_plain_RtlNtStatusToDosError, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__2__Nt_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__2__Nt_147, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__2__Nt_147, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_6 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain__Nt;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_trio$_core$_windows_cffi$$$class__2__Nt_147;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 147;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_35;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_34 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__2__Nt_147);
locals_trio$_core$_windows_cffi$$$class__2__Nt_147 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__2__Nt_147);
locals_trio$_core$_windows_cffi$$$class__2__Nt_147 = NULL;
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
exception_lineno = 147;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain__Nt, tmp_assign_source_34);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
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
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
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
PyObject *tmp_assign_source_36;
PyObject *tmp_tuple_element_9;
tmp_tuple_element_9 = module_var_accessor_trio$_core$_windows_cffi$Protocol(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;

    goto try_except_handler_8;
}
tmp_assign_source_36 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_37 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_37;
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

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
tmp_expression_value_15 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_15, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_39 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_39;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

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
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
tmp_tuple_element_10 = mod_consts.const_str_plain__Ws2;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 153;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_40;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_18 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

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
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_19;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_19, tmp_name_value_5, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_8;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
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


exception_lineno = 153;

    goto try_except_handler_8;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 153;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 153;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_41;
}
branch_end_7:;
{
PyObject *tmp_assign_source_42;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_trio$_core$_windows_cffi$$$class__3__Ws2_153 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_digest_45de60bc7b03a2f9c95860cccfd61e8b;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain__Ws2;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_153;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_10;
}
frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4 = MAKE_CLASS_FRAME(tstate, code_objects_d10607f8e4a508de791be3f19906b83f, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__16_WSAGetLastError(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, mod_consts.const_str_plain_WSAGetLastError, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_fd4defa68057cc51f445d39aeaa8ff1b);

tmp_dictset_value = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__17_WSAIoctl(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, mod_consts.const_str_plain_WSAIoctl, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__3__Ws2_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_10;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

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


exception_lineno = 153;

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
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_10;
}
branch_no_9:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain__Ws2;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_trio$_core$_windows_cffi$$$class__3__Ws2_153;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 153;
tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_43;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_42 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_42);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153);
locals_trio$_core$_windows_cffi$$$class__3__Ws2_153 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__3__Ws2_153);
locals_trio$_core$_windows_cffi$$$class__3__Ws2_153 = NULL;
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
exception_lineno = 153;
goto try_except_handler_8;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain__Ws2, tmp_assign_source_42);
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
PyObject *tmp_assign_source_44;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_trio$_core$_windows_cffi$Protocol(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;

    goto try_except_handler_11;
}
tmp_assign_source_44 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_44;
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_45 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_45;
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

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
tmp_expression_value_21 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_21, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_11;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_11;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_47 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_47;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

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
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_11;
}
tmp_tuple_element_14 = mod_consts.const_str_plain__DummyStruct;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 174;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_48;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_24 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_25;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_25, tmp_name_value_6, tmp_default_value_4);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_11;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_26;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_26 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
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


exception_lineno = 174;

    goto try_except_handler_11;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 174;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_49;
}
branch_end_10:;
{
PyObject *tmp_assign_source_50;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain__DummyStruct;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_174;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_13;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_13;
}
frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5 = MAKE_CLASS_FRAME(tstate, code_objects_f83144ab4848befe1eb9bad0dfbddb59, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = const_str_plain_int;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_Offset;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = const_str_plain_int;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_OffsetHigh;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__4__DummyStruct_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_13;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

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


exception_lineno = 174;

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
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_13;
}
branch_no_12:;
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_10;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_10 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain__DummyStruct;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 174;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;

    goto try_except_handler_13;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_51;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_50 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_50);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174);
locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174);
locals_trio$_core$_windows_cffi$$$class__4__DummyStruct_174 = NULL;
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
exception_lineno = 174;
goto try_except_handler_11;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain__DummyStruct, tmp_assign_source_50);
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
PyObject *tmp_assign_source_52;
PyObject *tmp_tuple_element_17;
tmp_tuple_element_17 = module_var_accessor_trio$_core$_windows_cffi$Protocol(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;

    goto try_except_handler_14;
}
tmp_assign_source_52 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_52, 0, tmp_tuple_element_17);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_53 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_53;
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_54;
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

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
tmp_expression_value_27 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_14;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_14;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_55 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_55;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

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
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_29;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_14;
}
tmp_tuple_element_18 = mod_consts.const_str_plain__DummyUnion;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 179;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_56;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_30 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

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
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_31;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_31, tmp_name_value_7, tmp_default_value_5);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_14;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_32;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_32 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_32 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
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


exception_lineno = 179;

    goto try_except_handler_14;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 179;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 179;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_57;
}
branch_end_13:;
{
PyObject *tmp_assign_source_58;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain__DummyUnion;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_179;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_16;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_16;
}
frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6 = MAKE_CLASS_FRAME(tstate, code_objects_39a40a3722365424c5ebee33bfdb41fc, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_plain__DummyStruct;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_DUMMYSTRUCTNAME;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_object;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_Pointer;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__5__DummyUnion_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_16;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

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


exception_lineno = 179;

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
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_16;
}
branch_no_15:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_20 = mod_consts.const_str_plain__DummyUnion;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 179;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto try_except_handler_16;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_59;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_58 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_58);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179);
locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179);
locals_trio$_core$_windows_cffi$$$class__5__DummyUnion_179 = NULL;
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
exception_lineno = 179;
goto try_except_handler_14;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain__DummyUnion, tmp_assign_source_58);
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
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_tuple_element_21;
tmp_tuple_element_21 = module_var_accessor_trio$_core$_windows_cffi$Protocol(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Protocol);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto try_except_handler_17;
}
tmp_assign_source_60 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_60, 0, tmp_tuple_element_21);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_61 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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
tmp_expression_value_33 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_33, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_17;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_17;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_63 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_63;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_35;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_17;
}
tmp_tuple_element_22 = mod_consts.const_str_plain__Overlapped;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 184;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_64;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_36 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_37;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_37, tmp_name_value_8, tmp_default_value_6);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_17;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_38;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_38 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_38 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_38);
Py_DECREF(tmp_expression_value_38);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
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


exception_lineno = 184;

    goto try_except_handler_17;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 184;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 184;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_65;
}
branch_end_16:;
{
PyObject *tmp_assign_source_66;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain__Overlapped;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_184;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_19;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_19;
}
frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7 = MAKE_CLASS_FRAME(tstate, code_objects_cd4c8266a1fedbdd9e8210cca12c4d02, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = const_str_plain_int;
tmp_ass_subscribed_8 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_Internal;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
CHECK_OBJECT(tmp_ass_subscribed_8);
Py_DECREF(tmp_ass_subscribed_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = const_str_plain_int;
tmp_ass_subscribed_9 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_InternalHigh;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
CHECK_OBJECT(tmp_ass_subscribed_9);
Py_DECREF(tmp_ass_subscribed_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_plain__DummyUnion;
tmp_ass_subscribed_10 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_DUMMYUNIONNAME;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
CHECK_OBJECT(tmp_ass_subscribed_10);
Py_DECREF(tmp_ass_subscribed_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_plain_Handle;
tmp_ass_subscribed_11 = PyObject_GetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_hEvent;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
CHECK_OBJECT(tmp_ass_subscribed_11);
Py_DECREF(tmp_ass_subscribed_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__6__Overlapped_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_19;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

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


exception_lineno = 184;

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
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_19;
}
branch_no_18:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_24 = mod_consts.const_str_plain__Overlapped;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
tmp_tuple_element_24 = locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 184;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;

    goto try_except_handler_19;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_67;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_66 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_66);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184);
locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184);
locals_trio$_core$_windows_cffi$$$class__6__Overlapped_184 = NULL;
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
exception_lineno = 184;
goto try_except_handler_17;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain__Overlapped, tmp_assign_source_66);
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
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_instance_1;
tmp_called_value_15 = module_var_accessor_trio$_core$_windows_cffi$cast(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain__Kernel32;
tmp_called_instance_1 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 191;
tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_dlopen,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_f8064970d8ae84e0620e2c53fc1b883f_tuple, 0)
);

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 191;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32, tmp_assign_source_68);
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_instance_2;
tmp_called_value_16 = module_var_accessor_trio$_core$_windows_cffi$cast(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = mod_consts.const_str_plain__Nt;
tmp_called_instance_2 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 192;
tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_dlopen,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_2ee177f67bdc5cf1ebba6c7a49562615_tuple, 0)
);

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_ntdll, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_instance_3;
tmp_called_value_17 = module_var_accessor_trio$_core$_windows_cffi$cast(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;

    goto frame_exception_exit_1;
}
tmp_args_element_value_9 = mod_consts.const_str_plain__Ws2;
tmp_called_instance_3 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 193;
tmp_args_element_value_10 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    mod_consts.const_str_plain_dlopen,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_fdbcc1a8074f5e22f5bdf0b007c6e942_tuple, 0)
);

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 193;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_ws2_32, tmp_assign_source_70);
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_instance_4;
tmp_called_value_18 = module_var_accessor_trio$_core$_windows_cffi$Handle(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Handle);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;

    goto frame_exception_exit_1;
}
tmp_called_instance_4 = module_var_accessor_trio$_core$_windows_cffi$ffi(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ffi);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 203;
tmp_args_element_value_11 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_4,
    mod_consts.const_str_plain_cast,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_HANDLE_int_neg_1_tuple, 0)
);

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto frame_exception_exit_1;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 203;
tmp_assign_source_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_71);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_72;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_39;
tmp_expression_value_39 = module_var_accessor_trio$_core$_windows_cffi$enum(tstate);
if (unlikely(tmp_expression_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;

    goto try_except_handler_20;
}
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_IntEnum);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
tmp_assign_source_72 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_72, 0, tmp_tuple_element_25);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_73 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_40 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_40, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_75 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_75;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
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
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_42;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
tmp_tuple_element_26 = mod_consts.const_str_plain_ErrorCodes;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 206;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_76;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_43;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_43 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_43, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
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
PyObject *tmp_tuple_element_27;
PyObject *tmp_expression_value_44;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_44, tmp_name_value_9, tmp_default_value_7);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_45;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_45 == NULL));
tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_20;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 206;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 206;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_20;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_77;
tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_77;
}
branch_end_19:;
{
PyObject *tmp_assign_source_78;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_str_plain_ErrorCodes;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_22;
}
tmp_dictset_value = mod_consts.const_int_pos_206;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_22;
}
frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8 = MAKE_CLASS_FRAME(tstate, code_objects_71e2ff43817d42db70c94c46add493fb, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_258;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_STATUS_TIMEOUT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_258;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_WAIT_TIMEOUT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_WAIT_ABANDONED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = const_int_0;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_WAIT_OBJECT_0, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_hex_ffffffff;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_WAIT_FAILED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_997;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_ERROR_IO_PENDING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_995;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_735;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_ERROR_ABANDONED_WAIT_0, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_6;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_ERROR_INVALID_HANDLE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_87;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_ERROR_INVALID_PARAMETER, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_1168;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_ERROR_NOT_FOUND, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_dictset_value = mod_consts.const_int_pos_10038;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain_ERROR_NOT_SOCKET, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "o";
    goto frame_exception_exit_8;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__7_ErrorCodes_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_22;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_22;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_22;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_22;
}
branch_no_21:;
{
PyObject *tmp_assign_source_79;
PyObject *tmp_called_value_20;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_20 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_28 = mod_consts.const_str_plain_ErrorCodes;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
tmp_tuple_element_28 = locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 206;
tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;

    goto try_except_handler_22;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_79;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_78 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_78);
goto try_return_handler_22;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206);
locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206 = NULL;
goto try_return_handler_21;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206);
locals_trio$_core$_windows_cffi$$$class__7_ErrorCodes_206 = NULL;
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
exception_lineno = 206;
goto try_except_handler_20;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_ErrorCodes, tmp_assign_source_78);
}
goto try_end_8;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
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
PyObject *tmp_assign_source_80;
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_46;
tmp_expression_value_46 = module_var_accessor_trio$_core$_windows_cffi$enum(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_IntFlag);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_assign_source_80 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_80, 0, tmp_tuple_element_29);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_80;
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_81 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
tmp_assign_source_82 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_47 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_47, tmp_subscript_value_8, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_83 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_83;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_48;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_48, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_49;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_49 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_tuple_element_30 = mod_consts.const_str_plain_FileFlags;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 221;
tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_84;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_50;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_50 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_51;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_51, tmp_name_value_10, tmp_default_value_8);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_52;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_52 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_23;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_23;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 221;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 221;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_23;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_85;
}
branch_end_22:;
{
PyObject *tmp_assign_source_86;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_str_plain_FileFlags;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_25;
}
tmp_dictset_value = mod_consts.const_int_pos_221;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_25;
}
frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9 = MAKE_CLASS_FRAME(tstate, code_objects_e42e7ad22a330eddb6782e16b2eca044, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_hex_80000000;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_GENERIC_READ, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_1048576;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_SYNCHRONIZE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_hex_40000000;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_FILE_SHARE_READ, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_FILE_SHARE_WRITE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_FILE_SHARE_DELETE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_CREATE_NEW, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_CREATE_ALWAYS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_3;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_OPEN_EXISTING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_OPEN_ALWAYS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_dictset_value = mod_consts.const_int_pos_5;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain_TRUNCATE_EXISTING, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_2 = "o";
    goto frame_exception_exit_9;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__8_FileFlags_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_25;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

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


exception_lineno = 221;

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
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_25;
}
branch_no_24:;
{
PyObject *tmp_assign_source_87;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_32 = mod_consts.const_str_plain_FileFlags;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_32 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
tmp_tuple_element_32 = locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 221;
tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto try_except_handler_25;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_87;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_86 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_86);
goto try_return_handler_25;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221);
locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221 = NULL;
goto try_return_handler_24;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221);
locals_trio$_core$_windows_cffi$$$class__8_FileFlags_221 = NULL;
// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

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
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 221;
goto try_except_handler_23;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_FileFlags, tmp_assign_source_86);
}
goto try_end_9;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
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
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_88;
PyObject *tmp_tuple_element_33;
PyObject *tmp_expression_value_53;
tmp_expression_value_53 = module_var_accessor_trio$_core$_windows_cffi$enum(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_IntFlag);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_assign_source_88 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_88, 0, tmp_tuple_element_33);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_88;
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_89 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
tmp_assign_source_90 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_54;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_54 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_54, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_91 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_91;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_55;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_55, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_92;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_56;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_34;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_56 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_tuple_element_34 = mod_consts.const_str_plain_AFDPollFlags;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_34 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 235;
tmp_assign_source_92 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_92;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_57;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_57 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_57, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_58;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_58 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_58, tmp_name_value_11, tmp_default_value_9);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_59;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_59 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_59 == NULL));
tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_59);
Py_DECREF(tmp_expression_value_59);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_35);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_26;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_26;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 235;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 235;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_26;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_93;
}
branch_end_25:;
{
PyObject *tmp_assign_source_94;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_str_plain_AFDPollFlags;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_28;
}
tmp_dictset_value = mod_consts.const_int_pos_235;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_28;
}
frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10 = MAKE_CLASS_FRAME(tstate, code_objects_227f3326ce6f378fa5842068d0ee9e66, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_RECEIVE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_RECEIVE_EXPEDITED, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_4;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_SEND, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_8;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_DISCONNECT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_16;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_ABORT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_32;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_LOCAL_CLOSE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_CONNECT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_128;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_ACCEPT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_256;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_CONNECT_FAIL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_512;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_QOS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_1024;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_GROUP_QOS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_2048;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_ROUTING_INTERFACE_CHANGE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_dictset_value = mod_consts.const_int_pos_4096;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain_AFD_POLL_EVENT_ADDRESS_LIST_CHANGE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_10;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_28;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_28;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_28;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_28;
}
branch_no_27:;
{
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_24;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_24 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_36 = mod_consts.const_str_plain_AFDPollFlags;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_36);
tmp_tuple_element_36 = locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 235;
tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto try_except_handler_28;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_95;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_94 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_94);
goto try_return_handler_28;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235);
locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235 = NULL;
goto try_return_handler_27;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235);
locals_trio$_core$_windows_cffi$$$class__9_AFDPollFlags_235 = NULL;
// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

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
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 235;
goto try_except_handler_26;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_AFDPollFlags, tmp_assign_source_94);
}
goto try_end_10;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
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
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_96;
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_60;
tmp_expression_value_60 = module_var_accessor_trio$_core$_windows_cffi$enum(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_IntEnum);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_assign_source_96 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_96, 0, tmp_tuple_element_37);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_96;
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_97 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_97;
}
{
PyObject *tmp_assign_source_98;
tmp_assign_source_98 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_98;
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_61 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_61, tmp_subscript_value_10, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_99 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_99;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_62;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_62, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_100;
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_tuple_element_38 = mod_consts.const_str_plain_WSAIoctls;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 255;
tmp_assign_source_100 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_100;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_64;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_64 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_64, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_39;
PyObject *tmp_expression_value_65;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_12, tmp_default_value_10);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_66;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_39);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_29;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_29;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 255;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 255;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_29;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_101;
tmp_assign_source_101 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_101;
}
branch_end_28:;
{
PyObject *tmp_assign_source_102;
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_str_plain_WSAIoctls;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_31;
}
tmp_dictset_value = mod_consts.const_int_pos_255;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_31;
}
frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11 = MAKE_CLASS_FRAME(tstate, code_objects_184a6af65cfc6054eb6ecf4f3edb075a, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_hex_48000022;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, mod_consts.const_str_plain_SIO_BASE_HANDLE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_int_hex_4800001c;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, mod_consts.const_str_plain_SIO_BSP_HANDLE_SELECT, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto frame_exception_exit_11;
}
tmp_dictset_value = mod_consts.const_int_hex_4800001d;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, mod_consts.const_str_plain_SIO_BSP_HANDLE_POLL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_2 = "o";
    goto frame_exception_exit_11;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__10_WSAIoctls_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_31;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_31;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_31;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_31;
}
branch_no_30:;
{
PyObject *tmp_assign_source_103;
PyObject *tmp_called_value_26;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_26 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_40 = mod_consts.const_str_plain_WSAIoctls;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_40);
tmp_tuple_element_40 = locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 255;
tmp_assign_source_103 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto try_except_handler_31;
}
assert(outline_9_var___class__ == NULL);
outline_9_var___class__ = tmp_assign_source_103;
}
CHECK_OBJECT(outline_9_var___class__);
tmp_assign_source_102 = outline_9_var___class__;
Py_INCREF(tmp_assign_source_102);
goto try_return_handler_31;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255);
locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255 = NULL;
goto try_return_handler_30;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255);
locals_trio$_core$_windows_cffi$$$class__10_WSAIoctls_255 = NULL;
// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto try_except_handler_30;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 255;
goto try_except_handler_29;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_WSAIoctls, tmp_assign_source_102);
}
goto try_end_11;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_104;
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_67;
tmp_expression_value_67 = module_var_accessor_trio$_core$_windows_cffi$enum(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_IntFlag);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_assign_source_104 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_104, 0, tmp_tuple_element_41);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_104;
}
{
PyObject *tmp_assign_source_105;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_105 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_105;
}
{
PyObject *tmp_assign_source_106;
tmp_assign_source_106 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_106;
}
{
PyObject *tmp_assign_source_107;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_68;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_68 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_11, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_107 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_107;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_69;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_108;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_70;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_70 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_tuple_element_42 = mod_consts.const_str_plain_CompletionModes;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 261;
tmp_assign_source_108 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_108;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_71;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_71 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_43;
PyObject *tmp_expression_value_72;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_72 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_43 = BUILTIN_GETATTR(tstate, tmp_expression_value_72, tmp_name_value_13, tmp_default_value_11);
if (tmp_tuple_element_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_73;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_73 == NULL));
tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_73);
Py_DECREF(tmp_expression_value_73);
if (tmp_tuple_element_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_43);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_32;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_32;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 261;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 261;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_32;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_109;
tmp_assign_source_109 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_109;
}
branch_end_31:;
{
PyObject *tmp_assign_source_110;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_34;
}
tmp_dictset_value = mod_consts.const_str_plain_CompletionModes;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_34;
}
tmp_dictset_value = mod_consts.const_int_pos_261;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_34;
}
frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12 = MAKE_CLASS_FRAME(tstate, code_objects_a956a09deb8aaff036a55a34273400b6, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12) == 2);

// Framed code:
tmp_dictset_value = const_int_pos_1;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261, mod_consts.const_str_plain_FILE_SKIP_COMPLETION_PORT_ON_SUCCESS, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
tmp_dictset_value = mod_consts.const_int_pos_2;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261, mod_consts.const_str_plain_FILE_SKIP_SET_EVENT_ON_HANDLE, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "o";
    goto frame_exception_exit_12;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__11_CompletionModes_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_34;
skip_nested_handling_11:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_34;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_34;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_34;
}
branch_no_33:;
{
PyObject *tmp_assign_source_111;
PyObject *tmp_called_value_28;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_44;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_28 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_44 = mod_consts.const_str_plain_CompletionModes;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_44 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_44);
tmp_tuple_element_44 = locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_44);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 261;
tmp_assign_source_111 = CALL_FUNCTION(tstate, tmp_called_value_28, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto try_except_handler_34;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_111;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_110 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_110);
goto try_return_handler_34;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261);
locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261 = NULL;
goto try_return_handler_33;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261);
locals_trio$_core$_windows_cffi$$$class__11_CompletionModes_261 = NULL;
// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto try_except_handler_33;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 261;
goto try_except_handler_32;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionModes, tmp_assign_source_110);
}
goto try_end_12;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}
{
PyObject *tmp_outline_return_value_12;
// Tried code:
{
PyObject *tmp_assign_source_112;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_74;
tmp_expression_value_74 = module_var_accessor_trio$_core$_windows_cffi$enum(tstate);
if (unlikely(tmp_expression_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enum);
}

if (tmp_expression_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_IntEnum);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_assign_source_112 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_112, 0, tmp_tuple_element_45);
assert(tmp_class_container$class_creation_12__bases_orig == NULL);
tmp_class_container$class_creation_12__bases_orig = tmp_assign_source_112;
}
{
PyObject *tmp_assign_source_113;
PyObject *tmp_direct_call_arg1_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_direct_call_arg1_12 = tmp_class_container$class_creation_12__bases_orig;
Py_INCREF(tmp_direct_call_arg1_12);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_12};
    tmp_assign_source_113 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
assert(tmp_class_container$class_creation_12__bases == NULL);
tmp_class_container$class_creation_12__bases = tmp_assign_source_113;
}
{
PyObject *tmp_assign_source_114;
tmp_assign_source_114 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__class_decl_dict == NULL);
tmp_class_container$class_creation_12__class_decl_dict = tmp_assign_source_114;
}
{
PyObject *tmp_assign_source_115;
PyObject *tmp_metaclass_value_12;
nuitka_bool tmp_condition_result_45;
int tmp_truth_name_12;
PyObject *tmp_type_arg_23;
PyObject *tmp_expression_value_75;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_container$class_creation_12__bases);
if (tmp_truth_name_12 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_condition_result_45 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_12;
} else {
    goto condexpr_false_12;
}
condexpr_true_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_expression_value_75 = tmp_class_container$class_creation_12__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_75, tmp_subscript_value_12, 0);
if (tmp_type_arg_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
CHECK_OBJECT(tmp_type_arg_23);
Py_DECREF(tmp_type_arg_23);
if (tmp_metaclass_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
goto condexpr_end_12;
condexpr_false_12:;
tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_12);
condexpr_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_bases_value_12 = tmp_class_container$class_creation_12__bases;
tmp_assign_source_115 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
CHECK_OBJECT(tmp_metaclass_value_12);
Py_DECREF(tmp_metaclass_value_12);
if (tmp_assign_source_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
assert(tmp_class_container$class_creation_12__metaclass == NULL);
tmp_class_container$class_creation_12__metaclass = tmp_assign_source_115;
}
{
bool tmp_condition_result_46;
PyObject *tmp_expression_value_76;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_76 = tmp_class_container$class_creation_12__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_76, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_condition_result_46 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_46 != false) {
    goto branch_yes_34;
} else {
    goto branch_no_34;
}
}
branch_yes_34:;
{
PyObject *tmp_assign_source_116;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_77;
PyObject *tmp_args_value_23;
PyObject *tmp_tuple_element_46;
PyObject *tmp_kwargs_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_77 = tmp_class_container$class_creation_12__metaclass;
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_tuple_element_46 = mod_consts.const_str_plain_IoControlCodes;
tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_46 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_23 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 266;
tmp_assign_source_116 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_23, tmp_kwargs_value_23);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_value_23);
Py_DECREF(tmp_args_value_23);
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_116;
}
{
bool tmp_condition_result_47;
PyObject *tmp_operand_value_12;
PyObject *tmp_expression_value_78;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_expression_value_78 = tmp_class_container$class_creation_12__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_78, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
assert(!(tmp_res == -1));
tmp_condition_result_47 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_47 != false) {
    goto branch_yes_35;
} else {
    goto branch_no_35;
}
}
branch_yes_35:;
{
PyObject *tmp_raise_type_12;
PyObject *tmp_make_exception_arg_12;
PyObject *tmp_mod_expr_left_12;
PyObject *tmp_mod_expr_right_12;
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_79;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_12;
tmp_mod_expr_left_12 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_expression_value_79 = tmp_class_container$class_creation_12__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_12 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_47 = BUILTIN_GETATTR(tstate, tmp_expression_value_79, tmp_name_value_14, tmp_default_value_12);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_80;
PyObject *tmp_type_arg_24;
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_type_arg_24 = tmp_class_container$class_creation_12__prepared;
tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_24);
assert(!(tmp_expression_value_80 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_47);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_12);
goto try_except_handler_35;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
CHECK_OBJECT(tmp_mod_expr_right_12);
Py_DECREF(tmp_mod_expr_right_12);
if (tmp_make_exception_arg_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_35;
}
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 266;
tmp_raise_type_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_12);
CHECK_OBJECT(tmp_make_exception_arg_12);
Py_DECREF(tmp_make_exception_arg_12);
assert(!(tmp_raise_type_12 == NULL));
exception_state.exception_value = tmp_raise_type_12;
exception_lineno = 266;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_35;
}
branch_no_35:;
goto branch_end_34;
branch_no_34:;
{
PyObject *tmp_assign_source_117;
tmp_assign_source_117 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_12__prepared == NULL);
tmp_class_container$class_creation_12__prepared = tmp_assign_source_117;
}
branch_end_34:;
{
PyObject *tmp_assign_source_118;
{
PyObject *tmp_set_locals_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
tmp_set_locals_12 = tmp_class_container$class_creation_12__prepared;
locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266 = tmp_set_locals_12;
Py_INCREF(tmp_set_locals_12);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9743dfe42ce07e4b68c16e996201a909;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_37;
}
tmp_dictset_value = mod_consts.const_str_plain_IoControlCodes;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_37;
}
tmp_dictset_value = mod_consts.const_int_pos_266;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_37;
}
frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13 = MAKE_CLASS_FRAME(tstate, code_objects_e704a914626718b9f2d0e1ffe8e2665d, module_trio$_core$_windows_cffi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13);
assert(Py_REFCNT(frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13) == 2);

// Framed code:
tmp_dictset_value = mod_consts.const_int_pos_73764;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266, mod_consts.const_str_plain_IOCTL_AFD_POLL, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_2 = "o";
    goto frame_exception_exit_13;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_13:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13,
    type_description_2,
    outline_11_var___class__
);



assertFrameObject(frame_frame_trio$_core$_windows_cffi$$$class__12_IoControlCodes_13);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_12;
frame_no_exception_12:;
goto skip_nested_handling_12;
nested_frame_exit_12:;

goto try_except_handler_37;
skip_nested_handling_12:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_37;
}
{
nuitka_bool tmp_condition_result_48;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_cmp_expr_left_12 = tmp_class_container$class_creation_12__bases;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_cmp_expr_right_12 = tmp_class_container$class_creation_12__bases_orig;
tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_37;
}
if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
    goto branch_yes_36;
} else {
    goto branch_no_36;
}
}
branch_yes_36:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_12__bases_orig;
tmp_res = PyObject_SetItem(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_37;
}
branch_no_36:;
{
PyObject *tmp_assign_source_119;
PyObject *tmp_called_value_30;
PyObject *tmp_args_value_24;
PyObject *tmp_tuple_element_48;
PyObject *tmp_kwargs_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
tmp_called_value_30 = tmp_class_container$class_creation_12__metaclass;
tmp_tuple_element_48 = mod_consts.const_str_plain_IoControlCodes;
tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
tmp_tuple_element_48 = tmp_class_container$class_creation_12__bases;
PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_48);
tmp_tuple_element_48 = locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266;
PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
tmp_kwargs_value_24 = tmp_class_container$class_creation_12__class_decl_dict;
frame_frame_trio$_core$_windows_cffi->m_frame.f_lineno = 266;
tmp_assign_source_119 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_24, tmp_kwargs_value_24);
CHECK_OBJECT(tmp_args_value_24);
Py_DECREF(tmp_args_value_24);
if (tmp_assign_source_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto try_except_handler_37;
}
assert(outline_11_var___class__ == NULL);
outline_11_var___class__ = tmp_assign_source_119;
}
CHECK_OBJECT(outline_11_var___class__);
tmp_assign_source_118 = outline_11_var___class__;
Py_INCREF(tmp_assign_source_118);
goto try_return_handler_37;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_37:;
Py_DECREF(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266);
locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266 = NULL;
goto try_return_handler_36;
// Exception handler code:
try_except_handler_37:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266);
locals_trio$_core$_windows_cffi$$$class__12_IoControlCodes_266 = NULL;
// Re-raise.
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto try_except_handler_36;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_36:;
CHECK_OBJECT(outline_11_var___class__);
CHECK_OBJECT(outline_11_var___class__);
Py_DECREF(outline_11_var___class__);
outline_11_var___class__ = NULL;
goto outline_result_24;
// Exception handler code:
try_except_handler_36:;
exception_keeper_lineno_36 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_36 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_36;
exception_lineno = exception_keeper_lineno_36;

goto outline_exception_12;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_12:;
exception_lineno = 266;
goto try_except_handler_35;
outline_result_24:;
UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_IoControlCodes, tmp_assign_source_118);
}
goto try_end_13;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_37 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_37 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_37;
exception_lineno = exception_keeper_lineno_37;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases_orig);
Py_DECREF(tmp_class_container$class_creation_12__bases_orig);
tmp_class_container$class_creation_12__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
CHECK_OBJECT(tmp_class_container$class_creation_12__bases);
Py_DECREF(tmp_class_container$class_creation_12__bases);
tmp_class_container$class_creation_12__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_12__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_12__class_decl_dict);
tmp_class_container$class_creation_12__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_12__metaclass);
Py_DECREF(tmp_class_container$class_creation_12__metaclass);
tmp_class_container$class_creation_12__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_12__prepared);
Py_DECREF(tmp_class_container$class_creation_12__prepared);
tmp_class_container$class_creation_12__prepared = NULL;
tmp_outline_return_value_12 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_12);
goto outline_result_23;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_23:;
CHECK_OBJECT(tmp_outline_return_value_12);
Py_DECREF(tmp_outline_return_value_12);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_13;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_windows_cffi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_windows_cffi->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_windows_cffi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_core$_windows_cffi);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_13:;
{
PyObject *tmp_assign_source_120;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_3631500104b62622c629b03b7c417874);

tmp_assign_source_120 = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__18__handle(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain__handle, tmp_assign_source_120);
}
{
PyObject *tmp_assign_source_121;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_e7fbb3211e7f0ae3425100cc6ed4f548);

tmp_assign_source_121 = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__19_handle_array(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_handle_array, tmp_assign_source_121);
}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_defaults_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_20;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_5f835d72b6648d14a89ccbecca4c0e94);
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_a73aaf4d19a679eb57cc4a219005178d);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_122 = MAKE_FUNCTION_trio$_core$_windows_cffi$$$function__20_raise_winerror(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)mod_consts.const_str_plain_raise_winerror, tmp_assign_source_122);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_core$_windows_cffi", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._core._windows_cffi" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_core$_windows_cffi);
    return module_trio$_core$_windows_cffi;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_windows_cffi, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_core$_windows_cffi", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

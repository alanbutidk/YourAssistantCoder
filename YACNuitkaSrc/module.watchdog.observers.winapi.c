/* Generated code for Python module 'watchdog$observers$winapi'
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



/* The "module_watchdog$observers$winapi" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$observers$winapi;
PyDictObject *moduledict_watchdog$observers$winapi;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_WinError;
PyObject *const_str_plain_INVALID_HANDLE_VALUE;
PyObject *const_int_hex_ffffffff;
PyObject *const_str_plain_n_bytes;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_read_buffer;
PyObject *const_str_plain_LPFNI;
PyObject *const_str_plain_addressof;
PyObject *const_str_plain_FileNotifyInformation;
PyObject *const_str_plain_FileName;
PyObject *const_str_plain_offset;
PyObject *const_str_plain_string_at;
PyObject *const_str_plain_FileNameLength;
PyObject *const_str_plain_results;
PyObject *const_str_plain_Action;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_913ae8f3439742e034c09e3f599385fd_tuple;
PyObject *const_str_plain_NextEntryOffset;
PyObject *const_str_plain_create_unicode_buffer;
PyObject *const_str_plain_PATH_BUFFER_SIZE;
PyObject *const_str_plain_GetFinalPathNameByHandleW;
PyObject *const_str_plain_VOLUME_NAME_NT;
PyObject *const_str_plain_value;
PyObject *const_tuple_str_dot_tuple;
PyObject *const_str_plain_FILE_ACTION_DELETED_SELF;
PyObject *const_str_plain_encode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_sizeof;
PyObject *const_str_plain_create_string_buffer;
PyObject *const_str_plain_memmove;
PyObject *const_str_plain_raw;
PyObject *const_str_plain_CreateFileW;
PyObject *const_str_plain_FILE_LIST_DIRECTORY;
PyObject *const_str_plain_WATCHDOG_FILE_SHARE_FLAGS;
PyObject *const_str_plain_OPEN_EXISTING;
PyObject *const_str_plain_WATCHDOG_FILE_FLAGS;
PyObject *const_str_digest_d37b9d6fb21e8fa20d44d12318a231b0;
PyObject *const_str_plain_CancelIoEx;
PyObject *const_str_plain_CloseHandle;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_suppress;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_BUFFER_SIZE;
PyObject *const_str_plain_DWORD;
PyObject *const_str_plain_ReadDirectoryChangesW;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS;
PyObject *const_str_plain_winerror;
PyObject *const_str_plain_ERROR_OPERATION_ABORTED;
PyObject *const_str_plain__is_observed_path_deleted;
PyObject *const_str_plain__generate_observed_path_deleted_event;
PyObject *const_str_digest_ba09122d08814a0030e95d10685eb2aa;
PyObject *const_str_plain_action;
PyObject *const_str_plain_FILE_ACTION_CREATED;
PyObject *const_str_plain_FILE_ACTION_REMOVED;
PyObject *const_str_plain_FILE_ACTION_MODIFIED;
PyObject *const_str_plain_FILE_ACTION_RENAMED_OLD_NAME;
PyObject *const_str_plain_FILE_ACTION_RENAMED_NEW_NAME;
PyObject *const_str_plain_FILE_ACTION_REMOVED_SELF;
PyObject *const_str_plain_read_directory_changes;
PyObject *const_tuple_str_plain_recursive_tuple;
PyObject *const_str_plain__parse_event_buffer;
PyObject *const_str_plain_WinAPINativeEvent;
PyObject *const_str_digest_bafa68d87d9e2442c722a751bdcbe589;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_BOOL;
PyObject *const_str_plain_HANDLE;
PyObject *const_str_plain_LPCWSTR;
PyObject *const_str_plain_LPVOID;
PyObject *const_str_plain_LPWSTR;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_dataclass_tuple;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_reduce;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_c_void_p;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME;
PyObject *const_int_pos_2;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME;
PyObject *const_int_pos_4;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES;
PyObject *const_int_pos_8;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_SIZE;
PyObject *const_int_pos_16;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE;
PyObject *const_int_pos_32;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS;
PyObject *const_int_pos_64;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_CREATION;
PyObject *const_int_pos_256;
PyObject *const_str_plain_FILE_NOTIFY_CHANGE_SECURITY;
PyObject *const_int_hex_2000000;
PyObject *const_str_plain_FILE_FLAG_BACKUP_SEMANTICS;
PyObject *const_int_hex_40000000;
PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
PyObject *const_str_plain_FILE_SHARE_READ;
PyObject *const_str_plain_FILE_SHARE_WRITE;
PyObject *const_str_plain_FILE_SHARE_DELETE;
PyObject *const_int_pos_3;
PyObject *const_str_plain_FILE_ACTION_DELETED;
PyObject *const_int_pos_5;
PyObject *const_int_pos_65534;
PyObject *const_int_pos_65535;
PyObject *const_str_plain_FILE_ACTION_OVERFLOW;
PyObject *const_str_plain_FILE_ACTION_ADDED;
PyObject *const_str_plain_THREAD_TERMINATE;
PyObject *const_int_pos_128;
PyObject *const_str_plain_WAIT_ABANDONED;
PyObject *const_int_pos_192;
PyObject *const_str_plain_WAIT_IO_COMPLETION;
PyObject *const_str_plain_WAIT_OBJECT_0;
PyObject *const_int_pos_258;
PyObject *const_str_plain_WAIT_TIMEOUT;
PyObject *const_int_pos_995;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_OVERLAPPED;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9e6cc04b5af36b91b837e7a83914ce17;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_73;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_Internal;
PyObject *const_str_plain_InternalHigh;
PyObject *const_str_plain_Offset;
PyObject *const_str_plain_OffsetHigh;
PyObject *const_str_plain_Pointer;
PyObject *const_str_plain_hEvent;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_772e75609424bc0ed55c6bfc1a96c3c8;
PyObject *const_str_plain__errcheck_bool;
PyObject *const_str_plain__errcheck_handle;
PyObject *const_str_plain__errcheck_dword;
PyObject *const_str_plain_WinDLL;
PyObject *const_tuple_str_plain_kernel32_tuple;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_restype;
PyObject *const_str_plain_errcheck;
PyObject *const_str_plain_POINTER;
PyObject *const_str_plain_argtypes;
PyObject *const_str_plain_CreateEventW;
PyObject *const_str_plain_CreateEvent;
PyObject *const_str_plain_SetEvent;
PyObject *const_str_plain_WaitForSingleObjectEx;
PyObject *const_str_plain_CreateIoCompletionPort;
PyObject *const_str_plain_GetQueuedCompletionStatus;
PyObject *const_str_plain_PostQueuedCompletionStatus;
PyObject *const_int_pos_212;
PyObject *const_str_plain_c_char;
PyObject *const_str_angle_lambda;
PyObject *const_int_pos_64000;
PyObject *const_int_pos_2048;
PyObject *const_dict_1e66975a549ad382a8cccd630cd31da5;
PyObject *const_dict_0e73e56cc0599d21203ad69ff47e43d9;
PyObject *const_dict_6a6b440cc0c592f9df757b3f63af9583;
PyObject *const_dict_bf7631445fa5a42098066ace37c92b79;
PyObject *const_str_plain_get_directory_handle;
PyObject *const_dict_77484382f0a9acb2f9efdccebf56b45e;
PyObject *const_str_plain_close_directory_handle;
PyObject *const_dict_608ac7ac74f5ced0bc70300871316a94;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_unsafe_hash_tuple;
PyObject *const_int_pos_350;
PyObject *const_str_plain_str;
PyObject *const_str_plain_src_path;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_plain_is_added;
PyObject *const_str_digest_5c42e2d2003afae2c6fd203e20815004;
PyObject *const_str_plain_is_removed;
PyObject *const_str_digest_bbe1ddbb82382a713e512d12219704dd;
PyObject *const_str_plain_is_modified;
PyObject *const_str_digest_c9f83de1a21b822e4bc59a5b145411c0;
PyObject *const_str_plain_is_renamed_old;
PyObject *const_str_digest_d270433789bf6719595c28bc63f34f59;
PyObject *const_str_plain_is_renamed_new;
PyObject *const_str_digest_5835d0e7cf2d224d2b89d56f6208c63d;
PyObject *const_str_plain_is_removed_self;
PyObject *const_str_digest_d10116590660609081bf39c68383ddf7;
PyObject *const_dict_673e39ff6539d25fb0d7cbd0ebb1b2f3;
PyObject *const_str_plain_read_events;
PyObject *const_str_digest_b1f9e5d468175ddfaa5451c141f10b01;
PyObject *const_tuple_str_plain_x_str_plain_y_tuple;
PyObject *const_str_digest_15a6bfcf4cf2edc08f4fd8d078e5e8ad;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_value_str_plain_func_str_plain_args_tuple;
PyObject *const_tuple_be8f29e40d9f28706fe17833ecd372d6_tuple;
PyObject *const_tuple_str_plain_handle_str_plain_path_str_plain_buff_tuple;
PyObject *const_tuple_8b7233aff006f722b0033c75f61f1197_tuple;
PyObject *const_tuple_str_plain_handle_tuple;
PyObject *const_tuple_str_plain_path_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_9c72f14336352a8ff8064f789853a828_tuple;
PyObject *const_tuple_f340ef6e9d2168bae882db8f2862a35f_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[202];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("watchdog.observers.winapi"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_WinError);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_n_bytes);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_buffer);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPFNI);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_addressof);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileNotifyInformation);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileName);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_string_at);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileNameLength);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_results);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_Action);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_913ae8f3439742e034c09e3f599385fd_tuple);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_NextEntryOffset);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_unicode_buffer);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_PATH_BUFFER_SIZE);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetFinalPathNameByHandleW);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_NAME_NT);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_string_buffer);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_memmove);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateFileW);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_EXISTING);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_d37b9d6fb21e8fa20d44d12318a231b0);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelIoEx);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_CloseHandle);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_suppress);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_BUFFER_SIZE);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadDirectoryChangesW);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_winerror);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_observed_path_deleted);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__generate_observed_path_deleted_event);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba09122d08814a0030e95d10685eb2aa);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_action);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_CREATED);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_REMOVED);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_directory_changes);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recursive_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_event_buffer);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_WinAPINativeEvent);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_bafa68d87d9e2442c722a751bdcbe589);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOOL);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPCWSTR);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPVOID);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPWSTR);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_reduce);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_int_pos_256);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_int_hex_2000000);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_hex_40000000);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_READ);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_WRITE);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_DELETE);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_DELETED);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_5);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_65534);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_int_pos_65535);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_OVERFLOW);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_ADDED);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_THREAD_TERMINATE);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_ABANDONED);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_192);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_IO_COMPLETION);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_OBJECT_0);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_int_pos_258);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_TIMEOUT);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_995);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_OVERLAPPED);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e6cc04b5af36b91b837e7a83914ce17);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_int_pos_73);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Internal);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_InternalHigh);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_Offset);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetHigh);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_Pointer);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_hEvent);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_dict_772e75609424bc0ed55c6bfc1a96c3c8);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain__errcheck_bool);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__errcheck_handle);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain__errcheck_dword);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_WinDLL);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kernel32_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_restype);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_errcheck);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEventW);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEvent);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetEvent);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForSingleObjectEx);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_CreateIoCompletionPort);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetQueuedCompletionStatus);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_PostQueuedCompletionStatus);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_int_pos_212);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_char);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_int_pos_64000);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_2048);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_1e66975a549ad382a8cccd630cd31da5);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_0e73e56cc0599d21203ad69ff47e43d9);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_6a6b440cc0c592f9df757b3f63af9583);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_bf7631445fa5a42098066ace37c92b79);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_directory_handle);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_dict_77484382f0a9acb2f9efdccebf56b45e);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_close_directory_handle);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_608ac7ac74f5ced0bc70300871316a94);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unsafe_hash_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_int_pos_350);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_src_path);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_added);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c42e2d2003afae2c6fd203e20815004);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_removed);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbe1ddbb82382a713e512d12219704dd);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_modified);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9f83de1a21b822e4bc59a5b145411c0);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_renamed_old);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_d270433789bf6719595c28bc63f34f59);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_renamed_new);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_5835d0e7cf2d224d2b89d56f6208c63d);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_removed_self);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_d10116590660609081bf39c68383ddf7);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_673e39ff6539d25fb0d7cbd0ebb1b2f3);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_events);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1f9e5d468175ddfaa5451c141f10b01);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_15a6bfcf4cf2edc08f4fd8d078e5e8ad);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_func_str_plain_args_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_be8f29e40d9f28706fe17833ecd372d6_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_str_plain_path_str_plain_buff_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_8b7233aff006f722b0033c75f61f1197_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_9c72f14336352a8ff8064f789853a828_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_f340ef6e9d2168bae882db8f2862a35f_tuple);
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
void checkModuleConstants_watchdog$observers$winapi(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_WinError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WinError);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVALID_HANDLE_VALUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_int_hex_ffffffff));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_ffffffff);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_n_bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n_bytes);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_buffer);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPFNI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LPFNI);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_addressof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_addressof);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileNotifyInformation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileNotifyInformation);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileName));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileName);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offset);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_string_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_string_at);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileNameLength));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileNameLength);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_results));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_results);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_Action));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Action);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_913ae8f3439742e034c09e3f599385fd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_913ae8f3439742e034c09e3f599385fd_tuple);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_NextEntryOffset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NextEntryOffset);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_unicode_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_unicode_buffer);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_PATH_BUFFER_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PATH_BUFFER_SIZE);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetFinalPathNameByHandleW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetFinalPathNameByHandleW);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_VOLUME_NAME_NT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VOLUME_NAME_NT);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_dot_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sizeof);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_string_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_string_buffer);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_memmove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_memmove);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateFileW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateFileW);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_LIST_DIRECTORY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_OPEN_EXISTING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OPEN_EXISTING);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_d37b9d6fb21e8fa20d44d12318a231b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d37b9d6fb21e8fa20d44d12318a231b0);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelIoEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelIoEx);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_CloseHandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CloseHandle);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_suppress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suppress);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_BUFFER_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BUFFER_SIZE);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadDirectoryChangesW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadDirectoryChangesW);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byref);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_winerror));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_winerror);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_observed_path_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_observed_path_deleted);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__generate_observed_path_deleted_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__generate_observed_path_deleted_event);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba09122d08814a0030e95d10685eb2aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba09122d08814a0030e95d10685eb2aa);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_action));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_action);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_CREATED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_CREATED);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_REMOVED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_REMOVED);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_MODIFIED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_directory_changes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_directory_changes);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_recursive_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_recursive_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_event_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_event_buffer);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_WinAPINativeEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WinAPINativeEvent);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_bafa68d87d9e2442c722a751bdcbe589));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bafa68d87d9e2442c722a751bdcbe589);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOOL);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HANDLE);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPCWSTR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LPCWSTR);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPVOID));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LPVOID);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPWSTR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LPWSTR);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dataclass_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_reduce));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reduce);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_void_p);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_int_pos_256));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_256);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_int_hex_2000000));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_2000000);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_hex_40000000));
CHECK_OBJECT_DEEP(mod_consts.const_int_hex_40000000);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_READ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SHARE_READ);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_WRITE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SHARE_WRITE);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_SHARE_DELETE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_SHARE_DELETE);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_DELETED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_DELETED);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_5));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_5);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_65534));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65534);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_int_pos_65535));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65535);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_OVERFLOW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_OVERFLOW);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_FILE_ACTION_ADDED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FILE_ACTION_ADDED);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_THREAD_TERMINATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_THREAD_TERMINATE);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_128);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_ABANDONED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_ABANDONED);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_192));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_192);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_IO_COMPLETION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_IO_COMPLETION);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_OBJECT_0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_OBJECT_0);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_int_pos_258));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_258);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_TIMEOUT);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_995));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_995);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_OVERLAPPED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OVERLAPPED);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e6cc04b5af36b91b837e7a83914ce17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e6cc04b5af36b91b837e7a83914ce17);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_int_pos_73));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_73);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Internal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Internal);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_InternalHigh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InternalHigh);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_Offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Offset);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_OffsetHigh));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OffsetHigh);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_Pointer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Pointer);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_hEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hEvent);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_dict_772e75609424bc0ed55c6bfc1a96c3c8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_772e75609424bc0ed55c6bfc1a96c3c8);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain__errcheck_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__errcheck_bool);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__errcheck_handle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__errcheck_handle);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain__errcheck_dword));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__errcheck_dword);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_WinDLL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WinDLL);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kernel32_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kernel32_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_restype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_restype);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_errcheck));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errcheck);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argtypes);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEventW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateEventW);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateEvent);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetEvent);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForSingleObjectEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WaitForSingleObjectEx);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_CreateIoCompletionPort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CreateIoCompletionPort);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetQueuedCompletionStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetQueuedCompletionStatus);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_PostQueuedCompletionStatus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PostQueuedCompletionStatus);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_int_pos_212));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_212);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_char);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_int_pos_64000));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64000);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_2048));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2048);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_1e66975a549ad382a8cccd630cd31da5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1e66975a549ad382a8cccd630cd31da5);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_0e73e56cc0599d21203ad69ff47e43d9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0e73e56cc0599d21203ad69ff47e43d9);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_6a6b440cc0c592f9df757b3f63af9583));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6a6b440cc0c592f9df757b3f63af9583);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_bf7631445fa5a42098066ace37c92b79));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bf7631445fa5a42098066ace37c92b79);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_directory_handle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_directory_handle);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_dict_77484382f0a9acb2f9efdccebf56b45e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_77484382f0a9acb2f9efdccebf56b45e);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_close_directory_handle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_close_directory_handle);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_608ac7ac74f5ced0bc70300871316a94));
CHECK_OBJECT_DEEP(mod_consts.const_dict_608ac7ac74f5ced0bc70300871316a94);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unsafe_hash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_unsafe_hash_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_int_pos_350));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_350);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_src_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_src_path);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_added));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_added);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c42e2d2003afae2c6fd203e20815004));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c42e2d2003afae2c6fd203e20815004);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_removed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_removed);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbe1ddbb82382a713e512d12219704dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbe1ddbb82382a713e512d12219704dd);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_modified));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_modified);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9f83de1a21b822e4bc59a5b145411c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9f83de1a21b822e4bc59a5b145411c0);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_renamed_old));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_renamed_old);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_d270433789bf6719595c28bc63f34f59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d270433789bf6719595c28bc63f34f59);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_renamed_new));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_renamed_new);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_5835d0e7cf2d224d2b89d56f6208c63d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5835d0e7cf2d224d2b89d56f6208c63d);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_removed_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_removed_self);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_d10116590660609081bf39c68383ddf7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d10116590660609081bf39c68383ddf7);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_673e39ff6539d25fb0d7cbd0ebb1b2f3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_673e39ff6539d25fb0d7cbd0ebb1b2f3);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_events);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1f9e5d468175ddfaa5451c141f10b01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1f9e5d468175ddfaa5451c141f10b01);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_str_plain_y_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_15a6bfcf4cf2edc08f4fd8d078e5e8ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15a6bfcf4cf2edc08f4fd8d078e5e8ad);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_value_str_plain_func_str_plain_args_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_value_str_plain_func_str_plain_args_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_be8f29e40d9f28706fe17833ecd372d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_be8f29e40d9f28706fe17833ecd372d6_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_str_plain_path_str_plain_buff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_handle_str_plain_path_str_plain_buff_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_8b7233aff006f722b0033c75f61f1197_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8b7233aff006f722b0033c75f61f1197_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_handle_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_path_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_9c72f14336352a8ff8064f789853a828_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9c72f14336352a8ff8064f789853a828_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_f340ef6e9d2168bae882db8f2862a35f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f340ef6e9d2168bae882db8f2862a35f_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 63
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
static PyObject *module_var_accessor_watchdog$observers$winapi$BOOL(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOOL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOOL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BOOL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BOOL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$BUFFER_SIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BUFFER_SIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BUFFER_SIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BUFFER_SIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BUFFER_SIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BUFFER_SIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BUFFER_SIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BUFFER_SIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BUFFER_SIZE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$CancelIoEx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelIoEx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CancelIoEx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CancelIoEx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CancelIoEx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CancelIoEx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelIoEx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelIoEx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelIoEx);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$CloseHandle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseHandle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CloseHandle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CloseHandle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CloseHandle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CloseHandle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseHandle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseHandle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseHandle);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$CreateEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$CreateFileW(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateFileW);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateFileW);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateFileW, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateFileW);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateFileW, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateFileW);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateFileW);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateFileW);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$CreateIoCompletionPort(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateIoCompletionPort);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateIoCompletionPort);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateIoCompletionPort, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CreateIoCompletionPort);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CreateIoCompletionPort, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateIoCompletionPort);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateIoCompletionPort);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateIoCompletionPort);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$DWORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DWORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DWORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DWORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DWORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$ERROR_OPERATION_ABORTED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_CREATED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_CREATED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_CREATED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_CREATED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_CREATED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_CREATED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_CREATED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_CREATED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_CREATED);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_DELETED(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_DELETED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_DELETED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_DELETED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_DELETED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_DELETED_SELF(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_MODIFIED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_MODIFIED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_MODIFIED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_REMOVED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_REMOVED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_REMOVED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_REMOVED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_REMOVED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_REMOVED_SELF(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_RENAMED_NEW_NAME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_ACTION_RENAMED_OLD_NAME(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_FLAG_BACKUP_SEMANTICS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_LIST_DIRECTORY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_LIST_DIRECTORY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_LIST_DIRECTORY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_ATTRIBUTES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_CREATION(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_DIR_NAME(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_FILE_NAME(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_LAST_ACCESS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_LAST_WRITE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_SECURITY(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_SIZE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_SHARE_DELETE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_DELETE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_SHARE_DELETE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_SHARE_DELETE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_SHARE_DELETE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_SHARE_DELETE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_DELETE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_DELETE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_DELETE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_SHARE_READ(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_READ);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_SHARE_READ);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_SHARE_READ, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_SHARE_READ);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_SHARE_READ, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_READ);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_READ);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_READ);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FILE_SHARE_WRITE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_WRITE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_SHARE_WRITE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_SHARE_WRITE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FILE_SHARE_WRITE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FILE_SHARE_WRITE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_WRITE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_WRITE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_WRITE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$FileNotifyInformation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FileNotifyInformation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileNotifyInformation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileNotifyInformation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FileNotifyInformation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FileNotifyInformation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FileNotifyInformation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FileNotifyInformation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FileNotifyInformation);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$GetFinalPathNameByHandleW(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetFinalPathNameByHandleW);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetFinalPathNameByHandleW);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetFinalPathNameByHandleW, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetFinalPathNameByHandleW);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetFinalPathNameByHandleW, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetFinalPathNameByHandleW);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetFinalPathNameByHandleW);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetFinalPathNameByHandleW);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$GetQueuedCompletionStatus(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetQueuedCompletionStatus);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetQueuedCompletionStatus);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetQueuedCompletionStatus, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetQueuedCompletionStatus);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetQueuedCompletionStatus, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetQueuedCompletionStatus);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetQueuedCompletionStatus);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetQueuedCompletionStatus);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$INVALID_HANDLE_VALUE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INVALID_HANDLE_VALUE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INVALID_HANDLE_VALUE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$LPCWSTR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPCWSTR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPCWSTR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPCWSTR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPCWSTR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$LPFNI(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPFNI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPFNI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPFNI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPFNI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPFNI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPFNI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPFNI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LPFNI);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$LPVOID(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPVOID);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPVOID);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPVOID, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPVOID);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPVOID, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPVOID);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPVOID);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LPVOID);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$LPWSTR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPWSTR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPWSTR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LPWSTR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LPWSTR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$OPEN_EXISTING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_EXISTING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPEN_EXISTING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPEN_EXISTING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OPEN_EXISTING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OPEN_EXISTING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_EXISTING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_EXISTING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_EXISTING);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$OVERLAPPED(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OVERLAPPED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OVERLAPPED);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OVERLAPPED, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OVERLAPPED);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OVERLAPPED, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OVERLAPPED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OVERLAPPED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OVERLAPPED);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$PATH_BUFFER_SIZE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_BUFFER_SIZE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PATH_BUFFER_SIZE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PATH_BUFFER_SIZE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PATH_BUFFER_SIZE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PATH_BUFFER_SIZE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_BUFFER_SIZE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_BUFFER_SIZE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_BUFFER_SIZE);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$PostQueuedCompletionStatus(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PostQueuedCompletionStatus);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PostQueuedCompletionStatus);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PostQueuedCompletionStatus, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PostQueuedCompletionStatus);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PostQueuedCompletionStatus, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PostQueuedCompletionStatus);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PostQueuedCompletionStatus);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PostQueuedCompletionStatus);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$ReadDirectoryChangesW(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadDirectoryChangesW);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadDirectoryChangesW);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadDirectoryChangesW, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadDirectoryChangesW);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadDirectoryChangesW, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadDirectoryChangesW);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadDirectoryChangesW);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadDirectoryChangesW);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$SetEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SetEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SetEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SetEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SetEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$VOLUME_NAME_NT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_NAME_NT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VOLUME_NAME_NT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VOLUME_NAME_NT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VOLUME_NAME_NT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VOLUME_NAME_NT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_NAME_NT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_NAME_NT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_NAME_NT);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$WATCHDOG_FILE_FLAGS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$WATCHDOG_FILE_NOTIFY_FLAGS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$WATCHDOG_FILE_SHARE_FLAGS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$WaitForSingleObjectEx(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WaitForSingleObjectEx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WaitForSingleObjectEx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WaitForSingleObjectEx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WaitForSingleObjectEx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WaitForSingleObjectEx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WaitForSingleObjectEx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WaitForSingleObjectEx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WaitForSingleObjectEx);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$WinAPINativeEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WinAPINativeEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WinAPINativeEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WinAPINativeEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WinAPINativeEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WinAPINativeEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WinAPINativeEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WinAPINativeEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WinAPINativeEvent);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$_errcheck_bool(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_bool);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__errcheck_bool);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__errcheck_bool, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__errcheck_bool);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__errcheck_bool, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_bool);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_bool);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_bool);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$_errcheck_dword(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_dword);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__errcheck_dword);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__errcheck_dword, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__errcheck_dword);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__errcheck_dword, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_dword);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_dword);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_dword);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$_errcheck_handle(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_handle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__errcheck_handle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__errcheck_handle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__errcheck_handle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__errcheck_handle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_handle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_handle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_handle);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$_generate_observed_path_deleted_event(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_observed_path_deleted_event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_observed_path_deleted_event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_observed_path_deleted_event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_observed_path_deleted_event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_observed_path_deleted_event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_observed_path_deleted_event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_observed_path_deleted_event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_observed_path_deleted_event);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$_is_observed_path_deleted(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__is_observed_path_deleted);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_observed_path_deleted);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_observed_path_deleted, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_observed_path_deleted);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_observed_path_deleted, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__is_observed_path_deleted);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__is_observed_path_deleted);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_observed_path_deleted);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$_parse_event_buffer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_event_buffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_event_buffer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_event_buffer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_event_buffer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_event_buffer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_event_buffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_event_buffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_event_buffer);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$dataclass(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$kernel32(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$read_directory_changes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_read_directory_changes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_read_directory_changes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_read_directory_changes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_read_directory_changes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_read_directory_changes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_read_directory_changes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_read_directory_changes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_read_directory_changes);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$observers$winapi$reduce(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$observers$winapi->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$observers$winapi->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$observers$winapi->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reduce);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reduce, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_reduce);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_reduce, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_815904aa131e3b4f046db12dbe148b2c;
static PyCodeObject *code_objects_48836132721030fe25daf0f9714013ef;
static PyCodeObject *code_objects_aa9cb4446966d916ebb3e805f7a9a2fc;
static PyCodeObject *code_objects_c8ac06ed5ab56c812105bb52c3280b9c;
static PyCodeObject *code_objects_caf8cfb1d58f6f3e8db42470d28fd829;
static PyCodeObject *code_objects_774d2f8aefae8469c71b7991c9763ad6;
static PyCodeObject *code_objects_36a6ed21c0415a9860d665f75bbae022;
static PyCodeObject *code_objects_2f03963d2bd13b7a5681dbd1ed8cc195;
static PyCodeObject *code_objects_36dfab02abf6c6161506086c310b30c3;
static PyCodeObject *code_objects_17b7f462064ed17c4841800c36fd5367;
static PyCodeObject *code_objects_db030c41acfdaca77af26cc8b8c7cc60;
static PyCodeObject *code_objects_db75839dc9c787ec7f3bccd167dc7f0f;
static PyCodeObject *code_objects_a50aa4121c94dbdb849650146cef1948;
static PyCodeObject *code_objects_26a3759338090b16fceaf350c8c97b61;
static PyCodeObject *code_objects_1eaba048f68852eaa35b8371177ffd47;
static PyCodeObject *code_objects_1ec3bc5cbfaf8852d6480b8039d39605;
static PyCodeObject *code_objects_58cc22ef0e3890799ce08da15a665054;
static PyCodeObject *code_objects_bceac101ccbcd99940598ff245276aac;
static PyCodeObject *code_objects_724bb55f9cde1b63cc6d624d8156eaca;
static PyCodeObject *code_objects_cdd7efaaea7cd71ea3bdfb929d86b2cc;
static PyCodeObject *code_objects_05c5b8ea668c0be5e2577d3401f1a906;
static PyCodeObject *code_objects_338f36a3fa0ce745c52bf93fc94f5a9b;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b1f9e5d468175ddfaa5451c141f10b01); CHECK_OBJECT(module_filename_obj);
code_objects_815904aa131e3b4f046db12dbe148b2c = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple, NULL, 2, 0, 0);
code_objects_48836132721030fe25daf0f9714013ef = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_x_str_plain_y_tuple, NULL, 2, 0, 0);
code_objects_aa9cb4446966d916ebb3e805f7a9a2fc = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_15a6bfcf4cf2edc08f4fd8d078e5e8ad, mod_consts.const_str_digest_15a6bfcf4cf2edc08f4fd8d078e5e8ad, NULL, NULL, 0, 0, 0);
code_objects_c8ac06ed5ab56c812105bb52c3280b9c = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_FileNotifyInformation, mod_consts.const_str_plain_FileNotifyInformation, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_caf8cfb1d58f6f3e8db42470d28fd829 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_OVERLAPPED, mod_consts.const_str_plain_OVERLAPPED, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_774d2f8aefae8469c71b7991c9763ad6 = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WinAPINativeEvent, mod_consts.const_str_plain_WinAPINativeEvent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_36a6ed21c0415a9860d665f75bbae022 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__errcheck_bool, mod_consts.const_str_plain__errcheck_bool, mod_consts.const_tuple_str_plain_value_str_plain_func_str_plain_args_tuple, NULL, 3, 0, 0);
code_objects_2f03963d2bd13b7a5681dbd1ed8cc195 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__errcheck_dword, mod_consts.const_str_plain__errcheck_dword, mod_consts.const_tuple_str_plain_value_str_plain_func_str_plain_args_tuple, NULL, 3, 0, 0);
code_objects_36dfab02abf6c6161506086c310b30c3 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__errcheck_handle, mod_consts.const_str_plain__errcheck_handle, mod_consts.const_tuple_str_plain_value_str_plain_func_str_plain_args_tuple, NULL, 3, 0, 0);
code_objects_17b7f462064ed17c4841800c36fd5367 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__generate_observed_path_deleted_event, mod_consts.const_str_plain__generate_observed_path_deleted_event, mod_consts.const_tuple_be8f29e40d9f28706fe17833ecd372d6_tuple, NULL, 0, 0, 0);
code_objects_db030c41acfdaca77af26cc8b8c7cc60 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_observed_path_deleted, mod_consts.const_str_plain__is_observed_path_deleted, mod_consts.const_tuple_str_plain_handle_str_plain_path_str_plain_buff_tuple, NULL, 2, 0, 0);
code_objects_db75839dc9c787ec7f3bccd167dc7f0f = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__parse_event_buffer, mod_consts.const_str_plain__parse_event_buffer, mod_consts.const_tuple_8b7233aff006f722b0033c75f61f1197_tuple, NULL, 2, 0, 0);
code_objects_a50aa4121c94dbdb849650146cef1948 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_close_directory_handle, mod_consts.const_str_plain_close_directory_handle, mod_consts.const_tuple_str_plain_handle_tuple, NULL, 1, 0, 0);
code_objects_26a3759338090b16fceaf350c8c97b61 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_directory_handle, mod_consts.const_str_plain_get_directory_handle, mod_consts.const_tuple_str_plain_path_tuple, NULL, 1, 0, 0);
code_objects_1eaba048f68852eaa35b8371177ffd47 = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_added, mod_consts.const_str_digest_5c42e2d2003afae2c6fd203e20815004, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_1ec3bc5cbfaf8852d6480b8039d39605 = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_modified, mod_consts.const_str_digest_c9f83de1a21b822e4bc59a5b145411c0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_58cc22ef0e3890799ce08da15a665054 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_removed, mod_consts.const_str_digest_bbe1ddbb82382a713e512d12219704dd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bceac101ccbcd99940598ff245276aac = MAKE_CODE_OBJECT(module_filename_obj, 375, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_removed_self, mod_consts.const_str_digest_d10116590660609081bf39c68383ddf7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_724bb55f9cde1b63cc6d624d8156eaca = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_renamed_new, mod_consts.const_str_digest_5835d0e7cf2d224d2b89d56f6208c63d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_cdd7efaaea7cd71ea3bdfb929d86b2cc = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_renamed_old, mod_consts.const_str_digest_d270433789bf6719595c28bc63f34f59, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_05c5b8ea668c0be5e2577d3401f1a906 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_read_directory_changes, mod_consts.const_str_plain_read_directory_changes, mod_consts.const_tuple_9c72f14336352a8ff8064f789853a828_tuple, NULL, 2, 1, 0);
code_objects_338f36a3fa0ce745c52bf93fc94f5a9b = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_read_events, mod_consts.const_str_plain_read_events, mod_consts.const_tuple_f340ef6e9d2168bae882db8f2862a35f_tuple, NULL, 2, 1, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__10_close_directory_handle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__11_read_directory_changes(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__12_is_added(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__13_is_removed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__14_is_modified(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__15_is_renamed_old(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__16_is_renamed_new(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__17_is_removed_self(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__18_read_events(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__1__errcheck_bool(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__2__errcheck_handle(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__3__errcheck_dword(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__4_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__5_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__6__parse_event_buffer(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__7__is_observed_path_deleted(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__9_get_directory_handle(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_watchdog$observers$winapi$$$function__1__errcheck_bool(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
PyObject *par_func = python_pars[1];
PyObject *par_args = python_pars[2];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool = MAKE_FUNCTION_FRAME(tstate, code_objects_36a6ed21c0415a9860d665f75bbae022, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool = cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_value);
tmp_operand_value_1 = par_value;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool->m_frame.f_lineno = 86;
tmp_raise_type_input_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_WinError);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 86;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool,
    type_description_1,
    par_value,
    par_func,
    par_args
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool == cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool);
    cache_frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__1__errcheck_bool);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_args);
tmp_return_value = par_args;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__2__errcheck_handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
PyObject *par_func = python_pars[1];
PyObject *par_args = python_pars[2];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle = MAKE_FUNCTION_FRAME(tstate, code_objects_36dfab02abf6c6161506086c310b30c3, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle = cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_value);
tmp_operand_value_1 = par_value;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle->m_frame.f_lineno = 92;
tmp_raise_type_input_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_WinError);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 92;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$observers$winapi$INVALID_HANDLE_VALUE(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INVALID_HANDLE_VALUE);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle->m_frame.f_lineno = 94;
tmp_raise_type_input_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_WinError);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 94;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle,
    type_description_1,
    par_value,
    par_func,
    par_args
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle == cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle);
    cache_frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__2__errcheck_handle);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_args);
tmp_return_value = par_args;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__3__errcheck_dword(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_value = python_pars[0];
PyObject *par_func = python_pars[1];
PyObject *par_args = python_pars[2];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword = MAKE_FUNCTION_FRAME(tstate, code_objects_2f03963d2bd13b7a5681dbd1ed8cc195, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword = cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_value);
tmp_cmp_expr_left_1 = par_value;
tmp_cmp_expr_right_1 = mod_consts.const_int_hex_ffffffff;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooo";
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword->m_frame.f_lineno = 100;
tmp_raise_type_input_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_WinError);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 100;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword,
    type_description_1,
    par_value,
    par_func,
    par_args
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword == cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword);
    cache_frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__3__errcheck_dword);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_args);
tmp_return_value = par_args;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__4_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_815904aa131e3b4f046db12dbe148b2c, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__4_lambda = cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__4_lambda);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__4_lambda) == 2);

// Framed code:
{
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
CHECK_OBJECT(par_x);
tmp_bitor_expr_left_1 = par_x;
CHECK_OBJECT(par_y);
tmp_bitor_expr_right_1 = par_y;
tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__4_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__4_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__4_lambda,
    type_description_1,
    par_x,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__4_lambda == cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda);
    cache_frame_frame_watchdog$observers$winapi$$$function__4_lambda = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__4_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
PyObject *par_y = python_pars[1];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__5_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_48836132721030fe25daf0f9714013ef, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__5_lambda = cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__5_lambda);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__5_lambda) == 2);

// Framed code:
{
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
CHECK_OBJECT(par_x);
tmp_bitor_expr_left_1 = par_x;
CHECK_OBJECT(par_y);
tmp_bitor_expr_right_1 = par_y;
tmp_return_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__5_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__5_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__5_lambda,
    type_description_1,
    par_x,
    par_y
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__5_lambda == cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda);
    cache_frame_frame_watchdog$observers$winapi$$$function__5_lambda = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__5_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
CHECK_OBJECT(par_y);
Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__6__parse_event_buffer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_read_buffer = python_pars[0];
PyObject *par_n_bytes = python_pars[1];
PyObject *var_results = NULL;
PyObject *var_fni = NULL;
PyObject *var_ptr = NULL;
PyObject *var_filename = NULL;
PyObject *var_num_to_skip = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_results == NULL);
var_results = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer = MAKE_FUNCTION_FRAME(tstate, code_objects_db75839dc9c787ec7f3bccd167dc7f0f, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer = cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer) == 2);

// Framed code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (par_n_bytes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = par_n_bytes;
tmp_cmp_expr_right_1 = const_int_0;
tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooo";
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
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_cast);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (par_read_buffer == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_buffer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = par_read_buffer;
tmp_args_element_value_2 = module_var_accessor_watchdog$observers$winapi$LPFNI(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPFNI);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 265;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer->m_frame.f_lineno = 265;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_fni;
    var_fni = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_fni);
tmp_args_element_value_3 = var_fni;
frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer->m_frame.f_lineno = 266;
tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_addressof, tmp_args_element_value_3);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_watchdog$observers$winapi$FileNotifyInformation(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileNotifyInformation);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 266;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_FileName);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 266;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_offset);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 266;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_ptr;
    var_ptr = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_string_at);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ptr);
tmp_args_element_value_4 = var_ptr;
CHECK_OBJECT(var_fni);
tmp_expression_value_6 = var_fni;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_FileNameLength);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 267;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer->m_frame.f_lineno = 267;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_filename;
    var_filename = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_7;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 268;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = var_results;
CHECK_OBJECT(var_fni);
tmp_expression_value_7 = var_fni;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Action);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM(tmp_item_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_filename);
tmp_expression_value_8 = var_filename;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_decode);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer->m_frame.f_lineno = 268;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_913ae8f3439742e034c09e3f599385fd_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_fni);
tmp_expression_value_9 = var_fni;
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_NextEntryOffset);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_num_to_skip;
    var_num_to_skip = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_num_to_skip);
tmp_cmp_expr_left_2 = var_num_to_skip;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_start_value_1;
PyObject *tmp_stop_value_1;
if (par_read_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_buffer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 272;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_10 = par_read_buffer;
CHECK_OBJECT(var_num_to_skip);
tmp_start_value_1 = var_num_to_skip;
tmp_stop_value_1 = Py_None;
tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
assert(!(tmp_subscript_value_2 == NULL));
tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_read_buffer;
    par_read_buffer = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
if (par_n_bytes == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_n_bytes);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = par_n_bytes;
CHECK_OBJECT(var_num_to_skip);
tmp_isub_expr_right_1 = var_num_to_skip;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_isub_expr_left_1;
par_n_bytes = tmp_assign_source_7;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
if (var_results == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_results);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 274;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_results;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer,
    type_description_1,
    par_read_buffer,
    par_n_bytes,
    var_results,
    var_fni,
    var_ptr,
    var_filename,
    var_num_to_skip
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer == cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer);
    cache_frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__6__parse_event_buffer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_read_buffer);
par_read_buffer = NULL;
Py_XDECREF(par_n_bytes);
par_n_bytes = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_fni);
var_fni = NULL;
Py_XDECREF(var_ptr);
var_ptr = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_num_to_skip);
var_num_to_skip = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_read_buffer);
par_read_buffer = NULL;
Py_XDECREF(par_n_bytes);
par_n_bytes = NULL;
Py_XDECREF(var_results);
var_results = NULL;
Py_XDECREF(var_fni);
var_fni = NULL;
Py_XDECREF(var_ptr);
var_ptr = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_num_to_skip);
var_num_to_skip = NULL;
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


static PyObject *impl_watchdog$observers$winapi$$$function__7__is_observed_path_deleted(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handle = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *var_buff = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted = MAKE_FUNCTION_FRAME(tstate, code_objects_db030c41acfdaca77af26cc8b8c7cc60, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted = cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create_unicode_buffer);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_watchdog$observers$winapi$PATH_BUFFER_SIZE(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PATH_BUFFER_SIZE);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 281;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted->m_frame.f_lineno = 281;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_buff == NULL);
var_buff = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_watchdog$observers$winapi$GetFinalPathNameByHandleW(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetFinalPathNameByHandleW);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_2 = par_handle;
CHECK_OBJECT(var_buff);
tmp_args_element_value_3 = var_buff;
tmp_args_element_value_4 = module_var_accessor_watchdog$observers$winapi$PATH_BUFFER_SIZE(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PATH_BUFFER_SIZE);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_watchdog$observers$winapi$VOLUME_NAME_NT(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VOLUME_NAME_NT);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_buff);
tmp_expression_value_2 = var_buff;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_cmp_expr_right_1 = par_path;
tmp_return_value = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted,
    type_description_1,
    par_handle,
    par_path,
    var_buff
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted == cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted);
    cache_frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__7__is_observed_path_deleted);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_buff);
CHECK_OBJECT(var_buff);
Py_DECREF(var_buff);
var_buff = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_buff);
var_buff = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_path = NULL;
PyObject *var_event = NULL;
PyObject *var_event_size = NULL;
PyObject *var_buff = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event = MAKE_FUNCTION_FRAME(tstate, code_objects_17b7f462064ed17c4841800c36fd5367, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event = cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame.f_lineno = 288;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_create_unicode_buffer,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_dot_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_path == NULL);
var_path = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_watchdog$observers$winapi$FileNotifyInformation(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileNotifyInformation);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = const_int_0;
tmp_args_element_value_2 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_DELETED_SELF(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_len_arg_1 = var_path;
tmp_args_element_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_path);
tmp_expression_value_2 = var_path;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame.f_lineno = 289;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame.f_lineno = 289;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_event == NULL);
var_event = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_event);
tmp_args_element_value_5 = var_event;
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame.f_lineno = 290;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sizeof, tmp_args_element_value_5);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_event_size == NULL);
var_event_size = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_6;
tmp_expression_value_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_create_string_buffer);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_watchdog$observers$winapi$PATH_BUFFER_SIZE(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PATH_BUFFER_SIZE);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame.f_lineno = 291;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_buff == NULL);
var_buff = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_expression_value_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_memmove);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buff);
tmp_args_element_value_7 = var_buff;
tmp_called_instance_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_event);
tmp_args_element_value_9 = var_event;
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame.f_lineno = 292;
tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_addressof, tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 292;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_event_size);
tmp_args_element_value_10 = var_event_size;
frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame.f_lineno = 292;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_10};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_buff);
tmp_expression_value_5 = var_buff;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_raw);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_event_size);
tmp_tuple_element_1 = var_event_size;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event,
    type_description_1,
    var_path,
    var_event,
    var_event_size,
    var_buff
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event == cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event);
    cache_frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_event);
CHECK_OBJECT(var_event);
Py_DECREF(var_event);
var_event = NULL;
CHECK_OBJECT(var_event_size);
CHECK_OBJECT(var_event_size);
Py_DECREF(var_event_size);
var_event_size = NULL;
CHECK_OBJECT(var_buff);
CHECK_OBJECT(var_buff);
Py_DECREF(var_buff);
var_buff = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_path);
var_path = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_event_size);
var_event_size = NULL;
Py_XDECREF(var_buff);
var_buff = NULL;
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


static PyObject *impl_watchdog$observers$winapi$$$function__9_get_directory_handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle = MAKE_FUNCTION_FRAME(tstate, code_objects_26a3759338090b16fceaf350c8c97b61, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle = cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_1 = module_var_accessor_watchdog$observers$winapi$CreateFileW(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateFileW);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_path);
tmp_args_element_value_1 = par_path;
tmp_args_element_value_2 = module_var_accessor_watchdog$observers$winapi$FILE_LIST_DIRECTORY(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_LIST_DIRECTORY);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = module_var_accessor_watchdog$observers$winapi$WATCHDOG_FILE_SHARE_FLAGS(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = Py_None;
tmp_args_element_value_5 = module_var_accessor_watchdog$observers$winapi$OPEN_EXISTING(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OPEN_EXISTING);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_watchdog$observers$winapi$WATCHDOG_FILE_FLAGS(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = Py_None;
frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle->m_frame.f_lineno = 298;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle,
    type_description_1,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle == cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle);
    cache_frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__9_get_directory_handle);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__10_close_directory_handle(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handle = python_pars[0];
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle = MAKE_FUNCTION_FRAME(tstate, code_objects_a50aa4121c94dbdb849650146cef1948, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle = cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_watchdog$observers$winapi$CancelIoEx(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CancelIoEx);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_1 = par_handle;
tmp_args_element_value_2 = Py_None;
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_watchdog$observers$winapi$CloseHandle(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseHandle);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 312;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_3 = par_handle;
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 312;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "o";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_OSError;
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_watchdog$observers$winapi$contextlib(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_3;
}
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 314;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_suppress,
    PyTuple_GET_ITEM(mod_consts.const_tuple_type_Exception_tuple, 0)
);

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_3;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_3;
}
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 314;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_3;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_2 = tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_3;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_watchdog$observers$winapi$CloseHandle(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseHandle);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "o";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_4 = par_handle;
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 315;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "o";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_5 = EXC_TYPE(tstate);
tmp_args_element_value_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_6); 
tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_7 == NULL) {
    tmp_args_element_value_7 = Py_None;
}
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 314;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_6;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_6;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 314;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame)) {
        frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_6;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 314;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame)) {
        frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_6;
branch_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 314;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_4);

exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_4:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = 314;
tmp_call_result_5 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_1 = "o";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_2;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_with_1__source);
CHECK_OBJECT(tmp_with_1__source);
Py_DECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
CHECK_OBJECT(tmp_with_1__enter);
CHECK_OBJECT(tmp_with_1__enter);
Py_DECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
CHECK_OBJECT(tmp_with_1__exit);
CHECK_OBJECT(tmp_with_1__exit);
Py_DECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 310;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame)) {
        frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_2;
branch_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle,
    type_description_1,
    par_handle
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle == cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle);
    cache_frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__10_close_directory_handle);

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
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__11_read_directory_changes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handle = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_recursive = python_pars[2];
PyObject *var_event_buffer = NULL;
PyObject *var_nbytes = NULL;
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes = MAKE_FUNCTION_FRAME(tstate, code_objects_05c5b8ea668c0be5e2577d3401f1a906, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes = cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_create_string_buffer);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_watchdog$observers$winapi$BUFFER_SIZE(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BUFFER_SIZE);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 323;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = 323;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_event_buffer == NULL);
var_event_buffer = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = 324;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_nbytes == NULL);
var_nbytes = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_len_arg_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_3 = module_var_accessor_watchdog$observers$winapi$ReadDirectoryChangesW(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadDirectoryChangesW);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 326;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_2 = par_handle;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_event_buffer);
tmp_args_element_value_4 = var_event_buffer;
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = 328;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_byref, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_event_buffer);
tmp_len_arg_1 = var_event_buffer;
tmp_args_element_value_5 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 329;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_recursive);
tmp_args_element_value_6 = par_recursive;
tmp_args_element_value_7 = module_var_accessor_watchdog$observers$winapi$WATCHDOG_FILE_NOTIFY_FLAGS(tstate);
if (unlikely(tmp_args_element_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS);
}

if (tmp_args_element_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 331;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_nbytes);
tmp_args_element_value_9 = var_nbytes;
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = 332;
tmp_args_element_value_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_byref, tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_5);

exception_lineno = 332;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_10 = Py_None;
tmp_args_element_value_11 = Py_None;
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = 326;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS8(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_OSError;
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
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_3); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_3);
var_e = tmp_assign_source_3;
}
// Tried code:
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_e);
tmp_expression_value_2 = var_e;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_winerror);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_2 = module_var_accessor_watchdog$observers$winapi$ERROR_OPERATION_ABORTED(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 337;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_event_buffer);
tmp_expression_value_3 = var_event_buffer;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_raw);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_int_0;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
goto try_return_handler_4;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
int tmp_truth_name_1;
tmp_called_value_4 = module_var_accessor_watchdog$observers$winapi$_is_observed_path_deleted(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_observed_path_deleted);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_handle);
tmp_args_element_value_12 = par_handle;
CHECK_OBJECT(par_path);
tmp_args_element_value_13 = par_path;
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = 341;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 341;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_watchdog$observers$winapi$_generate_observed_path_deleted_event(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__generate_observed_path_deleted_event);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = 342;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 344;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame)) {
        frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 325;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame)) {
        frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:
try_end_1:;
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_event_buffer);
tmp_expression_value_4 = var_event_buffer;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_raw);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_nbytes);
tmp_expression_value_5 = var_nbytes;
tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_value);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_2 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_return_value);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes,
    type_description_1,
    par_handle,
    par_path,
    par_recursive,
    var_event_buffer,
    var_nbytes,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes == cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes);
    cache_frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__11_read_directory_changes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_event_buffer);
CHECK_OBJECT(var_event_buffer);
Py_DECREF(var_event_buffer);
var_event_buffer = NULL;
CHECK_OBJECT(var_nbytes);
CHECK_OBJECT(var_nbytes);
Py_DECREF(var_nbytes);
var_nbytes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_event_buffer);
var_event_buffer = NULL;
Py_XDECREF(var_nbytes);
var_nbytes = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchdog$observers$winapi$$$function__12_is_added(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__12_is_added;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added = MAKE_FUNCTION_FRAME(tstate, code_objects_1eaba048f68852eaa35b8371177ffd47, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__12_is_added = cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__12_is_added);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__12_is_added) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_CREATED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_ACTION_CREATED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 356;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__12_is_added, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__12_is_added->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__12_is_added, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__12_is_added,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__12_is_added == cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added);
    cache_frame_frame_watchdog$observers$winapi$$$function__12_is_added = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__12_is_added);

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


static PyObject *impl_watchdog$observers$winapi$$$function__13_is_removed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__13_is_removed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed = MAKE_FUNCTION_FRAME(tstate, code_objects_58cc22ef0e3890799ce08da15a665054, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__13_is_removed = cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__13_is_removed);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__13_is_removed) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_REMOVED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_ACTION_REMOVED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 360;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__13_is_removed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__13_is_removed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__13_is_removed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__13_is_removed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__13_is_removed == cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed);
    cache_frame_frame_watchdog$observers$winapi$$$function__13_is_removed = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__13_is_removed);

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


static PyObject *impl_watchdog$observers$winapi$$$function__14_is_modified(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__14_is_modified;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified = MAKE_FUNCTION_FRAME(tstate, code_objects_1ec3bc5cbfaf8852d6480b8039d39605, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__14_is_modified = cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__14_is_modified);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__14_is_modified) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_MODIFIED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_ACTION_MODIFIED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 364;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__14_is_modified, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__14_is_modified->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__14_is_modified, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__14_is_modified,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__14_is_modified == cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified);
    cache_frame_frame_watchdog$observers$winapi$$$function__14_is_modified = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__14_is_modified);

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


static PyObject *impl_watchdog$observers$winapi$$$function__15_is_renamed_old(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old = MAKE_FUNCTION_FRAME(tstate, code_objects_cdd7efaaea7cd71ea3bdfb929d86b2cc, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old = cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_RENAMED_OLD_NAME(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 368;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old == cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old);
    cache_frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__15_is_renamed_old);

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


static PyObject *impl_watchdog$observers$winapi$$$function__16_is_renamed_new(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new = MAKE_FUNCTION_FRAME(tstate, code_objects_724bb55f9cde1b63cc6d624d8156eaca, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new = cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_RENAMED_NEW_NAME(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 372;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new == cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new);
    cache_frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__16_is_renamed_new);

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


static PyObject *impl_watchdog$observers$winapi$$$function__17_is_removed_self(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self = MAKE_FUNCTION_FRAME(tstate, code_objects_bceac101ccbcd99940598ff245276aac, module_watchdog$observers$winapi, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self = cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_action);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_REMOVED_SELF(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 376;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self == cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self);
    cache_frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__17_is_removed_self);

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


static PyObject *impl_watchdog$observers$winapi$$$function__18_read_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handle = python_pars[0];
PyObject *par_path = python_pars[1];
PyObject *par_recursive = python_pars[2];
PyObject *var_buf = NULL;
PyObject *var_nbytes = NULL;
PyObject *var_events = NULL;
PyObject *outline_0_var_action = NULL;
PyObject *outline_0_var_src_path = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$function__18_read_events;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events)) {
    Py_XDECREF(cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events = MAKE_FUNCTION_FRAME(tstate, code_objects_338f36a3fa0ce745c52bf93fc94f5a9b, module_watchdog$observers$winapi, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events->m_type_description == NULL);
frame_frame_watchdog$observers$winapi$$$function__18_read_events = cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$function__18_read_events);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$function__18_read_events) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_watchdog$observers$winapi$read_directory_changes(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_directory_changes);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_handle);
tmp_kw_call_arg_value_0_1 = par_handle;
CHECK_OBJECT(par_path);
tmp_kw_call_arg_value_1_1 = par_path;
CHECK_OBJECT(par_recursive);
tmp_kw_call_dict_value_0_1 = par_recursive;
frame_frame_watchdog$observers$winapi$$$function__18_read_events->m_frame.f_lineno = 380;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_recursive_tuple);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_2 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
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
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
assert(var_buf == NULL);
Py_INCREF(tmp_assign_source_4);
var_buf = tmp_assign_source_4;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
assert(var_nbytes == NULL);
Py_INCREF(tmp_assign_source_5);
var_nbytes = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_watchdog$observers$winapi$_parse_event_buffer(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_event_buffer);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf);
tmp_args_element_value_1 = var_buf;
CHECK_OBJECT(var_nbytes);
tmp_args_element_value_2 = var_nbytes;
frame_frame_watchdog$observers$winapi$$$function__18_read_events->m_frame.f_lineno = 381;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_events == NULL);
var_events = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_events);
tmp_iter_arg_2 = var_events;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 382;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_3 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_13 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_action;
    outline_0_var_action = tmp_assign_source_13;
    Py_INCREF(outline_0_var_action);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_14 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_src_path;
    outline_0_var_src_path = tmp_assign_source_14;
    Py_INCREF(outline_0_var_src_path);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_3 = module_var_accessor_watchdog$observers$winapi$WinAPINativeEvent(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WinAPINativeEvent);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_0_var_action);
tmp_args_element_value_3 = outline_0_var_action;
CHECK_OBJECT(outline_0_var_src_path);
tmp_args_element_value_4 = outline_0_var_src_path;
frame_frame_watchdog$observers$winapi$$$function__18_read_events->m_frame.f_lineno = 382;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_return_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_0_var_action);
outline_0_var_action = NULL;
Py_XDECREF(outline_0_var_src_path);
outline_0_var_src_path = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_action);
outline_0_var_action = NULL;
Py_XDECREF(outline_0_var_src_path);
outline_0_var_src_path = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 382;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$function__18_read_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$function__18_read_events->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$function__18_read_events, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$function__18_read_events,
    type_description_1,
    par_handle,
    par_path,
    par_recursive,
    var_buf,
    var_nbytes,
    var_events
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$observers$winapi$$$function__18_read_events == cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events);
    cache_frame_frame_watchdog$observers$winapi$$$function__18_read_events = NULL;
}

assertFrameObject(frame_frame_watchdog$observers$winapi$$$function__18_read_events);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_buf);
CHECK_OBJECT(var_buf);
Py_DECREF(var_buf);
var_buf = NULL;
CHECK_OBJECT(var_nbytes);
CHECK_OBJECT(var_nbytes);
Py_DECREF(var_nbytes);
var_nbytes = NULL;
CHECK_OBJECT(var_events);
CHECK_OBJECT(var_events);
Py_DECREF(var_events);
var_events = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_buf);
var_buf = NULL;
Py_XDECREF(var_nbytes);
var_nbytes = NULL;
Py_XDECREF(var_events);
var_events = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_recursive);
Py_DECREF(par_recursive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__10_close_directory_handle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__10_close_directory_handle,
        mod_consts.const_str_plain_close_directory_handle,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a50aa4121c94dbdb849650146cef1948,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__11_read_directory_changes(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__11_read_directory_changes,
        mod_consts.const_str_plain_read_directory_changes,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_05c5b8ea668c0be5e2577d3401f1a906,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        mod_consts.const_str_digest_ba09122d08814a0030e95d10685eb2aa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__12_is_added(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__12_is_added,
        mod_consts.const_str_plain_is_added,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5c42e2d2003afae2c6fd203e20815004,
#endif
        code_objects_1eaba048f68852eaa35b8371177ffd47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__13_is_removed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__13_is_removed,
        mod_consts.const_str_plain_is_removed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bbe1ddbb82382a713e512d12219704dd,
#endif
        code_objects_58cc22ef0e3890799ce08da15a665054,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__14_is_modified(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__14_is_modified,
        mod_consts.const_str_plain_is_modified,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c9f83de1a21b822e4bc59a5b145411c0,
#endif
        code_objects_1ec3bc5cbfaf8852d6480b8039d39605,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__15_is_renamed_old(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__15_is_renamed_old,
        mod_consts.const_str_plain_is_renamed_old,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d270433789bf6719595c28bc63f34f59,
#endif
        code_objects_cdd7efaaea7cd71ea3bdfb929d86b2cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__16_is_renamed_new(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__16_is_renamed_new,
        mod_consts.const_str_plain_is_renamed_new,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5835d0e7cf2d224d2b89d56f6208c63d,
#endif
        code_objects_724bb55f9cde1b63cc6d624d8156eaca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__17_is_removed_self(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__17_is_removed_self,
        mod_consts.const_str_plain_is_removed_self,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d10116590660609081bf39c68383ddf7,
#endif
        code_objects_bceac101ccbcd99940598ff245276aac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__18_read_events(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__18_read_events,
        mod_consts.const_str_plain_read_events,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_338f36a3fa0ce745c52bf93fc94f5a9b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__1__errcheck_bool(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__1__errcheck_bool,
        mod_consts.const_str_plain__errcheck_bool,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_36a6ed21c0415a9860d665f75bbae022,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__2__errcheck_handle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__2__errcheck_handle,
        mod_consts.const_str_plain__errcheck_handle,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_36dfab02abf6c6161506086c310b30c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__3__errcheck_dword(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__3__errcheck_dword,
        mod_consts.const_str_plain__errcheck_dword,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2f03963d2bd13b7a5681dbd1ed8cc195,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__4_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__4_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_815904aa131e3b4f046db12dbe148b2c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__5_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__5_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_48836132721030fe25daf0f9714013ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__6__parse_event_buffer(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__6__parse_event_buffer,
        mod_consts.const_str_plain__parse_event_buffer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_db75839dc9c787ec7f3bccd167dc7f0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__7__is_observed_path_deleted(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__7__is_observed_path_deleted,
        mod_consts.const_str_plain__is_observed_path_deleted,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_db030c41acfdaca77af26cc8b8c7cc60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event,
        mod_consts.const_str_plain__generate_observed_path_deleted_event,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_17b7f462064ed17c4841800c36fd5367,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$observers$winapi$$$function__9_get_directory_handle(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$observers$winapi$$$function__9_get_directory_handle,
        mod_consts.const_str_plain_get_directory_handle,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_26a3759338090b16fceaf350c8c97b61,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$observers$winapi,
        mod_consts.const_str_digest_d37b9d6fb21e8fa20d44d12318a231b0,
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

static function_impl_code const function_table_watchdog$observers$winapi[] = {
impl_watchdog$observers$winapi$$$function__1__errcheck_bool,
impl_watchdog$observers$winapi$$$function__2__errcheck_handle,
impl_watchdog$observers$winapi$$$function__3__errcheck_dword,
impl_watchdog$observers$winapi$$$function__4_lambda,
impl_watchdog$observers$winapi$$$function__5_lambda,
impl_watchdog$observers$winapi$$$function__6__parse_event_buffer,
impl_watchdog$observers$winapi$$$function__7__is_observed_path_deleted,
impl_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event,
impl_watchdog$observers$winapi$$$function__9_get_directory_handle,
impl_watchdog$observers$winapi$$$function__10_close_directory_handle,
impl_watchdog$observers$winapi$$$function__11_read_directory_changes,
impl_watchdog$observers$winapi$$$function__12_is_added,
impl_watchdog$observers$winapi$$$function__13_is_removed,
impl_watchdog$observers$winapi$$$function__14_is_modified,
impl_watchdog$observers$winapi$$$function__15_is_renamed_old,
impl_watchdog$observers$winapi$$$function__16_is_renamed_new,
impl_watchdog$observers$winapi$$$function__17_is_removed_self,
impl_watchdog$observers$winapi$$$function__18_read_events,
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

    return Nuitka_Function_GetFunctionState(function, function_table_watchdog$observers$winapi);
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
        module_watchdog$observers$winapi,
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
        function_table_watchdog$observers$winapi,
        sizeof(function_table_watchdog$observers$winapi) / sizeof(function_impl_code)
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
static char const *module_full_name = "watchdog.observers.winapi";
#endif

// Internal entry point for module code.
PyObject *module_code_watchdog$observers$winapi(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog$observers$winapi");

    // Store the module for future use.
    module_watchdog$observers$winapi = module;

    moduledict_watchdog$observers$winapi = MODULE_DICT(module_watchdog$observers$winapi);

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
        PRINT_STRING("watchdog$observers$winapi: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("watchdog$observers$winapi: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog$observers$winapi: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.observers.winapi" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwatchdog$observers$winapi\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$observers$winapi,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$winapi,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$observers$winapi,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$winapi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$observers$winapi,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$observers$winapi);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$observers$winapi);
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

        UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
PyObject *locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_bafa68d87d9e2442c722a751bdcbe589;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_watchdog$observers$winapi = MAKE_MODULE_FRAME(code_objects_aa9cb4446966d916ebb3e805f7a9a2fc, module_watchdog$observers$winapi);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_watchdog$observers$winapi$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_watchdog$observers$winapi$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_watchdog$observers$winapi;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 14;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
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
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_BOOL,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_BOOL);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL, tmp_assign_source_8);
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
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_DWORD,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_DWORD);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD, tmp_assign_source_9);
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
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_HANDLE,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_HANDLE);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE, tmp_assign_source_10);
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
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_LPCWSTR,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_LPCWSTR);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR, tmp_assign_source_11);
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
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_LPVOID,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_LPVOID);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPVOID, tmp_assign_source_12);
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
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_LPWSTR,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_LPWSTR);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR, tmp_assign_source_13);
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
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_2 = (PyObject *)moduledict_watchdog$observers$winapi;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_dataclass_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 17;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclass, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
tmp_import_name_from_8 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_8 == NULL));
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_watchdog$observers$winapi,
        mod_consts.const_str_plain_reduce,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_reduce);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_reduce, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_False;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 25;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_c_void_p,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_neg_1_tuple, 0)
);

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_value);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_int_pos_8;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = mod_consts.const_int_pos_32;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_int_pos_64;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = mod_consts.const_int_pos_256;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_int_hex_2000000;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = mod_consts.const_int_hex_40000000;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_FLAG_OVERLAPPED, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_LIST_DIRECTORY, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_READ, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_WRITE, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_SHARE_DELETE, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OPEN_EXISTING, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_VOLUME_NAME_NT, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_CREATED, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_MODIFIED, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_OLD_NAME, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = mod_consts.const_int_pos_5;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_RENAMED_NEW_NAME, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = mod_consts.const_int_pos_65534;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_DELETED_SELF, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = mod_consts.const_int_pos_65535;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_OVERFLOW, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_CREATED(tstate);
assert(!(tmp_assign_source_41 == NULL));
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_ADDED, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_DELETED(tstate);
assert(!(tmp_assign_source_42 == NULL));
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = module_var_accessor_watchdog$observers$winapi$FILE_ACTION_DELETED_SELF(tstate);
assert(!(tmp_assign_source_43 == NULL));
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FILE_ACTION_REMOVED_SELF, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_THREAD_TERMINATE, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = mod_consts.const_int_pos_128;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_ABANDONED, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = mod_consts.const_int_pos_192;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_IO_COMPLETION, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = const_int_0;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_OBJECT_0, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = mod_consts.const_int_pos_258;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_TIMEOUT, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = mod_consts.const_int_pos_995;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED, tmp_assign_source_49);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_50;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_50, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_52;
}
{
PyObject *tmp_assign_source_53;
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


exception_lineno = 73;

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


exception_lineno = 73;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_53;
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


exception_lineno = 73;

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
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_OVERLAPPED;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 73;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_54;
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


exception_lineno = 73;

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


exception_lineno = 73;

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


exception_lineno = 73;

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


exception_lineno = 73;

    goto try_except_handler_2;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 73;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_55;
}
branch_end_1:;
{
PyObject *tmp_assign_source_56;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9e6cc04b5af36b91b837e7a83914ce17;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_OVERLAPPED;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_73;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_4;
}
frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2 = MAKE_CLASS_FRAME(tstate, code_objects_caf8cfb1d58f6f3e8db42470d28fd829, module_watchdog$observers$winapi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = mod_consts.const_str_plain_Internal;
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain_LPVOID);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_tuple_element_4);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 6);
{
PyObject *tmp_tuple_element_6;
PyObject *tmp_tuple_element_7;
PyObject *tmp_tuple_element_8;
PyObject *tmp_tuple_element_9;
PyObject *tmp_tuple_element_10;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_4);
tmp_tuple_element_6 = mod_consts.const_str_plain_InternalHigh;
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain_LPVOID);

if (tmp_tuple_element_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_6 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_2 = "o";
    goto tuple_build_exception_4;
}
        Py_INCREF(tmp_tuple_element_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_4;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_4);
tmp_tuple_element_7 = mod_consts.const_str_plain_Offset;
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_7 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_tuple_element_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_7);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_4);
tmp_tuple_element_8 = mod_consts.const_str_plain_OffsetHigh;
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_8 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_tuple_element_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_8);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_4);
tmp_tuple_element_9 = mod_consts.const_str_plain_Pointer;
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain_LPVOID);

if (tmp_tuple_element_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_9 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
        Py_INCREF(tmp_tuple_element_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_7;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_9);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyTuple_SET_ITEM(tmp_dictset_value, 4, tmp_tuple_element_4);
tmp_tuple_element_10 = mod_consts.const_str_plain_hEvent;
tmp_tuple_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_4, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain_HANDLE);

if (tmp_tuple_element_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_10 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_2 = "o";
    goto tuple_build_exception_8;
}
        Py_INCREF(tmp_tuple_element_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_8;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_4, 1, tmp_tuple_element_10);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_tuple_element_4);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
PyTuple_SET_ITEM(tmp_dictset_value, 5, tmp_tuple_element_4);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_watchdog$observers$winapi$$$class__1_OVERLAPPED_2);

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
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

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


exception_lineno = 73;

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
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_OVERLAPPED;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 73;
tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_57;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_56 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_56);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73);
locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73);
locals_watchdog$observers$winapi$$$class__1_OVERLAPPED_73 = NULL;
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
exception_lineno = 73;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_OVERLAPPED, tmp_assign_source_56);
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
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_772e75609424bc0ed55c6bfc1a96c3c8);

tmp_assign_source_58 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__1__errcheck_bool(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_bool, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_772e75609424bc0ed55c6bfc1a96c3c8);

tmp_assign_source_59 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__2__errcheck_handle(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_handle, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_772e75609424bc0ed55c6bfc1a96c3c8);

tmp_assign_source_60 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__3__errcheck_dword(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__errcheck_dword, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 104;
tmp_assign_source_61 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_WinDLL,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_kernel32_tuple, 0)
);

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
assert(!(tmp_expression_value_9 == NULL));
tmp_assign_source_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ReadDirectoryChangesW);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadDirectoryChangesW, tmp_assign_source_62);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_watchdog$observers$winapi$ReadDirectoryChangesW(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_restype, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = module_var_accessor_watchdog$observers$winapi$_errcheck_bool(tstate);
if (unlikely(tmp_assattr_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_bool);
}

if (tmp_assattr_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_assattr_target_4 = module_var_accessor_watchdog$observers$winapi$ReadDirectoryChangesW(tstate);
if (unlikely(tmp_assattr_target_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadDirectoryChangesW);
}

if (tmp_assattr_target_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_errcheck, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_assattr_target_5;
tmp_tuple_element_12 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto frame_exception_exit_1;
}
tmp_assattr_value_5 = MAKE_TUPLE_EMPTY(tstate, 8);
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_2;
PyTuple_SET_ITEM0(tmp_assattr_value_5, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_assattr_value_5, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_assattr_value_5, 2, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_assattr_value_5, 3, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_assattr_value_5, 4, tmp_tuple_element_12);
tmp_expression_value_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_10 == NULL));
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto tuple_build_exception_9;
}
tmp_args_element_value_1 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 115;

    goto tuple_build_exception_9;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 115;
tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_assattr_value_5, 5, tmp_tuple_element_12);
tmp_expression_value_11 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_11 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto tuple_build_exception_9;
}
tmp_args_element_value_2 = module_var_accessor_watchdog$observers$winapi$OVERLAPPED(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OVERLAPPED);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 116;

    goto tuple_build_exception_9;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 116;
tmp_tuple_element_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_assattr_value_5, 6, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_assattr_value_5, 7, tmp_tuple_element_12);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_assattr_value_5);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_assattr_target_5 = module_var_accessor_watchdog$observers$winapi$ReadDirectoryChangesW(tstate);
if (unlikely(tmp_assattr_target_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadDirectoryChangesW);
}

if (tmp_assattr_target_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_5);

exception_lineno = 109;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_argtypes, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_assign_source_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_CreateFileW);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateFileW, tmp_assign_source_63);
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_assattr_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_assattr_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_assattr_target_6 = module_var_accessor_watchdog$observers$winapi$CreateFileW(tstate);
assert(!(tmp_assattr_target_6 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_restype, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = module_var_accessor_watchdog$observers$winapi$_errcheck_handle(tstate);
if (unlikely(tmp_assattr_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_handle);
}

if (tmp_assattr_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto frame_exception_exit_1;
}
tmp_assattr_target_7 = module_var_accessor_watchdog$observers$winapi$CreateFileW(tstate);
if (unlikely(tmp_assattr_target_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateFileW);
}

if (tmp_assattr_target_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_errcheck, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_tuple_element_13;
PyObject *tmp_assattr_target_8;
tmp_tuple_element_13 = module_var_accessor_watchdog$observers$winapi$LPCWSTR(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPCWSTR);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;

    goto frame_exception_exit_1;
}
tmp_assattr_value_8 = MAKE_TUPLE_EMPTY(tstate, 7);
PyTuple_SET_ITEM0(tmp_assattr_value_8, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assattr_value_8, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assattr_value_8, 2, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assattr_value_8, 3, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assattr_value_8, 4, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assattr_value_8, 5, tmp_tuple_element_13);
tmp_tuple_element_13 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assattr_value_8, 6, tmp_tuple_element_13);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_assattr_value_8);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_assattr_target_8 = module_var_accessor_watchdog$observers$winapi$CreateFileW(tstate);
if (unlikely(tmp_assattr_target_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateFileW);
}

if (tmp_assattr_target_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_8);

exception_lineno = 123;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_argtypes, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;

    goto frame_exception_exit_1;
}
tmp_assign_source_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_CloseHandle);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CloseHandle, tmp_assign_source_64);
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_assattr_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_assattr_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_assattr_target_9 = module_var_accessor_watchdog$observers$winapi$CloseHandle(tstate);
assert(!(tmp_assattr_target_9 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_restype, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_tuple_element_14;
PyObject *tmp_assattr_target_10;
tmp_tuple_element_14 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_assattr_value_10 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assattr_value_10, 0, tmp_tuple_element_14);
tmp_assattr_target_10 = module_var_accessor_watchdog$observers$winapi$CloseHandle(tstate);
if (unlikely(tmp_assattr_target_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CloseHandle);
}

if (tmp_assattr_target_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_10);

exception_lineno = 135;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_argtypes, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;

    goto frame_exception_exit_1;
}
tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_CancelIoEx);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CancelIoEx, tmp_assign_source_65);
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_assattr_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_assattr_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto frame_exception_exit_1;
}
tmp_assattr_target_11 = module_var_accessor_watchdog$observers$winapi$CancelIoEx(tstate);
assert(!(tmp_assattr_target_11 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_restype, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
tmp_assattr_value_12 = module_var_accessor_watchdog$observers$winapi$_errcheck_bool(tstate);
if (unlikely(tmp_assattr_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_bool);
}

if (tmp_assattr_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;

    goto frame_exception_exit_1;
}
tmp_assattr_target_12 = module_var_accessor_watchdog$observers$winapi$CancelIoEx(tstate);
if (unlikely(tmp_assattr_target_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CancelIoEx);
}

if (tmp_assattr_target_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_errcheck, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_tuple_element_15;
PyObject *tmp_assattr_target_13;
tmp_tuple_element_15 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto frame_exception_exit_1;
}
tmp_assattr_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_3;
PyTuple_SET_ITEM0(tmp_assattr_value_13, 0, tmp_tuple_element_15);
tmp_expression_value_15 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_15 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto tuple_build_exception_11;
}
tmp_args_element_value_3 = module_var_accessor_watchdog$observers$winapi$OVERLAPPED(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OVERLAPPED);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 142;

    goto tuple_build_exception_11;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 142;
tmp_tuple_element_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_assattr_value_13, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_assattr_value_13);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_assattr_target_13 = module_var_accessor_watchdog$observers$winapi$CancelIoEx(tstate);
if (unlikely(tmp_assattr_target_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CancelIoEx);
}

if (tmp_assattr_target_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_13);

exception_lineno = 140;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_argtypes, tmp_assattr_value_13);
CHECK_OBJECT(tmp_assattr_value_13);
Py_DECREF(tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_expression_value_16;
tmp_expression_value_16 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;

    goto frame_exception_exit_1;
}
tmp_assign_source_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_CreateEventW);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateEvent, tmp_assign_source_66);
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
tmp_assattr_value_14 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_assattr_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_assattr_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto frame_exception_exit_1;
}
tmp_assattr_target_14 = module_var_accessor_watchdog$observers$winapi$CreateEvent(tstate);
assert(!(tmp_assattr_target_14 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain_restype, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
tmp_assattr_value_15 = module_var_accessor_watchdog$observers$winapi$_errcheck_handle(tstate);
if (unlikely(tmp_assattr_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_handle);
}

if (tmp_assattr_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto frame_exception_exit_1;
}
tmp_assattr_target_15 = module_var_accessor_watchdog$observers$winapi$CreateEvent(tstate);
if (unlikely(tmp_assattr_target_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateEvent);
}

if (tmp_assattr_target_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 147;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_errcheck, tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 147;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_tuple_element_16;
PyObject *tmp_assattr_target_16;
tmp_tuple_element_16 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;

    goto frame_exception_exit_1;
}
tmp_assattr_value_16 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_assattr_value_16, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_assattr_value_16, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_assattr_value_16, 2, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_watchdog$observers$winapi$LPCWSTR(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPCWSTR);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_assattr_value_16, 3, tmp_tuple_element_16);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_assattr_value_16);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_assattr_target_16 = module_var_accessor_watchdog$observers$winapi$CreateEvent(tstate);
if (unlikely(tmp_assattr_target_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateEvent);
}

if (tmp_assattr_target_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_16);

exception_lineno = 148;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_argtypes, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;

    goto frame_exception_exit_1;
}
tmp_assign_source_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_SetEvent);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_SetEvent, tmp_assign_source_67);
}
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_assattr_target_17;
tmp_assattr_value_17 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_assattr_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_assattr_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;

    goto frame_exception_exit_1;
}
tmp_assattr_target_17 = module_var_accessor_watchdog$observers$winapi$SetEvent(tstate);
assert(!(tmp_assattr_target_17 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain_restype, tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_assattr_target_18;
tmp_assattr_value_18 = module_var_accessor_watchdog$observers$winapi$_errcheck_bool(tstate);
if (unlikely(tmp_assattr_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_bool);
}

if (tmp_assattr_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto frame_exception_exit_1;
}
tmp_assattr_target_18 = module_var_accessor_watchdog$observers$winapi$SetEvent(tstate);
if (unlikely(tmp_assattr_target_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SetEvent);
}

if (tmp_assattr_target_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain_errcheck, tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_19;
PyObject *tmp_tuple_element_17;
PyObject *tmp_assattr_target_19;
tmp_tuple_element_17 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_assattr_value_19 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assattr_value_19, 0, tmp_tuple_element_17);
tmp_assattr_target_19 = module_var_accessor_watchdog$observers$winapi$SetEvent(tstate);
if (unlikely(tmp_assattr_target_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SetEvent);
}

if (tmp_assattr_target_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_19);

exception_lineno = 158;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts.const_str_plain_argtypes, tmp_assattr_value_19);
CHECK_OBJECT(tmp_assattr_value_19);
Py_DECREF(tmp_assattr_value_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_expression_value_18;
tmp_expression_value_18 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;

    goto frame_exception_exit_1;
}
tmp_assign_source_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_WaitForSingleObjectEx);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WaitForSingleObjectEx, tmp_assign_source_68);
}
{
PyObject *tmp_assattr_value_20;
PyObject *tmp_assattr_target_20;
tmp_assattr_value_20 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_assattr_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_assattr_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;

    goto frame_exception_exit_1;
}
tmp_assattr_target_20 = module_var_accessor_watchdog$observers$winapi$WaitForSingleObjectEx(tstate);
assert(!(tmp_assattr_target_20 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts.const_str_plain_restype, tmp_assattr_value_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_21;
PyObject *tmp_assattr_target_21;
tmp_assattr_value_21 = module_var_accessor_watchdog$observers$winapi$_errcheck_dword(tstate);
if (unlikely(tmp_assattr_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_dword);
}

if (tmp_assattr_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto frame_exception_exit_1;
}
tmp_assattr_target_21 = module_var_accessor_watchdog$observers$winapi$WaitForSingleObjectEx(tstate);
if (unlikely(tmp_assattr_target_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WaitForSingleObjectEx);
}

if (tmp_assattr_target_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts.const_str_plain_errcheck, tmp_assattr_value_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_22;
PyObject *tmp_tuple_element_18;
PyObject *tmp_assattr_target_22;
tmp_tuple_element_18 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 164;

    goto frame_exception_exit_1;
}
tmp_assattr_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_assattr_value_22, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_assattr_value_22, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_assattr_value_22, 2, tmp_tuple_element_18);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_assattr_value_22);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_assattr_target_22 = module_var_accessor_watchdog$observers$winapi$WaitForSingleObjectEx(tstate);
if (unlikely(tmp_assattr_target_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WaitForSingleObjectEx);
}

if (tmp_assattr_target_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_22);

exception_lineno = 163;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts.const_str_plain_argtypes, tmp_assattr_value_22);
CHECK_OBJECT(tmp_assattr_value_22);
Py_DECREF(tmp_assattr_value_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_expression_value_19;
tmp_expression_value_19 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;

    goto frame_exception_exit_1;
}
tmp_assign_source_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_CreateIoCompletionPort);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_CreateIoCompletionPort, tmp_assign_source_69);
}
{
PyObject *tmp_assattr_value_23;
PyObject *tmp_assattr_target_23;
tmp_assattr_value_23 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_assattr_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_assattr_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;

    goto frame_exception_exit_1;
}
tmp_assattr_target_23 = module_var_accessor_watchdog$observers$winapi$CreateIoCompletionPort(tstate);
assert(!(tmp_assattr_target_23 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts.const_str_plain_restype, tmp_assattr_value_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_24;
PyObject *tmp_assattr_target_24;
tmp_assattr_value_24 = module_var_accessor_watchdog$observers$winapi$_errcheck_handle(tstate);
if (unlikely(tmp_assattr_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_handle);
}

if (tmp_assattr_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;

    goto frame_exception_exit_1;
}
tmp_assattr_target_24 = module_var_accessor_watchdog$observers$winapi$CreateIoCompletionPort(tstate);
if (unlikely(tmp_assattr_target_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateIoCompletionPort);
}

if (tmp_assattr_target_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts.const_str_plain_errcheck, tmp_assattr_value_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_25;
PyObject *tmp_tuple_element_19;
PyObject *tmp_assattr_target_25;
tmp_tuple_element_19 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;

    goto frame_exception_exit_1;
}
tmp_assattr_value_25 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_assattr_value_25, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM0(tmp_assattr_value_25, 1, tmp_tuple_element_19);
tmp_tuple_element_19 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM0(tmp_assattr_value_25, 2, tmp_tuple_element_19);
tmp_tuple_element_19 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM0(tmp_assattr_value_25, 3, tmp_tuple_element_19);
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_assattr_value_25);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_assattr_target_25 = module_var_accessor_watchdog$observers$winapi$CreateIoCompletionPort(tstate);
if (unlikely(tmp_assattr_target_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CreateIoCompletionPort);
}

if (tmp_assattr_target_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_25);

exception_lineno = 172;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts.const_str_plain_argtypes, tmp_assattr_value_25);
CHECK_OBJECT(tmp_assattr_value_25);
Py_DECREF(tmp_assattr_value_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_expression_value_20;
tmp_expression_value_20 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;

    goto frame_exception_exit_1;
}
tmp_assign_source_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_GetQueuedCompletionStatus);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetQueuedCompletionStatus, tmp_assign_source_70);
}
{
PyObject *tmp_assattr_value_26;
PyObject *tmp_assattr_target_26;
tmp_assattr_value_26 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_assattr_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_assattr_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;

    goto frame_exception_exit_1;
}
tmp_assattr_target_26 = module_var_accessor_watchdog$observers$winapi$GetQueuedCompletionStatus(tstate);
assert(!(tmp_assattr_target_26 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts.const_str_plain_restype, tmp_assattr_value_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_27;
PyObject *tmp_assattr_target_27;
tmp_assattr_value_27 = module_var_accessor_watchdog$observers$winapi$_errcheck_bool(tstate);
if (unlikely(tmp_assattr_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_bool);
}

if (tmp_assattr_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto frame_exception_exit_1;
}
tmp_assattr_target_27 = module_var_accessor_watchdog$observers$winapi$GetQueuedCompletionStatus(tstate);
if (unlikely(tmp_assattr_target_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetQueuedCompletionStatus);
}

if (tmp_assattr_target_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts.const_str_plain_errcheck, tmp_assattr_value_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_28;
PyObject *tmp_tuple_element_20;
PyObject *tmp_assattr_target_28;
tmp_tuple_element_20 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 183;

    goto frame_exception_exit_1;
}
tmp_assattr_value_28 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_4;
PyTuple_SET_ITEM0(tmp_assattr_value_28, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 184;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_assattr_value_28, 1, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_watchdog$observers$winapi$LPVOID(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPVOID);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_assattr_value_28, 2, tmp_tuple_element_20);
tmp_expression_value_21 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_21 == NULL));
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_15;
}
tmp_args_element_value_4 = module_var_accessor_watchdog$observers$winapi$OVERLAPPED(tstate);
if (unlikely(tmp_args_element_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OVERLAPPED);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 186;

    goto tuple_build_exception_15;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 186;
tmp_tuple_element_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_assattr_value_28, 3, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_assattr_value_28, 4, tmp_tuple_element_20);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_assattr_value_28);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_assattr_target_28 = module_var_accessor_watchdog$observers$winapi$GetQueuedCompletionStatus(tstate);
if (unlikely(tmp_assattr_target_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetQueuedCompletionStatus);
}

if (tmp_assattr_target_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_28);

exception_lineno = 182;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts.const_str_plain_argtypes, tmp_assattr_value_28);
CHECK_OBJECT(tmp_assattr_value_28);
Py_DECREF(tmp_assattr_value_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_expression_value_22;
tmp_expression_value_22 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto frame_exception_exit_1;
}
tmp_assign_source_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_PostQueuedCompletionStatus);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PostQueuedCompletionStatus, tmp_assign_source_71);
}
{
PyObject *tmp_assattr_value_29;
PyObject *tmp_assattr_target_29;
tmp_assattr_value_29 = module_var_accessor_watchdog$observers$winapi$BOOL(tstate);
if (unlikely(tmp_assattr_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_assattr_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;

    goto frame_exception_exit_1;
}
tmp_assattr_target_29 = module_var_accessor_watchdog$observers$winapi$PostQueuedCompletionStatus(tstate);
assert(!(tmp_assattr_target_29 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts.const_str_plain_restype, tmp_assattr_value_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_30;
PyObject *tmp_assattr_target_30;
tmp_assattr_value_30 = module_var_accessor_watchdog$observers$winapi$_errcheck_bool(tstate);
if (unlikely(tmp_assattr_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_bool);
}

if (tmp_assattr_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto frame_exception_exit_1;
}
tmp_assattr_target_30 = module_var_accessor_watchdog$observers$winapi$PostQueuedCompletionStatus(tstate);
if (unlikely(tmp_assattr_target_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PostQueuedCompletionStatus);
}

if (tmp_assattr_target_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_30, mod_consts.const_str_plain_errcheck, tmp_assattr_value_30);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_31;
PyObject *tmp_tuple_element_21;
PyObject *tmp_assattr_target_31;
tmp_tuple_element_21 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;

    goto frame_exception_exit_1;
}
tmp_assattr_value_31 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_args_element_value_5;
PyTuple_SET_ITEM0(tmp_assattr_value_31, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_assattr_value_31, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_assattr_value_31, 2, tmp_tuple_element_21);
tmp_expression_value_23 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_23 == NULL));
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto tuple_build_exception_16;
}
tmp_args_element_value_5 = module_var_accessor_watchdog$observers$winapi$OVERLAPPED(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OVERLAPPED);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 197;

    goto tuple_build_exception_16;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 197;
tmp_tuple_element_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_assattr_value_31, 3, tmp_tuple_element_21);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_assattr_value_31);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_assattr_target_31 = module_var_accessor_watchdog$observers$winapi$PostQueuedCompletionStatus(tstate);
if (unlikely(tmp_assattr_target_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PostQueuedCompletionStatus);
}

if (tmp_assattr_target_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_31);

exception_lineno = 193;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_31, mod_consts.const_str_plain_argtypes, tmp_assattr_value_31);
CHECK_OBJECT(tmp_assattr_value_31);
Py_DECREF(tmp_assattr_value_31);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_expression_value_24;
tmp_expression_value_24 = module_var_accessor_watchdog$observers$winapi$kernel32(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;

    goto frame_exception_exit_1;
}
tmp_assign_source_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_GetFinalPathNameByHandleW);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_GetFinalPathNameByHandleW, tmp_assign_source_72);
}
{
PyObject *tmp_assattr_value_32;
PyObject *tmp_assattr_target_32;
tmp_assattr_value_32 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_assattr_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_assattr_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto frame_exception_exit_1;
}
tmp_assattr_target_32 = module_var_accessor_watchdog$observers$winapi$GetFinalPathNameByHandleW(tstate);
assert(!(tmp_assattr_target_32 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_32, mod_consts.const_str_plain_restype, tmp_assattr_value_32);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_33;
PyObject *tmp_assattr_target_33;
tmp_assattr_value_33 = module_var_accessor_watchdog$observers$winapi$_errcheck_dword(tstate);
if (unlikely(tmp_assattr_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__errcheck_dword);
}

if (tmp_assattr_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;

    goto frame_exception_exit_1;
}
tmp_assattr_target_33 = module_var_accessor_watchdog$observers$winapi$GetFinalPathNameByHandleW(tstate);
if (unlikely(tmp_assattr_target_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetFinalPathNameByHandleW);
}

if (tmp_assattr_target_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_33, mod_consts.const_str_plain_errcheck, tmp_assattr_value_33);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_34;
PyObject *tmp_tuple_element_22;
PyObject *tmp_assattr_target_34;
tmp_tuple_element_22 = module_var_accessor_watchdog$observers$winapi$HANDLE(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;

    goto frame_exception_exit_1;
}
tmp_assattr_value_34 = MAKE_TUPLE_EMPTY(tstate, 4);
PyTuple_SET_ITEM0(tmp_assattr_value_34, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_watchdog$observers$winapi$LPWSTR(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPWSTR);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM0(tmp_assattr_value_34, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM0(tmp_assattr_value_34, 2, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM0(tmp_assattr_value_34, 3, tmp_tuple_element_22);
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_assattr_value_34);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_assattr_target_34 = module_var_accessor_watchdog$observers$winapi$GetFinalPathNameByHandleW(tstate);
if (unlikely(tmp_assattr_target_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetFinalPathNameByHandleW);
}

if (tmp_assattr_target_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_34);

exception_lineno = 204;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_34, mod_consts.const_str_plain_argtypes, tmp_assattr_value_34);
CHECK_OBJECT(tmp_assattr_value_34);
Py_DECREF(tmp_assattr_value_34);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_73;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_25;
tmp_expression_value_25 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_Structure);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
tmp_assign_source_73 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_73, 0, tmp_tuple_element_23);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_74 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

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
tmp_expression_value_26 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_26, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_76 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_76;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

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
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_28;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
tmp_tuple_element_24 = mod_consts.const_str_plain_FileNotifyInformation;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 212;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_77;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_29 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

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
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_30;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_30, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_31;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_31 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_25);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_5;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 212;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 212;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_78;
}
branch_end_4:;
{
PyObject *tmp_assign_source_79;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9e6cc04b5af36b91b837e7a83914ce17;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_FileNotifyInformation;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_212;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_7;
}
frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3 = MAKE_CLASS_FRAME(tstate, code_objects_c8ac06ed5ab56c812105bb52c3280b9c, module_watchdog$observers$winapi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3) == 2);

// Framed code:
{
PyObject *tmp_tuple_element_26;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = mod_consts.const_str_plain_NextEntryOffset;
tmp_tuple_element_26 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_26, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_27 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_2 = "o";
    goto tuple_build_exception_19;
}
        Py_INCREF(tmp_tuple_element_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_19;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_26, 1, tmp_tuple_element_27);
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_tuple_element_26);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_dictset_value = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_tuple_element_28;
PyObject *tmp_tuple_element_29;
PyObject *tmp_tuple_element_30;
PyTuple_SET_ITEM(tmp_dictset_value, 0, tmp_tuple_element_26);
tmp_tuple_element_28 = mod_consts.const_str_plain_Action;
tmp_tuple_element_26 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_26, 0, tmp_tuple_element_28);
tmp_tuple_element_28 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_28 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_2 = "o";
    goto tuple_build_exception_21;
}
        Py_INCREF(tmp_tuple_element_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_21;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_26, 1, tmp_tuple_element_28);
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_tuple_element_26);
goto tuple_build_exception_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
PyTuple_SET_ITEM(tmp_dictset_value, 1, tmp_tuple_element_26);
tmp_tuple_element_29 = mod_consts.const_str_plain_FileNameLength;
tmp_tuple_element_26 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_tuple_element_26, 0, tmp_tuple_element_29);
tmp_tuple_element_29 = PyObject_GetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_29 = module_var_accessor_watchdog$observers$winapi$DWORD(tstate);
if (unlikely(tmp_tuple_element_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_2 = "o";
    goto tuple_build_exception_22;
}
        Py_INCREF(tmp_tuple_element_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_22;
    }
}

PyTuple_SET_ITEM(tmp_tuple_element_26, 1, tmp_tuple_element_29);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_tuple_element_26);
goto tuple_build_exception_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
PyTuple_SET_ITEM(tmp_dictset_value, 2, tmp_tuple_element_26);
tmp_tuple_element_30 = mod_consts.const_str_plain_FileName;
tmp_tuple_element_26 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_32;
PyTuple_SET_ITEM0(tmp_tuple_element_26, 0, tmp_tuple_element_30);
tmp_expression_value_32 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_32 == NULL));
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_c_char);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto tuple_build_exception_23;
}
tmp_mult_expr_right_1 = const_int_pos_1;
tmp_tuple_element_30 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_2 = "o";
    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_tuple_element_26, 1, tmp_tuple_element_30);
}
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_tuple_element_26);
goto tuple_build_exception_20;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
PyTuple_SET_ITEM(tmp_dictset_value, 3, tmp_tuple_element_26);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_watchdog$observers$winapi$$$class__2_FileNotifyInformation_3);

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
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

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


exception_lineno = 212;

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
tmp_res = PyObject_SetItem(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_31 = mod_consts.const_str_plain_FileNotifyInformation;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 212;
tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_7;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_80;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_79 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_79);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212);
locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212);
locals_watchdog$observers$winapi$$$class__2_FileNotifyInformation_212 = NULL;
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
exception_lineno = 212;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_FileNotifyInformation, tmp_assign_source_79);
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
PyObject *tmp_assign_source_81;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_6;
tmp_expression_value_33 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_33 == NULL));
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_POINTER);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_watchdog$observers$winapi$FileNotifyInformation(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FileNotifyInformation);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_10);

exception_lineno = 221;

    goto frame_exception_exit_1;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 221;
tmp_assign_source_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_LPFNI, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;
tmp_assign_source_82 = module_var_accessor_watchdog$observers$winapi$FILE_FLAG_BACKUP_SEMANTICS(tstate);
if (unlikely(tmp_assign_source_82 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_FLAG_BACKUP_SEMANTICS);
}

if (tmp_assign_source_82 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_FLAGS, tmp_assign_source_82);
}
{
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_list_element_1;
tmp_called_value_11 = module_var_accessor_watchdog$observers$winapi$reduce(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reduce);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;

    goto frame_exception_exit_1;
}

tmp_args_element_value_7 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__4_lambda(tstate);

tmp_list_element_1 = module_var_accessor_watchdog$observers$winapi$FILE_SHARE_READ(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_SHARE_READ);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_7);

exception_lineno = 230;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = MAKE_LIST_EMPTY(tstate, 3);
PyList_SET_ITEM0(tmp_args_element_value_8, 0, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_watchdog$observers$winapi$FILE_SHARE_WRITE(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_SHARE_WRITE);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 231;

    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_args_element_value_8, 1, tmp_list_element_1);
tmp_list_element_1 = module_var_accessor_watchdog$observers$winapi$FILE_SHARE_DELETE(tstate);
if (unlikely(tmp_list_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_SHARE_DELETE);
}

if (tmp_list_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;

    goto list_build_exception_1;
}
PyList_SET_ITEM0(tmp_args_element_value_8, 2, tmp_list_element_1);
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_8);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 227;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_83 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_SHARE_FLAGS, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_list_element_2;
tmp_called_value_12 = module_var_accessor_watchdog$observers$winapi$reduce(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reduce);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;

    goto frame_exception_exit_1;
}

tmp_args_element_value_9 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__5_lambda(tstate);

tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_FILE_NAME(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_FILE_NAME);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_9);

exception_lineno = 238;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = MAKE_LIST_EMPTY(tstate, 8);
PyList_SET_ITEM0(tmp_args_element_value_10, 0, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_DIR_NAME(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_DIR_NAME);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_args_element_value_10, 1, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_ATTRIBUTES(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_ATTRIBUTES);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_args_element_value_10, 2, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_SIZE(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SIZE);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_args_element_value_10, 3, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_LAST_WRITE(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_WRITE);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_args_element_value_10, 4, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_SECURITY(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_SECURITY);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 243;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_args_element_value_10, 5, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_LAST_ACCESS(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_LAST_ACCESS);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_args_element_value_10, 6, tmp_list_element_2);
tmp_list_element_2 = module_var_accessor_watchdog$observers$winapi$FILE_NOTIFY_CHANGE_CREATION(tstate);
if (unlikely(tmp_list_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FILE_NOTIFY_CHANGE_CREATION);
}

if (tmp_list_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 245;

    goto list_build_exception_2;
}
PyList_SET_ITEM0(tmp_args_element_value_10, 7, tmp_list_element_2);
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_10);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_2:;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 235;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WATCHDOG_FILE_NOTIFY_FLAGS, tmp_assign_source_84);
}
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = mod_consts.const_int_pos_64000;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_BUFFER_SIZE, tmp_assign_source_85);
}
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = mod_consts.const_int_pos_2048;
UPDATE_STRING_DICT0(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_PATH_BUFFER_SIZE, tmp_assign_source_86);
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_1e66975a549ad382a8cccd630cd31da5);

tmp_assign_source_87 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__6__parse_event_buffer(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_event_buffer, tmp_assign_source_87);
}
{
PyObject *tmp_assign_source_88;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0e73e56cc0599d21203ad69ff47e43d9);

tmp_assign_source_88 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__7__is_observed_path_deleted(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__is_observed_path_deleted, tmp_assign_source_88);
}
{
PyObject *tmp_assign_source_89;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_6a6b440cc0c592f9df757b3f63af9583);

tmp_assign_source_89 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__8__generate_observed_path_deleted_event(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_observed_path_deleted_event, tmp_assign_source_89);
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_bf7631445fa5a42098066ace37c92b79);

tmp_assign_source_90 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__9_get_directory_handle(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_get_directory_handle, tmp_assign_source_90);
}
{
PyObject *tmp_assign_source_91;
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_77484382f0a9acb2f9efdccebf56b45e);

tmp_assign_source_91 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__10_close_directory_handle(tstate, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_close_directory_handle, tmp_assign_source_91);
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_608ac7ac74f5ced0bc70300871316a94);

tmp_assign_source_92 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__11_read_directory_changes(tstate, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_read_directory_changes, tmp_assign_source_92);
}
{
PyObject *tmp_outline_return_value_3;
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_93;
}
{
PyObject *tmp_assign_source_94;
tmp_assign_source_94 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_94;
}
// Tried code:
{
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_13;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_11;
tmp_called_value_14 = module_var_accessor_watchdog$observers$winapi$dataclass(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclass);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;

    goto try_except_handler_8;
}
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 349;
tmp_called_value_13 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_unsafe_hash_tuple);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;

    goto try_except_handler_8;
}
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_9e6cc04b5af36b91b837e7a83914ce17;
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_WinAPINativeEvent;
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_350;
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4 = MAKE_CLASS_FRAME(tstate, code_objects_774d2f8aefae8469c71b7991c9763ad6, module_watchdog$observers$winapi, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4);
assert(Py_REFCNT(frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = const_str_plain_int;
tmp_ass_subscribed_1 = DICT_GET_ITEM0(tstate, locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_action;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_2 = DICT_GET_ITEM0(tstate, locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 352;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_src_path;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_10;
tmp_called_value_15 = (PyObject *)&PyProperty_Type;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_12 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__12_is_added(tstate, tmp_annotations_10);

frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4->m_frame.f_lineno = 354;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain_is_added, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_11;
tmp_called_value_16 = (PyObject *)&PyProperty_Type;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_13 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__13_is_removed(tstate, tmp_annotations_11);

frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4->m_frame.f_lineno = 358;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain_is_removed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_12;
tmp_called_value_17 = (PyObject *)&PyProperty_Type;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_14 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__14_is_modified(tstate, tmp_annotations_12);

frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4->m_frame.f_lineno = 362;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain_is_modified, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_13;
tmp_called_value_18 = (PyObject *)&PyProperty_Type;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_15 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__15_is_renamed_old(tstate, tmp_annotations_13);

frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4->m_frame.f_lineno = 366;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain_is_renamed_old, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_14;
tmp_called_value_19 = (PyObject *)&PyProperty_Type;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_16 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__16_is_renamed_new(tstate, tmp_annotations_14);

frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4->m_frame.f_lineno = 370;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain_is_renamed_new, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_15;
tmp_called_value_20 = (PyObject *)&PyProperty_Type;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_17 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__17_is_removed_self(tstate, tmp_annotations_15);

frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4->m_frame.f_lineno = 374;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain_is_removed_self, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_4);

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
tmp_result = DICT_SET_ITEM(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_96;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_5;
tmp_called_value_21 = (PyObject *)&PyType_Type;
tmp_tuple_element_32 = mod_consts.const_str_plain_WinAPINativeEvent;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_32);
tmp_tuple_element_32 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_32);
tmp_tuple_element_32 = locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 350;
tmp_assign_source_96 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto try_except_handler_10;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_96;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_args_element_value_11 = outline_2_var___class__;
Py_INCREF(tmp_args_element_value_11);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350);
locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350);
locals_watchdog$observers$winapi$$$class__3_WinAPINativeEvent_350 = NULL;
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
exception_lineno = 350;
goto try_except_handler_8;
outline_result_6:;
frame_frame_watchdog$observers$winapi->m_frame.f_lineno = 349;
tmp_assign_source_95 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_WinAPINativeEvent, tmp_assign_source_95);
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$observers$winapi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$observers$winapi->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$observers$winapi, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_watchdog$observers$winapi);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_4:;
{
PyObject *tmp_assign_source_97;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_673e39ff6539d25fb0d7cbd0ebb1b2f3);

tmp_assign_source_97 = MAKE_FUNCTION_watchdog$observers$winapi$$$function__18_read_events(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)mod_consts.const_str_plain_read_events, tmp_assign_source_97);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog$observers$winapi", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.observers.winapi" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_watchdog$observers$winapi);
    return module_watchdog$observers$winapi;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$observers$winapi, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$observers$winapi", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

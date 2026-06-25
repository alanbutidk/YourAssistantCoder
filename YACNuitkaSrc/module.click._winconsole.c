/* Generated code for Python module 'click$_winconsole'
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



/* The "module_click$_winconsole" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$_winconsole;
PyDictObject *moduledict_click$_winconsole;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_Py_buffer;
PyObject *const_str_plain_PyBUF_WRITABLE;
PyObject *const_str_plain_PyBUF_SIMPLE;
PyObject *const_str_plain_PyObject_GetBuffer;
PyObject *const_str_plain_py_object;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_c_char;
PyObject *const_str_plain_from_address;
PyObject *const_str_plain_buf;
PyObject *const_str_plain_PyBuffer_Release;
PyObject *const_str_plain_handle;
PyObject *const_str_plain_isatty;
PyObject *const_int_pos_2;
PyObject *const_str_digest_a5289aba60c39e2b006782e5093df609;
PyObject *const_str_plain_get_buffer;
PyObject *const_dict_5dddc5f0cd5f7b33eb7826d1f1b30398;
PyObject *const_str_plain_c_ulong;
PyObject *const_str_plain_ReadConsoleW;
PyObject *const_str_plain_HANDLE;
PyObject *const_str_plain_GetLastError;
PyObject *const_str_plain_ERROR_OPERATION_ABORTED;
PyObject *const_str_plain_time;
PyObject *const_str_plain_sleep;
PyObject *const_tuple_float_0_1_tuple;
PyObject *const_str_digest_39ed18b85f7f2c697014499db02960ec;
PyObject *const_str_plain_EOF;
PyObject *const_str_plain_value;
PyObject *const_str_plain_ERROR_SUCCESS;
PyObject *const_str_plain_ERROR_NOT_ENOUGH_MEMORY;
PyObject *const_str_digest_ab9945a6700cbb65ecd1d255df4f43a0;
PyObject *const_str_plain_min;
PyObject *const_str_plain_MAX_BYTES_WRITTEN;
PyObject *const_str_plain_WriteConsoleW;
PyObject *const_str_plain__get_error_message;
PyObject *const_str_plain__text_stream;
PyObject *const_str_plain_buffer;
PyObject *const_str_plain_write;
PyObject *const_str_plain_flush;
PyObject *const_str_plain_self;
PyObject *const_str_digest_5da9eba985174e468ed733e33e2d3a69;
PyObject *const_str_digest_a8d23351e1fbedce677697382a3217bc;
PyObject *const_str_chr_62;
PyObject *const_str_plain__NonClosingTextIOWrapper;
PyObject *const_str_plain_BufferedReader;
PyObject *const_str_plain__WindowsConsoleReader;
PyObject *const_str_plain_STDIN_HANDLE;
PyObject *const_str_digest_a166d0e20cf23102cf939cef62c22331;
PyObject *const_str_plain_strict;
PyObject *const_dict_ab4d59562ee932cf3623ecfa88312f22;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_TextIO;
PyObject *const_str_plain_ConsoleStream;
PyObject *const_str_plain_BufferedWriter;
PyObject *const_str_plain__WindowsConsoleWriter;
PyObject *const_str_plain_STDOUT_HANDLE;
PyObject *const_str_plain_STDERR_HANDLE;
PyObject *const_str_plain_UnsupportedOperation;
PyObject *const_str_plain_msvcrt;
PyObject *const_str_plain_get_osfhandle;
PyObject *const_str_plain_GetConsoleMode;
PyObject *const_str_plain_DWORD;
PyObject *const_frozenset_e360416cbe5770449825a7ca35349f9e;
PyObject *const_frozenset_513212770113a25ad2f15ff4faa2766e;
PyObject *const_str_plain__is_console;
PyObject *const_str_plain__stream_factories;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_cabc;
PyObject *const_str_plain_io;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_t;
PyObject *const_str_plain_Array;
PyObject *const_str_plain_c_char_p;
PyObject *const_str_plain_c_int;
PyObject *const_str_plain_c_ssize_t;
PyObject *const_str_plain_c_void_p;
PyObject *const_str_plain_POINTER;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain_LPCWSTR;
PyObject *const_str_plain_LPWSTR;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain__NonClosingTextIOWrapper_tuple;
PyObject *const_str_plain_windll;
PyObject *const_str_plain_WINFUNCTYPE;
PyObject *const_str_plain_c_ssize_p;
PyObject *const_str_plain_kernel32;
PyObject *const_str_plain_GetStdHandle;
PyObject *const_str_plain_GetCommandLineW;
PyObject *const_str_plain_CommandLineToArgvW;
PyObject *const_str_plain_shell32;
PyObject *const_str_plain_LocalFree;
PyObject *const_tuple_int_neg_10_tuple;
PyObject *const_tuple_int_neg_11_tuple;
PyObject *const_tuple_int_neg_12_tuple;
PyObject *const_int_pos_8;
PyObject *const_int_pos_995;
PyObject *const_str_plain_STDIN_FILENO;
PyObject *const_str_plain_STDOUT_FILENO;
PyObject *const_str_plain_STDERR_FILENO;
PyObject *const_bytes_chr_26;
PyObject *const_int_pos_32767;
PyObject *const_str_plain_pythonapi;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_82dff8d474f0571b16b37658f18365e4;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_87;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_obj;
PyObject *const_str_plain_itemsize;
PyObject *const_str_plain_readonly;
PyObject *const_str_plain_ndim;
PyObject *const_str_plain_shape;
PyObject *const_str_plain_strides;
PyObject *const_str_plain_suboffsets;
PyObject *const_str_plain_internal;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_d75d081b3372a13cc5cf4913ac29da60;
PyObject *const_str_plain_RawIOBase;
PyObject *const_str_plain__WindowsConsoleRawIOBase;
PyObject *const_int_pos_118;
PyObject *const_dict_64ab586db623a71f2ec14dfdc7d330f6;
PyObject *const_str_digest_3946e80b9f89b4e115bd745a0a7ef9b2;
PyObject *const_dict_f5d8aa01ea7eb8d6f096b0ef602155df;
PyObject *const_str_digest_64b91a6eb7b887340038a5c763753d16;
PyObject *const_tuple_str_plain_handle_tuple;
PyObject *const_int_pos_127;
PyObject *const_str_plain_readable;
PyObject *const_str_digest_6ac834a51492e48d6e0940b39ef78c74;
PyObject *const_dict_75c7768acadbd89f6d59a636e406de1e;
PyObject *const_str_plain_readinto;
PyObject *const_str_digest_2c57ea3337b076080cc9b1406b38fad5;
PyObject *const_int_pos_162;
PyObject *const_str_plain_writable;
PyObject *const_str_digest_047588c4bbb57001b18de8ea6d1f58a3;
PyObject *const_dict_49e20fe08e9874349dd05b35b648aa61;
PyObject *const_str_digest_47cfa8f4e4da2e8978f44f2c9ec57b22;
PyObject *const_str_digest_6448f3e15532b8ac319458ab40a1705b;
PyObject *const_int_pos_194;
PyObject *const_dict_334836065e83a516b5ea4d77c78bbc19;
PyObject *const_str_digest_4a116e916b4b1f7ac63739253db2722c;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_693d786fed73f41412a604727b626dfe;
PyObject *const_dict_705c246dde49ecdd7a948b55629c9da2;
PyObject *const_str_digest_19bbdcc778eb8d8d8ebbe096aaf84352;
PyObject *const_dict_588de8d2d10cb3e5736056733ba5a2e0;
PyObject *const_str_plain_writelines;
PyObject *const_str_digest_6232002a855459ce023be79e3fa57e81;
PyObject *const_dict_19af9cb7cdace76baefee316e41c3c52;
PyObject *const_str_plain___getattr__;
PyObject *const_str_digest_90c684659b8dcf698dd3ea5d493004d7;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_700b30dbcbc8a8b81b672c270e059098;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_ad404b9651108550a35deb70c3521fae;
PyObject *const_tuple_str_plain__text_stream_str_plain_buffer_tuple;
PyObject *const_dict_3762b9a0e5a98c06ed594722b4deccc5;
PyObject *const_str_plain__get_text_stdin;
PyObject *const_str_plain__get_text_stdout;
PyObject *const_str_plain__get_text_stderr;
PyObject *const_str_digest_40699570f7c3e68669c7e825f86e0a30;
PyObject *const_dict_7c87a16d7fc180b7f14d96255a3c6e11;
PyObject *const_dict_9b0e4bf53edaa60d9f5a8d777b5fc555;
PyObject *const_str_plain__get_windows_console_stream;
PyObject *const_str_digest_e35f81c4da713c43226afc18ba8461dd;
PyObject *const_str_digest_fa0c2345e21d3568fe7a9b023fdb2f88;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
PyObject *const_tuple_str_plain_self_str_plain_text_stream_str_plain_byte_stream_tuple;
PyObject *const_tuple_str_plain_self_str_plain_handle_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_errno_tuple;
PyObject *const_tuple_str_plain_buffer_stream_str_plain_text_stream_tuple;
PyObject *const_tuple_54467c84981fc528f04202e0685e773d_tuple;
PyObject *const_tuple_str_plain_f_str_plain_fileno_str_plain_handle_tuple;
PyObject *const_tuple_4c23d52e271767a21e8478d3cf4e25dd_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_622b3de6c1ad3b75624beaa1174d1866_tuple;
PyObject *const_tuple_str_plain_self_str_plain_x_tuple;
PyObject *const_tuple_2395f693fe95f5078e518c049dacca0c_tuple;
PyObject *const_tuple_str_plain_self_str_plain_lines_str_plain_line_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[189];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("click._winconsole"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_Py_buffer);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyBUF_WRITABLE);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyBUF_SIMPLE);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyObject_GetBuffer);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_py_object);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_char);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_address);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_buf);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_PyBuffer_Release);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_isatty);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_a5289aba60c39e2b006782e5093df609);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_buffer);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_dict_5dddc5f0cd5f7b33eb7826d1f1b30398);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_ulong);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadConsoleW);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetLastError);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_float_0_1_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_39ed18b85f7f2c697014499db02960ec);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_EOF);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_SUCCESS);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab9945a6700cbb65ecd1d255df4f43a0);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_WriteConsoleW);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_error_message);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__text_stream);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_buffer);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_5da9eba985174e468ed733e33e2d3a69);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8d23351e1fbedce677697382a3217bc);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__NonClosingTextIOWrapper);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedReader);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain__WindowsConsoleReader);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_STDIN_HANDLE);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_a166d0e20cf23102cf939cef62c22331);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_strict);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_ab4d59562ee932cf3623ecfa88312f22);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextIO);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConsoleStream);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedWriter);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain__WindowsConsoleWriter);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_STDOUT_HANDLE);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_STDERR_HANDLE);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedOperation);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_msvcrt);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_osfhandle);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetConsoleMode);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_frozenset_e360416cbe5770449825a7ca35349f9e);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_frozenset_513212770113a25ad2f15ff4faa2766e);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_console);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__stream_factories);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_cabc);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_io);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_Array);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_char_p);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_int);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_ssize_t);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPCWSTR);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_LPWSTR);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NonClosingTextIOWrapper_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_windll);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_WINFUNCTYPE);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_ssize_p);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetStdHandle);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCommandLineW);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_CommandLineToArgvW);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_shell32);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_LocalFree);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_10_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_11_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_12_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_int_pos_995);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_STDIN_FILENO);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_STDOUT_FILENO);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_STDERR_FILENO);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_bytes_chr_26);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_int_pos_32767);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_pythonapi);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_int_pos_87);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_obj);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_readonly);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_ndim);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_shape);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_strides);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_suboffsets);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_internal);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_dict_d75d081b3372a13cc5cf4913ac29da60);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_RawIOBase);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain__WindowsConsoleRawIOBase);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_118);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_dict_64ab586db623a71f2ec14dfdc7d330f6);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_3946e80b9f89b4e115bd745a0a7ef9b2);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_f5d8aa01ea7eb8d6f096b0ef602155df);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_64b91a6eb7b887340038a5c763753d16);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_readable);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ac834a51492e48d6e0940b39ef78c74);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_dict_75c7768acadbd89f6d59a636e406de1e);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_readinto);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_2c57ea3337b076080cc9b1406b38fad5);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_pos_162);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_writable);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_047588c4bbb57001b18de8ea6d1f58a3);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_49e20fe08e9874349dd05b35b648aa61);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_47cfa8f4e4da2e8978f44f2c9ec57b22);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_6448f3e15532b8ac319458ab40a1705b);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_int_pos_194);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_dict_334836065e83a516b5ea4d77c78bbc19);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a116e916b4b1f7ac63739253db2722c);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_693d786fed73f41412a604727b626dfe);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_dict_705c246dde49ecdd7a948b55629c9da2);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_19bbdcc778eb8d8d8ebbe096aaf84352);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_dict_588de8d2d10cb3e5736056733ba5a2e0);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_writelines);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_6232002a855459ce023be79e3fa57e81);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_19af9cb7cdace76baefee316e41c3c52);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_90c684659b8dcf698dd3ea5d493004d7);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_700b30dbcbc8a8b81b672c270e059098);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad404b9651108550a35deb70c3521fae);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__text_stream_str_plain_buffer_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_3762b9a0e5a98c06ed594722b4deccc5);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_text_stdin);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_text_stdout);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_text_stderr);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_40699570f7c3e68669c7e825f86e0a30);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_7c87a16d7fc180b7f14d96255a3c6e11);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_9b0e4bf53edaa60d9f5a8d777b5fc555);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_windows_console_stream);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_e35f81c4da713c43226afc18ba8461dd);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa0c2345e21d3568fe7a9b023fdb2f88);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_stream_str_plain_byte_stream_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errno_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buffer_stream_str_plain_text_stream_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_54467c84981fc528f04202e0685e773d_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_str_plain_fileno_str_plain_handle_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_4c23d52e271767a21e8478d3cf4e25dd_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_622b3de6c1ad3b75624beaa1174d1866_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_2395f693fe95f5078e518c049dacca0c_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_lines_str_plain_line_tuple);
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
void checkModuleConstants_click$_winconsole(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_Py_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Py_buffer);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyBUF_WRITABLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyBUF_WRITABLE);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyBUF_SIMPLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyBUF_SIMPLE);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyObject_GetBuffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyObject_GetBuffer);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_py_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_py_object);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byref);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_char);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_address));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_address);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_buf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buf);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_PyBuffer_Release));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PyBuffer_Release);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_isatty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isatty);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_a5289aba60c39e2b006782e5093df609));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a5289aba60c39e2b006782e5093df609);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_buffer);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_dict_5dddc5f0cd5f7b33eb7826d1f1b30398));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5dddc5f0cd5f7b33eb7826d1f1b30398);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_ulong));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_ulong);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadConsoleW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadConsoleW);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HANDLE);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetLastError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetLastError);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_float_0_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_float_0_1_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_39ed18b85f7f2c697014499db02960ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39ed18b85f7f2c697014499db02960ec);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_EOF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EOF);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_SUCCESS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_SUCCESS);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab9945a6700cbb65ecd1d255df4f43a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab9945a6700cbb65ecd1d255df4f43a0);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_BYTES_WRITTEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_WriteConsoleW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WriteConsoleW);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_error_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_error_message);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__text_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__text_stream);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buffer);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flush);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_5da9eba985174e468ed733e33e2d3a69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5da9eba985174e468ed733e33e2d3a69);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8d23351e1fbedce677697382a3217bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8d23351e1fbedce677697382a3217bc);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__NonClosingTextIOWrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NonClosingTextIOWrapper);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedReader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BufferedReader);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain__WindowsConsoleReader));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WindowsConsoleReader);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_STDIN_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STDIN_HANDLE);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_a166d0e20cf23102cf939cef62c22331));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a166d0e20cf23102cf939cef62c22331);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_strict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strict);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_ab4d59562ee932cf3623ecfa88312f22));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ab4d59562ee932cf3623ecfa88312f22);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextIO);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConsoleStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConsoleStream);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_BufferedWriter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BufferedWriter);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain__WindowsConsoleWriter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WindowsConsoleWriter);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_STDOUT_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STDOUT_HANDLE);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_STDERR_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STDERR_HANDLE);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnsupportedOperation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnsupportedOperation);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_msvcrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msvcrt);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_osfhandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_osfhandle);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetConsoleMode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetConsoleMode);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_frozenset_e360416cbe5770449825a7ca35349f9e));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_e360416cbe5770449825a7ca35349f9e);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_frozenset_513212770113a25ad2f15ff4faa2766e));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_513212770113a25ad2f15ff4faa2766e);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_console));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_console);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__stream_factories));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stream_factories);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_cabc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cabc);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_io));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_io);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_Array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Array);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_char_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_char_p);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_int);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_ssize_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_ssize_t);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_void_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_void_p);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_POINTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POINTER);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPCWSTR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LPCWSTR);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_LPWSTR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LPWSTR);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__NonClosingTextIOWrapper_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__NonClosingTextIOWrapper_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_windll));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_windll);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_WINFUNCTYPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WINFUNCTYPE);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_ssize_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_ssize_p);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_kernel32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kernel32);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetStdHandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetStdHandle);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCommandLineW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetCommandLineW);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_CommandLineToArgvW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CommandLineToArgvW);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_shell32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shell32);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_LocalFree));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LocalFree);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_10_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_11_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_11_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_12_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_12_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_int_pos_995));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_995);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_STDIN_FILENO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STDIN_FILENO);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_STDOUT_FILENO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STDOUT_FILENO);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_STDERR_FILENO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STDERR_FILENO);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_bytes_chr_26));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_chr_26);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_int_pos_32767));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32767);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_pythonapi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pythonapi);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_int_pos_87));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_87);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_obj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_obj);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itemsize);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_readonly));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readonly);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_ndim));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ndim);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_shape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shape);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_strides));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strides);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_suboffsets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suboffsets);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_internal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_internal);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_dict_d75d081b3372a13cc5cf4913ac29da60));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d75d081b3372a13cc5cf4913ac29da60);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_RawIOBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RawIOBase);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain__WindowsConsoleRawIOBase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__WindowsConsoleRawIOBase);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_118));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_118);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_dict_64ab586db623a71f2ec14dfdc7d330f6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_64ab586db623a71f2ec14dfdc7d330f6);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_3946e80b9f89b4e115bd745a0a7ef9b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3946e80b9f89b4e115bd745a0a7ef9b2);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_f5d8aa01ea7eb8d6f096b0ef602155df));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5d8aa01ea7eb8d6f096b0ef602155df);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_64b91a6eb7b887340038a5c763753d16));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64b91a6eb7b887340038a5c763753d16);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_handle_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_handle_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_readable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readable);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ac834a51492e48d6e0940b39ef78c74));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ac834a51492e48d6e0940b39ef78c74);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_dict_75c7768acadbd89f6d59a636e406de1e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_75c7768acadbd89f6d59a636e406de1e);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_readinto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readinto);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_2c57ea3337b076080cc9b1406b38fad5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2c57ea3337b076080cc9b1406b38fad5);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_pos_162));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_162);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_writable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_writable);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_047588c4bbb57001b18de8ea6d1f58a3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_047588c4bbb57001b18de8ea6d1f58a3);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_49e20fe08e9874349dd05b35b648aa61));
CHECK_OBJECT_DEEP(mod_consts.const_dict_49e20fe08e9874349dd05b35b648aa61);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_47cfa8f4e4da2e8978f44f2c9ec57b22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47cfa8f4e4da2e8978f44f2c9ec57b22);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_6448f3e15532b8ac319458ab40a1705b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6448f3e15532b8ac319458ab40a1705b);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_int_pos_194));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_194);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_dict_334836065e83a516b5ea4d77c78bbc19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_334836065e83a516b5ea4d77c78bbc19);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a116e916b4b1f7ac63739253db2722c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a116e916b4b1f7ac63739253db2722c);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_693d786fed73f41412a604727b626dfe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_693d786fed73f41412a604727b626dfe);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_dict_705c246dde49ecdd7a948b55629c9da2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_705c246dde49ecdd7a948b55629c9da2);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_19bbdcc778eb8d8d8ebbe096aaf84352));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19bbdcc778eb8d8d8ebbe096aaf84352);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_dict_588de8d2d10cb3e5736056733ba5a2e0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_588de8d2d10cb3e5736056733ba5a2e0);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_writelines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_writelines);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_6232002a855459ce023be79e3fa57e81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6232002a855459ce023be79e3fa57e81);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_19af9cb7cdace76baefee316e41c3c52));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19af9cb7cdace76baefee316e41c3c52);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_90c684659b8dcf698dd3ea5d493004d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_90c684659b8dcf698dd3ea5d493004d7);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_700b30dbcbc8a8b81b672c270e059098));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_700b30dbcbc8a8b81b672c270e059098);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad404b9651108550a35deb70c3521fae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad404b9651108550a35deb70c3521fae);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__text_stream_str_plain_buffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__text_stream_str_plain_buffer_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_3762b9a0e5a98c06ed594722b4deccc5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3762b9a0e5a98c06ed594722b4deccc5);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_text_stdin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_text_stdin);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_text_stdout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_text_stdout);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_text_stderr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_text_stderr);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_40699570f7c3e68669c7e825f86e0a30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_40699570f7c3e68669c7e825f86e0a30);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_7c87a16d7fc180b7f14d96255a3c6e11));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7c87a16d7fc180b7f14d96255a3c6e11);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_9b0e4bf53edaa60d9f5a8d777b5fc555));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9b0e4bf53edaa60d9f5a8d777b5fc555);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_windows_console_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_windows_console_stream);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_e35f81c4da713c43226afc18ba8461dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e35f81c4da713c43226afc18ba8461dd);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa0c2345e21d3568fe7a9b023fdb2f88));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa0c2345e21d3568fe7a9b023fdb2f88);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_name_tuple);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_stream_str_plain_byte_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_text_stream_str_plain_byte_stream_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errno_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_errno_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_buffer_stream_str_plain_text_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_buffer_stream_str_plain_text_stream_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_54467c84981fc528f04202e0685e773d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_54467c84981fc528f04202e0685e773d_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_str_plain_fileno_str_plain_handle_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_f_str_plain_fileno_str_plain_handle_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_4c23d52e271767a21e8478d3cf4e25dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4c23d52e271767a21e8478d3cf4e25dd_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_622b3de6c1ad3b75624beaa1174d1866_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_622b3de6c1ad3b75624beaa1174d1866_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_x_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_2395f693fe95f5078e518c049dacca0c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2395f693fe95f5078e518c049dacca0c_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_lines_str_plain_line_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_lines_str_plain_line_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 52
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
static PyObject *module_var_accessor_click$_winconsole$ConsoleStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ConsoleStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConsoleStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConsoleStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConsoleStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConsoleStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ConsoleStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ConsoleStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConsoleStream);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$DWORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$EOF(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_EOF);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EOF);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EOF, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_EOF);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_EOF, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_EOF);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_EOF);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_EOF);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$ERROR_NOT_ENOUGH_MEMORY(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$ERROR_OPERATION_ABORTED(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$ERROR_SUCCESS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_SUCCESS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR_SUCCESS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR_SUCCESS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ERROR_SUCCESS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ERROR_SUCCESS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_SUCCESS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_SUCCESS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_SUCCESS);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$GetConsoleMode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetConsoleMode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetConsoleMode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetConsoleMode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetConsoleMode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetConsoleMode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetConsoleMode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetConsoleMode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetConsoleMode);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$GetLastError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetLastError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetLastError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetLastError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetLastError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetLastError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetLastError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetLastError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetLastError);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$GetStdHandle(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetStdHandle);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetStdHandle, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetStdHandle);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetStdHandle, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$LPCWSTR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$LPWSTR(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$MAX_BYTES_WRITTEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_BYTES_WRITTEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MAX_BYTES_WRITTEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$POINTER(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_POINTER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_POINTER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_POINTER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_POINTER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_POINTER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_POINTER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_POINTER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_POINTER);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$PyBUF_SIMPLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_SIMPLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyBUF_SIMPLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyBUF_SIMPLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyBUF_SIMPLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyBUF_SIMPLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_SIMPLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_SIMPLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_SIMPLE);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$PyBUF_WRITABLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_WRITABLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyBUF_WRITABLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyBUF_WRITABLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyBUF_WRITABLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyBUF_WRITABLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_WRITABLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_WRITABLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_WRITABLE);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$PyBuffer_Release(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBuffer_Release);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyBuffer_Release);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyBuffer_Release, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyBuffer_Release);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyBuffer_Release, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBuffer_Release);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBuffer_Release);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBuffer_Release);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$PyObject_GetBuffer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyObject_GetBuffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyObject_GetBuffer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyObject_GetBuffer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PyObject_GetBuffer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PyObject_GetBuffer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyObject_GetBuffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyObject_GetBuffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PyObject_GetBuffer);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$Py_buffer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Py_buffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Py_buffer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Py_buffer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Py_buffer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Py_buffer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Py_buffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Py_buffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Py_buffer);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$ReadConsoleW(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadConsoleW);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadConsoleW);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadConsoleW, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ReadConsoleW);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ReadConsoleW, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadConsoleW);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadConsoleW);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadConsoleW);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$STDERR_HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDERR_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STDERR_HANDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STDERR_HANDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STDERR_HANDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STDERR_HANDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDERR_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDERR_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_STDERR_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$STDIN_HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDIN_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STDIN_HANDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STDIN_HANDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STDIN_HANDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STDIN_HANDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDIN_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDIN_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_STDIN_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$STDOUT_HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDOUT_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STDOUT_HANDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STDOUT_HANDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STDOUT_HANDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STDOUT_HANDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDOUT_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDOUT_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_STDOUT_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$Structure(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Structure);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Structure, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Structure);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Structure, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$WINFUNCTYPE(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WINFUNCTYPE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WINFUNCTYPE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WINFUNCTYPE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WINFUNCTYPE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WINFUNCTYPE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WINFUNCTYPE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WINFUNCTYPE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WINFUNCTYPE);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$WriteConsoleW(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteConsoleW);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WriteConsoleW);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WriteConsoleW, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WriteConsoleW);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WriteConsoleW, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteConsoleW);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteConsoleW);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteConsoleW);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_NonClosingTextIOWrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__NonClosingTextIOWrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NonClosingTextIOWrapper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NonClosingTextIOWrapper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NonClosingTextIOWrapper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NonClosingTextIOWrapper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__NonClosingTextIOWrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__NonClosingTextIOWrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NonClosingTextIOWrapper);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_WindowsConsoleRawIOBase(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleRawIOBase);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WindowsConsoleRawIOBase);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WindowsConsoleRawIOBase, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WindowsConsoleRawIOBase);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WindowsConsoleRawIOBase, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleRawIOBase);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleRawIOBase);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleRawIOBase);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_WindowsConsoleReader(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleReader);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WindowsConsoleReader);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WindowsConsoleReader, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WindowsConsoleReader);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WindowsConsoleReader, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleReader);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleReader);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleReader);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_WindowsConsoleWriter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleWriter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WindowsConsoleWriter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WindowsConsoleWriter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__WindowsConsoleWriter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__WindowsConsoleWriter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleWriter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleWriter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleWriter);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_get_text_stderr(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stderr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_text_stderr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_text_stderr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_text_stderr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_text_stderr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stderr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stderr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stderr);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_get_text_stdin(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_text_stdin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_text_stdin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_text_stdin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_text_stdin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdin);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_get_text_stdout(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_text_stdout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_text_stdout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_text_stdout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_text_stdout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdout);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_is_console(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__is_console);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_console);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_console, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_console);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_console, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__is_console);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__is_console);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_console);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$_stream_factories(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__stream_factories);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__stream_factories);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__stream_factories, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__stream_factories);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__stream_factories, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__stream_factories);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__stream_factories);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__stream_factories);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$byref(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_byref);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_byref, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_byref);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_byref, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$c_char(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_char);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_char, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_char);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_char, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$c_char_p(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char_p);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_char_p);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_char_p, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_char_p);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_char_p, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char_p);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char_p);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char_p);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$c_int(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_int);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_int, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_int);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_int, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$c_ssize_p(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_p);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_ssize_p);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_ssize_p, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_ssize_p);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_ssize_p, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_p);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_p);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_p);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$c_ssize_t(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_t);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_ssize_t);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_ssize_t, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_ssize_t);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_ssize_t, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_t);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_t);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_t);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$c_ulong(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ulong);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_ulong);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_ulong, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_ulong);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_ulong, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ulong);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ulong);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ulong);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$c_void_p(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_void_p);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_void_p, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_void_p);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_void_p, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$get_buffer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_get_buffer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_buffer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_buffer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_buffer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_buffer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_get_buffer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_get_buffer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_buffer);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$kernel32(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$msvcrt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_msvcrt);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_msvcrt, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_msvcrt);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_msvcrt, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$py_object(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_py_object);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_py_object);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_py_object, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_py_object);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_py_object, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_py_object);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_py_object);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_py_object);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$pythonapi(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_pythonapi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pythonapi);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pythonapi, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pythonapi);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pythonapi, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_pythonapi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_pythonapi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pythonapi);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}

static PyObject *module_var_accessor_click$_winconsole$windll(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_winconsole->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_winconsole->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_winconsole->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_windll);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_windll, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_windll);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_windll, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_windll);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f96674d111bb2cb6ef1cbc73c5f3d574;
static PyCodeObject *code_objects_f7fca6e8f84b11ddf18cb5f0c1f9109d;
static PyCodeObject *code_objects_e6d0230eaad25a151a1d1c806af93bb3;
static PyCodeObject *code_objects_dee65ece605bb1bfa80999bc943d1757;
static PyCodeObject *code_objects_5d22db6f4fd79094cb024f8c27b14677;
static PyCodeObject *code_objects_a1b22ac4f673e7299a3c800efe579a91;
static PyCodeObject *code_objects_a4ce0c9f51eaad39315b4b346084a738;
static PyCodeObject *code_objects_876cba3192785459bb7a7bbdb8c125b2;
static PyCodeObject *code_objects_98ed63191635bcf23aba2b50d3cc9931;
static PyCodeObject *code_objects_6ea54b6e5b639d63568f9cf56403c643;
static PyCodeObject *code_objects_751bd3006baf32debb308bd434211adb;
static PyCodeObject *code_objects_c8bd400655e79f22af4d36b30e286ca7;
static PyCodeObject *code_objects_657d3d69dd1978355cf47a1d110f38ce;
static PyCodeObject *code_objects_2cdf19dc02245de9aa676cfc8711a822;
static PyCodeObject *code_objects_7091b516dc0d0770245c001bdaeb4c23;
static PyCodeObject *code_objects_28a6738e6a6cd239449f917d7fa2ffb3;
static PyCodeObject *code_objects_aab5d485f34b46dd774009b8c2526f10;
static PyCodeObject *code_objects_aaaaa102fda1961872f3faf640d8e81f;
static PyCodeObject *code_objects_ac696062b0ac7729ba0612c64bc9fe3a;
static PyCodeObject *code_objects_4465e257846bd34fa9550bfcc2926a0c;
static PyCodeObject *code_objects_bdebf0e5cf2da2b8e5e2f4f54190de7c;
static PyCodeObject *code_objects_0280314042fa7231c7ac976d456f409e;
static PyCodeObject *code_objects_9ee4b2786c642afae980cafa2aee82d9;
static PyCodeObject *code_objects_a215e93b39f50c4eb578f8ddaa5377d2;
static PyCodeObject *code_objects_73e625b9928e3e3bd166b13a9246174e;
static PyCodeObject *code_objects_c1c1ac424c6982e3cd12c48144f766e7;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e35f81c4da713c43226afc18ba8461dd); CHECK_OBJECT(module_filename_obj);
code_objects_f96674d111bb2cb6ef1cbc73c5f3d574 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_fa0c2345e21d3568fe7a9b023fdb2f88, mod_consts.const_str_digest_fa0c2345e21d3568fe7a9b023fdb2f88, NULL, NULL, 0, 0, 0);
code_objects_f7fca6e8f84b11ddf18cb5f0c1f9109d = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ConsoleStream, mod_consts.const_str_plain_ConsoleStream, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e6d0230eaad25a151a1d1c806af93bb3 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Py_buffer, mod_consts.const_str_plain_Py_buffer, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_dee65ece605bb1bfa80999bc943d1757 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__WindowsConsoleRawIOBase, mod_consts.const_str_plain__WindowsConsoleRawIOBase, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5d22db6f4fd79094cb024f8c27b14677 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__WindowsConsoleReader, mod_consts.const_str_plain__WindowsConsoleReader, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a1b22ac4f673e7299a3c800efe579a91 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__WindowsConsoleWriter, mod_consts.const_str_plain__WindowsConsoleWriter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a4ce0c9f51eaad39315b4b346084a738 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_digest_90c684659b8dcf698dd3ea5d493004d7, mod_consts.const_tuple_str_plain_self_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_876cba3192785459bb7a7bbdb8c125b2 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_4a116e916b4b1f7ac63739253db2722c, mod_consts.const_tuple_str_plain_self_str_plain_text_stream_str_plain_byte_stream_tuple, NULL, 3, 0, 0);
code_objects_98ed63191635bcf23aba2b50d3cc9931 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_3946e80b9f89b4e115bd745a0a7ef9b2, mod_consts.const_tuple_str_plain_self_str_plain_handle_tuple, NULL, 2, 0, 0);
code_objects_6ea54b6e5b639d63568f9cf56403c643 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_ad404b9651108550a35deb70c3521fae, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_751bd3006baf32debb308bd434211adb = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_error_message, mod_consts.const_str_digest_47cfa8f4e4da2e8978f44f2c9ec57b22, mod_consts.const_tuple_str_plain_errno_tuple, NULL, 1, 0, 0);
code_objects_c8bd400655e79f22af4d36b30e286ca7 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_text_stderr, mod_consts.const_str_plain__get_text_stderr, mod_consts.const_tuple_str_plain_buffer_stream_str_plain_text_stream_tuple, NULL, 1, 0, 0);
code_objects_657d3d69dd1978355cf47a1d110f38ce = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_text_stdin, mod_consts.const_str_plain__get_text_stdin, mod_consts.const_tuple_str_plain_buffer_stream_str_plain_text_stream_tuple, NULL, 1, 0, 0);
code_objects_2cdf19dc02245de9aa676cfc8711a822 = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_text_stdout, mod_consts.const_str_plain__get_text_stdout, mod_consts.const_tuple_str_plain_buffer_stream_str_plain_text_stream_tuple, NULL, 1, 0, 0);
code_objects_7091b516dc0d0770245c001bdaeb4c23 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_windows_console_stream, mod_consts.const_str_plain__get_windows_console_stream, mod_consts.const_tuple_54467c84981fc528f04202e0685e773d_tuple, NULL, 3, 0, 0);
code_objects_28a6738e6a6cd239449f917d7fa2ffb3 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__is_console, mod_consts.const_str_plain__is_console, mod_consts.const_tuple_str_plain_f_str_plain_fileno_str_plain_handle_tuple, NULL, 1, 0, 0);
code_objects_aab5d485f34b46dd774009b8c2526f10 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_buffer, mod_consts.const_str_plain_get_buffer, mod_consts.const_tuple_4c23d52e271767a21e8478d3cf4e25dd_tuple, NULL, 2, 0, 0);
code_objects_aaaaa102fda1961872f3faf640d8e81f = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_isatty, mod_consts.const_str_digest_700b30dbcbc8a8b81b672c270e059098, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ac696062b0ac7729ba0612c64bc9fe3a = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_isatty, mod_consts.const_str_digest_64b91a6eb7b887340038a5c763753d16, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_4465e257846bd34fa9550bfcc2926a0c = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_name, mod_consts.const_str_digest_693d786fed73f41412a604727b626dfe, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bdebf0e5cf2da2b8e5e2f4f54190de7c = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readable, mod_consts.const_str_digest_6ac834a51492e48d6e0940b39ef78c74, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0280314042fa7231c7ac976d456f409e = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readinto, mod_consts.const_str_digest_2c57ea3337b076080cc9b1406b38fad5, mod_consts.const_tuple_622b3de6c1ad3b75624beaa1174d1866_tuple, NULL, 2, 0, 0);
code_objects_9ee4b2786c642afae980cafa2aee82d9 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_writable, mod_consts.const_str_digest_047588c4bbb57001b18de8ea6d1f58a3, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a215e93b39f50c4eb578f8ddaa5377d2 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_19bbdcc778eb8d8d8ebbe096aaf84352, mod_consts.const_tuple_str_plain_self_str_plain_x_tuple, NULL, 2, 0, 0);
code_objects_73e625b9928e3e3bd166b13a9246174e = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_6448f3e15532b8ac319458ab40a1705b, mod_consts.const_tuple_2395f693fe95f5078e518c049dacca0c_tuple, NULL, 2, 0, 0);
code_objects_c1c1ac424c6982e3cd12c48144f766e7 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_writelines, mod_consts.const_str_digest_6232002a855459ce023be79e3fa57e81, mod_consts.const_tuple_str_plain_self_str_plain_lines_str_plain_line_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__10_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__11_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__12_writelines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__13___getattr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__14_isatty(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__15___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__16__get_text_stdin(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__17__get_text_stdout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__18__get_text_stderr(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__19__is_console(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__1_get_buffer(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__20__get_windows_console_stream(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__2___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__3_isatty(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__4_readable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__5_readinto(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__6_writable(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__7__get_error_message(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__8_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__9___init__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_click$_winconsole$$$function__1_get_buffer(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
PyObject *par_writable = python_pars[1];
PyObject *var_flags = NULL;
PyObject *var_out = NULL;
PyObject *var_buf = NULL;
PyObject *var_buffer_type = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__1_get_buffer;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__1_get_buffer = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__1_get_buffer)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__1_get_buffer);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__1_get_buffer == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__1_get_buffer = MAKE_FUNCTION_FRAME(tstate, code_objects_aab5d485f34b46dd774009b8c2526f10, module_click$_winconsole, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__1_get_buffer->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__1_get_buffer = cache_frame_frame_click$_winconsole$$$function__1_get_buffer;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__1_get_buffer);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__1_get_buffer) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_click$_winconsole$Py_buffer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Py_buffer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 106;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_buf == NULL);
var_buf = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_writable);
tmp_truth_name_1 = CHECK_IF_TRUE(par_writable);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_2 = module_var_accessor_click$_winconsole$PyBUF_WRITABLE(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyBUF_WRITABLE);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_2 = module_var_accessor_click$_winconsole$PyBUF_SIMPLE(tstate);
if (unlikely(tmp_assign_source_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyBUF_SIMPLE);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_flags == NULL);
Py_INCREF(tmp_assign_source_2);
var_flags = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_click$_winconsole$PyObject_GetBuffer(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyObject_GetBuffer);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_click$_winconsole$py_object(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_py_object);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_obj);
tmp_args_element_value_2 = par_obj;
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 108;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_click$_winconsole$byref(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf);
tmp_args_element_value_4 = var_buf;
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 108;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_flags);
tmp_args_element_value_5 = var_flags;
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 108;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_1;
tmp_mult_expr_left_1 = module_var_accessor_click$_winconsole$c_char(tstate);
if (unlikely(tmp_mult_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_char);
}

if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_buf);
tmp_expression_value_1 = var_buf;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_len);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_buffer_type == NULL);
var_buffer_type = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_buffer_type);
tmp_expression_value_2 = var_buffer_type;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_from_address);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_buf);
tmp_expression_value_3 = var_buf;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_buf);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 112;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 112;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(var_out == NULL);
var_out = tmp_assign_source_4;
}
CHECK_OBJECT(var_out);
tmp_return_value = var_out;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_6 = module_var_accessor_click$_winconsole$PyBuffer_Release(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyBuffer_Release);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_click$_winconsole$byref(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf);
tmp_args_element_value_8 = var_buf;
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 115;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 115;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__1_get_buffer, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__1_get_buffer, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_8 = module_var_accessor_click$_winconsole$PyBuffer_Release(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PyBuffer_Release);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_called_value_9 = module_var_accessor_click$_winconsole$byref(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_buf);
tmp_args_element_value_10 = var_buf;
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 115;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = 115;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 110;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame)) {
        frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooo";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__1_get_buffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__1_get_buffer->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__1_get_buffer, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__1_get_buffer,
    type_description_1,
    par_obj,
    par_writable,
    var_flags,
    var_out,
    var_buf,
    var_buffer_type
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__1_get_buffer == cache_frame_frame_click$_winconsole$$$function__1_get_buffer) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__1_get_buffer);
    cache_frame_frame_click$_winconsole$$$function__1_get_buffer = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__1_get_buffer);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_flags);
CHECK_OBJECT(var_flags);
Py_DECREF(var_flags);
var_flags = NULL;
CHECK_OBJECT(var_out);
CHECK_OBJECT(var_out);
Py_DECREF(var_out);
var_out = NULL;
CHECK_OBJECT(var_buf);
CHECK_OBJECT(var_buf);
Py_DECREF(var_buf);
var_buf = NULL;
CHECK_OBJECT(var_buffer_type);
CHECK_OBJECT(var_buffer_type);
Py_DECREF(var_buffer_type);
var_buffer_type = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_flags);
var_flags = NULL;
Py_XDECREF(var_out);
var_out = NULL;
Py_XDECREF(var_buf);
var_buf = NULL;
Py_XDECREF(var_buffer_type);
var_buffer_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_writable);
Py_DECREF(par_writable);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_writable);
Py_DECREF(par_writable);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_handle = python_pars[1];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_98ed63191635bcf23aba2b50d3cc9931, module_click$_winconsole, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__2___init__->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__2___init__ = cache_frame_frame_click$_winconsole$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__2___init__);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_handle);
tmp_assattr_value_1 = par_handle;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_handle, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__2___init__,
    type_description_1,
    par_self,
    par_handle
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__2___init__ == cache_frame_frame_click$_winconsole$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__2___init__);
    cache_frame_frame_click$_winconsole$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__2___init__);

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
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_handle);
Py_DECREF(par_handle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__3_isatty(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__3_isatty;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__3_isatty = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__3_isatty)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__3_isatty);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__3_isatty == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__3_isatty = MAKE_FUNCTION_FRAME(tstate, code_objects_ac696062b0ac7729ba0612c64bc9fe3a, module_click$_winconsole, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__3_isatty->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__3_isatty = cache_frame_frame_click$_winconsole$$$function__3_isatty;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__3_isatty);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__3_isatty) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_click$_winconsole, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__3_isatty->m_frame.f_lineno = 123;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isatty);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__3_isatty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__3_isatty->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__3_isatty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__3_isatty,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__3_isatty == cache_frame_frame_click$_winconsole$$$function__3_isatty) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__3_isatty);
    cache_frame_frame_click$_winconsole$$$function__3_isatty = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__3_isatty);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_True;
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


static PyObject *impl_click$_winconsole$$$function__5_readinto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_b = python_pars[1];
PyObject *var_bytes_to_be_read = NULL;
PyObject *var_buffer = NULL;
PyObject *var_code_units_to_be_read = NULL;
PyObject *var_code_units_read = NULL;
PyObject *var_rv = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__5_readinto;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__5_readinto = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__5_readinto)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__5_readinto);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__5_readinto == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__5_readinto = MAKE_FUNCTION_FRAME(tstate, code_objects_0280314042fa7231c7ac976d456f409e, module_click$_winconsole, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__5_readinto->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__5_readinto = cache_frame_frame_click$_winconsole$$$function__5_readinto;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__5_readinto);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__5_readinto) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_b);
tmp_len_arg_1 = par_b;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_bytes_to_be_read == NULL);
var_bytes_to_be_read = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_bytes_to_be_read);
tmp_operand_value_1 = var_bytes_to_be_read;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tmp_condition_result_2_object_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_bytes_to_be_read);
tmp_mod_expr_left_1 = var_bytes_to_be_read;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_2;
tmp_tmp_condition_result_2_object_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_tmp_condition_result_2_object_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
assert(!(tmp_truth_name_1 == -1));
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_tmp_condition_result_2_object_1);
Py_DECREF(tmp_tmp_condition_result_2_object_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_a5289aba60c39e2b006782e5093df609;
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 136;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 136;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_click$_winconsole$get_buffer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_buffer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_b);
tmp_tuple_element_1 = par_b;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_5dddc5f0cd5f7b33eb7826d1f1b30398);
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 140;
tmp_assign_source_2 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_buffer == NULL);
var_buffer = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
CHECK_OBJECT(var_bytes_to_be_read);
tmp_floordiv_expr_left_1 = var_bytes_to_be_read;
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_code_units_to_be_read == NULL);
var_code_units_to_be_read = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_click$_winconsole$c_ulong(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ulong);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 142;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_code_units_read == NULL);
var_code_units_read = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_click$_winconsole$ReadConsoleW(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadConsoleW);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_click$_winconsole$HANDLE(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_handle);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 145;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buffer);
tmp_args_element_value_3 = var_buffer;
CHECK_OBJECT(var_code_units_to_be_read);
tmp_args_element_value_4 = var_code_units_to_be_read;
tmp_called_value_5 = module_var_accessor_click$_winconsole$byref(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_1);

exception_lineno = 148;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_code_units_read);
tmp_args_element_value_6 = var_code_units_read;
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 148;
tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 148;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_7 = Py_None;
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 144;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_7};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_rv == NULL);
var_rv = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_click$_winconsole$GetLastError(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetLastError);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 151;
tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_click$_winconsole$ERROR_OPERATION_ABORTED(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ERROR_OPERATION_ABORTED);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 151;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
tmp_called_instance_1 = module_var_accessor_click$_winconsole$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 153;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_sleep,
    PyTuple_GET_ITEM(mod_consts.const_tuple_float_0_1_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_rv);
tmp_operand_value_2 = var_rv;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_39ed18b85f7f2c697014499db02960ec;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
tmp_called_value_7 = module_var_accessor_click$_winconsole$GetLastError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetLastError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 155;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_click$_winconsole$$$function__5_readinto->m_frame.f_lineno = 155;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 155;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_buffer);
tmp_expression_value_2 = var_buffer;
tmp_subscript_value_1 = const_int_0;
tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = module_var_accessor_click$_winconsole$EOF(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_EOF);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 157;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_3;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_code_units_read);
tmp_expression_value_3 = var_code_units_read;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__5_readinto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__5_readinto->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__5_readinto, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__5_readinto,
    type_description_1,
    par_self,
    par_b,
    var_bytes_to_be_read,
    var_buffer,
    var_code_units_to_be_read,
    var_code_units_read,
    var_rv
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__5_readinto == cache_frame_frame_click$_winconsole$$$function__5_readinto) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__5_readinto);
    cache_frame_frame_click$_winconsole$$$function__5_readinto = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__5_readinto);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_bytes_to_be_read);
CHECK_OBJECT(var_bytes_to_be_read);
Py_DECREF(var_bytes_to_be_read);
var_bytes_to_be_read = NULL;
Py_XDECREF(var_buffer);
var_buffer = NULL;
Py_XDECREF(var_code_units_to_be_read);
var_code_units_to_be_read = NULL;
Py_XDECREF(var_code_units_read);
var_code_units_read = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_bytes_to_be_read);
var_bytes_to_be_read = NULL;
Py_XDECREF(var_buffer);
var_buffer = NULL;
Py_XDECREF(var_code_units_to_be_read);
var_code_units_to_be_read = NULL;
Py_XDECREF(var_code_units_read);
var_code_units_read = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
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
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__7__get_error_message(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_errno = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__7__get_error_message;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__7__get_error_message = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__7__get_error_message)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__7__get_error_message);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__7__get_error_message == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__7__get_error_message = MAKE_FUNCTION_FRAME(tstate, code_objects_751bd3006baf32debb308bd434211adb, module_click$_winconsole, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__7__get_error_message->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__7__get_error_message = cache_frame_frame_click$_winconsole$$$function__7__get_error_message;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__7__get_error_message);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__7__get_error_message) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_errno);
tmp_cmp_expr_left_1 = par_errno;
tmp_cmp_expr_right_1 = module_var_accessor_click$_winconsole$ERROR_SUCCESS(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ERROR_SUCCESS);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = mod_consts.const_str_plain_ERROR_SUCCESS;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_errno);
tmp_cmp_expr_left_2 = par_errno;
tmp_cmp_expr_right_2 = module_var_accessor_click$_winconsole$ERROR_NOT_ENOUGH_MEMORY(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
branch_end_1:;
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_ab9945a6700cbb65ecd1d255df4f43a0;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_errno);
tmp_format_value_1 = par_errno;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__7__get_error_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__7__get_error_message->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__7__get_error_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__7__get_error_message,
    type_description_1,
    par_errno
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__7__get_error_message == cache_frame_frame_click$_winconsole$$$function__7__get_error_message) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__7__get_error_message);
    cache_frame_frame_click$_winconsole$$$function__7__get_error_message = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__7__get_error_message);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_errno);
Py_DECREF(par_errno);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_errno);
Py_DECREF(par_errno);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__8_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_b = python_pars[1];
PyObject *var_bytes_to_be_written = NULL;
PyObject *var_buf = NULL;
PyObject *var_code_units_to_be_written = NULL;
PyObject *var_code_units_written = NULL;
PyObject *var_bytes_written = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__8_write;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__8_write = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__8_write)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__8_write);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__8_write == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__8_write = MAKE_FUNCTION_FRAME(tstate, code_objects_73e625b9928e3e3bd166b13a9246174e, module_click$_winconsole, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__8_write->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__8_write = cache_frame_frame_click$_winconsole$$$function__8_write;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__8_write);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__8_write) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_b);
tmp_len_arg_1 = par_b;
tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_bytes_to_be_written == NULL);
var_bytes_to_be_written = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_click$_winconsole$get_buffer(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_buffer);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_b);
tmp_args_element_value_1 = par_b;
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 176;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_buf == NULL);
var_buf = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(var_bytes_to_be_written);
tmp_args_element_value_2 = var_bytes_to_be_written;
tmp_args_element_value_3 = module_var_accessor_click$_winconsole$MAX_BYTES_WRITTEN(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_BYTES_WRITTEN);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 177;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_floordiv_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_floordiv_expr_right_1 = mod_consts.const_int_pos_2;
tmp_assign_source_3 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_LONG(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_code_units_to_be_written == NULL);
var_code_units_to_be_written = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_click$_winconsole$c_ulong(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ulong);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 178;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_code_units_written == NULL);
var_code_units_written = tmp_assign_source_4;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_4 = module_var_accessor_click$_winconsole$WriteConsoleW(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WriteConsoleW);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_click$_winconsole$HANDLE(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 181;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_handle);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 181;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_buf);
tmp_args_element_value_6 = var_buf;
CHECK_OBJECT(var_code_units_to_be_written);
tmp_args_element_value_7 = var_code_units_to_be_written;
tmp_called_value_6 = module_var_accessor_click$_winconsole$byref(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 184;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_code_units_written);
tmp_args_element_value_9 = var_code_units_written;
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 184;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 184;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = Py_None;
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_10};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
tmp_mult_expr_left_1 = mod_consts.const_int_pos_2;
CHECK_OBJECT(var_code_units_written);
tmp_expression_value_2 = var_code_units_written;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_value);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_bytes_written == NULL);
var_bytes_written = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
bool tmp_tmp_and_right_value_1_cbool_1;
CHECK_OBJECT(var_bytes_written);
tmp_cmp_expr_left_1 = var_bytes_written;
tmp_cmp_expr_right_1 = const_int_0;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_bytes_to_be_written);
tmp_cmp_expr_left_2 = var_bytes_to_be_written;
tmp_cmp_expr_right_2 = 0;
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__get_error_message);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = module_var_accessor_click$_winconsole$GetLastError(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetLastError);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 190;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 190;
tmp_args_element_value_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 190;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 190;
tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__8_write->m_frame.f_lineno = 190;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OSError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 190;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__8_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__8_write->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__8_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__8_write,
    type_description_1,
    par_self,
    par_b,
    var_bytes_to_be_written,
    var_buf,
    var_code_units_to_be_written,
    var_code_units_written,
    var_bytes_written
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__8_write == cache_frame_frame_click$_winconsole$$$function__8_write) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__8_write);
    cache_frame_frame_click$_winconsole$$$function__8_write = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__8_write);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_bytes_written);
tmp_return_value = var_bytes_written;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_bytes_to_be_written);
CHECK_OBJECT(var_bytes_to_be_written);
Py_DECREF(var_bytes_to_be_written);
var_bytes_to_be_written = NULL;
CHECK_OBJECT(var_buf);
CHECK_OBJECT(var_buf);
Py_DECREF(var_buf);
var_buf = NULL;
CHECK_OBJECT(var_code_units_to_be_written);
CHECK_OBJECT(var_code_units_to_be_written);
Py_DECREF(var_code_units_to_be_written);
var_code_units_to_be_written = NULL;
CHECK_OBJECT(var_code_units_written);
CHECK_OBJECT(var_code_units_written);
Py_DECREF(var_code_units_written);
var_code_units_written = NULL;
CHECK_OBJECT(var_bytes_written);
CHECK_OBJECT(var_bytes_written);
Py_DECREF(var_bytes_written);
var_bytes_written = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_bytes_to_be_written);
var_bytes_to_be_written = NULL;
Py_XDECREF(var_buf);
var_buf = NULL;
Py_XDECREF(var_code_units_to_be_written);
var_code_units_to_be_written = NULL;
Py_XDECREF(var_code_units_written);
var_code_units_written = NULL;
Py_XDECREF(var_bytes_written);
var_bytes_written = NULL;
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
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text_stream = python_pars[1];
PyObject *par_byte_stream = python_pars[2];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_876cba3192785459bb7a7bbdb8c125b2, module_click$_winconsole, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__9___init__->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__9___init__ = cache_frame_frame_click$_winconsole$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__9___init__);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__9___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_text_stream);
tmp_assattr_value_1 = par_text_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__text_stream, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_byte_stream);
tmp_assattr_value_2 = par_byte_stream;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_buffer, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__9___init__,
    type_description_1,
    par_self,
    par_text_stream,
    par_byte_stream
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__9___init__ == cache_frame_frame_click$_winconsole$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__9___init__);
    cache_frame_frame_click$_winconsole$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__9___init__);

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
CHECK_OBJECT(par_text_stream);
Py_DECREF(par_text_stream);
CHECK_OBJECT(par_byte_stream);
Py_DECREF(par_byte_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_text_stream);
Py_DECREF(par_text_stream);
CHECK_OBJECT(par_byte_stream);
Py_DECREF(par_byte_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__10_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__10_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__10_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__10_name)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__10_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__10_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__10_name = MAKE_FUNCTION_FRAME(tstate, code_objects_4465e257846bd34fa9550bfcc2926a0c, module_click$_winconsole, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__10_name->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__10_name = cache_frame_frame_click$_winconsole$$$function__10_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__10_name);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__10_name) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_buffer);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__10_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__10_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__10_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__10_name,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__10_name == cache_frame_frame_click$_winconsole$$$function__10_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__10_name);
    cache_frame_frame_click$_winconsole$$$function__10_name = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__10_name);

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


static PyObject *impl_click$_winconsole$$$function__11_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_x = python_pars[1];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__11_write;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__11_write = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__11_write)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__11_write);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__11_write == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__11_write = MAKE_FUNCTION_FRAME(tstate, code_objects_a215e93b39f50c4eb578f8ddaa5377d2, module_click$_winconsole, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__11_write->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__11_write = cache_frame_frame_click$_winconsole$$$function__11_write;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__11_write);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__11_write) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_x);
tmp_isinstance_inst_1 = par_x;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__text_stream);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_click$_winconsole$$$function__11_write->m_frame.f_lineno = 205;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_write, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_click$_winconsole$$$function__11_write->m_frame.f_lineno = 207;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_flush);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__11_write, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__11_write, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 206;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_winconsole$$$function__11_write->m_frame)) {
        frame_frame_click$_winconsole$$$function__11_write->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_no_2:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_buffer);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_2 = par_x;
frame_frame_click$_winconsole$$$function__11_write->m_frame.f_lineno = 210;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_write, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__11_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__11_write->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__11_write, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__11_write,
    type_description_1,
    par_self,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__11_write == cache_frame_frame_click$_winconsole$$$function__11_write) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__11_write);
    cache_frame_frame_click$_winconsole$$$function__11_write = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__11_write);

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
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__12_writelines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_lines = python_pars[1];
PyObject *var_line = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__12_writelines;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__12_writelines = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__12_writelines)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__12_writelines);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__12_writelines == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__12_writelines = MAKE_FUNCTION_FRAME(tstate, code_objects_c1c1ac424c6982e3cd12c48144f766e7, module_click$_winconsole, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__12_writelines->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__12_writelines = cache_frame_frame_click$_winconsole$$$function__12_writelines;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__12_writelines);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__12_writelines) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_lines);
tmp_iter_arg_1 = par_lines;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 213;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_line;
    var_line = tmp_assign_source_3;
    Py_INCREF(var_line);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 214;
type_description_1 = "ooo";
    goto try_except_handler_2;
}

tmp_called_instance_1 = par_self;
CHECK_OBJECT(var_line);
tmp_args_element_value_1 = var_line;
frame_frame_click$_winconsole$$$function__12_writelines->m_frame.f_lineno = 214;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_write, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__12_writelines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__12_writelines->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__12_writelines, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__12_writelines,
    type_description_1,
    par_self,
    par_lines,
    var_line
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__12_writelines == cache_frame_frame_click$_winconsole$$$function__12_writelines) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__12_writelines);
    cache_frame_frame_click$_winconsole$$$function__12_writelines = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__12_writelines);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_line);
var_line = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_line);
var_line = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__13___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__13___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__13___getattr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__13___getattr__)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__13___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__13___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__13___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a4ce0c9f51eaad39315b4b346084a738, module_click$_winconsole, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__13___getattr__->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__13___getattr__ = cache_frame_frame_click$_winconsole$$$function__13___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__13___getattr__);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__13___getattr__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__text_stream);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_name);
tmp_name_value_1 = par_name;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, NULL);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__13___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__13___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__13___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__13___getattr__,
    type_description_1,
    par_self,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__13___getattr__ == cache_frame_frame_click$_winconsole$$$function__13___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__13___getattr__);
    cache_frame_frame_click$_winconsole$$$function__13___getattr__ = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__13___getattr__);

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
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__14_isatty(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__14_isatty;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__14_isatty = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__14_isatty)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__14_isatty);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__14_isatty == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__14_isatty = MAKE_FUNCTION_FRAME(tstate, code_objects_aaaaa102fda1961872f3faf640d8e81f, module_click$_winconsole, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__14_isatty->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__14_isatty = cache_frame_frame_click$_winconsole$$$function__14_isatty;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__14_isatty);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__14_isatty) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_buffer);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__14_isatty->m_frame.f_lineno = 220;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isatty);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__14_isatty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__14_isatty->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__14_isatty, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__14_isatty,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__14_isatty == cache_frame_frame_click$_winconsole$$$function__14_isatty) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__14_isatty);
    cache_frame_frame_click$_winconsole$$$function__14_isatty = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__14_isatty);

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


static PyObject *impl_click$_winconsole$$$function__15___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__15___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__15___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__15___repr__)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__15___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__15___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__15___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6ea54b6e5b639d63568f9cf56403c643, module_click$_winconsole, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__15___repr__->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__15___repr__ = cache_frame_frame_click$_winconsole$$$function__15___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__15___repr__);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__15___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_5da9eba985174e468ed733e33e2d3a69;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_name);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a8d23351e1fbedce677697382a3217bc;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_encoding);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__15___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__15___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__15___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__15___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__15___repr__ == cache_frame_frame_click$_winconsole$$$function__15___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__15___repr__);
    cache_frame_frame_click$_winconsole$$$function__15___repr__ = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__15___repr__);

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


static PyObject *impl_click$_winconsole$$$function__16__get_text_stdin(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_buffer_stream = python_pars[0];
PyObject *var_text_stream = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__16__get_text_stdin;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin = MAKE_FUNCTION_FRAME(tstate, code_objects_657d3d69dd1978355cf47a1d110f38ce, module_click$_winconsole, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__16__get_text_stdin = cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__16__get_text_stdin);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__16__get_text_stdin) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_click$_winconsole$_NonClosingTextIOWrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NonClosingTextIOWrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_BufferedReader);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_click$_winconsole$_WindowsConsoleReader(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WindowsConsoleReader);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_click$_winconsole$STDIN_HANDLE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_STDIN_HANDLE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__16__get_text_stdin->m_frame.f_lineno = 228;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__16__get_text_stdin->m_frame.f_lineno = 228;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a166d0e20cf23102cf939cef62c22331;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_strict;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_ab4d59562ee932cf3623ecfa88312f22);
frame_frame_click$_winconsole$$$function__16__get_text_stdin->m_frame.f_lineno = 227;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_text_stream == NULL);
var_text_stream = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_cast);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_3 == NULL));
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_TextIO);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 233;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_click$_winconsole$ConsoleStream(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConsoleStream);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 233;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_text_stream);
tmp_args_element_value_5 = var_text_stream;
CHECK_OBJECT(par_buffer_stream);
tmp_args_element_value_6 = par_buffer_stream;
frame_frame_click$_winconsole$$$function__16__get_text_stdin->m_frame.f_lineno = 233;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 233;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__16__get_text_stdin->m_frame.f_lineno = 233;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__16__get_text_stdin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__16__get_text_stdin->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__16__get_text_stdin, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__16__get_text_stdin,
    type_description_1,
    par_buffer_stream,
    var_text_stream
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__16__get_text_stdin == cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin);
    cache_frame_frame_click$_winconsole$$$function__16__get_text_stdin = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__16__get_text_stdin);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_text_stream);
CHECK_OBJECT(var_text_stream);
Py_DECREF(var_text_stream);
var_text_stream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_text_stream);
var_text_stream = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_buffer_stream);
Py_DECREF(par_buffer_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_buffer_stream);
Py_DECREF(par_buffer_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__17__get_text_stdout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_buffer_stream = python_pars[0];
PyObject *var_text_stream = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__17__get_text_stdout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout = MAKE_FUNCTION_FRAME(tstate, code_objects_2cdf19dc02245de9aa676cfc8711a822, module_click$_winconsole, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__17__get_text_stdout = cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__17__get_text_stdout);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__17__get_text_stdout) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_click$_winconsole$_NonClosingTextIOWrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NonClosingTextIOWrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 237;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_BufferedWriter);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_click$_winconsole$_WindowsConsoleWriter(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WindowsConsoleWriter);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 238;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_click$_winconsole$STDOUT_HANDLE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_STDOUT_HANDLE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 238;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__17__get_text_stdout->m_frame.f_lineno = 238;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 238;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__17__get_text_stdout->m_frame.f_lineno = 238;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a166d0e20cf23102cf939cef62c22331;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_strict;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_ab4d59562ee932cf3623ecfa88312f22);
frame_frame_click$_winconsole$$$function__17__get_text_stdout->m_frame.f_lineno = 237;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_text_stream == NULL);
var_text_stream = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_cast);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_3 == NULL));
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_TextIO);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 243;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_click$_winconsole$ConsoleStream(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConsoleStream);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 243;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_text_stream);
tmp_args_element_value_5 = var_text_stream;
CHECK_OBJECT(par_buffer_stream);
tmp_args_element_value_6 = par_buffer_stream;
frame_frame_click$_winconsole$$$function__17__get_text_stdout->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 243;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__17__get_text_stdout->m_frame.f_lineno = 243;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__17__get_text_stdout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__17__get_text_stdout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__17__get_text_stdout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__17__get_text_stdout,
    type_description_1,
    par_buffer_stream,
    var_text_stream
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__17__get_text_stdout == cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout);
    cache_frame_frame_click$_winconsole$$$function__17__get_text_stdout = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__17__get_text_stdout);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_text_stream);
CHECK_OBJECT(var_text_stream);
Py_DECREF(var_text_stream);
var_text_stream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_text_stream);
var_text_stream = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_buffer_stream);
Py_DECREF(par_buffer_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_buffer_stream);
Py_DECREF(par_buffer_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__18__get_text_stderr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_buffer_stream = python_pars[0];
PyObject *var_text_stream = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__18__get_text_stderr;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr = MAKE_FUNCTION_FRAME(tstate, code_objects_c8bd400655e79f22af4d36b30e286ca7, module_click$_winconsole, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__18__get_text_stderr = cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__18__get_text_stderr);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__18__get_text_stderr) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_click$_winconsole$_NonClosingTextIOWrapper(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NonClosingTextIOWrapper);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_BufferedWriter);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_click$_winconsole$_WindowsConsoleWriter(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WindowsConsoleWriter);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_click$_winconsole$STDERR_HANDLE(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_STDERR_HANDLE);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__18__get_text_stderr->m_frame.f_lineno = 248;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__18__get_text_stderr->m_frame.f_lineno = 248;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a166d0e20cf23102cf939cef62c22331;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_plain_strict;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_ab4d59562ee932cf3623ecfa88312f22);
frame_frame_click$_winconsole$$$function__18__get_text_stderr->m_frame.f_lineno = 247;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_text_stream == NULL);
var_text_stream = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_cast);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_3 == NULL));
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_TextIO);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = module_var_accessor_click$_winconsole$ConsoleStream(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ConsoleStream);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_text_stream);
tmp_args_element_value_5 = var_text_stream;
CHECK_OBJECT(par_buffer_stream);
tmp_args_element_value_6 = par_buffer_stream;
frame_frame_click$_winconsole$$$function__18__get_text_stderr->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 253;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__18__get_text_stderr->m_frame.f_lineno = 253;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__18__get_text_stderr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__18__get_text_stderr->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__18__get_text_stderr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__18__get_text_stderr,
    type_description_1,
    par_buffer_stream,
    var_text_stream
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__18__get_text_stderr == cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr);
    cache_frame_frame_click$_winconsole$$$function__18__get_text_stderr = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__18__get_text_stderr);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_text_stream);
CHECK_OBJECT(var_text_stream);
Py_DECREF(var_text_stream);
var_text_stream = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_text_stream);
var_text_stream = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_buffer_stream);
Py_DECREF(par_buffer_stream);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_buffer_stream);
Py_DECREF(par_buffer_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__19__is_console(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_f = python_pars[0];
PyObject *var_fileno = NULL;
PyObject *var_handle = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__19__is_console;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__19__is_console = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__19__is_console)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__19__is_console);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__19__is_console == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__19__is_console = MAKE_FUNCTION_FRAME(tstate, code_objects_28a6738e6a6cd239449f917d7fa2ffb3, module_click$_winconsole, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__19__is_console->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__19__is_console = cache_frame_frame_click$_winconsole$$$function__19__is_console;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__19__is_console);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__19__is_console) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_f);
tmp_expression_value_1 = par_f;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain_fileno);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_f);
tmp_called_instance_1 = par_f;
frame_frame_click$_winconsole$$$function__19__is_console->m_frame.f_lineno = 268;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_fileno);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_fileno == NULL);
var_fileno = tmp_assign_source_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__19__is_console, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__19__is_console, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_1 = PyExc_OSError;
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_expression_value_2 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_2 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_UnsupportedOperation);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 267;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_winconsole$$$function__19__is_console->m_frame)) {
        frame_frame_click$_winconsole$$$function__19__is_console->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_end_2:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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
try_end_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
tmp_called_instance_2 = module_var_accessor_click$_winconsole$msvcrt(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msvcrt);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_fileno);
tmp_args_element_value_1 = var_fileno;
frame_frame_click$_winconsole$$$function__19__is_console->m_frame.f_lineno = 272;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_osfhandle, tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_handle == NULL);
var_handle = tmp_assign_source_2;
}
{
PyObject *tmp_value_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
tmp_called_value_1 = module_var_accessor_click$_winconsole$GetConsoleMode(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetConsoleMode);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_handle);
tmp_args_element_value_2 = var_handle;
tmp_called_value_2 = module_var_accessor_click$_winconsole$byref(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_click$_winconsole$DWORD(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__19__is_console->m_frame.f_lineno = 273;
tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__19__is_console->m_frame.f_lineno = 273;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__19__is_console->m_frame.f_lineno = 273;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_value_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__19__is_console, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__19__is_console->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__19__is_console, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__19__is_console,
    type_description_1,
    par_f,
    var_fileno,
    var_handle
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__19__is_console == cache_frame_frame_click$_winconsole$$$function__19__is_console) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__19__is_console);
    cache_frame_frame_click$_winconsole$$$function__19__is_console = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__19__is_console);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_fileno);
var_fileno = NULL;
Py_XDECREF(var_handle);
var_handle = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_fileno);
var_fileno = NULL;
Py_XDECREF(var_handle);
var_handle = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_f);
Py_DECREF(par_f);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_f);
Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_winconsole$$$function__20__get_windows_console_stream(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_f = python_pars[0];
PyObject *par_encoding = python_pars[1];
PyObject *par_errors = python_pars[2];
PyObject *var_func = NULL;
PyObject *var_b = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$function__20__get_windows_console_stream;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream)) {
    Py_XDECREF(cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream = MAKE_FUNCTION_FRAME(tstate, code_objects_7091b516dc0d0770245c001bdaeb4c23, module_click$_winconsole, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream->m_type_description == NULL);
frame_frame_click$_winconsole$$$function__20__get_windows_console_stream = cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$function__20__get_windows_console_stream);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$function__20__get_windows_console_stream) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
int tmp_or_left_truth_3;
bool tmp_or_left_value_3;
bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_cmp_expr_left_1 = module_var_accessor_click$_winconsole$get_buffer(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_buffer);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 280;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_encoding);
tmp_cmp_expr_left_2 = par_encoding;
tmp_cmp_expr_right_2 = mod_consts.const_frozenset_e360416cbe5770449825a7ca35349f9e;
tmp_res = PySet_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_errors);
tmp_cmp_expr_left_3 = par_errors;
tmp_cmp_expr_right_3 = mod_consts.const_frozenset_513212770113a25ad2f15ff4faa2766e;
tmp_res = PySet_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
tmp_called_value_1 = module_var_accessor_click$_winconsole$_is_console(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_console);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 283;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_f);
tmp_args_element_value_1 = par_f;
frame_frame_click$_winconsole$$$function__20__get_windows_console_stream->m_frame.f_lineno = 283;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = (tmp_res == 0) ? true : false;
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_click$_winconsole$_stream_factories(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__stream_factories);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_f);
tmp_called_instance_1 = par_f;
frame_frame_click$_winconsole$$$function__20__get_windows_console_stream->m_frame.f_lineno = 287;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_fileno);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 287;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole$$$function__20__get_windows_console_stream->m_frame.f_lineno = 287;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_func);
tmp_cmp_expr_left_4 = var_func;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_f);
tmp_expression_value_2 = par_f;
tmp_name_value_1 = mod_consts.const_str_plain_buffer;
tmp_default_value_1 = Py_None;
tmp_assign_source_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_2, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_b == NULL);
var_b = tmp_assign_source_2;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_b);
tmp_cmp_expr_left_5 = var_b;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_func);
tmp_called_value_3 = var_func;
CHECK_OBJECT(var_b);
tmp_args_element_value_3 = var_b;
frame_frame_click$_winconsole$$$function__20__get_windows_console_stream->m_frame.f_lineno = 296;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$function__20__get_windows_console_stream, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$function__20__get_windows_console_stream->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$function__20__get_windows_console_stream, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$function__20__get_windows_console_stream,
    type_description_1,
    par_f,
    par_encoding,
    par_errors,
    var_func,
    var_b
);


// Release cached frame if used for exception.
if (frame_frame_click$_winconsole$$$function__20__get_windows_console_stream == cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream);
    cache_frame_frame_click$_winconsole$$$function__20__get_windows_console_stream = NULL;
}

assertFrameObject(frame_frame_click$_winconsole$$$function__20__get_windows_console_stream);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_func);
var_func = NULL;
Py_XDECREF(var_b);
var_b = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_func);
var_func = NULL;
Py_XDECREF(var_b);
var_b = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_f);
Py_DECREF(par_f);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_f);
Py_DECREF(par_f);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__10_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__10_name,
        const_str_plain_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_693d786fed73f41412a604727b626dfe,
#endif
        code_objects_4465e257846bd34fa9550bfcc2926a0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__11_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__11_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_19bbdcc778eb8d8d8ebbe096aaf84352,
#endif
        code_objects_a215e93b39f50c4eb578f8ddaa5377d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__12_writelines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__12_writelines,
        mod_consts.const_str_plain_writelines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6232002a855459ce023be79e3fa57e81,
#endif
        code_objects_c1c1ac424c6982e3cd12c48144f766e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__13___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__13___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_90c684659b8dcf698dd3ea5d493004d7,
#endif
        code_objects_a4ce0c9f51eaad39315b4b346084a738,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__14_isatty(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__14_isatty,
        mod_consts.const_str_plain_isatty,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_700b30dbcbc8a8b81b672c270e059098,
#endif
        code_objects_aaaaa102fda1961872f3faf640d8e81f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__15___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__15___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ad404b9651108550a35deb70c3521fae,
#endif
        code_objects_6ea54b6e5b639d63568f9cf56403c643,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__16__get_text_stdin(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__16__get_text_stdin,
        mod_consts.const_str_plain__get_text_stdin,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_657d3d69dd1978355cf47a1d110f38ce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__17__get_text_stdout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__17__get_text_stdout,
        mod_consts.const_str_plain__get_text_stdout,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2cdf19dc02245de9aa676cfc8711a822,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__18__get_text_stderr(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__18__get_text_stderr,
        mod_consts.const_str_plain__get_text_stderr,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c8bd400655e79f22af4d36b30e286ca7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__19__is_console(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__19__is_console,
        mod_consts.const_str_plain__is_console,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_28a6738e6a6cd239449f917d7fa2ffb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__1_get_buffer(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__1_get_buffer,
        mod_consts.const_str_plain_get_buffer,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_aab5d485f34b46dd774009b8c2526f10,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__20__get_windows_console_stream(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__20__get_windows_console_stream,
        mod_consts.const_str_plain__get_windows_console_stream,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7091b516dc0d0770245c001bdaeb4c23,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__2___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3946e80b9f89b4e115bd745a0a7ef9b2,
#endif
        code_objects_98ed63191635bcf23aba2b50d3cc9931,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__3_isatty(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__3_isatty,
        mod_consts.const_str_plain_isatty,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_64b91a6eb7b887340038a5c763753d16,
#endif
        code_objects_ac696062b0ac7729ba0612c64bc9fe3a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__4_readable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_readable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6ac834a51492e48d6e0940b39ef78c74,
#endif
        code_objects_bdebf0e5cf2da2b8e5e2f4f54190de7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__5_readinto(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__5_readinto,
        mod_consts.const_str_plain_readinto,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2c57ea3337b076080cc9b1406b38fad5,
#endif
        code_objects_0280314042fa7231c7ac976d456f409e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__6_writable(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_writable,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_047588c4bbb57001b18de8ea6d1f58a3,
#endif
        code_objects_9ee4b2786c642afae980cafa2aee82d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnTrue(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__7__get_error_message(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__7__get_error_message,
        mod_consts.const_str_plain__get_error_message,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_47cfa8f4e4da2e8978f44f2c9ec57b22,
#endif
        code_objects_751bd3006baf32debb308bd434211adb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__8_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__8_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6448f3e15532b8ac319458ab40a1705b,
#endif
        code_objects_73e625b9928e3e3bd166b13a9246174e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_winconsole$$$function__9___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_winconsole$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4a116e916b4b1f7ac63739253db2722c,
#endif
        code_objects_876cba3192785459bb7a7bbdb8c125b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_winconsole,
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

static function_impl_code const function_table_click$_winconsole[] = {
impl_click$_winconsole$$$function__1_get_buffer,
impl_click$_winconsole$$$function__2___init__,
impl_click$_winconsole$$$function__3_isatty,
impl_click$_winconsole$$$function__5_readinto,
impl_click$_winconsole$$$function__7__get_error_message,
impl_click$_winconsole$$$function__8_write,
impl_click$_winconsole$$$function__9___init__,
impl_click$_winconsole$$$function__10_name,
impl_click$_winconsole$$$function__11_write,
impl_click$_winconsole$$$function__12_writelines,
impl_click$_winconsole$$$function__13___getattr__,
impl_click$_winconsole$$$function__14_isatty,
impl_click$_winconsole$$$function__15___repr__,
impl_click$_winconsole$$$function__16__get_text_stdin,
impl_click$_winconsole$$$function__17__get_text_stdout,
impl_click$_winconsole$$$function__18__get_text_stderr,
impl_click$_winconsole$$$function__19__is_console,
impl_click$_winconsole$$$function__20__get_windows_console_stream,
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

    return Nuitka_Function_GetFunctionState(function, function_table_click$_winconsole);
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
        module_click$_winconsole,
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
        function_table_click$_winconsole,
        sizeof(function_table_click$_winconsole) / sizeof(function_impl_code)
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
static char const *module_full_name = "click._winconsole";
#endif

// Internal entry point for module code.
PyObject *module_code_click$_winconsole(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("click$_winconsole");

    // Store the module for future use.
    module_click$_winconsole = module;

    moduledict_click$_winconsole = MODULE_DICT(module_click$_winconsole);

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
        PRINT_STRING("click$_winconsole: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("click$_winconsole: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("click$_winconsole: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "click._winconsole" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initclick$_winconsole\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click$_winconsole,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$_winconsole,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$_winconsole,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_click$_winconsole,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_click$_winconsole,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$_winconsole);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_click$_winconsole);
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

        UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_click$_winconsole;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_click$_winconsole$$$class__1_Py_buffer_87 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$class__1_Py_buffer_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118 = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_click$_winconsole$$$class__3__WindowsConsoleReader_127 = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162 = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_click$_winconsole$$$class__5_ConsoleStream_194 = NULL;
struct Nuitka_FrameObject *frame_frame_click$_winconsole$$$class__5_ConsoleStream_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_click$_winconsole = MAKE_MODULE_FRAME(code_objects_f96674d111bb2cb6ef1cbc73c5f3d574, module_click$_winconsole);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole);
assert(Py_REFCNT(frame_frame_click$_winconsole) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_click$_winconsole$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_click$_winconsole$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_winconsole;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_winconsole->m_frame.f_lineno = 11;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_abc,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_abc);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_cabc, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_io, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_2 = (PyObject *)moduledict_click$_winconsole;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_click$_winconsole->m_frame.f_lineno = 14;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_t, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_Array,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Array);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Array, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_byref,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_byref);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_byref, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
tmp_import_name_from_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_4 == NULL));
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_c_char,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_c_char);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
tmp_import_name_from_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_5 == NULL));
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_c_char_p,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_c_char_p);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_char_p, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
tmp_import_name_from_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_6 == NULL));
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_c_int,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_c_int);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_int, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
tmp_import_name_from_7 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_7 == NULL));
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_c_ssize_t,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_c_ssize_t);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_t, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
tmp_import_name_from_8 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_8 == NULL));
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_c_ulong,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_c_ulong);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ulong, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
tmp_import_name_from_9 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_9 == NULL));
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_c_void_p,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_c_void_p);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_void_p, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
tmp_import_name_from_10 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_10 == NULL));
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_POINTER,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_POINTER);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_POINTER, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_11;
tmp_import_name_from_11 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_11 == NULL));
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_py_object,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_py_object);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_py_object, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
tmp_import_name_from_12 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_12 == NULL));
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_Structure,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Structure);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_13;
tmp_import_name_from_13 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_import_name_from_13 == NULL));
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_DWORD,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_DWORD);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_14;
tmp_import_name_from_14 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_import_name_from_14 == NULL));
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_HANDLE,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_HANDLE);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_15;
tmp_import_name_from_15 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_import_name_from_15 == NULL));
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_LPCWSTR,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_LPCWSTR);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPCWSTR, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
tmp_import_name_from_16 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_import_name_from_16 == NULL));
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_LPWSTR,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_LPWSTR);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LPWSTR, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_3 = (PyObject *)moduledict_click$_winconsole;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__NonClosingTextIOWrapper_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_click$_winconsole->m_frame.f_lineno = 32;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain__NonClosingTextIOWrapper,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain__NonClosingTextIOWrapper);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__NonClosingTextIOWrapper, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_msvcrt;
tmp_globals_arg_value_4 = (PyObject *)moduledict_click$_winconsole;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_click$_winconsole->m_frame.f_lineno = 35;
tmp_assign_source_27 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_18;
tmp_import_name_from_18 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_18 == NULL));
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_windll,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_windll);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_windll, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
tmp_import_name_from_19 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_19 == NULL));
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_WINFUNCTYPE,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_WINFUNCTYPE);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WINFUNCTYPE, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_click$_winconsole$POINTER(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POINTER);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_click$_winconsole$c_ssize_t(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ssize_t);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 39;
tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_c_ssize_p, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_click$_winconsole$windll(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_assign_source_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_kernel32);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_kernel32, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_click$_winconsole$kernel32(tstate);
assert(!(tmp_expression_value_2 == NULL));
tmp_assign_source_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GetStdHandle);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_click$_winconsole$kernel32(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto frame_exception_exit_1;
}
tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_ReadConsoleW);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ReadConsoleW, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_click$_winconsole$kernel32(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_WriteConsoleW);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_WriteConsoleW, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_click$_winconsole$kernel32(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_GetConsoleMode);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetConsoleMode, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = module_var_accessor_click$_winconsole$kernel32(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_kernel32);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_GetLastError);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetLastError, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_tuple_element_1;
tmp_called_value_3 = module_var_accessor_click$_winconsole$WINFUNCTYPE(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WINFUNCTYPE);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_click$_winconsole$LPWSTR(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPWSTR);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 47;
tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_GetCommandLineW;
tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
tmp_expression_value_7 = module_var_accessor_click$_winconsole$windll(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_kernel32);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_3, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_click$_winconsole->m_frame.f_lineno = 47;
tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCommandLineW, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_tuple_element_2;
tmp_called_value_5 = module_var_accessor_click$_winconsole$WINFUNCTYPE(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WINFUNCTYPE);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = module_var_accessor_click$_winconsole$POINTER(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POINTER);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = module_var_accessor_click$_winconsole$LPWSTR(tstate);
if (unlikely(tmp_args_element_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPWSTR);
}

if (tmp_args_element_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 48;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = module_var_accessor_click$_winconsole$LPCWSTR(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LPCWSTR);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = module_var_accessor_click$_winconsole$POINTER(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_POINTER);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_args_element_value_8 = module_var_accessor_click$_winconsole$c_int(tstate);
if (unlikely(tmp_args_element_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_int);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 48;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 48;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_called_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_CommandLineToArgvW;
tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_2);
tmp_expression_value_8 = module_var_accessor_click$_winconsole$windll(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_shell32);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_element_value_9, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_9);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
frame_frame_click$_winconsole->m_frame.f_lineno = 48;
tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_CommandLineToArgvW, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_tuple_element_3;
tmp_called_value_9 = module_var_accessor_click$_winconsole$WINFUNCTYPE(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WINFUNCTYPE);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_args_element_value_10 = module_var_accessor_click$_winconsole$c_void_p(tstate);
if (unlikely(tmp_args_element_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_args_element_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_args_element_value_11 = module_var_accessor_click$_winconsole$c_void_p(tstate);
if (unlikely(tmp_args_element_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_args_element_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 51;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_called_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_LocalFree;
tmp_args_element_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM0(tmp_args_element_value_12, 0, tmp_tuple_element_3);
tmp_expression_value_9 = module_var_accessor_click$_winconsole$windll(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_windll);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_kernel32);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_args_element_value_12, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_args_element_value_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
frame_frame_click$_winconsole->m_frame.f_lineno = 51;
tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_LocalFree, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_10;
tmp_called_value_10 = module_var_accessor_click$_winconsole$GetStdHandle(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetStdHandle);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 53;
tmp_assign_source_40 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_int_neg_10_tuple);

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDIN_HANDLE, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_11;
tmp_called_value_11 = module_var_accessor_click$_winconsole$GetStdHandle(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetStdHandle);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 54;
tmp_assign_source_41 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_11, mod_consts.const_tuple_int_neg_11_tuple);

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDOUT_HANDLE, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_12;
tmp_called_value_12 = module_var_accessor_click$_winconsole$GetStdHandle(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetStdHandle);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto frame_exception_exit_1;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 55;
tmp_assign_source_42 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_12, mod_consts.const_tuple_int_neg_12_tuple);

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDERR_HANDLE, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = const_int_0;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_SIMPLE, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBUF_WRITABLE, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = const_int_0;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_SUCCESS, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = mod_consts.const_int_pos_8;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_NOT_ENOUGH_MEMORY, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = mod_consts.const_int_pos_995;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ERROR_OPERATION_ABORTED, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = const_int_0;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDIN_FILENO, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDOUT_FILENO, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_STDERR_FILENO, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = mod_consts.const_bytes_chr_26;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_EOF, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = mod_consts.const_int_pos_32767;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_MAX_BYTES_WRITTEN, tmp_assign_source_52);
}
{
nuitka_bool tmp_assign_source_53;
tmp_assign_source_53 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_53;
}
// Tried code:
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_20;
tmp_import_name_from_20 = IMPORT_HARD_CTYPES();
assert(!(tmp_import_name_from_20 == NULL));
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_click$_winconsole,
        mod_consts.const_str_plain_pythonapi,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_pythonapi);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_pythonapi, tmp_assign_source_54);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_55;
tmp_assign_source_55 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_55;
}
// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ImportError;
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
PyObject *tmp_assign_source_56;
tmp_assign_source_56 = Py_None;
UPDATE_STRING_DICT0(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_get_buffer, tmp_assign_source_56);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 79;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_winconsole->m_frame)) {
        frame_frame_click$_winconsole->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
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
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_click$_winconsole$Structure(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto try_except_handler_3;
}
tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_4);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_58 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_10 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_Py_buffer;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 87;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_5, tmp_default_value_1);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_3;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 87;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 87;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_62;
}
branch_end_3:;
{
PyObject *tmp_assign_source_63;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_click$_winconsole$$$class__1_Py_buffer_87 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_Py_buffer;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_87;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_5;
}
frame_frame_click$_winconsole$$$class__1_Py_buffer_2 = MAKE_CLASS_FRAME(tstate, code_objects_e6d0230eaad25a151a1d1c806af93bb3, module_click$_winconsole, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$class__1_Py_buffer_2);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$class__1_Py_buffer_2) == 2);

// Framed code:
{
PyObject *tmp_list_element_1;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = mod_consts.const_str_plain_buf;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_void_p);

if (tmp_tuple_element_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_7 = module_var_accessor_click$_winconsole$c_void_p(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_tuple_element_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_list_element_1);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 11);
{
PyObject *tmp_tuple_element_8;
PyObject *tmp_tuple_element_9;
PyObject *tmp_tuple_element_10;
PyObject *tmp_tuple_element_11;
PyObject *tmp_tuple_element_12;
PyObject *tmp_tuple_element_13;
PyObject *tmp_tuple_element_14;
PyObject *tmp_tuple_element_15;
PyObject *tmp_tuple_element_16;
PyObject *tmp_tuple_element_17;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
tmp_tuple_element_8 = mod_consts.const_str_plain_obj;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_py_object);

if (tmp_tuple_element_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_8 = module_var_accessor_click$_winconsole$py_object(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_py_object);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_tuple_element_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_8);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_1);
tmp_tuple_element_9 = const_str_plain_len;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_ssize_t);

if (tmp_tuple_element_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_9 = module_var_accessor_click$_winconsole$c_ssize_t(tstate);
if (unlikely(tmp_tuple_element_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ssize_t);
}

if (tmp_tuple_element_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_2 = "o";
    goto tuple_build_exception_7;
}
        Py_INCREF(tmp_tuple_element_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_7;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_9);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_1);
tmp_tuple_element_10 = mod_consts.const_str_plain_itemsize;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_ssize_t);

if (tmp_tuple_element_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_10 = module_var_accessor_click$_winconsole$c_ssize_t(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ssize_t);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_2 = "o";
    goto tuple_build_exception_8;
}
        Py_INCREF(tmp_tuple_element_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_8;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_10);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_1);
tmp_tuple_element_11 = mod_consts.const_str_plain_readonly;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_int);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = module_var_accessor_click$_winconsole$c_int(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_int);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_9;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_11);
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_1);
tmp_tuple_element_12 = mod_consts.const_str_plain_ndim;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_int);

if (tmp_tuple_element_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_12 = module_var_accessor_click$_winconsole$c_int(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_int);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_tuple_element_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_12);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_1);
tmp_tuple_element_13 = const_str_plain_format;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_char_p);

if (tmp_tuple_element_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_13 = module_var_accessor_click$_winconsole$c_char_p(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_char_p);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
        Py_INCREF(tmp_tuple_element_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_11;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
PyList_SET_ITEM(tmp_dictset_value, 6, tmp_list_element_1);
tmp_tuple_element_14 = mod_consts.const_str_plain_shape;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_ssize_p);

if (tmp_tuple_element_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_14 = module_var_accessor_click$_winconsole$c_ssize_p(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ssize_p);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
        Py_INCREF(tmp_tuple_element_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_12;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
PyList_SET_ITEM(tmp_dictset_value, 7, tmp_list_element_1);
tmp_tuple_element_15 = mod_consts.const_str_plain_strides;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_ssize_p);

if (tmp_tuple_element_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_15 = module_var_accessor_click$_winconsole$c_ssize_p(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ssize_p);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
        Py_INCREF(tmp_tuple_element_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_13;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_15);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
PyList_SET_ITEM(tmp_dictset_value, 8, tmp_list_element_1);
tmp_tuple_element_16 = mod_consts.const_str_plain_suboffsets;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_ssize_p);

if (tmp_tuple_element_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_16 = module_var_accessor_click$_winconsole$c_ssize_p(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_ssize_p);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_2 = "o";
    goto tuple_build_exception_14;
}
        Py_INCREF(tmp_tuple_element_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_14;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_16);
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
PyList_SET_ITEM(tmp_dictset_value, 9, tmp_list_element_1);
tmp_tuple_element_17 = mod_consts.const_str_plain_internal;
tmp_list_element_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = PyObject_GetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain_c_void_p);

if (tmp_tuple_element_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_17 = module_var_accessor_click$_winconsole$c_void_p(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_void_p);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_2 = "o";
    goto tuple_build_exception_15;
}
        Py_INCREF(tmp_tuple_element_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_15;
    }
}

PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_17);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_list_element_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
PyList_SET_ITEM(tmp_dictset_value, 10, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$class__1_Py_buffer_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$class__1_Py_buffer_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$class__1_Py_buffer_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$class__1_Py_buffer_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_click$_winconsole$$$class__1_Py_buffer_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_5;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_5;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__1_Py_buffer_87, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_5;
}
branch_no_5:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_Py_buffer;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_click$_winconsole$$$class__1_Py_buffer_87;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 87;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_63 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_click$_winconsole$$$class__1_Py_buffer_87);
locals_click$_winconsole$$$class__1_Py_buffer_87 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_click$_winconsole$$$class__1_Py_buffer_87);
locals_click$_winconsole$$$class__1_Py_buffer_87 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 87;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_Py_buffer, tmp_assign_source_63);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_65;
PyObject *tmp_expression_value_16;
tmp_expression_value_16 = module_var_accessor_click$_winconsole$pythonapi(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pythonapi);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto frame_exception_exit_1;
}
tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_PyObject_GetBuffer);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyObject_GetBuffer, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_expression_value_17;
tmp_expression_value_17 = module_var_accessor_click$_winconsole$pythonapi(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pythonapi);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto frame_exception_exit_1;
}
tmp_assign_source_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_PyBuffer_Release);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_PyBuffer_Release, tmp_assign_source_66);
}
{
PyObject *tmp_assign_source_67;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_d75d081b3372a13cc5cf4913ac29da60);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_67 = MAKE_FUNCTION_click$_winconsole$$$function__1_get_buffer(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_get_buffer, tmp_assign_source_67);
}
branch_no_2:;
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_68;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_18;
tmp_expression_value_18 = IMPORT_HARD_IO();
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_RawIOBase);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_assign_source_68 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_68, 0, tmp_tuple_element_19);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_68;
}
{
PyObject *tmp_assign_source_69;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_69 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_70;
}
{
PyObject *tmp_assign_source_71;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_19 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_71 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_71;
}
{
bool tmp_condition_result_8;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_tuple_element_20 = mod_consts.const_str_plain__WindowsConsoleRawIOBase;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 118;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_72;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_6, tmp_default_value_2);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_6;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 118;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_73;
}
branch_end_6:;
{
PyObject *tmp_assign_source_74;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain__WindowsConsoleRawIOBase;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_118;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3 = MAKE_CLASS_FRAME(tstate, code_objects_dee65ece605bb1bfa80999bc943d1757, module_click$_winconsole, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_64ab586db623a71f2ec14dfdc7d330f6);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__2___init__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_3;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f5d8aa01ea7eb8d6f096b0ef602155df);
tmp_closure_1[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__3_isatty(tstate, tmp_annotations_3, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118, mod_consts.const_str_plain_isatty, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_handle_tuple;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
branch_no_8:;
{
PyObject *tmp_assign_source_75;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain__WindowsConsoleRawIOBase;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 118;
tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_8;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_75);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_74 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_74);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118);
locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118);
locals_click$_winconsole$$$class__2__WindowsConsoleRawIOBase_118 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 118;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleRawIOBase, tmp_assign_source_74);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
PyObject *tmp_assign_source_76;
PyObject *tmp_tuple_element_23;
tmp_tuple_element_23 = module_var_accessor_click$_winconsole$_WindowsConsoleRawIOBase(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WindowsConsoleRawIOBase);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto try_except_handler_9;
}
tmp_assign_source_76 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_76, 0, tmp_tuple_element_23);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_76;
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_77 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_77;
}
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_78;
}
{
PyObject *tmp_assign_source_79;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_79 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_79;
}
{
bool tmp_condition_result_12;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
tmp_condition_result_12 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
tmp_tuple_element_24 = mod_consts.const_str_plain__WindowsConsoleReader;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 127;
tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_80;
}
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_7, tmp_default_value_3);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_25);
}
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_9;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 127;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 127;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_81;
tmp_assign_source_81 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_81;
}
branch_end_9:;
{
PyObject *tmp_assign_source_82;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_click$_winconsole$$$class__3__WindowsConsoleReader_127 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain__WindowsConsoleReader;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_127;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_11;
}
frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4 = MAKE_CLASS_FRAME(tstate, code_objects_5d22db6f4fd79094cb024f8c27b14677, module_click$_winconsole, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_f5d8aa01ea7eb8d6f096b0ef602155df);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__4_readable(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127, mod_consts.const_str_plain_readable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_75c7768acadbd89f6d59a636e406de1e);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__5_readinto(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127, mod_consts.const_str_plain_readinto, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_click$_winconsole$$$class__3__WindowsConsoleReader_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_11;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_11;
}
branch_no_11:;
{
PyObject *tmp_assign_source_83;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_26 = mod_consts.const_str_plain__WindowsConsoleReader;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = locals_click$_winconsole$$$class__3__WindowsConsoleReader_127;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 127;
tmp_assign_source_83 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_11;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_83;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_82 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_82);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127);
locals_click$_winconsole$$$class__3__WindowsConsoleReader_127 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_click$_winconsole$$$class__3__WindowsConsoleReader_127);
locals_click$_winconsole$$$class__3__WindowsConsoleReader_127 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 127;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleReader, tmp_assign_source_82);
}
goto try_end_5;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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
PyObject *tmp_assign_source_84;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = module_var_accessor_click$_winconsole$_WindowsConsoleRawIOBase(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__WindowsConsoleRawIOBase);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;

    goto try_except_handler_12;
}
tmp_assign_source_84 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_84, 0, tmp_tuple_element_27);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_84;
}
{
PyObject *tmp_assign_source_85;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_85 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_85;
}
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_86;
}
{
PyObject *tmp_assign_source_87;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_15;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_31 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_87 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_87;
}
{
bool tmp_condition_result_16;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
tmp_condition_result_16 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_16 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_88;
PyObject *tmp_called_value_19;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
tmp_tuple_element_28 = mod_consts.const_str_plain__WindowsConsoleWriter;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 162;
tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_88;
}
{
bool tmp_condition_result_17;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_17 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_8, tmp_default_value_4);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_29);
}
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_12;
}
frame_frame_click$_winconsole->m_frame.f_lineno = 162;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 162;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_13:;
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_89;
}
branch_end_12:;
{
PyObject *tmp_assign_source_90;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain__WindowsConsoleWriter;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_162;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_14;
}
frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5 = MAKE_CLASS_FRAME(tstate, code_objects_a1b22ac4f673e7299a3c800efe579a91, module_click$_winconsole, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5) == 2);

// Framed code:
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_f5d8aa01ea7eb8d6f096b0ef602155df);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__6_writable(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, mod_consts.const_str_plain_writable, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_7;
tmp_called_value_20 = PyObject_GetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, const_str_plain_staticmethod);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_49e20fe08e9874349dd05b35b648aa61);

tmp_args_element_value_13 = MAKE_FUNCTION_click$_winconsole$$$function__7__get_error_message(tstate, tmp_annotations_7);

frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5->m_frame.f_lineno = 166;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, mod_consts.const_str_plain__get_error_message, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_75c7768acadbd89f6d59a636e406de1e);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__8_write(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_click$_winconsole$$$class__4__WindowsConsoleWriter_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_14;
}
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_14;
}
branch_no_14:;
{
PyObject *tmp_assign_source_91;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_30 = mod_consts.const_str_plain__WindowsConsoleWriter;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_30);
tmp_tuple_element_30 = locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 162;
tmp_assign_source_91 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_91;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_90 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_90);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162);
locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162);
locals_click$_winconsole$$$class__4__WindowsConsoleWriter_162 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 162;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__WindowsConsoleWriter, tmp_assign_source_90);
}
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_92;
}
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_93;
}
// Tried code:
{
PyObject *tmp_assign_source_94;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_click$_winconsole$$$class__5_ConsoleStream_194 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_82dff8d474f0571b16b37658f18365e4;
tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_ConsoleStream;
tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_194;
tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_334836065e83a516b5ea4d77c78bbc19);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__9___init__(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_click$_winconsole$$$class__5_ConsoleStream_6 = MAKE_CLASS_FRAME(tstate, code_objects_f7fca6e8f84b11ddf18cb5f0c1f9109d, module_click$_winconsole, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_winconsole$$$class__5_ConsoleStream_6);
assert(Py_REFCNT(frame_frame_click$_winconsole$$$class__5_ConsoleStream_6) == 2);

// Framed code:
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_10;
tmp_called_value_22 = (PyObject *)&PyProperty_Type;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_args_element_value_14 = MAKE_FUNCTION_click$_winconsole$$$function__10_name(tstate, tmp_annotations_10);

frame_frame_click$_winconsole$$$class__5_ConsoleStream_6->m_frame.f_lineno = 199;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, const_str_plain_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole$$$class__5_ConsoleStream_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole$$$class__5_ConsoleStream_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole$$$class__5_ConsoleStream_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_winconsole$$$class__5_ConsoleStream_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_click$_winconsole$$$class__5_ConsoleStream_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_17;
skip_nested_handling_5:;
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_705c246dde49ecdd7a948b55629c9da2);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__11_write(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_588de8d2d10cb3e5736056733ba5a2e0);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__12_writelines(tstate, tmp_annotations_12);

tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain_writelines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_19af9cb7cdace76baefee316e41c3c52);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__13___getattr__(tstate, tmp_annotations_13);

tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain___getattr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__14_isatty(tstate, tmp_annotations_14);

tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain_isatty, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_click$_winconsole$$$function__15___repr__(tstate, tmp_annotations_15);

tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__text_stream_str_plain_buffer_tuple;
tmp_result = DICT_SET_ITEM(locals_click$_winconsole$$$class__5_ConsoleStream_194, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_95;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_9;
tmp_called_value_23 = (PyObject *)&PyType_Type;
tmp_tuple_element_31 = mod_consts.const_str_plain_ConsoleStream;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_31);
tmp_tuple_element_31 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_click$_winconsole$$$class__5_ConsoleStream_194;
PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_click$_winconsole->m_frame.f_lineno = 194;
tmp_assign_source_95 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_17;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_95;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_94 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_94);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_click$_winconsole$$$class__5_ConsoleStream_194);
locals_click$_winconsole$$$class__5_ConsoleStream_194 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_click$_winconsole$$$class__5_ConsoleStream_194);
locals_click$_winconsole$$$class__5_ConsoleStream_194 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 194;
goto try_except_handler_15;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain_ConsoleStream, tmp_assign_source_94);
}
goto try_end_7;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
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
PyObject *tmp_assign_source_96;
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_3762b9a0e5a98c06ed594722b4deccc5);

tmp_assign_source_96 = MAKE_FUNCTION_click$_winconsole$$$function__16__get_text_stdin(tstate, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdin, tmp_assign_source_96);
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_3762b9a0e5a98c06ed594722b4deccc5);

tmp_assign_source_97 = MAKE_FUNCTION_click$_winconsole$$$function__17__get_text_stdout(tstate, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stdout, tmp_assign_source_97);
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_3762b9a0e5a98c06ed594722b4deccc5);

tmp_assign_source_98 = MAKE_FUNCTION_click$_winconsole$$$function__18__get_text_stderr(tstate, tmp_annotations_18);

UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_text_stderr, tmp_assign_source_98);
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_int_0;
tmp_dict_value_1 = module_var_accessor_click$_winconsole$_get_text_stdin(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_assign_source_99 = _PyDict_NewPresized( 3 );
tmp_res = PyDict_SetItem(tmp_assign_source_99, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_int_pos_1;
tmp_dict_value_1 = module_var_accessor_click$_winconsole$_get_text_stdout(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_99, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_int_pos_2;
tmp_dict_value_1 = module_var_accessor_click$_winconsole$_get_text_stderr(tstate);
assert(!(tmp_dict_value_1 == NULL));
tmp_res = PyDict_SetItem(tmp_assign_source_99, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__stream_factories, tmp_assign_source_99);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_40699570f7c3e68669c7e825f86e0a30;
tmp_ass_subscribed_1 = module_var_accessor_click$_winconsole$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__stream_factories;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;

    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_winconsole, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_winconsole->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_winconsole, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_click$_winconsole);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_6:;
{
PyObject *tmp_assign_source_100;
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_7c87a16d7fc180b7f14d96255a3c6e11);

tmp_assign_source_100 = MAKE_FUNCTION_click$_winconsole$$$function__19__is_console(tstate, tmp_annotations_19);

UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__is_console, tmp_assign_source_100);
}
{
PyObject *tmp_assign_source_101;
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_9b0e4bf53edaa60d9f5a8d777b5fc555);

tmp_assign_source_101 = MAKE_FUNCTION_click$_winconsole$$$function__20__get_windows_console_stream(tstate, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_click$_winconsole, (Nuitka_StringObject *)mod_consts.const_str_plain__get_windows_console_stream, tmp_assign_source_101);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("click$_winconsole", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "click._winconsole" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_click$_winconsole);
    return module_click$_winconsole;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_winconsole, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("click$_winconsole", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

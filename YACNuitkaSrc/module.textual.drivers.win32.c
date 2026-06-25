/* Generated code for Python module 'textual$drivers$win32'
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



/* The "module_textual$drivers$win32" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$drivers$win32;
PyDictObject *moduledict_textual$drivers$win32;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_msvcrt;
PyObject *const_str_plain_get_osfhandle;
PyObject *const_str_plain_KERNEL32;
PyObject *const_str_plain_SetConsoleMode;
PyObject *const_str_digest_e8bb243861ed226899caf1a8e969caf8;
PyObject *const_str_plain_DWORD;
PyObject *const_str_plain_GetConsoleMode;
PyObject *const_str_plain_byref;
PyObject *const_str_plain_value;
PyObject *const_str_digest_e94b477427fec29f1beaa66c23f19bd4;
PyObject *const_str_plain___stdin__;
PyObject *const_str_plain___stdout__;
PyObject *const_str_plain_get_console_mode;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_a3e2a2b56ebcd56d7fe1f256eea86784;
PyObject *const_str_plain_restore;
PyObject *const_str_digest_70a8018c09fda74eba900336d60332da;
PyObject *const_str_plain_set_console_mode;
PyObject *const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING;
PyObject *const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT;
PyObject *const_str_digest_aed84db8c758abf411ff780204f37183;
PyObject *const_str_plain_terminal_in;
PyObject *const_str_plain_current_console_mode_in;
PyObject *const_str_plain_terminal_out;
PyObject *const_str_plain_current_console_mode_out;
PyObject *const_str_plain_HANDLE;
PyObject *const_str_plain_WaitForMultipleObjects;
PyObject *const_str_plain_BOOL;
PyObject *const_tuple_false_tuple;
PyObject *const_str_plain_WAIT_TIMEOUT;
PyObject *const_str_digest_55799f945338b26e5b1dfa1254245b3b;
PyObject *const_str_plain_loop;
PyObject *const_str_plain_app;
PyObject *const_str_plain_exit_event;
PyObject *const_str_plain_process_event;
PyObject *const_tuple_str_digest_ce0ff654e07c40abfa254af73c3d02dd_tuple;
PyObject *const_tuple_str_plain_name_tuple;
PyObject *const_str_plain_is_set;
PyObject *const_str_plain_XTermParser;
PyObject *const_str_plain_constants;
PyObject *const_str_plain_DEBUG;
PyObject *const_tuple_str_plain_debug_tuple;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_GetStdHandle;
PyObject *const_str_plain_STD_INPUT_HANDLE;
PyObject *const_int_pos_1024;
PyObject *const_str_plain_INPUT_RECORD;
PyObject *const_str_plain_ReadConsoleInputW;
PyObject *const_str_plain_append;
PyObject *const_str_plain_exit_requested;
PyObject *const_str_plain_parser;
PyObject *const_str_plain_tick;
PyObject *const_str_plain_self;
PyObject *const_str_plain_wait_for_handles;
PyObject *const_str_plain_hIn;
PyObject *const_int_pos_100;
PyObject *const_str_plain_input_records;
PyObject *const_str_plain_MAX_EVENTS;
PyObject *const_str_plain_read_count;
PyObject *const_slice_none_none_none;
PyObject *const_str_plain_EventType;
PyObject *const_str_plain_Event;
PyObject *const_str_plain_KeyEvent;
PyObject *const_str_plain_uChar;
PyObject *const_str_plain_UnicodeChar;
PyObject *const_str_plain_bKeyDown;
PyObject *const_str_plain_dwControlKeyState;
PyObject *const_str_plain_wVirtualKeyCode;
PyObject *const_str_plain_append_key;
PyObject *const_int_pos_4;
PyObject *const_str_plain_WindowBufferSizeEvent;
PyObject *const_str_plain_dwSize;
PyObject *const_str_plain_X;
PyObject *const_str_plain_Y;
PyObject *const_str_plain_feed;
PyObject *const_str_digest_913ae8f3439742e034c09e3f599385fd;
PyObject *const_str_plain_surrogatepass;
PyObject *const_str_plain_new_size;
PyObject *const_str_plain_on_size_change;
PyObject *const_str_plain_log;
PyObject *const_str_plain_error;
PyObject *const_str_digest_ade03a14a8b652b4d8cf873b3ebcf997;
PyObject *const_str_plain_Size;
PyObject *const_str_plain_Resize;
PyObject *const_str_plain_run_coroutine_threadsafe;
PyObject *const_str_plain__post_message;
PyObject *const_tuple_str_plain_loop_tuple;
PyObject *const_str_digest_1f107cc2a4f9bdb51f74148e260adf91;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_ctypes;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_asyncio;
PyObject *const_tuple_3e80c0767622f7562c34f7252ae9ac65_tuple;
PyObject *const_str_plain_AbstractEventLoop;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_wintypes;
PyObject *const_str_plain_CHAR;
PyObject *const_str_plain_SHORT;
PyObject *const_str_plain_UINT;
PyObject *const_str_plain_WCHAR;
PyObject *const_str_plain_WORD;
PyObject *const_str_plain_IO;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_List;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_constants_tuple;
PyObject *const_str_digest_e18faf774281761f65a7b570641a194a;
PyObject *const_tuple_str_plain_XTermParser_tuple;
PyObject *const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7;
PyObject *const_tuple_str_plain_Event_str_plain_Resize_tuple;
PyObject *const_str_digest_8b449230fefb53e14684626fc331fc25;
PyObject *const_tuple_str_plain_Size_tuple;
PyObject *const_str_plain_WinDLL;
PyObject *const_tuple_str_plain_kernel32_true_tuple;
PyObject *const_tuple_str_plain_use_last_error_tuple;
PyObject *const_str_plain_ENABLE_ECHO_INPUT;
PyObject *const_int_pos_128;
PyObject *const_str_plain_ENABLE_EXTENDED_FLAGS;
PyObject *const_int_pos_32;
PyObject *const_str_plain_ENABLE_INSERT_MODE;
PyObject *const_int_pos_2;
PyObject *const_str_plain_ENABLE_LINE_INPUT;
PyObject *const_int_pos_16;
PyObject *const_str_plain_ENABLE_MOUSE_INPUT;
PyObject *const_str_plain_ENABLE_PROCESSED_INPUT;
PyObject *const_int_pos_64;
PyObject *const_str_plain_ENABLE_QUICK_EDIT_MODE;
PyObject *const_int_pos_8;
PyObject *const_str_plain_ENABLE_WINDOW_INPUT;
PyObject *const_int_pos_512;
PyObject *const_str_plain_ENABLE_PROCESSED_OUTPUT;
PyObject *const_str_plain_ENABLE_WRAP_AT_EOL_OUTPUT;
PyObject *const_str_plain_DISABLE_NEWLINE_AUTO_RETURN;
PyObject *const_str_plain_ENABLE_LVB_GRID_WORLDWIDE;
PyObject *const_int_neg_10;
PyObject *const_int_neg_11;
PyObject *const_str_plain_STD_OUTPUT_HANDLE;
PyObject *const_int_pos_258;
PyObject *const_str_plain_argtypes;
PyObject *const_str_plain_restype;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_COORD;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_9f611a96723637e7c610916fa6591f15;
PyObject *const_str_digest_08bc1a24a7f4de16ed6ea448b1f57058;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_50;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain__fields_;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_f5b7e170f86a066c11e0c3b6c396a5c2;
PyObject *const_int_pos_59;
PyObject *const_str_plain_AsciiChar;
PyObject *const_str_plain_KEY_EVENT_RECORD;
PyObject *const_int_pos_68;
PyObject *const_str_plain_wRepeatCount;
PyObject *const_str_plain_wVirtualScanCode;
PyObject *const_str_plain_MOUSE_EVENT_RECORD;
PyObject *const_str_digest_c4982504ed7a92227b8527a8cfcc57c7;
PyObject *const_int_pos_81;
PyObject *const_str_plain_dwMousePosition;
PyObject *const_str_plain_dwButtonState;
PyObject *const_str_plain_dwEventFlags;
PyObject *const_str_plain_WINDOW_BUFFER_SIZE_RECORD;
PyObject *const_str_digest_3853df7fb5c737d4c1cb8c8abccee1af;
PyObject *const_int_pos_92;
PyObject *const_str_plain_MENU_EVENT_RECORD;
PyObject *const_str_digest_146c6fb0b05bf83f1def1c93e1d0a0e7;
PyObject *const_int_pos_98;
PyObject *const_str_plain_dwCommandId;
PyObject *const_str_plain_FOCUS_EVENT_RECORD;
PyObject *const_str_digest_fd23812c51551950b1527788c6b51f1e;
PyObject *const_int_pos_104;
PyObject *const_str_plain_bSetFocus;
PyObject *const_str_plain_InputEvent;
PyObject *const_str_digest_ead7a2b1534c074f9f509306a5ea4bd8;
PyObject *const_int_pos_110;
PyObject *const_str_plain_MouseEvent;
PyObject *const_str_plain_MenuEvent;
PyObject *const_str_plain_FocusEvent;
PyObject *const_int_pos_122;
PyObject *const_dict_f1a788bfd0fbe452d7d5b701e0178dd4;
PyObject *const_dict_9596afc57e610b4c20bc15f357503c2f;
PyObject *const_dict_bfe481521f9ed6d99557261bd4423a32;
PyObject *const_str_plain_enable_application_mode;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_dict_52d907bb51eb10d3d6d1dc6243fa8a4d;
PyObject *const_str_plain_Thread;
PyObject *const_str_plain_EventMonitor;
PyObject *const_str_digest_68a30ff022b482701d076cf4dd85ee83;
PyObject *const_int_pos_212;
PyObject *const_dict_115a78ceebe393c3fa42cf1b0c1f8dbb;
PyObject *const_str_digest_d6e674920896a8223dd0a5f32859b309;
PyObject *const_str_plain_run;
PyObject *const_str_digest_26ccc535b180964eef86975d18b51026;
PyObject *const_dict_90bd90a846772ae2d71c76b6a0340183;
PyObject *const_str_digest_ea7dd101290f1144f3d50488a3fec1b1;
PyObject *const_tuple_7907d129e387d18b9c73e1565405775d_tuple;
PyObject *const_str_digest_43b955de6b984a578d30da1d6443d65c;
PyObject *const_str_digest_5fd7f7d3c538eb994bba86637b1f35d1;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_0383942498e479f1f47daf75fb976a28_tuple;
PyObject *const_tuple_60e396a188c7ce95018bcdb70bd971c6_tuple;
PyObject *const_tuple_str_plain_file_str_plain_windows_filehandle_str_plain_mode_tuple;
PyObject *const_tuple_65a068b647e35abb7558cc6d996ff1e2_tuple;
PyObject *const_tuple_0342da357ff9636bbd152b30bffd0b90_tuple;
PyObject *const_tuple_65309b7eab0030665c1eb8613fc9ddd3_tuple;
PyObject *const_tuple_a15a26e9bf398d8458fde92b6731c671_tuple;
PyObject *const_tuple_f4a0a46c74235c8174e0e5a4ff620d24_tuple;
PyObject *const_tuple_4022eaf92990d2428cb41107b5f95791_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[219];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.drivers.win32"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_msvcrt);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_osfhandle);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_KERNEL32);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_SetConsoleMode);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_e8bb243861ed226899caf1a8e969caf8);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetConsoleMode);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_byref);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_e94b477427fec29f1beaa66c23f19bd4);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___stdin__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain___stdout__);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_console_mode);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3e2a2b56ebcd56d7fe1f256eea86784);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_restore);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_70a8018c09fda74eba900336d60332da);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_console_mode);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_aed84db8c758abf411ff780204f37183);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_in);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_console_mode_in);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_out);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_console_mode_out);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForMultipleObjects);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOOL);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_TIMEOUT);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_55799f945338b26e5b1dfa1254245b3b);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_loop);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_exit_event);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_event);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce0ff654e07c40abfa254af73c3d02dd_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_set);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_XTermParser);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_constants);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_debug_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetStdHandle);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_STD_INPUT_HANDLE);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_int_pos_1024);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_RECORD);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_ReadConsoleInputW);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_exit_requested);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_parser);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_tick);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_handles);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_hIn);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_records);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_EVENTS);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_read_count);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_slice_none_none_none);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventType);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_KeyEvent);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_uChar);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnicodeChar);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_bKeyDown);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwControlKeyState);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_wVirtualKeyCode);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_append_key);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_WindowBufferSizeEvent);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwSize);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_X);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_Y);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_surrogatepass);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_size);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_size_change);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_ade03a14a8b652b4d8cf873b3ebcf997);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_Size);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_Resize);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_coroutine_threadsafe);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__post_message);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f107cc2a4f9bdb51f74148e260adf91);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_3e80c0767622f7562c34f7252ae9ac65_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractEventLoop);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_CHAR);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_SHORT);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_UINT);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_WCHAR);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_WORD);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_IO);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_List);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constants_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_XTermParser_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Event_str_plain_Resize_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Size_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_WinDLL);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kernel32_true_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_last_error_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_ECHO_INPUT);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_int_pos_128);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_EXTENDED_FLAGS);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_INSERT_MODE);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_LINE_INPUT);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_MOUSE_INPUT);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_PROCESSED_INPUT);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_QUICK_EDIT_MODE);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_WINDOW_INPUT);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_int_pos_512);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_PROCESSED_OUTPUT);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_WRAP_AT_EOL_OUTPUT);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_DISABLE_NEWLINE_AUTO_RETURN);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_LVB_GRID_WORLDWIDE);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_int_neg_10);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_int_neg_11);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_STD_OUTPUT_HANDLE);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_int_pos_258);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_restype);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_COORD);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_08bc1a24a7f4de16ed6ea448b1f57058);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_int_pos_50);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5b7e170f86a066c11e0c3b6c396a5c2);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_int_pos_59);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsciiChar);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_EVENT_RECORD);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_int_pos_68);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_wRepeatCount);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_wVirtualScanCode);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4982504ed7a92227b8527a8cfcc57c7);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_81);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwMousePosition);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwButtonState);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwEventFlags);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_3853df7fb5c737d4c1cb8c8abccee1af);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_int_pos_92);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_MENU_EVENT_RECORD);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_146c6fb0b05bf83f1def1c93e1d0a0e7);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_int_pos_98);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwCommandId);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd23812c51551950b1527788c6b51f1e);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_int_pos_104);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_bSetFocus);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_InputEvent);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_ead7a2b1534c074f9f509306a5ea4bd8);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_int_pos_110);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseEvent);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_MenuEvent);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_FocusEvent);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_int_pos_122);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_f1a788bfd0fbe452d7d5b701e0178dd4);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_9596afc57e610b4c20bc15f357503c2f);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_bfe481521f9ed6d99557261bd4423a32);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_application_mode);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_52d907bb51eb10d3d6d1dc6243fa8a4d);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_Thread);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_EventMonitor);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_68a30ff022b482701d076cf4dd85ee83);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_int_pos_212);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_115a78ceebe393c3fa42cf1b0c1f8dbb);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6e674920896a8223dd0a5f32859b309);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_run);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_26ccc535b180964eef86975d18b51026);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea7dd101290f1144f3d50488a3fec1b1);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_7907d129e387d18b9c73e1565405775d_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_digest_43b955de6b984a578d30da1d6443d65c);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_5fd7f7d3c538eb994bba86637b1f35d1);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_0383942498e479f1f47daf75fb976a28_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_60e396a188c7ce95018bcdb70bd971c6_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_windows_filehandle_str_plain_mode_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_65a068b647e35abb7558cc6d996ff1e2_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_0342da357ff9636bbd152b30bffd0b90_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_65309b7eab0030665c1eb8613fc9ddd3_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_a15a26e9bf398d8458fde92b6731c671_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_f4a0a46c74235c8174e0e5a4ff620d24_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_4022eaf92990d2428cb41107b5f95791_tuple);
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
void checkModuleConstants_textual$drivers$win32(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_msvcrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msvcrt);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_osfhandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_osfhandle);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_KERNEL32));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KERNEL32);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_SetConsoleMode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SetConsoleMode);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_e8bb243861ed226899caf1a8e969caf8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e8bb243861ed226899caf1a8e969caf8);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_DWORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DWORD);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetConsoleMode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetConsoleMode);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_byref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_byref);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_e94b477427fec29f1beaa66c23f19bd4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e94b477427fec29f1beaa66c23f19bd4);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___stdin__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___stdin__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain___stdout__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___stdout__);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_console_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_console_mode);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3e2a2b56ebcd56d7fe1f256eea86784));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3e2a2b56ebcd56d7fe1f256eea86784);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_restore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_restore);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_70a8018c09fda74eba900336d60332da));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_70a8018c09fda74eba900336d60332da);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_console_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_console_mode);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_aed84db8c758abf411ff780204f37183));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aed84db8c758abf411ff780204f37183);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_in));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_terminal_in);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_console_mode_in));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_console_mode_in);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_out));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_terminal_out);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_console_mode_out));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_console_mode_out);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HANDLE);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaitForMultipleObjects));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WaitForMultipleObjects);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOOL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOOL);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_WAIT_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WAIT_TIMEOUT);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_55799f945338b26e5b1dfa1254245b3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55799f945338b26e5b1dfa1254245b3b);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loop);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_exit_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exit_event);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_event);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ce0ff654e07c40abfa254af73c3d02dd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ce0ff654e07c40abfa254af73c3d02dd_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_name_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_set);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_XTermParser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_XTermParser);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_constants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_constants);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEBUG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEBUG);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_debug_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_debug_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetStdHandle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetStdHandle);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_STD_INPUT_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STD_INPUT_HANDLE);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_int_pos_1024));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1024);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_INPUT_RECORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INPUT_RECORD);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_ReadConsoleInputW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ReadConsoleInputW);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_exit_requested));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exit_requested);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parser);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_tick));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tick);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_for_handles));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_for_handles);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_hIn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hIn);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_records));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_records);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_EVENTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_EVENTS);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_read_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read_count);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_slice_none_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_none_none);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventType);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_KeyEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KeyEvent);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_uChar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uChar);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnicodeChar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnicodeChar);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_bKeyDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bKeyDown);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwControlKeyState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dwControlKeyState);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_wVirtualKeyCode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wVirtualKeyCode);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_append_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append_key);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_WindowBufferSizeEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WindowBufferSizeEvent);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwSize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dwSize);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_X));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_X);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_Y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Y);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_surrogatepass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_surrogatepass);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_size);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_size_change));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_size_change);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_ade03a14a8b652b4d8cf873b3ebcf997));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ade03a14a8b652b4d8cf873b3ebcf997);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_Size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Size);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_Resize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Resize);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_coroutine_threadsafe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_coroutine_threadsafe);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__post_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post_message);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_loop_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f107cc2a4f9bdb51f74148e260adf91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f107cc2a4f9bdb51f74148e260adf91);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctypes);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_3e80c0767622f7562c34f7252ae9ac65_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3e80c0767622f7562c34f7252ae9ac65_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_AbstractEventLoop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AbstractEventLoop);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_wintypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wintypes);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_CHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CHAR);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_SHORT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SHORT);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_UINT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UINT);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_WCHAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WCHAR);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_WORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WORD);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_IO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IO);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_List));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_List);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constants_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_constants_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_XTermParser_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_XTermParser_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Event_str_plain_Resize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Event_str_plain_Resize_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Size_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Size_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_WinDLL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WinDLL);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_kernel32_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_kernel32_true_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_use_last_error_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_use_last_error_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_ECHO_INPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_ECHO_INPUT);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_int_pos_128));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_128);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_EXTENDED_FLAGS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_EXTENDED_FLAGS);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_INSERT_MODE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_INSERT_MODE);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_LINE_INPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_LINE_INPUT);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_MOUSE_INPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_MOUSE_INPUT);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_PROCESSED_INPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_PROCESSED_INPUT);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_QUICK_EDIT_MODE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_QUICK_EDIT_MODE);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_WINDOW_INPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_WINDOW_INPUT);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_int_pos_512));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_512);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_PROCESSED_OUTPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_PROCESSED_OUTPUT);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_WRAP_AT_EOL_OUTPUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_WRAP_AT_EOL_OUTPUT);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_DISABLE_NEWLINE_AUTO_RETURN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DISABLE_NEWLINE_AUTO_RETURN);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ENABLE_LVB_GRID_WORLDWIDE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ENABLE_LVB_GRID_WORLDWIDE);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_int_neg_10));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_10);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_int_neg_11));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_11);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_STD_OUTPUT_HANDLE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STD_OUTPUT_HANDLE);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_int_pos_258));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_258);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_argtypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argtypes);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_restype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_restype);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_COORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_COORD);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_08bc1a24a7f4de16ed6ea448b1f57058));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_08bc1a24a7f4de16ed6ea448b1f57058);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_int_pos_50));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_50);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5b7e170f86a066c11e0c3b6c396a5c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5b7e170f86a066c11e0c3b6c396a5c2);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_int_pos_59));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_59);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsciiChar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsciiChar);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_EVENT_RECORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEY_EVENT_RECORD);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_int_pos_68));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_68);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_wRepeatCount));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wRepeatCount);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_wVirtualScanCode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wVirtualScanCode);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_MOUSE_EVENT_RECORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4982504ed7a92227b8527a8cfcc57c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4982504ed7a92227b8527a8cfcc57c7);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_81));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_81);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwMousePosition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dwMousePosition);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwButtonState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dwButtonState);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwEventFlags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dwEventFlags);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_3853df7fb5c737d4c1cb8c8abccee1af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3853df7fb5c737d4c1cb8c8abccee1af);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_int_pos_92));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_92);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_MENU_EVENT_RECORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MENU_EVENT_RECORD);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_146c6fb0b05bf83f1def1c93e1d0a0e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_146c6fb0b05bf83f1def1c93e1d0a0e7);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_int_pos_98));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_98);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwCommandId));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dwCommandId);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_FOCUS_EVENT_RECORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd23812c51551950b1527788c6b51f1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd23812c51551950b1527788c6b51f1e);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_int_pos_104));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_104);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_bSetFocus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bSetFocus);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_InputEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InputEvent);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_ead7a2b1534c074f9f509306a5ea4bd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ead7a2b1534c074f9f509306a5ea4bd8);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_int_pos_110));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_110);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseEvent);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_MenuEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MenuEvent);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_FocusEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FocusEvent);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_int_pos_122));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_122);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_f1a788bfd0fbe452d7d5b701e0178dd4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f1a788bfd0fbe452d7d5b701e0178dd4);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_9596afc57e610b4c20bc15f357503c2f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9596afc57e610b4c20bc15f357503c2f);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_bfe481521f9ed6d99557261bd4423a32));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bfe481521f9ed6d99557261bd4423a32);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_application_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enable_application_mode);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_52d907bb51eb10d3d6d1dc6243fa8a4d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_52d907bb51eb10d3d6d1dc6243fa8a4d);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_Thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Thread);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_EventMonitor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EventMonitor);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_68a30ff022b482701d076cf4dd85ee83));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68a30ff022b482701d076cf4dd85ee83);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_int_pos_212));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_212);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_115a78ceebe393c3fa42cf1b0c1f8dbb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_115a78ceebe393c3fa42cf1b0c1f8dbb);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6e674920896a8223dd0a5f32859b309));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6e674920896a8223dd0a5f32859b309);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_26ccc535b180964eef86975d18b51026));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26ccc535b180964eef86975d18b51026);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183));
CHECK_OBJECT_DEEP(mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea7dd101290f1144f3d50488a3fec1b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea7dd101290f1144f3d50488a3fec1b1);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_7907d129e387d18b9c73e1565405775d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7907d129e387d18b9c73e1565405775d_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_digest_43b955de6b984a578d30da1d6443d65c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_43b955de6b984a578d30da1d6443d65c);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_5fd7f7d3c538eb994bba86637b1f35d1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5fd7f7d3c538eb994bba86637b1f35d1);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_0383942498e479f1f47daf75fb976a28_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0383942498e479f1f47daf75fb976a28_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_60e396a188c7ce95018bcdb70bd971c6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_60e396a188c7ce95018bcdb70bd971c6_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_windows_filehandle_str_plain_mode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_str_plain_windows_filehandle_str_plain_mode_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_65a068b647e35abb7558cc6d996ff1e2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_65a068b647e35abb7558cc6d996ff1e2_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_0342da357ff9636bbd152b30bffd0b90_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0342da357ff9636bbd152b30bffd0b90_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_65309b7eab0030665c1eb8613fc9ddd3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_65309b7eab0030665c1eb8613fc9ddd3_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_a15a26e9bf398d8458fde92b6731c671_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a15a26e9bf398d8458fde92b6731c671_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_f4a0a46c74235c8174e0e5a4ff620d24_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f4a0a46c74235c8174e0e5a4ff620d24_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_4022eaf92990d2428cb41107b5f95791_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4022eaf92990d2428cb41107b5f95791_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 37
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
static PyObject *module_var_accessor_textual$drivers$win32$BOOL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$CHAR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_CHAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CHAR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CHAR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CHAR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CHAR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_CHAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_CHAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CHAR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$COORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_COORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_COORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_COORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_COORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_COORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_COORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$DWORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$ENABLE_VIRTUAL_TERMINAL_INPUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$ENABLE_VIRTUAL_TERMINAL_PROCESSING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$FOCUS_EVENT_RECORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FOCUS_EVENT_RECORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FOCUS_EVENT_RECORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$GetStdHandle(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$INPUT_RECORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_RECORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INPUT_RECORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INPUT_RECORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INPUT_RECORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INPUT_RECORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_RECORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_RECORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_RECORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$InputEvent(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_InputEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InputEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InputEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InputEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InputEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_InputEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_InputEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InputEvent);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$KERNEL32(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KERNEL32);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KERNEL32);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KERNEL32, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KERNEL32);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KERNEL32, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KERNEL32);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KERNEL32);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KERNEL32);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$KEY_EVENT_RECORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_EVENT_RECORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_EVENT_RECORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_EVENT_RECORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_EVENT_RECORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_EVENT_RECORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_EVENT_RECORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_EVENT_RECORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_EVENT_RECORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$MENU_EVENT_RECORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MENU_EVENT_RECORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MENU_EVENT_RECORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MENU_EVENT_RECORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MENU_EVENT_RECORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MENU_EVENT_RECORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MENU_EVENT_RECORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MENU_EVENT_RECORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MENU_EVENT_RECORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$MOUSE_EVENT_RECORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSE_EVENT_RECORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MOUSE_EVENT_RECORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$Resize(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Resize);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Resize);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Resize, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Resize);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Resize, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Resize);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Resize);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Resize);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$SHORT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SHORT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SHORT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SHORT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SHORT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$STD_INPUT_HANDLE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_STD_INPUT_HANDLE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STD_INPUT_HANDLE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STD_INPUT_HANDLE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_STD_INPUT_HANDLE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_STD_INPUT_HANDLE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_STD_INPUT_HANDLE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_STD_INPUT_HANDLE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_STD_INPUT_HANDLE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$Size(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Size);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Size, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Size);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$Structure(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$UINT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_UINT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UINT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UINT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_UINT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_UINT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_UINT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_UINT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_UINT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$WAIT_TIMEOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WAIT_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WAIT_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WAIT_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WAIT_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$WCHAR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WCHAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WCHAR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WCHAR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WCHAR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WCHAR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WCHAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WCHAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WCHAR);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$WINDOW_BUFFER_SIZE_RECORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$WORD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WORD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WORD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WORD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WORD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WORD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WORD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WORD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WORD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$XTermParser(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_XTermParser);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_XTermParser);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_XTermParser, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_XTermParser);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_XTermParser, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_XTermParser);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_XTermParser);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_XTermParser);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$byref(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_byref);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$constants(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_constants);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_constants, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_constants);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_constants, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$get_console_mode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_get_console_mode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_console_mode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_console_mode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_console_mode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_console_mode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_get_console_mode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_get_console_mode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_console_mode);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$msvcrt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$run_coroutine_threadsafe(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_run_coroutine_threadsafe);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_run_coroutine_threadsafe);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_run_coroutine_threadsafe, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_run_coroutine_threadsafe);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_run_coroutine_threadsafe, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_run_coroutine_threadsafe);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_run_coroutine_threadsafe);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_run_coroutine_threadsafe);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$set_console_mode(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_set_console_mode);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_console_mode);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_console_mode, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_console_mode);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_console_mode, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_set_console_mode);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_set_console_mode);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_console_mode);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$threading(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_threading);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_threading, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$uChar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_uChar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uChar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uChar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_uChar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_uChar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_uChar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_uChar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_uChar);
    }

    return result;
}

static PyObject *module_var_accessor_textual$drivers$win32$wait_for_handles(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$drivers$win32->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$drivers$win32->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_handles);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$drivers$win32->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_for_handles);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_for_handles, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_for_handles);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_for_handles, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_handles);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_handles);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_handles);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f77d00b657e655a3fac33f69ccb6096d;
static PyCodeObject *code_objects_e12bce90f903f78b1470000b8e8bb2a0;
static PyCodeObject *code_objects_46673e7e0f7ef607abf109c704e01d30;
static PyCodeObject *code_objects_11398d8400e06fa130883ca31f8b6f89;
static PyCodeObject *code_objects_8d3bac4a4608e6ca19d3d5f8cb2c35b5;
static PyCodeObject *code_objects_5d4a4de0497ba6e7c04770406165233a;
static PyCodeObject *code_objects_939203e95a9f863865082304358c1699;
static PyCodeObject *code_objects_ce21702ea74f464d3b61952651338015;
static PyCodeObject *code_objects_cfd255763e7f79bf7cc020d0c8a6d905;
static PyCodeObject *code_objects_6ccc5325c13039e42ddf2e7adce61e73;
static PyCodeObject *code_objects_39391e4b6bbea2a28263eb1ce02749ab;
static PyCodeObject *code_objects_ced1c7042986a7837a83e2305dcc1f38;
static PyCodeObject *code_objects_8ac6de278ff0594a47add135d6f81ccf;
static PyCodeObject *code_objects_4af0f10e52801c85dece37901bf63ecc;
static PyCodeObject *code_objects_eb87d430bc39ca8aa60961d080571c6f;
static PyCodeObject *code_objects_807815a67ec612827373e03e5abaa741;
static PyCodeObject *code_objects_6d8fc4579d914ee92ef7611fa29e030e;
static PyCodeObject *code_objects_fb0b6f08cad163c869331cd516f7bb14;
static PyCodeObject *code_objects_7705f7ab9ca994119f771c9cf3df1dc8;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_43b955de6b984a578d30da1d6443d65c); CHECK_OBJECT(module_filename_obj);
code_objects_f77d00b657e655a3fac33f69ccb6096d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_5fd7f7d3c538eb994bba86637b1f35d1, mod_consts.const_str_digest_5fd7f7d3c538eb994bba86637b1f35d1, NULL, NULL, 0, 0, 0);
code_objects_e12bce90f903f78b1470000b8e8bb2a0 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_COORD, mod_consts.const_str_plain_COORD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_46673e7e0f7ef607abf109c704e01d30 = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_EventMonitor, mod_consts.const_str_plain_EventMonitor, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_11398d8400e06fa130883ca31f8b6f89 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_FOCUS_EVENT_RECORD, mod_consts.const_str_plain_FOCUS_EVENT_RECORD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_8d3bac4a4608e6ca19d3d5f8cb2c35b5 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_INPUT_RECORD, mod_consts.const_str_plain_INPUT_RECORD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5d4a4de0497ba6e7c04770406165233a = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_InputEvent, mod_consts.const_str_plain_InputEvent, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_939203e95a9f863865082304358c1699 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_KEY_EVENT_RECORD, mod_consts.const_str_plain_KEY_EVENT_RECORD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ce21702ea74f464d3b61952651338015 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MENU_EVENT_RECORD, mod_consts.const_str_plain_MENU_EVENT_RECORD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cfd255763e7f79bf7cc020d0c8a6d905 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MOUSE_EVENT_RECORD, mod_consts.const_str_plain_MOUSE_EVENT_RECORD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6ccc5325c13039e42ddf2e7adce61e73 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_39391e4b6bbea2a28263eb1ce02749ab = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_d6e674920896a8223dd0a5f32859b309, mod_consts.const_tuple_0383942498e479f1f47daf75fb976a28_tuple, mod_consts.const_tuple_str_plain___class___tuple, 5, 0, 0);
code_objects_ced1c7042986a7837a83e2305dcc1f38 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_enable_application_mode, mod_consts.const_str_plain_enable_application_mode, mod_consts.const_tuple_60e396a188c7ce95018bcdb70bd971c6_tuple, NULL, 0, 0, 0);
code_objects_8ac6de278ff0594a47add135d6f81ccf = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_console_mode, mod_consts.const_str_plain_get_console_mode, mod_consts.const_tuple_str_plain_file_str_plain_windows_filehandle_str_plain_mode_tuple, NULL, 1, 0, 0);
code_objects_4af0f10e52801c85dece37901bf63ecc = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_size_change, mod_consts.const_str_digest_ea7dd101290f1144f3d50488a3fec1b1, mod_consts.const_tuple_65a068b647e35abb7558cc6d996ff1e2_tuple, NULL, 3, 0, 0);
code_objects_eb87d430bc39ca8aa60961d080571c6f = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_restore, mod_consts.const_str_digest_70a8018c09fda74eba900336d60332da, mod_consts.const_tuple_0342da357ff9636bbd152b30bffd0b90_tuple, mod_consts.const_tuple_65309b7eab0030665c1eb8613fc9ddd3_tuple, 0, 0, 0);
code_objects_807815a67ec612827373e03e5abaa741 = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_run, mod_consts.const_str_digest_26ccc535b180964eef86975d18b51026, mod_consts.const_tuple_a15a26e9bf398d8458fde92b6731c671_tuple, NULL, 1, 0, 0);
code_objects_6d8fc4579d914ee92ef7611fa29e030e = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_console_mode, mod_consts.const_str_plain_set_console_mode, mod_consts.const_tuple_f4a0a46c74235c8174e0e5a4ff620d24_tuple, NULL, 2, 0, 0);
code_objects_fb0b6f08cad163c869331cd516f7bb14 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_uChar, mod_consts.const_str_plain_uChar, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7705f7ab9ca994119f771c9cf3df1dc8 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_for_handles, mod_consts.const_str_plain_wait_for_handles, mod_consts.const_tuple_4022eaf92990d2428cb41107b5f95791_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__1_set_console_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__2_get_console_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__3_enable_application_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__4_wait_for_handles(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__5___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__6_run(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__7_on_size_change(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$drivers$win32$$$function__1_set_console_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *var_windows_filehandle = NULL;
PyObject *var_success = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__1_set_console_mode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode = MAKE_FUNCTION_FRAME(tstate, code_objects_6d8fc4579d914ee92ef7611fa29e030e, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__1_set_console_mode = cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__1_set_console_mode);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__1_set_console_mode) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_textual$drivers$win32$msvcrt(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msvcrt);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_osfhandle);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_file);
tmp_called_instance_1 = par_file;
frame_frame_textual$drivers$win32$$$function__1_set_console_mode->m_frame.f_lineno = 138;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_fileno);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__1_set_console_mode->m_frame.f_lineno = 138;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_windows_filehandle == NULL);
var_windows_filehandle = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_instance_2 = module_var_accessor_textual$drivers$win32$KERNEL32(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KERNEL32);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_windows_filehandle);
tmp_args_element_value_2 = var_windows_filehandle;
CHECK_OBJECT(par_mode);
tmp_args_element_value_3 = par_mode;
frame_frame_textual$drivers$win32$$$function__1_set_console_mode->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_SetConsoleMode,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_success == NULL);
var_success = tmp_assign_source_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__1_set_console_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__1_set_console_mode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__1_set_console_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__1_set_console_mode,
    type_description_1,
    par_file,
    par_mode,
    var_windows_filehandle,
    var_success
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__1_set_console_mode == cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode);
    cache_frame_frame_textual$drivers$win32$$$function__1_set_console_mode = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__1_set_console_mode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_success);
tmp_return_value = var_success;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_windows_filehandle);
CHECK_OBJECT(var_windows_filehandle);
Py_DECREF(var_windows_filehandle);
var_windows_filehandle = NULL;
CHECK_OBJECT(var_success);
CHECK_OBJECT(var_success);
Py_DECREF(var_success);
var_success = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_windows_filehandle);
var_windows_filehandle = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$drivers$win32$$$function__2_get_console_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *var_windows_filehandle = NULL;
PyObject *var_mode = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__2_get_console_mode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode = MAKE_FUNCTION_FRAME(tstate, code_objects_8ac6de278ff0594a47add135d6f81ccf, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__2_get_console_mode = cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__2_get_console_mode);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__2_get_console_mode) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_textual$drivers$win32$msvcrt(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msvcrt);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_osfhandle);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_file);
tmp_called_instance_1 = par_file;
frame_frame_textual$drivers$win32$$$function__2_get_console_mode->m_frame.f_lineno = 152;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_fileno);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 152;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__2_get_console_mode->m_frame.f_lineno = 152;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_windows_filehandle == NULL);
var_windows_filehandle = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
tmp_called_instance_2 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_textual$drivers$win32$$$function__2_get_console_mode->m_frame.f_lineno = 153;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_DWORD);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_mode == NULL);
var_mode = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_4;
tmp_expression_value_2 = module_var_accessor_textual$drivers$win32$KERNEL32(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KERNEL32);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GetConsoleMode);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_windows_filehandle);
tmp_args_element_value_2 = var_windows_filehandle;
tmp_called_instance_3 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_mode);
tmp_args_element_value_4 = var_mode;
frame_frame_textual$drivers$win32$$$function__2_get_console_mode->m_frame.f_lineno = 154;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_byref, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__2_get_console_mode->m_frame.f_lineno = 154;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_mode);
tmp_expression_value_3 = var_mode;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__2_get_console_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__2_get_console_mode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__2_get_console_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__2_get_console_mode,
    type_description_1,
    par_file,
    var_windows_filehandle,
    var_mode
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__2_get_console_mode == cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode);
    cache_frame_frame_textual$drivers$win32$$$function__2_get_console_mode = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__2_get_console_mode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_windows_filehandle);
CHECK_OBJECT(var_windows_filehandle);
Py_DECREF(var_windows_filehandle);
var_windows_filehandle = NULL;
CHECK_OBJECT(var_mode);
CHECK_OBJECT(var_mode);
Py_DECREF(var_mode);
var_mode = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_windows_filehandle);
var_windows_filehandle = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_file);
Py_DECREF(par_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$drivers$win32$$$function__3_enable_application_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *var_terminal_in = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_terminal_out = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_current_console_mode_in = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_current_console_mode_out = Nuitka_Cell_NewEmpty();
PyObject *var_restore = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__3_enable_application_mode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode = MAKE_FUNCTION_FRAME(tstate, code_objects_ced1c7042986a7837a83e2305dcc1f38, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode = cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__3_enable_application_mode);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__3_enable_application_mode) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___stdin__);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_terminal_in) == NULL);
Nuitka_Cell_SET(var_terminal_in, tmp_assign_source_1);

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_2 == NULL));
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___stdout__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_terminal_out) == NULL);
Nuitka_Cell_SET(var_terminal_out, tmp_assign_source_2);

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$drivers$win32$get_console_mode(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_console_mode);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_terminal_in));
tmp_args_element_value_1 = Nuitka_Cell_GET(var_terminal_in);
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode->m_frame.f_lineno = 168;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_current_console_mode_in) == NULL);
Nuitka_Cell_SET(var_current_console_mode_in, tmp_assign_source_3);

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_textual$drivers$win32$get_console_mode(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_console_mode);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_terminal_out));
tmp_args_element_value_2 = Nuitka_Cell_GET(var_terminal_out);
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode->m_frame.f_lineno = 169;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_current_console_mode_out) == NULL);
Nuitka_Cell_SET(var_current_console_mode_out, tmp_assign_source_4);

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = var_current_console_mode_in;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = var_current_console_mode_out;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = var_terminal_in;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = var_terminal_out;
Py_INCREF(tmp_closure_1[3]);
tmp_assign_source_5 = MAKE_FUNCTION_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_restore == NULL);
var_restore = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
tmp_called_value_3 = module_var_accessor_textual$drivers$win32$set_console_mode(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_console_mode);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_terminal_out));
tmp_args_element_value_3 = Nuitka_Cell_GET(var_terminal_out);
CHECK_OBJECT(Nuitka_Cell_GET(var_current_console_mode_out));
tmp_bitor_expr_left_1 = Nuitka_Cell_GET(var_current_console_mode_out);
tmp_bitor_expr_right_1 = module_var_accessor_textual$drivers$win32$ENABLE_VIRTUAL_TERMINAL_PROCESSING(tstate);
if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING);
}

if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode->m_frame.f_lineno = 176;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_4 = module_var_accessor_textual$drivers$win32$set_console_mode(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_console_mode);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(var_terminal_in));
tmp_args_element_value_5 = Nuitka_Cell_GET(var_terminal_in);
tmp_args_element_value_6 = module_var_accessor_textual$drivers$win32$ENABLE_VIRTUAL_TERMINAL_INPUT(tstate);
if (unlikely(tmp_args_element_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT);
}

if (tmp_args_element_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_1 = "cccco";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode->m_frame.f_lineno = 179;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "cccco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__3_enable_application_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__3_enable_application_mode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__3_enable_application_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__3_enable_application_mode,
    type_description_1,
    var_terminal_in,
    var_terminal_out,
    var_current_console_mode_in,
    var_current_console_mode_out,
    var_restore
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__3_enable_application_mode == cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode);
    cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__3_enable_application_mode);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_restore);
tmp_return_value = var_restore;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_terminal_in);
CHECK_OBJECT(var_terminal_in);
Py_DECREF(var_terminal_in);
var_terminal_in = NULL;
CHECK_OBJECT(var_terminal_out);
CHECK_OBJECT(var_terminal_out);
Py_DECREF(var_terminal_out);
var_terminal_out = NULL;
CHECK_OBJECT(var_current_console_mode_in);
CHECK_OBJECT(var_current_console_mode_in);
Py_DECREF(var_current_console_mode_in);
var_current_console_mode_in = NULL;
CHECK_OBJECT(var_current_console_mode_out);
CHECK_OBJECT(var_current_console_mode_out);
Py_DECREF(var_current_console_mode_out);
var_current_console_mode_out = NULL;
CHECK_OBJECT(var_restore);
CHECK_OBJECT(var_restore);
Py_DECREF(var_restore);
var_restore = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_terminal_in);
CHECK_OBJECT(var_terminal_in);
Py_DECREF(var_terminal_in);
var_terminal_in = NULL;
CHECK_OBJECT(var_terminal_out);
CHECK_OBJECT(var_terminal_out);
Py_DECREF(var_terminal_out);
var_terminal_out = NULL;
CHECK_OBJECT(var_current_console_mode_in);
CHECK_OBJECT(var_current_console_mode_in);
Py_DECREF(var_current_console_mode_in);
var_current_console_mode_in = NULL;
CHECK_OBJECT(var_current_console_mode_out);
CHECK_OBJECT(var_current_console_mode_out);
Py_DECREF(var_current_console_mode_out);
var_current_console_mode_out = NULL;
Py_XDECREF(var_restore);
var_restore = NULL;
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


static PyObject *impl_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore = MAKE_FUNCTION_FRAME(tstate, code_objects_eb87d430bc39ca8aa60961d080571c6f, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore = cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_textual$drivers$win32$set_console_mode(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_console_mode);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_terminal_in);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 173;
type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_console_mode_in);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 173;
type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore->m_frame.f_lineno = 173;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_textual$drivers$win32$set_console_mode(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_console_mode);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_terminal_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[3]);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_console_mode_out);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[1]);
frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore->m_frame.f_lineno = 174;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "cccc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore,
    type_description_1,
    self->m_closure[2],
    self->m_closure[0],
    self->m_closure[3],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore == cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore);
    cache_frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore);

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


static PyObject *impl_textual$drivers$win32$$$function__4_wait_for_handles(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_handles = python_pars[0];
PyObject *par_timeout = python_pars[1];
PyObject *var_ret = NULL;
PyObject *var_arrtype = NULL;
PyObject *var_handle_array = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__4_wait_for_handles;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles = MAKE_FUNCTION_FRAME(tstate, code_objects_7705f7ab9ca994119f771c9cf3df1dc8, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__4_wait_for_handles = cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__4_wait_for_handles);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__4_wait_for_handles) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_len_arg_1;
tmp_mult_expr_left_1 = module_var_accessor_textual$drivers$win32$HANDLE(tstate);
if (unlikely(tmp_mult_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HANDLE);
}

if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_handles);
tmp_len_arg_1 = par_handles;
tmp_mult_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_arrtype == NULL);
var_arrtype = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
CHECK_OBJECT(var_arrtype);
tmp_direct_call_arg1_1 = var_arrtype;
CHECK_OBJECT(par_handles);
tmp_direct_call_arg2_1 = par_handles;
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_handle_array == NULL);
var_handle_array = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_len_arg_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
tmp_expression_value_1 = module_var_accessor_textual$drivers$win32$KERNEL32(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KERNEL32);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_WaitForMultipleObjects);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_handle_array);
tmp_len_arg_2 = var_handle_array;
tmp_args_element_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_handle_array);
tmp_args_element_value_2 = var_handle_array;
tmp_called_value_2 = module_var_accessor_textual$drivers$win32$BOOL(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__4_wait_for_handles->m_frame.f_lineno = 203;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_false_tuple);

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = module_var_accessor_textual$drivers$win32$DWORD(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_timeout);
tmp_args_element_value_5 = par_timeout;
frame_frame_textual$drivers$win32$$$function__4_wait_for_handles->m_frame.f_lineno = 203;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__4_wait_for_handles->m_frame.f_lineno = 202;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_ret == NULL);
var_ret = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_ret);
tmp_cmp_expr_left_1 = var_ret;
tmp_cmp_expr_right_1 = module_var_accessor_textual$drivers$win32$WAIT_TIMEOUT(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WAIT_TIMEOUT);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_handles);
tmp_expression_value_2 = par_handles;
CHECK_OBJECT(var_ret);
tmp_subscript_value_1 = var_ret;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__4_wait_for_handles, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__4_wait_for_handles->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__4_wait_for_handles, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__4_wait_for_handles,
    type_description_1,
    par_handles,
    par_timeout,
    var_ret,
    var_arrtype,
    var_handle_array
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__4_wait_for_handles == cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles);
    cache_frame_frame_textual$drivers$win32$$$function__4_wait_for_handles = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__4_wait_for_handles);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ret);
CHECK_OBJECT(var_ret);
Py_DECREF(var_ret);
var_ret = NULL;
CHECK_OBJECT(var_arrtype);
CHECK_OBJECT(var_arrtype);
Py_DECREF(var_arrtype);
var_arrtype = NULL;
CHECK_OBJECT(var_handle_array);
CHECK_OBJECT(var_handle_array);
Py_DECREF(var_handle_array);
var_handle_array = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ret);
var_ret = NULL;
Py_XDECREF(var_arrtype);
var_arrtype = NULL;
Py_XDECREF(var_handle_array);
var_handle_array = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_handles);
Py_DECREF(par_handles);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_handles);
Py_DECREF(par_handles);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$drivers$win32$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_loop = python_pars[1];
PyObject *par_app = python_pars[2];
PyObject *par_exit_event = python_pars[3];
PyObject *par_process_event = python_pars[4];
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_39391e4b6bbea2a28263eb1ce02749ab, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__5___init__->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__5___init__ = cache_frame_frame_textual$drivers$win32$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__5___init__);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__5___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_loop);
tmp_assattr_value_1 = par_loop;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_loop, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_app);
tmp_assattr_value_2 = par_app;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_app, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_exit_event);
tmp_assattr_value_3 = par_exit_event;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_exit_event, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_process_event);
tmp_assattr_value_4 = par_process_event;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_process_event, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 226;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_textual$drivers$win32, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__5___init__->m_frame.f_lineno = 226;
tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_ce0ff654e07c40abfa254af73c3d02dd_tuple, 0), mod_consts.const_tuple_str_plain_name_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__5___init__,
    type_description_1,
    par_self,
    par_loop,
    par_app,
    par_exit_event,
    par_process_event,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__5___init__ == cache_frame_frame_textual$drivers$win32$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__5___init__);
    cache_frame_frame_textual$drivers$win32$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__5___init__);

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
CHECK_OBJECT(par_loop);
Py_DECREF(par_loop);
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
CHECK_OBJECT(par_exit_event);
Py_DECREF(par_exit_event);
CHECK_OBJECT(par_process_event);
Py_DECREF(par_process_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_loop);
Py_DECREF(par_loop);
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
CHECK_OBJECT(par_exit_event);
Py_DECREF(par_exit_event);
CHECK_OBJECT(par_process_event);
Py_DECREF(par_process_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$drivers$win32$$$function__6_run(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_keys = NULL;
PyObject *var_new_size = NULL;
PyObject *var_exit_requested = NULL;
PyObject *var_parser = NULL;
PyObject *var_read_count = NULL;
PyObject *var_hIn = NULL;
PyObject *var_MAX_EVENTS = NULL;
PyObject *var_arrtype = NULL;
PyObject *var_input_records = NULL;
PyObject *var_ReadConsoleInputW = NULL;
PyObject *var_append_key = NULL;
PyObject *var_event = NULL;
PyObject *var_read_input_records = NULL;
PyObject *var_input_record = NULL;
PyObject *var_event_type = NULL;
PyObject *var_key_event = NULL;
PyObject *var_key = NULL;
PyObject *var_size = NULL;
PyObject *var_error = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__6_run;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__6_run = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__6_run)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__6_run);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__6_run == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__6_run = MAKE_FUNCTION_FRAME(tstate, code_objects_807815a67ec612827373e03e5abaa741, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__6_run->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__6_run = cache_frame_frame_textual$drivers$win32$$$function__6_run;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__6_run);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__6_run) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_exit_event);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooNNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_is_set);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooooooooNNoooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_exit_requested == NULL);
var_exit_requested = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_textual$drivers$win32$XTermParser(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_XTermParser);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_1 = "ooooooooNNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_textual$drivers$win32$constants(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_constants);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_1 = "ooooooooNNoooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_DEBUG);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooNNoooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 230;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_debug_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooNNoooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_parser == NULL);
var_parser = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 233;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_DWORD,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
assert(var_read_count == NULL);
var_read_count = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_textual$drivers$win32$GetStdHandle(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetStdHandle);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_1 = module_var_accessor_textual$drivers$win32$STD_INPUT_HANDLE(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_STD_INPUT_HANDLE);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 234;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 234;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 234;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
assert(var_hIn == NULL);
var_hIn = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_int_pos_1024;
assert(var_MAX_EVENTS == NULL);
Py_INCREF(tmp_assign_source_5);
var_MAX_EVENTS = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
tmp_mult_expr_left_1 = module_var_accessor_textual$drivers$win32$INPUT_RECORD(tstate);
if (unlikely(tmp_mult_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INPUT_RECORD);
}

if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 240;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_MAX_EVENTS);
tmp_mult_expr_right_1 = var_MAX_EVENTS;
tmp_assign_source_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
assert(var_arrtype == NULL);
var_arrtype = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_arrtype);
tmp_called_value_3 = var_arrtype;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 241;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
assert(var_input_records == NULL);
var_input_records = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = module_var_accessor_textual$drivers$win32$KERNEL32(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KERNEL32);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ReadConsoleInputW);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
assert(var_ReadConsoleInputW == NULL);
var_ReadConsoleInputW = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_keys == NULL);
var_keys = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_keys);
tmp_expression_value_5 = var_keys;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_10 == NULL));
assert(var_append_key == NULL);
var_append_key = tmp_assign_source_10;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_4;
if (var_exit_requested == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exit_requested);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 246;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_4 = var_exit_requested;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 246;
tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
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
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
if (var_parser == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parser);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 248;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_called_instance_2 = var_parser;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 248;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tick);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_1__for_iterator;
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooNNoooooooooooo";
exception_lineno = 248;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_13 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_event;
    var_event = tmp_assign_source_13;
    Py_INCREF(var_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 249;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_3;
}

tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_event);
tmp_args_element_value_2 = var_event;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 249;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_process_event, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_list_element_1;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = module_var_accessor_textual$drivers$win32$wait_for_handles(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_for_handles);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
if (var_hIn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hIn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_list_element_1 = var_hIn;
tmp_args_element_value_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
tmp_args_element_value_4 = mod_consts.const_int_pos_100;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 252;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_start_1;
branch_no_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_10;
if (var_ReadConsoleInputW == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ReadConsoleInputW);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 257;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_6 = var_ReadConsoleInputW;
if (var_hIn == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_hIn);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_5 = var_hIn;
tmp_called_value_7 = module_var_accessor_textual$drivers$win32$byref(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
if (var_input_records == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_input_records);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_7 = var_input_records;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 258;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
if (var_MAX_EVENTS == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MAX_EVENTS);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_8 = var_MAX_EVENTS;
tmp_called_value_8 = module_var_accessor_textual$drivers$win32$byref(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_byref);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_6);

exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
if (var_read_count == NULL) {
Py_DECREF(tmp_args_element_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_10 = var_read_count;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 258;
tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_10);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 258;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 257;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
PyObject *tmp_expression_value_7;
if (var_input_records == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_input_records);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_6 = var_input_records;
if (var_read_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_read_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_7 = var_read_count;
tmp_stop_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_value);
if (tmp_stop_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
CHECK_OBJECT(tmp_stop_value_1);
Py_DECREF(tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_read_input_records;
    var_read_input_records = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_delsubscr_target_1;
PyObject *tmp_delsubscr_subscript_1;
if (var_keys == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 262;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_delsubscr_target_1 = var_keys;
tmp_delsubscr_subscript_1 = mod_consts.const_slice_none_none_none;
tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = Py_None;
{
    PyObject *old = var_new_size;
    var_new_size = tmp_assign_source_15;
    Py_INCREF(var_new_size);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_read_input_records);
tmp_iter_arg_2 = var_read_input_records;
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_17 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooNNoooooooooooo";
exception_lineno = 265;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_18 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_input_record;
    var_input_record = tmp_assign_source_18;
    Py_INCREF(var_input_record);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_input_record);
tmp_expression_value_8 = var_input_record;
tmp_assign_source_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_EventType);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_event_type;
    var_event_type = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_event_type);
tmp_cmp_expr_left_2 = var_event_type;
tmp_cmp_expr_right_2 = const_int_pos_1;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_input_record);
tmp_expression_value_10 = var_input_record;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Event);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_KeyEvent);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_key_event;
    var_key_event = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_key_event);
tmp_expression_value_12 = var_key_event;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_uChar);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_UnicodeChar);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_key_event);
tmp_expression_value_13 = var_key_event;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_bKeyDown);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 272;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_key_event);
tmp_expression_value_14 = var_key_event;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_dwControlKeyState);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 274;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_key_event);
tmp_expression_value_15 = var_key_event;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_wVirtualKeyCode);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_3 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_start_3;
branch_no_5:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_11;
if (var_append_key == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_append_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_9 = var_append_key;
CHECK_OBJECT(var_key);
tmp_args_element_value_11 = var_key;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 278;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_event_type);
tmp_cmp_expr_left_4 = var_event_type;
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_4;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(var_input_record);
tmp_expression_value_18 = var_input_record;
tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_Event);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_WindowBufferSizeEvent);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_dwSize);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_size;
    var_size = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_size);
tmp_expression_value_19 = var_size;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_X);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_20;
PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_size);
tmp_expression_value_20 = var_size;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_Y);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooNNoooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_assign_source_23, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_23);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
{
    PyObject *old = var_new_size;
    var_new_size = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
branch_no_6:;
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_3;
loop_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_3;
if (var_keys == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_truth_name_3 = CHECK_IF_TRUE(var_keys);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_12;
PyObject *tmp_bytes_arg_value_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_1;
PyObject *tmp_encoding_value_1;
PyObject *tmp_errors_value_1;
PyObject *tmp_encoding_value_2;
if (var_parser == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_parser);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 289;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_21 = var_parser;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_feed);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_str_arg_value_2 = const_str_empty;
if (var_keys == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_keys);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_iterable_value_1 = var_keys;
tmp_str_arg_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_1);
if (tmp_str_arg_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 290;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_encoding_value_1 = mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd;
tmp_errors_value_1 = mod_consts.const_str_plain_surrogatepass;
tmp_bytes_arg_value_1 = UNICODE_ENCODE3(tstate, tmp_str_arg_value_1, tmp_encoding_value_1, tmp_errors_value_1);
CHECK_OBJECT(tmp_str_arg_value_1);
Py_DECREF(tmp_str_arg_value_1);
if (tmp_bytes_arg_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 290;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_encoding_value_2 = mod_consts.const_str_digest_913ae8f3439742e034c09e3f599385fd;
tmp_args_element_value_12 = BYTES_DECODE2(tstate, tmp_bytes_arg_value_1, tmp_encoding_value_2);
CHECK_OBJECT(tmp_bytes_arg_value_1);
Py_DECREF(tmp_bytes_arg_value_1);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 290;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 289;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_25 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooNNoooooooooooo";
exception_lineno = 289;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_26 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_event;
    var_event = tmp_assign_source_26;
    Py_INCREF(var_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_13;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 292;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_5;
}

tmp_called_instance_4 = par_self;
CHECK_OBJECT(var_event);
tmp_args_element_value_13 = var_event;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 292;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_process_event, tmp_args_element_value_13);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_4;
loop_end_4:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
if (var_new_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 293;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_cmp_expr_left_5 = var_new_size;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_22;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_call_result_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_22 = par_self;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_on_size_change);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
if (var_new_size == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}

tmp_direct_call_arg2_1 = var_new_size;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_call_result_5 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_8:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__6_run, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__6_run, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_27); 
assert(var_error == NULL);
Py_INCREF(tmp_assign_source_27);
var_error = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 298;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_24 = par_self;
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_app);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_7;
}
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_log);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_7;
}
tmp_args_element_value_14 = mod_consts.const_str_digest_ade03a14a8b652b4d8cf873b3ebcf997;
CHECK_OBJECT(var_error);
tmp_args_element_value_15 = var_error;
frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = 298;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_5,
        mod_consts.const_str_plain_error,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooNNoooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_error);
var_error = NULL;

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
Py_XDECREF(var_error);
var_error = NULL;

goto branch_end_9;
branch_no_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 232;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$drivers$win32$$$function__6_run->m_frame)) {
        frame_frame_textual$drivers$win32$$$function__6_run->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooNNoooooooooooo";
goto try_except_handler_6;
branch_end_9:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_4;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__6_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__6_run->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__6_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__6_run,
    type_description_1,
    par_self,
    var_keys,
    var_new_size,
    var_exit_requested,
    var_parser,
    var_read_count,
    var_hIn,
    var_MAX_EVENTS,
    NULL,
    NULL,
    var_arrtype,
    var_input_records,
    var_ReadConsoleInputW,
    var_append_key,
    var_event,
    var_read_input_records,
    var_input_record,
    var_event_type,
    var_key_event,
    var_key,
    var_size,
    var_error
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__6_run == cache_frame_frame_textual$drivers$win32$$$function__6_run) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__6_run);
    cache_frame_frame_textual$drivers$win32$$$function__6_run = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__6_run);

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
Py_XDECREF(var_keys);
var_keys = NULL;
Py_XDECREF(var_new_size);
var_new_size = NULL;
Py_XDECREF(var_exit_requested);
var_exit_requested = NULL;
Py_XDECREF(var_parser);
var_parser = NULL;
Py_XDECREF(var_read_count);
var_read_count = NULL;
Py_XDECREF(var_hIn);
var_hIn = NULL;
Py_XDECREF(var_MAX_EVENTS);
var_MAX_EVENTS = NULL;
Py_XDECREF(var_arrtype);
var_arrtype = NULL;
Py_XDECREF(var_input_records);
var_input_records = NULL;
Py_XDECREF(var_ReadConsoleInputW);
var_ReadConsoleInputW = NULL;
Py_XDECREF(var_append_key);
var_append_key = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_read_input_records);
var_read_input_records = NULL;
Py_XDECREF(var_input_record);
var_input_record = NULL;
Py_XDECREF(var_event_type);
var_event_type = NULL;
Py_XDECREF(var_key_event);
var_key_event = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_size);
var_size = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_keys);
var_keys = NULL;
Py_XDECREF(var_new_size);
var_new_size = NULL;
Py_XDECREF(var_exit_requested);
var_exit_requested = NULL;
Py_XDECREF(var_parser);
var_parser = NULL;
Py_XDECREF(var_read_count);
var_read_count = NULL;
Py_XDECREF(var_hIn);
var_hIn = NULL;
Py_XDECREF(var_MAX_EVENTS);
var_MAX_EVENTS = NULL;
Py_XDECREF(var_arrtype);
var_arrtype = NULL;
Py_XDECREF(var_input_records);
var_input_records = NULL;
Py_XDECREF(var_ReadConsoleInputW);
var_ReadConsoleInputW = NULL;
Py_XDECREF(var_append_key);
var_append_key = NULL;
Py_XDECREF(var_event);
var_event = NULL;
Py_XDECREF(var_read_input_records);
var_read_input_records = NULL;
Py_XDECREF(var_input_record);
var_input_record = NULL;
Py_XDECREF(var_event_type);
var_event_type = NULL;
Py_XDECREF(var_key_event);
var_key_event = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_size);
var_size = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_textual$drivers$win32$$$function__7_on_size_change(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_width = python_pars[1];
PyObject *par_height = python_pars[2];
PyObject *var_size = NULL;
PyObject *var_event = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$function__7_on_size_change;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change)) {
    Py_XDECREF(cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change = MAKE_FUNCTION_FRAME(tstate, code_objects_4af0f10e52801c85dece37901bf63ecc, module_textual$drivers$win32, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change->m_type_description == NULL);
frame_frame_textual$drivers$win32$$$function__7_on_size_change = cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$function__7_on_size_change);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$function__7_on_size_change) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_textual$drivers$win32$Size(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Size);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_width);
tmp_args_element_value_1 = par_width;
CHECK_OBJECT(par_height);
tmp_args_element_value_2 = par_height;
frame_frame_textual$drivers$win32$$$function__7_on_size_change->m_frame.f_lineno = 302;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_size == NULL);
var_size = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_textual$drivers$win32$Resize(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Resize);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_size);
tmp_args_element_value_3 = var_size;
CHECK_OBJECT(var_size);
tmp_args_element_value_4 = var_size;
frame_frame_textual$drivers$win32$$$function__7_on_size_change->m_frame.f_lineno = 303;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_event == NULL);
var_event = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_2;
tmp_called_value_3 = module_var_accessor_textual$drivers$win32$run_coroutine_threadsafe(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_run_coroutine_threadsafe);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_app);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_event);
tmp_args_element_value_5 = var_event;
frame_frame_textual$drivers$win32$$$function__7_on_size_change->m_frame.f_lineno = 304;
tmp_kw_call_arg_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__post_message, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_loop);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 304;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32$$$function__7_on_size_change->m_frame.f_lineno = 304;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_loop_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$function__7_on_size_change, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$function__7_on_size_change->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$function__7_on_size_change, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$function__7_on_size_change,
    type_description_1,
    par_self,
    par_width,
    par_height,
    var_size,
    var_event
);


// Release cached frame if used for exception.
if (frame_frame_textual$drivers$win32$$$function__7_on_size_change == cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change);
    cache_frame_frame_textual$drivers$win32$$$function__7_on_size_change = NULL;
}

assertFrameObject(frame_frame_textual$drivers$win32$$$function__7_on_size_change);

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
CHECK_OBJECT(var_size);
CHECK_OBJECT(var_size);
Py_DECREF(var_size);
var_size = NULL;
CHECK_OBJECT(var_event);
CHECK_OBJECT(var_event);
Py_DECREF(var_event);
var_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_size);
var_size = NULL;
Py_XDECREF(var_event);
var_event = NULL;
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
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_height);
Py_DECREF(par_height);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
CHECK_OBJECT(par_height);
Py_DECREF(par_height);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__1_set_console_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__1_set_console_mode,
        mod_consts.const_str_plain_set_console_mode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6d8fc4579d914ee92ef7611fa29e030e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        mod_consts.const_str_digest_e8bb243861ed226899caf1a8e969caf8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__2_get_console_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__2_get_console_mode,
        mod_consts.const_str_plain_get_console_mode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ac6de278ff0594a47add135d6f81ccf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        mod_consts.const_str_digest_e94b477427fec29f1beaa66c23f19bd4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__3_enable_application_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__3_enable_application_mode,
        mod_consts.const_str_plain_enable_application_mode,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ced1c7042986a7837a83e2305dcc1f38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        mod_consts.const_str_digest_aed84db8c758abf411ff780204f37183,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore,
        mod_consts.const_str_plain_restore,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_70a8018c09fda74eba900336d60332da,
#endif
        code_objects_eb87d430bc39ca8aa60961d080571c6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        mod_consts.const_str_digest_a3e2a2b56ebcd56d7fe1f256eea86784,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__4_wait_for_handles(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__4_wait_for_handles,
        mod_consts.const_str_plain_wait_for_handles,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7705f7ab9ca994119f771c9cf3df1dc8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        mod_consts.const_str_digest_55799f945338b26e5b1dfa1254245b3b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__5___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d6e674920896a8223dd0a5f32859b309,
#endif
        code_objects_39391e4b6bbea2a28263eb1ce02749ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__6_run(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__6_run,
        mod_consts.const_str_plain_run,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_26ccc535b180964eef86975d18b51026,
#endif
        code_objects_807815a67ec612827373e03e5abaa741,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$drivers$win32$$$function__7_on_size_change(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$drivers$win32$$$function__7_on_size_change,
        mod_consts.const_str_plain_on_size_change,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea7dd101290f1144f3d50488a3fec1b1,
#endif
        code_objects_4af0f10e52801c85dece37901bf63ecc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$drivers$win32,
        mod_consts.const_str_digest_1f107cc2a4f9bdb51f74148e260adf91,
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

static function_impl_code const function_table_textual$drivers$win32[] = {
impl_textual$drivers$win32$$$function__3_enable_application_mode$$$function__1_restore,
impl_textual$drivers$win32$$$function__1_set_console_mode,
impl_textual$drivers$win32$$$function__2_get_console_mode,
impl_textual$drivers$win32$$$function__3_enable_application_mode,
impl_textual$drivers$win32$$$function__4_wait_for_handles,
impl_textual$drivers$win32$$$function__5___init__,
impl_textual$drivers$win32$$$function__6_run,
impl_textual$drivers$win32$$$function__7_on_size_change,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$drivers$win32);
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
        module_textual$drivers$win32,
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
        function_table_textual$drivers$win32,
        sizeof(function_table_textual$drivers$win32) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.drivers.win32";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$drivers$win32(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$drivers$win32");

    // Store the module for future use.
    module_textual$drivers$win32 = module;

    moduledict_textual$drivers$win32 = MODULE_DICT(module_textual$drivers$win32);

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
        PRINT_STRING("textual$drivers$win32: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$drivers$win32: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$drivers$win32: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.drivers.win32" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$drivers$win32\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$drivers$win32,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$drivers$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$drivers$win32,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$drivers$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$drivers$win32,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$drivers$win32);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$drivers$win32);
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

        UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
struct Nuitka_CellObject *outline_9_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
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
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$drivers$win32$$$class__1_COORD_50 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__1_COORD_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_textual$drivers$win32$$$class__2_uChar_59 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__2_uChar_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
PyObject *locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
PyObject *locals_textual$drivers$win32$$$class__8_InputEvent_110 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__8_InputEvent_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
PyObject *locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
PyObject *locals_textual$drivers$win32$$$class__10_EventMonitor_212 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_34;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_35;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$drivers$win32 = MAKE_MODULE_FRAME(code_objects_f77d00b657e655a3fac33f69ccb6096d, module_textual$drivers$win32);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32);
assert(Py_REFCNT(frame_frame_textual$drivers$win32) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$drivers$win32$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$drivers$win32$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ctypes, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_msvcrt;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$drivers$win32;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$drivers$win32;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 6;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$drivers$win32;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_3e80c0767622f7562c34f7252ae9ac65_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 7;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_AbstractEventLoop,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AbstractEventLoop);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_AbstractEventLoop, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_run_coroutine_threadsafe,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_run_coroutine_threadsafe);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_run_coroutine_threadsafe, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_12 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_12);
tmp_import_from_2__module = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_Structure,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Structure);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Structure, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_byref,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_byref);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_byref, tmp_assign_source_15);
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
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_16 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wintypes, tmp_assign_source_16);
}
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_assign_source_17 == NULL));
assert(tmp_import_from_3__module == NULL);
Py_INCREF(tmp_assign_source_17);
tmp_import_from_3__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_BOOL,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BOOL);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_BOOL, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_CHAR,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_CHAR);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_CHAR, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_DWORD,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_DWORD);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_DWORD, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_HANDLE,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_HANDLE);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_HANDLE, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_SHORT,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_SHORT);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_SHORT, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_UINT,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_UINT);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_UINT, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_WCHAR,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_WCHAR);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WCHAR, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_WORD,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_WORD);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WORD, tmp_assign_source_25);
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
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_26 == NULL));
assert(tmp_import_from_4__module == NULL);
Py_INCREF(tmp_assign_source_26);
tmp_import_from_4__module = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_IO,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_IO);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_IO, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_15 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_List,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_List);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_List, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_31);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$drivers$win32;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_constants_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 12;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_constants,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_constants);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_constants, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$drivers$win32;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_XTermParser_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 13;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_XTermParser,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_XTermParser);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_XTermParser, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$drivers$win32;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_Event_str_plain_Resize_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 14;
tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_20 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_Event,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_Event);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Event, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_21 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_Resize,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_Resize);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Resize, tmp_assign_source_36);
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
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_8b449230fefb53e14684626fc331fc25;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$drivers$win32;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Size_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 15;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_textual$drivers$win32,
        mod_consts.const_str_plain_Size,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_Size);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_Size, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_WinDLL);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 20;
tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_kernel32_true_tuple, 0), mod_consts.const_tuple_str_plain_use_last_error_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KERNEL32, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
tmp_assign_source_39 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_ECHO_INPUT, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = mod_consts.const_int_pos_128;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_EXTENDED_FLAGS, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = mod_consts.const_int_pos_32;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_INSERT_MODE, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_LINE_INPUT, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_MOUSE_INPUT, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
tmp_assign_source_44 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_PROCESSED_INPUT, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
tmp_assign_source_45 = mod_consts.const_int_pos_64;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_QUICK_EDIT_MODE, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = mod_consts.const_int_pos_8;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_WINDOW_INPUT, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = mod_consts.const_int_pos_512;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_INPUT, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = const_int_pos_1;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_PROCESSED_OUTPUT, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = mod_consts.const_int_pos_2;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_WRAP_AT_EOL_OUTPUT, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = mod_consts.const_int_pos_4;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_VIRTUAL_TERMINAL_PROCESSING, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = mod_consts.const_int_pos_8;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_DISABLE_NEWLINE_AUTO_RETURN, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = mod_consts.const_int_pos_16;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_ENABLE_LVB_GRID_WORLDWIDE, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
tmp_assign_source_53 = mod_consts.const_int_neg_10;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_STD_INPUT_HANDLE, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = mod_consts.const_int_neg_11;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_STD_OUTPUT_HANDLE, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
tmp_assign_source_55 = mod_consts.const_int_pos_258;
UPDATE_STRING_DICT0(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WAIT_TIMEOUT, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_textual$drivers$win32$KERNEL32(tstate);
assert(!(tmp_expression_value_2 == NULL));
tmp_assign_source_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_GetStdHandle);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_GetStdHandle, tmp_assign_source_56);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_3;
tmp_expression_value_3 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_3 == NULL));
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_DWORD);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_assattr_value_3 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_1);
tmp_assattr_target_3 = module_var_accessor_textual$drivers$win32$GetStdHandle(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_argtypes, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_4;
tmp_expression_value_4 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_4 == NULL));
tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_HANDLE);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_assattr_target_4 = module_var_accessor_textual$drivers$win32$GetStdHandle(tstate);
if (unlikely(tmp_assattr_target_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetStdHandle);
}

if (tmp_assattr_target_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_4);

exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_restype, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$drivers$win32$Structure(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_1);
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


exception_lineno = 50;

    goto try_except_handler_6;
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
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_5 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
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


exception_lineno = 50;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_COORD;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 50;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_8 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
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
PyObject *tmp_expression_value_9;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_9, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_6;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 50;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 50;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_62;
}
branch_end_1:;
{
PyObject *tmp_assign_source_63;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$drivers$win32$$$class__1_COORD_50 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__1_COORD_50, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_08bc1a24a7f4de16ed6ea448b1f57058;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__1_COORD_50, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_COORD;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__1_COORD_50, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_50;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__1_COORD_50, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_8;
}
frame_frame_textual$drivers$win32$$$class__1_COORD_2 = MAKE_CLASS_FRAME(tstate, code_objects_e12bce90f903f78b1470000b8e8bb2a0, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__1_COORD_2);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__1_COORD_2) == 2);

// Framed code:
{
PyObject *tmp_list_element_2;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = mod_consts.const_str_plain_X;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = PyObject_GetItem(locals_textual$drivers$win32$$$class__1_COORD_50, mod_consts.const_str_plain_SHORT);

if (tmp_tuple_element_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_4 = module_var_accessor_textual$drivers$win32$SHORT(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SHORT);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_tuple_element_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_list_element_2);
goto frame_exception_exit_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_5;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_2);
tmp_tuple_element_5 = mod_consts.const_str_plain_Y;
tmp_list_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = PyObject_GetItem(locals_textual$drivers$win32$$$class__1_COORD_50, mod_consts.const_str_plain_SHORT);

if (tmp_tuple_element_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_5 = module_var_accessor_textual$drivers$win32$SHORT(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SHORT);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
        Py_INCREF(tmp_tuple_element_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_3;
    }
}

PyTuple_SET_ITEM(tmp_list_element_2, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_list_element_2);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_2);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_2;
// Finished with no exception for list_build:
list_build_no_exception_1:;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__1_COORD_50, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__1_COORD_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__1_COORD_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__1_COORD_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__1_COORD_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__1_COORD_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_8;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__1_COORD_50, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_8;
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


exception_lineno = 50;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__1_COORD_50, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_8;
}
branch_no_3:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_COORD;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_textual$drivers$win32$$$class__1_COORD_50;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 50;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto try_except_handler_8;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_63 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_textual$drivers$win32$$$class__1_COORD_50);
locals_textual$drivers$win32$$$class__1_COORD_50 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__1_COORD_50);
locals_textual$drivers$win32$$$class__1_COORD_50 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 50;
goto try_except_handler_6;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_COORD, tmp_assign_source_63);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
PyObject *tmp_assign_source_65;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_textual$drivers$win32$Union(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_assign_source_65 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_65, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_66 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_11 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_11, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_68 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_68;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_uChar;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 59;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_69;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_14 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
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
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_15, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 59;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_70;
}
branch_end_4:;
{
PyObject *tmp_assign_source_71;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_textual$drivers$win32$$$class__2_uChar_59 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__2_uChar_59, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_f5b7e170f86a066c11e0c3b6c396a5c2;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__2_uChar_59, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_uChar;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__2_uChar_59, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_59;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__2_uChar_59, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
frame_frame_textual$drivers$win32$$$class__2_uChar_3 = MAKE_CLASS_FRAME(tstate, code_objects_fb0b6f08cad163c869331cd516f7bb14, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__2_uChar_3);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__2_uChar_3) == 2);

// Framed code:
{
PyObject *tmp_list_element_3;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = mod_consts.const_str_plain_AsciiChar;
tmp_list_element_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = PyObject_GetItem(locals_textual$drivers$win32$$$class__2_uChar_59, mod_consts.const_str_plain_CHAR);

if (tmp_tuple_element_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_10 = module_var_accessor_textual$drivers$win32$CHAR(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CHAR);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_2 = "o";
    goto tuple_build_exception_5;
}
        Py_INCREF(tmp_tuple_element_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_5;
    }
}

PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_10);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_list_element_3);
goto frame_exception_exit_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_11;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_3);
tmp_tuple_element_11 = mod_consts.const_str_plain_UnicodeChar;
tmp_list_element_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = PyObject_GetItem(locals_textual$drivers$win32$$$class__2_uChar_59, mod_consts.const_str_plain_WCHAR);

if (tmp_tuple_element_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_11 = module_var_accessor_textual$drivers$win32$WCHAR(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WCHAR);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;
type_description_2 = "o";
    goto tuple_build_exception_6;
}
        Py_INCREF(tmp_tuple_element_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_6;
    }
}

PyTuple_SET_ITEM(tmp_list_element_3, 1, tmp_tuple_element_11);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_list_element_3);
goto list_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_3);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_3;
// Finished with no exception for list_build:
list_build_no_exception_2:;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__2_uChar_59, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__2_uChar_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__2_uChar_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__2_uChar_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__2_uChar_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__2_uChar_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_11;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__2_uChar_59, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
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


exception_lineno = 59;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__2_uChar_59, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_12 = mod_consts.const_str_plain_uChar;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_textual$drivers$win32$$$class__2_uChar_59;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 59;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_11;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_71 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_textual$drivers$win32$$$class__2_uChar_59);
locals_textual$drivers$win32$$$class__2_uChar_59 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__2_uChar_59);
locals_textual$drivers$win32$$$class__2_uChar_59 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 59;
goto try_except_handler_9;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_uChar, tmp_assign_source_71);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
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
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_73;
PyObject *tmp_tuple_element_13;
tmp_tuple_element_13 = module_var_accessor_textual$drivers$win32$Structure(tstate);
if (unlikely(tmp_tuple_element_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto try_except_handler_12;
}
tmp_assign_source_73 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_73, 0, tmp_tuple_element_13);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_74 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_17 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_3, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_76 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_76;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
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
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_KEY_EVENT_RECORD;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 68;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_77;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
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
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_10, tmp_default_value_3);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_12;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 68;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 68;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_78;
}
branch_end_7:;
{
PyObject *tmp_assign_source_79;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_f5b7e170f86a066c11e0c3b6c396a5c2;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_KEY_EVENT_RECORD;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_68;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_14;
}
frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4 = MAKE_CLASS_FRAME(tstate, code_objects_939203e95a9f863865082304358c1699, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4) == 2);

// Framed code:
{
PyObject *tmp_list_element_4;
PyObject *tmp_tuple_element_16;
tmp_tuple_element_16 = mod_consts.const_str_plain_bKeyDown;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = PyObject_GetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain_BOOL);

if (tmp_tuple_element_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_16 = module_var_accessor_textual$drivers$win32$BOOL(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_2 = "o";
    goto tuple_build_exception_8;
}
        Py_INCREF(tmp_tuple_element_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_8;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_16);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_list_element_4);
goto frame_exception_exit_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 6);
{
PyObject *tmp_tuple_element_17;
PyObject *tmp_tuple_element_18;
PyObject *tmp_tuple_element_19;
PyObject *tmp_tuple_element_20;
PyObject *tmp_tuple_element_21;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_4);
tmp_tuple_element_17 = mod_consts.const_str_plain_wRepeatCount;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = PyObject_GetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain_WORD);

if (tmp_tuple_element_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_17 = module_var_accessor_textual$drivers$win32$WORD(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WORD);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_2 = "o";
    goto tuple_build_exception_9;
}
        Py_INCREF(tmp_tuple_element_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_9;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_17);
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_4);
tmp_tuple_element_18 = mod_consts.const_str_plain_wVirtualKeyCode;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = PyObject_GetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain_WORD);

if (tmp_tuple_element_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_18 = module_var_accessor_textual$drivers$win32$WORD(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WORD);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;
type_description_2 = "o";
    goto tuple_build_exception_10;
}
        Py_INCREF(tmp_tuple_element_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_10;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_18);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_4);
tmp_tuple_element_19 = mod_consts.const_str_plain_wVirtualScanCode;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = PyObject_GetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain_WORD);

if (tmp_tuple_element_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_19 = module_var_accessor_textual$drivers$win32$WORD(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WORD);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
        Py_INCREF(tmp_tuple_element_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_11;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_19);
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_4);
tmp_tuple_element_20 = mod_consts.const_str_plain_uChar;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = PyObject_GetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain_uChar);

if (tmp_tuple_element_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_20 = module_var_accessor_textual$drivers$win32$uChar(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_uChar);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_2 = "o";
    goto tuple_build_exception_12;
}
        Py_INCREF(tmp_tuple_element_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_12;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_20);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_4);
tmp_tuple_element_21 = mod_consts.const_str_plain_dwControlKeyState;
tmp_list_element_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_4, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = PyObject_GetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_21 = module_var_accessor_textual$drivers$win32$DWORD(tstate);
if (unlikely(tmp_tuple_element_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
        Py_INCREF(tmp_tuple_element_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_13;
    }
}

PyTuple_SET_ITEM(tmp_list_element_4, 1, tmp_tuple_element_21);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_list_element_4);
goto list_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
PyList_SET_ITEM(tmp_dictset_value, 5, tmp_list_element_4);
}
goto list_build_no_exception_3;
// Exception handling pass through code for list_build:
list_build_exception_3:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_4;
// Finished with no exception for list_build:
list_build_no_exception_3:;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_14;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_14;
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


exception_lineno = 68;

    goto try_except_handler_14;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_14;
}
branch_no_9:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_KEY_EVENT_RECORD;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 68;
tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_14;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_80;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_79 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_79);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68);
locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68);
locals_textual$drivers$win32$$$class__3_KEY_EVENT_RECORD_68 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 68;
goto try_except_handler_12;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_EVENT_RECORD, tmp_assign_source_79);
}
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
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
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_81;
PyObject *tmp_tuple_element_23;
tmp_tuple_element_23 = module_var_accessor_textual$drivers$win32$Structure(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_assign_source_81 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_81, 0, tmp_tuple_element_23);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_82 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
tmp_assign_source_83 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_23 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_23, tmp_subscript_value_4, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_84 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_84;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_24;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
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
PyObject *tmp_assign_source_85;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_25;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_tuple_element_24 = mod_consts.const_str_plain_MOUSE_EVENT_RECORD;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 81;
tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_85;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_26 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
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
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_27;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_27, tmp_name_value_11, tmp_default_value_4);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_28;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_28);
Py_DECREF(tmp_expression_value_28);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_25);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 81;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_86;
}
branch_end_10:;
{
PyObject *tmp_assign_source_87;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_digest_c4982504ed7a92227b8527a8cfcc57c7;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain_MOUSE_EVENT_RECORD;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_81;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_17;
}
frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5 = MAKE_CLASS_FRAME(tstate, code_objects_cfd255763e7f79bf7cc020d0c8a6d905, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5) == 2);

// Framed code:
{
PyObject *tmp_list_element_5;
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = mod_consts.const_str_plain_dwMousePosition;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = PyObject_GetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain_COORD);

if (tmp_tuple_element_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_26 = module_var_accessor_textual$drivers$win32$COORD(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COORD);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_2 = "o";
    goto tuple_build_exception_15;
}
        Py_INCREF(tmp_tuple_element_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_15;
    }
}

PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_26);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_list_element_5);
goto frame_exception_exit_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_tuple_element_27;
PyObject *tmp_tuple_element_28;
PyObject *tmp_tuple_element_29;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_5);
tmp_tuple_element_27 = mod_consts.const_str_plain_dwButtonState;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = PyObject_GetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_27 = module_var_accessor_textual$drivers$win32$DWORD(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;
type_description_2 = "o";
    goto tuple_build_exception_16;
}
        Py_INCREF(tmp_tuple_element_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_16;
    }
}

PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_27);
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_list_element_5);
goto list_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_5);
tmp_tuple_element_28 = mod_consts.const_str_plain_dwControlKeyState;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_28);
tmp_tuple_element_28 = PyObject_GetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_28 = module_var_accessor_textual$drivers$win32$DWORD(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_2 = "o";
    goto tuple_build_exception_17;
}
        Py_INCREF(tmp_tuple_element_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_17;
    }
}

PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_28);
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_list_element_5);
goto list_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_5);
tmp_tuple_element_29 = mod_consts.const_str_plain_dwEventFlags;
tmp_list_element_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_5, 0, tmp_tuple_element_29);
tmp_tuple_element_29 = PyObject_GetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain_DWORD);

if (tmp_tuple_element_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_29 = module_var_accessor_textual$drivers$win32$DWORD(tstate);
if (unlikely(tmp_tuple_element_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DWORD);
}

if (tmp_tuple_element_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;
type_description_2 = "o";
    goto tuple_build_exception_18;
}
        Py_INCREF(tmp_tuple_element_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_18;
    }
}

PyTuple_SET_ITEM(tmp_list_element_5, 1, tmp_tuple_element_29);
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_list_element_5);
goto list_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_5);
}
goto list_build_no_exception_4;
// Exception handling pass through code for list_build:
list_build_exception_4:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_5;
// Finished with no exception for list_build:
list_build_no_exception_4:;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_17;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_17;
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


exception_lineno = 81;

    goto try_except_handler_17;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_17;
}
branch_no_12:;
{
PyObject *tmp_assign_source_88;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_30;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_30 = mod_consts.const_str_plain_MOUSE_EVENT_RECORD;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_30 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_30);
tmp_tuple_element_30 = locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_30);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 81;
tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_17;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_88;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_87 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_87);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81);
locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81);
locals_textual$drivers$win32$$$class__4_MOUSE_EVENT_RECORD_81 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 81;
goto try_except_handler_15;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MOUSE_EVENT_RECORD, tmp_assign_source_87);
}
goto try_end_9;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
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
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
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
PyObject *tmp_assign_source_89;
PyObject *tmp_tuple_element_31;
tmp_tuple_element_31 = module_var_accessor_textual$drivers$win32$Structure(tstate);
if (unlikely(tmp_tuple_element_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_assign_source_89 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_89, 0, tmp_tuple_element_31);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_90 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
tmp_assign_source_91 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_29 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_5, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_92 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_92;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_30;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
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
PyObject *tmp_assign_source_93;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_31;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_32;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_tuple_element_32 = mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_32 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 92;
tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_93;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_32 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
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
PyObject *tmp_tuple_element_33;
PyObject *tmp_expression_value_33;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_33 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_12, tmp_default_value_5);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_34;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_33);
}
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_18;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 92;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 92;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_94;
tmp_assign_source_94 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_94;
}
branch_end_13:;
{
PyObject *tmp_assign_source_95;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_digest_3853df7fb5c737d4c1cb8c8abccee1af;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_92;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6 = MAKE_CLASS_FRAME(tstate, code_objects_6ccc5325c13039e42ddf2e7adce61e73, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6) == 2);

// Framed code:
{
PyObject *tmp_list_element_6;
PyObject *tmp_tuple_element_34;
tmp_tuple_element_34 = mod_consts.const_str_plain_dwSize;
tmp_list_element_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_6, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = PyObject_GetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, mod_consts.const_str_plain_COORD);

if (tmp_tuple_element_34 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_34 = module_var_accessor_textual$drivers$win32$COORD(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_COORD);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_2 = "o";
    goto tuple_build_exception_20;
}
        Py_INCREF(tmp_tuple_element_34);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_20;
    }
}

PyTuple_SET_ITEM(tmp_list_element_6, 1, tmp_tuple_element_34);
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_list_element_6);
goto frame_exception_exit_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_6);
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_20;
skip_nested_handling_5:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
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


exception_lineno = 92;

    goto try_except_handler_20;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
branch_no_15:;
{
PyObject *tmp_assign_source_96;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_35;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_35 = mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_35 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_35);
tmp_tuple_element_35 = locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_35);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 92;
tmp_assign_source_96 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_20;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_96;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_95 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_95);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92);
locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92);
locals_textual$drivers$win32$$$class__5_WINDOW_BUFFER_SIZE_RECORD_92 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 92;
goto try_except_handler_18;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD, tmp_assign_source_95);
}
goto try_end_10;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
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
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
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
PyObject *tmp_assign_source_97;
PyObject *tmp_tuple_element_36;
tmp_tuple_element_36 = module_var_accessor_textual$drivers$win32$Structure(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;

    goto try_except_handler_21;
}
tmp_assign_source_97 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_97, 0, tmp_tuple_element_36);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_97;
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_98 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_98;
}
{
PyObject *tmp_assign_source_99;
tmp_assign_source_99 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_99;
}
{
PyObject *tmp_assign_source_100;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_35 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_6, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_100 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_100;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_36;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
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
PyObject *tmp_assign_source_101;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_37;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_37;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_37 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
tmp_tuple_element_37 = mod_consts.const_str_plain_MENU_EVENT_RECORD;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_37 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_37);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 98;
tmp_assign_source_101 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_101;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_38 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
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
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_38 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_13, tmp_default_value_6);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_40;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_40 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_40);
Py_DECREF(tmp_expression_value_40);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_38);
}
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_21;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 98;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 98;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_102;
tmp_assign_source_102 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_102;
}
branch_end_16:;
{
PyObject *tmp_assign_source_103;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_digest_146c6fb0b05bf83f1def1c93e1d0a0e7;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain_MENU_EVENT_RECORD;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_98;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_23;
}
frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7 = MAKE_CLASS_FRAME(tstate, code_objects_ce21702ea74f464d3b61952651338015, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7) == 2);

// Framed code:
{
PyObject *tmp_list_element_7;
PyObject *tmp_tuple_element_39;
tmp_tuple_element_39 = mod_consts.const_str_plain_dwCommandId;
tmp_list_element_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_7, 0, tmp_tuple_element_39);
tmp_tuple_element_39 = PyObject_GetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, mod_consts.const_str_plain_UINT);

if (tmp_tuple_element_39 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_39 = module_var_accessor_textual$drivers$win32$UINT(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_UINT);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_2 = "o";
    goto tuple_build_exception_22;
}
        Py_INCREF(tmp_tuple_element_39);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_22;
    }
}

PyTuple_SET_ITEM(tmp_list_element_7, 1, tmp_tuple_element_39);
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_list_element_7);
goto frame_exception_exit_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_7);
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_23;
skip_nested_handling_6:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_23;
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


exception_lineno = 98;

    goto try_except_handler_23;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_23;
}
branch_no_18:;
{
PyObject *tmp_assign_source_104;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_40;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_40 = mod_consts.const_str_plain_MENU_EVENT_RECORD;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_40 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_40);
tmp_tuple_element_40 = locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_40);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 98;
tmp_assign_source_104 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;

    goto try_except_handler_23;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_104;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_103 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_103);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98);
locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98);
locals_textual$drivers$win32$$$class__6_MENU_EVENT_RECORD_98 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 98;
goto try_except_handler_21;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_MENU_EVENT_RECORD, tmp_assign_source_103);
}
goto try_end_11;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
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
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
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
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_105;
PyObject *tmp_tuple_element_41;
tmp_tuple_element_41 = module_var_accessor_textual$drivers$win32$Structure(tstate);
if (unlikely(tmp_tuple_element_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto try_except_handler_24;
}
tmp_assign_source_105 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_105, 0, tmp_tuple_element_41);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_105;
}
{
PyObject *tmp_assign_source_106;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_106 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_106;
}
{
PyObject *tmp_assign_source_107;
tmp_assign_source_107 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_107;
}
{
PyObject *tmp_assign_source_108;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_41 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_41, tmp_subscript_value_7, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_108 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_108;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_42;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_42, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
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
PyObject *tmp_assign_source_109;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_43;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_42;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_43 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
tmp_tuple_element_42 = mod_consts.const_str_plain_FOCUS_EVENT_RECORD;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_42 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_42);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 104;
tmp_assign_source_109 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_109;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_44 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
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
PyObject *tmp_tuple_element_43;
PyObject *tmp_expression_value_45;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_43 = BUILTIN_GETATTR(tstate, tmp_expression_value_45, tmp_name_value_14, tmp_default_value_7);
if (tmp_tuple_element_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_46;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_46 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_46 == NULL));
tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_46);
Py_DECREF(tmp_expression_value_46);
if (tmp_tuple_element_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_43);
}
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_24;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_24;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 104;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 104;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_24;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_110;
tmp_assign_source_110 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_110;
}
branch_end_19:;
{
PyObject *tmp_assign_source_111;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_digest_fd23812c51551950b1527788c6b51f1e;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_str_plain_FOCUS_EVENT_RECORD;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_26;
}
tmp_dictset_value = mod_consts.const_int_pos_104;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_26;
}
frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8 = MAKE_CLASS_FRAME(tstate, code_objects_11398d8400e06fa130883ca31f8b6f89, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8) == 2);

// Framed code:
{
PyObject *tmp_list_element_8;
PyObject *tmp_tuple_element_44;
tmp_tuple_element_44 = mod_consts.const_str_plain_bSetFocus;
tmp_list_element_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_8, 0, tmp_tuple_element_44);
tmp_tuple_element_44 = PyObject_GetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, mod_consts.const_str_plain_BOOL);

if (tmp_tuple_element_44 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_44 = module_var_accessor_textual$drivers$win32$BOOL(tstate);
if (unlikely(tmp_tuple_element_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BOOL);
}

if (tmp_tuple_element_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_2 = "o";
    goto tuple_build_exception_24;
}
        Py_INCREF(tmp_tuple_element_44);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_24;
    }
}

PyTuple_SET_ITEM(tmp_list_element_8, 1, tmp_tuple_element_44);
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_list_element_8);
goto frame_exception_exit_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_8);
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_26;
skip_nested_handling_7:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_26;
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


exception_lineno = 104;

    goto try_except_handler_26;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_26;
}
branch_no_21:;
{
PyObject *tmp_assign_source_112;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_45;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_45 = mod_consts.const_str_plain_FOCUS_EVENT_RECORD;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_45 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_45);
tmp_tuple_element_45 = locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 104;
tmp_assign_source_112 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_26;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_112;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_111 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_111);
goto try_return_handler_26;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
Py_DECREF(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104);
locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104 = NULL;
goto try_return_handler_25;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104);
locals_textual$drivers$win32$$$class__7_FOCUS_EVENT_RECORD_104 = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto try_except_handler_25;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_25:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 104;
goto try_except_handler_24;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUS_EVENT_RECORD, tmp_assign_source_111);
}
goto try_end_12;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
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
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
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
PyObject *tmp_assign_source_113;
PyObject *tmp_tuple_element_46;
tmp_tuple_element_46 = module_var_accessor_textual$drivers$win32$Union(tstate);
if (unlikely(tmp_tuple_element_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_tuple_element_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto try_except_handler_27;
}
tmp_assign_source_113 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_113, 0, tmp_tuple_element_46);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_113;
}
{
PyObject *tmp_assign_source_114;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_114 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_114;
}
{
PyObject *tmp_assign_source_115;
tmp_assign_source_115 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_115;
}
{
PyObject *tmp_assign_source_116;
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


exception_lineno = 110;

    goto try_except_handler_27;
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


exception_lineno = 110;

    goto try_except_handler_27;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_27;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_116 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_116;
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


exception_lineno = 110;

    goto try_except_handler_27;
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
PyObject *tmp_assign_source_117;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_49;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_49 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_27;
}
tmp_tuple_element_47 = mod_consts.const_str_plain_InputEvent;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_47 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 110;
tmp_assign_source_117 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_27;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_117;
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


exception_lineno = 110;

    goto try_except_handler_27;
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
PyObject *tmp_tuple_element_48;
PyObject *tmp_expression_value_51;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_48 = BUILTIN_GETATTR(tstate, tmp_expression_value_51, tmp_name_value_15, tmp_default_value_8);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_27;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_52;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_48);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_52 == NULL));
tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_52);
Py_DECREF(tmp_expression_value_52);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_48);
}
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_27;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_27;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 110;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 110;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_27;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_118;
tmp_assign_source_118 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_118;
}
branch_end_22:;
{
PyObject *tmp_assign_source_119;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_textual$drivers$win32$$$class__8_InputEvent_110 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_digest_ead7a2b1534c074f9f509306a5ea4bd8;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_str_plain_InputEvent;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_29;
}
tmp_dictset_value = mod_consts.const_int_pos_110;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_29;
}
frame_frame_textual$drivers$win32$$$class__8_InputEvent_9 = MAKE_CLASS_FRAME(tstate, code_objects_5d4a4de0497ba6e7c04770406165233a, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__8_InputEvent_9);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__8_InputEvent_9) == 2);

// Framed code:
{
PyObject *tmp_list_element_9;
PyObject *tmp_tuple_element_49;
tmp_tuple_element_49 = mod_consts.const_str_plain_KeyEvent;
tmp_list_element_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_49);
tmp_tuple_element_49 = PyObject_GetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain_KEY_EVENT_RECORD);

if (tmp_tuple_element_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_49 = module_var_accessor_textual$drivers$win32$KEY_EVENT_RECORD(tstate);
if (unlikely(tmp_tuple_element_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_KEY_EVENT_RECORD);
}

if (tmp_tuple_element_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_2 = "o";
    goto tuple_build_exception_26;
}
        Py_INCREF(tmp_tuple_element_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_26;
    }
}

PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_49);
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_list_element_9);
goto frame_exception_exit_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 5);
{
PyObject *tmp_tuple_element_50;
PyObject *tmp_tuple_element_51;
PyObject *tmp_tuple_element_52;
PyObject *tmp_tuple_element_53;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_9);
tmp_tuple_element_50 = mod_consts.const_str_plain_MouseEvent;
tmp_list_element_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_50);
tmp_tuple_element_50 = PyObject_GetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain_MOUSE_EVENT_RECORD);

if (tmp_tuple_element_50 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_50 = module_var_accessor_textual$drivers$win32$MOUSE_EVENT_RECORD(tstate);
if (unlikely(tmp_tuple_element_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MOUSE_EVENT_RECORD);
}

if (tmp_tuple_element_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_2 = "o";
    goto tuple_build_exception_27;
}
        Py_INCREF(tmp_tuple_element_50);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_27;
    }
}

PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_50);
goto tuple_build_no_exception_27;
// Exception handling pass through code for tuple_build:
tuple_build_exception_27:;
Py_DECREF(tmp_list_element_9);
goto list_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_27:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_9);
tmp_tuple_element_51 = mod_consts.const_str_plain_WindowBufferSizeEvent;
tmp_list_element_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_51);
tmp_tuple_element_51 = PyObject_GetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);

if (tmp_tuple_element_51 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_51 = module_var_accessor_textual$drivers$win32$WINDOW_BUFFER_SIZE_RECORD(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WINDOW_BUFFER_SIZE_RECORD);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_2 = "o";
    goto tuple_build_exception_28;
}
        Py_INCREF(tmp_tuple_element_51);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_28;
    }
}

PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_51);
goto tuple_build_no_exception_28;
// Exception handling pass through code for tuple_build:
tuple_build_exception_28:;
Py_DECREF(tmp_list_element_9);
goto list_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_28:;
PyList_SET_ITEM(tmp_dictset_value, 2, tmp_list_element_9);
tmp_tuple_element_52 = mod_consts.const_str_plain_MenuEvent;
tmp_list_element_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_52);
tmp_tuple_element_52 = PyObject_GetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain_MENU_EVENT_RECORD);

if (tmp_tuple_element_52 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_52 = module_var_accessor_textual$drivers$win32$MENU_EVENT_RECORD(tstate);
if (unlikely(tmp_tuple_element_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MENU_EVENT_RECORD);
}

if (tmp_tuple_element_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_2 = "o";
    goto tuple_build_exception_29;
}
        Py_INCREF(tmp_tuple_element_52);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_29;
    }
}

PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_52);
goto tuple_build_no_exception_29;
// Exception handling pass through code for tuple_build:
tuple_build_exception_29:;
Py_DECREF(tmp_list_element_9);
goto list_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_29:;
PyList_SET_ITEM(tmp_dictset_value, 3, tmp_list_element_9);
tmp_tuple_element_53 = mod_consts.const_str_plain_FocusEvent;
tmp_list_element_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_9, 0, tmp_tuple_element_53);
tmp_tuple_element_53 = PyObject_GetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain_FOCUS_EVENT_RECORD);

if (tmp_tuple_element_53 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_53 = module_var_accessor_textual$drivers$win32$FOCUS_EVENT_RECORD(tstate);
if (unlikely(tmp_tuple_element_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FOCUS_EVENT_RECORD);
}

if (tmp_tuple_element_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_2 = "o";
    goto tuple_build_exception_30;
}
        Py_INCREF(tmp_tuple_element_53);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_30;
    }
}

PyTuple_SET_ITEM(tmp_list_element_9, 1, tmp_tuple_element_53);
goto tuple_build_no_exception_30;
// Exception handling pass through code for tuple_build:
tuple_build_exception_30:;
Py_DECREF(tmp_list_element_9);
goto list_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_30:;
PyList_SET_ITEM(tmp_dictset_value, 4, tmp_list_element_9);
}
goto list_build_no_exception_5;
// Exception handling pass through code for list_build:
list_build_exception_5:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_9;
// Finished with no exception for list_build:
list_build_no_exception_5:;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__8_InputEvent_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__8_InputEvent_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__8_InputEvent_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__8_InputEvent_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__8_InputEvent_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_29;
skip_nested_handling_8:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_29;
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


exception_lineno = 110;

    goto try_except_handler_29;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__8_InputEvent_110, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_29;
}
branch_no_24:;
{
PyObject *tmp_assign_source_120;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_54;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_54 = mod_consts.const_str_plain_InputEvent;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_54 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_54);
tmp_tuple_element_54 = locals_textual$drivers$win32$$$class__8_InputEvent_110;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_54);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 110;
tmp_assign_source_120 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_29;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_120;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_119 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_119);
goto try_return_handler_29;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
Py_DECREF(locals_textual$drivers$win32$$$class__8_InputEvent_110);
locals_textual$drivers$win32$$$class__8_InputEvent_110 = NULL;
goto try_return_handler_28;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__8_InputEvent_110);
locals_textual$drivers$win32$$$class__8_InputEvent_110 = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto try_except_handler_28;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_28:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 110;
goto try_except_handler_27;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_InputEvent, tmp_assign_source_119);
}
goto try_end_13;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
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
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
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
PyObject *tmp_assign_source_121;
PyObject *tmp_tuple_element_55;
tmp_tuple_element_55 = module_var_accessor_textual$drivers$win32$Structure(tstate);
if (unlikely(tmp_tuple_element_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Structure);
}

if (tmp_tuple_element_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto try_except_handler_30;
}
tmp_assign_source_121 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_121, 0, tmp_tuple_element_55);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_121;
}
{
PyObject *tmp_assign_source_122;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_122 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_122;
}
{
PyObject *tmp_assign_source_123;
tmp_assign_source_123 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_123;
}
{
PyObject *tmp_assign_source_124;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_53 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_9, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_124 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_124;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_54;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
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
PyObject *tmp_assign_source_125;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_55;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_56;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_55 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
tmp_tuple_element_56 = mod_consts.const_str_plain_INPUT_RECORD;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_56 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_56);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 122;
tmp_assign_source_125 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_125;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_56;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_56 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
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
PyObject *tmp_tuple_element_57;
PyObject *tmp_expression_value_57;
PyObject *tmp_name_value_16;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_57 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_16 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_57 = BUILTIN_GETATTR(tstate, tmp_expression_value_57, tmp_name_value_16, tmp_default_value_9);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_58;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_57);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_58 == NULL));
tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto tuple_build_exception_31;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_57);
}
goto tuple_build_no_exception_31;
// Exception handling pass through code for tuple_build:
tuple_build_exception_31:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_30;
// Finished with no exception for tuple_build:
tuple_build_no_exception_31:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_30;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 122;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 122;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_30;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_126;
tmp_assign_source_126 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_126;
}
branch_end_25:;
{
PyObject *tmp_assign_source_127;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_digest_ead7a2b1534c074f9f509306a5ea4bd8;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_str_plain_INPUT_RECORD;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_32;
}
tmp_dictset_value = mod_consts.const_int_pos_122;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_32;
}
frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10 = MAKE_CLASS_FRAME(tstate, code_objects_8d3bac4a4608e6ca19d3d5f8cb2c35b5, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10) == 2);

// Framed code:
{
PyObject *tmp_list_element_10;
PyObject *tmp_tuple_element_58;
tmp_tuple_element_58 = mod_consts.const_str_plain_EventType;
tmp_list_element_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_59;
PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_58);
tmp_expression_value_59 = IMPORT_HARD_CTYPES__WINTYPES();
assert(!(tmp_expression_value_59 == NULL));
tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_WORD);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto tuple_build_exception_32;
}
PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_58);
}
goto tuple_build_no_exception_32;
// Exception handling pass through code for tuple_build:
tuple_build_exception_32:;
Py_DECREF(tmp_list_element_10);
goto frame_exception_exit_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_32:;
tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_59;
PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_10);
tmp_tuple_element_59 = mod_consts.const_str_plain_Event;
tmp_list_element_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_list_element_10, 0, tmp_tuple_element_59);
tmp_tuple_element_59 = PyObject_GetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, mod_consts.const_str_plain_InputEvent);

if (tmp_tuple_element_59 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_59 = module_var_accessor_textual$drivers$win32$InputEvent(tstate);
if (unlikely(tmp_tuple_element_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InputEvent);
}

if (tmp_tuple_element_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_2 = "o";
    goto tuple_build_exception_33;
}
        Py_INCREF(tmp_tuple_element_59);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_33;
    }
}

PyTuple_SET_ITEM(tmp_list_element_10, 1, tmp_tuple_element_59);
goto tuple_build_no_exception_33;
// Exception handling pass through code for tuple_build:
tuple_build_exception_33:;
Py_DECREF(tmp_list_element_10);
goto list_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_33:;
PyList_SET_ITEM(tmp_dictset_value, 1, tmp_list_element_10);
}
goto list_build_no_exception_6;
// Exception handling pass through code for list_build:
list_build_exception_6:;
Py_DECREF(tmp_dictset_value);
goto frame_exception_exit_10;
// Finished with no exception for list_build:
list_build_no_exception_6:;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, mod_consts.const_str_plain__fields_, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__9_INPUT_RECORD_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_32;
skip_nested_handling_9:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_32;
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


exception_lineno = 122;

    goto try_except_handler_32;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_32;
}
branch_no_27:;
{
PyObject *tmp_assign_source_128;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_60;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_60 = mod_consts.const_str_plain_INPUT_RECORD;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_60 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_60);
tmp_tuple_element_60 = locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_60);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 122;
tmp_assign_source_128 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto try_except_handler_32;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_128;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_127 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_127);
goto try_return_handler_32;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
Py_DECREF(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122);
locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122 = NULL;
goto try_return_handler_31;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122);
locals_textual$drivers$win32$$$class__9_INPUT_RECORD_122 = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto try_except_handler_31;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_31:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 122;
goto try_except_handler_30;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_INPUT_RECORD, tmp_assign_source_127);
}
goto try_end_14;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
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
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
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
PyObject *tmp_assign_source_129;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f1a788bfd0fbe452d7d5b701e0178dd4);

tmp_assign_source_129 = MAKE_FUNCTION_textual$drivers$win32$$$function__1_set_console_mode(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_set_console_mode, tmp_assign_source_129);
}
{
PyObject *tmp_assign_source_130;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9596afc57e610b4c20bc15f357503c2f);

tmp_assign_source_130 = MAKE_FUNCTION_textual$drivers$win32$$$function__2_get_console_mode(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_get_console_mode, tmp_assign_source_130);
}
{
PyObject *tmp_assign_source_131;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_bfe481521f9ed6d99557261bd4423a32);

tmp_assign_source_131 = MAKE_FUNCTION_textual$drivers$win32$$$function__3_enable_application_mode(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_application_mode, tmp_assign_source_131);
}
{
PyObject *tmp_assign_source_132;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_4;
tmp_defaults_1 = mod_consts.const_tuple_int_neg_1_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_52d907bb51eb10d3d6d1dc6243fa8a4d);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_132 = MAKE_FUNCTION_textual$drivers$win32$$$function__4_wait_for_handles(tstate, tmp_defaults_1, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_for_handles, tmp_assign_source_132);
}
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_133;
PyObject *tmp_tuple_element_61;
PyObject *tmp_expression_value_60;
tmp_expression_value_60 = module_var_accessor_textual$drivers$win32$threading(tstate);
if (unlikely(tmp_expression_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_expression_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;

    goto try_except_handler_33;
}
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain_Thread);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
tmp_assign_source_133 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_133, 0, tmp_tuple_element_61);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_133;
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_134 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_134;
}
{
PyObject *tmp_assign_source_135;
tmp_assign_source_135 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_135;
}
{
PyObject *tmp_assign_source_136;
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


exception_lineno = 212;

    goto try_except_handler_33;
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


exception_lineno = 212;

    goto try_except_handler_33;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_136 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_136;
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


exception_lineno = 212;

    goto try_except_handler_33;
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
PyObject *tmp_assign_source_137;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_63;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_62;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_63 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
tmp_tuple_element_62 = mod_consts.const_str_plain_EventMonitor;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_62 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_62);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 212;
tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_137;
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


exception_lineno = 212;

    goto try_except_handler_33;
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
PyObject *tmp_tuple_element_63;
PyObject *tmp_expression_value_65;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_65 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_63 = BUILTIN_GETATTR(tstate, tmp_expression_value_65, tmp_name_value_17, tmp_default_value_10);
if (tmp_tuple_element_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_66;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_63);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_66 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_tuple_element_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto tuple_build_exception_34;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_63);
}
goto tuple_build_no_exception_34;
// Exception handling pass through code for tuple_build:
tuple_build_exception_34:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_33;
// Finished with no exception for tuple_build:
tuple_build_no_exception_34:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_33;
}
frame_frame_textual$drivers$win32->m_frame.f_lineno = 212;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 212;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_33;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_138;
tmp_assign_source_138 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_138;
}
branch_end_28:;
{
PyObject *tmp_assign_source_139;
outline_9_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_textual$drivers$win32$$$class__10_EventMonitor_212 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_9f611a96723637e7c610916fa6591f15;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_digest_68a30ff022b482701d076cf4dd85ee83;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_str_plain_EventMonitor;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_35;
}
tmp_dictset_value = mod_consts.const_int_pos_212;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_35;
}
frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11 = MAKE_CLASS_FRAME(tstate, code_objects_46673e7e0f7ef607abf109c704e01d30, module_textual$drivers$win32, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11);
assert(Py_REFCNT(frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11) == 2);

// Framed code:
{
PyObject *tmp_annotations_5;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_115a78ceebe393c3fa42cf1b0c1f8dbb);
tmp_closure_1[0] = outline_9_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$drivers$win32$$$function__5___init__(tstate, tmp_annotations_5, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "c";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$win32$$$function__6_run(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, mod_consts.const_str_plain_run, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "c";
    goto frame_exception_exit_11;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_90bd90a846772ae2d71c76b6a0340183);

tmp_dictset_value = MAKE_FUNCTION_textual$drivers$win32$$$function__7_on_size_change(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, mod_consts.const_str_plain_on_size_change, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_2 = "c";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_textual$drivers$win32$$$class__10_EventMonitor_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_35;
skip_nested_handling_10:;
tmp_dictset_value = mod_consts.const_tuple_7907d129e387d18b9c73e1565405775d_tuple;
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_35;
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


exception_lineno = 212;

    goto try_except_handler_35;
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
tmp_res = PyObject_SetItem(locals_textual$drivers$win32$$$class__10_EventMonitor_212, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_35;
}
branch_no_30:;
{
PyObject *tmp_assign_source_140;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_64;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_64 = mod_consts.const_str_plain_EventMonitor;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_64 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_64);
tmp_tuple_element_64 = locals_textual$drivers$win32$$$class__10_EventMonitor_212;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_64);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_textual$drivers$win32->m_frame.f_lineno = 212;
tmp_assign_source_140 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;

    goto try_except_handler_35;
}
assert(Nuitka_Cell_GET(outline_9_var___class__) == NULL);
Nuitka_Cell_SET(outline_9_var___class__, tmp_assign_source_140);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_9_var___class__));
tmp_assign_source_139 = Nuitka_Cell_GET(outline_9_var___class__);
Py_INCREF(tmp_assign_source_139);
goto try_return_handler_35;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_35:;
Py_DECREF(locals_textual$drivers$win32$$$class__10_EventMonitor_212);
locals_textual$drivers$win32$$$class__10_EventMonitor_212 = NULL;
goto try_return_handler_34;
// Exception handler code:
try_except_handler_35:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$drivers$win32$$$class__10_EventMonitor_212);
locals_textual$drivers$win32$$$class__10_EventMonitor_212 = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto try_except_handler_34;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_34:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_34:;
exception_keeper_lineno_34 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_34 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_34;
exception_lineno = exception_keeper_lineno_34;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 212;
goto try_except_handler_33;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_textual$drivers$win32, (Nuitka_StringObject *)mod_consts.const_str_plain_EventMonitor, tmp_assign_source_139);
}
goto try_end_15;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_35 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_35 = exception_state;
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
exception_state = exception_keeper_name_35;
exception_lineno = exception_keeper_lineno_35;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$drivers$win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$drivers$win32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$drivers$win32, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$drivers$win32);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_11:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$drivers$win32", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.drivers.win32" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$drivers$win32);
    return module_textual$drivers$win32;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$drivers$win32, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$drivers$win32", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

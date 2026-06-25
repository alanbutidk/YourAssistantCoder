/* Generated code for Python module 'textual$driver'
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



/* The "module_textual$driver" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$driver;
PyDictObject *moduledict_textual$driver;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__app;
PyObject *const_str_plain__debug;
PyObject *const_str_plain__mouse;
PyObject *const_str_plain__size;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_get_running_loop;
PyObject *const_str_plain__loop;
PyObject *const_str_plain__down_buttons;
PyObject *const_str_plain__last_move_event;
PyObject *const_str_plain__auto_restart;
PyObject *const_str_plain_cursor_origin;
PyObject *const_str_digest_8f06352753f3578ecfad4f9ca20fdc9c;
PyObject *const_str_plain_run_coroutine_threadsafe;
PyObject *const_str_plain__post_message;
PyObject *const_tuple_str_plain_loop_tuple;
PyObject *const_str_digest_2e53e14697ae2a2c2a0579d2ecfadd96;
PyObject *const_str_plain_set_sender;
PyObject *const_str_plain_events;
PyObject *const_str_plain_MouseEvent;
PyObject *const_str_plain__x;
PyObject *const_str_plain__y;
PyObject *const_str_plain__screen_x;
PyObject *const_str_plain__screen_y;
PyObject *const_str_plain_MouseDown;
PyObject *const_str_plain_button;
PyObject *const_str_plain_append;
PyObject *const_str_plain_MouseUp;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_MouseMove;
PyObject *const_str_plain_clear;
PyObject *const_str_plain_self;
PyObject *const_str_plain_send_message;
PyObject *const_str_plain_message;
PyObject *const_str_plain_widget;
PyObject *const_str_plain_move_event;
PyObject *const_str_plain_x;
PyObject *const_str_plain_y;
PyObject *const_str_plain_shift;
PyObject *const_str_plain_meta;
PyObject *const_str_plain_ctrl;
PyObject *const_str_plain_screen_x;
PyObject *const_str_plain_screen_y;
PyObject *const_str_plain_style;
PyObject *const_tuple_a277bcffb44298e715c68534ce23d614_tuple;
PyObject *const_str_digest_2828f4a5e1bc1ab3a091fb63da0d1713;
PyObject *const_str_plain_stop_application_mode;
PyObject *const_str_digest_86a65a2ee2808cc6d69836b353d908db;
PyObject *const_str_plain_start_application_mode;
PyObject *const_str_digest_5e1185f5b9f2b92612f5f017cc0f9253;
PyObject *const_str_digest_66a5196fd225682eed5935fadbbbc056;
PyObject *const_str_plain_no_automatic_restart;
PyObject *const_str_digest_575d06ea75573a27752191c7d58f9bcf;
PyObject *const_str_plain_webbrowser;
PyObject *const_str_digest_1b8ead850d298254c85c0319cffe918e;
PyObject *const_dict_47e626cb696ef8fbdc0c41d0cc0c2ad1;
PyObject *const_str_plain_save_file_thread;
PyObject *const_str_digest_8e0a813a656ebc0918958d6fd79074ff;
PyObject *const_str_plain_BinaryIO;
PyObject *const_str_plain_wb;
PyObject *const_str_plain_threading;
PyObject *const_str_plain_Thread;
PyObject *const_tuple_str_plain_target_str_plain_args_tuple;
PyObject *const_str_plain_start;
PyObject *const_str_digest_4b8528ddd79d82167179800cb61192b2;
PyObject *const_str_plain_save_path;
PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
PyObject *const_str_plain_write;
PyObject *const_int_pos_65536;
PyObject *const_str_plain_chunk_size;
PyObject *const_str_plain__delivery_complete;
PyObject *const_str_plain_delivery_key;
PyObject *const_tuple_str_plain_save_path_str_plain_name_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_log;
PyObject *const_str_plain_error;
PyObject *const_str_digest_d0ddd69c261b898781176dac3455ed6d;
PyObject *const_str_plain_traceback;
PyObject *const_str_plain_format_exc;
PyObject *const_str_plain__delivery_failed;
PyObject *const_tuple_str_plain_exception_str_plain_name_tuple;
PyObject *const_str_plain_closed;
PyObject *const_str_plain_call_from_thread;
PyObject *const_str_plain_post_message;
PyObject *const_str_plain_DeliveryComplete;
PyObject *const_tuple_str_plain_key_str_plain_path_str_plain_name_tuple;
PyObject *const_str_digest_96ff4005ff1ab9000f591a1c34d80b35;
PyObject *const_str_plain_DeliveryFailed;
PyObject *const_tuple_str_plain_key_str_plain_exception_str_plain_name_tuple;
PyObject *const_str_digest_7d5bc1df921e2b953fb5d8fcbc2a0a79;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_abc;
PyObject *const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple;
PyObject *const_str_plain_ABC;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_contextmanager_tuple;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Iterator;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_TextIO;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_events_str_plain_log_str_plain_messages_tuple;
PyObject *const_str_plain_messages;
PyObject *const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7;
PyObject *const_tuple_str_plain_MouseUp_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_Driver;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_ed9b7525e14e4844b1fbdaab5ca1fd1e;
PyObject *const_str_digest_1e09328f7bdfbb9a8bef368734a14cde;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_17;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_0dd25ba2b56a1c05f54ba21afbc92db7;
PyObject *const_dict_a3368a96e3f0be8f997c1eb9ce2ee988;
PyObject *const_str_digest_1b792ba75b89bb7c25a4aceb2d500052;
PyObject *const_str_plain_property;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_8846ed8c03dbd8cf9f22254124c40f7f;
PyObject *const_str_plain_is_headless;
PyObject *const_str_digest_c8c460b05973ed2254bc6938b06a72dd;
PyObject *const_str_digest_3dd6ad80513f1c6e8001a2eb6044c3ba;
PyObject *const_str_plain_is_inline;
PyObject *const_str_digest_3fe45812de1d74666a59bd95ee3fb349;
PyObject *const_str_digest_297935a3af597558d4681c6ed7f82c79;
PyObject *const_str_plain_is_web;
PyObject *const_str_digest_f984f1fad7f5cdee9de04b1fd5b7235b;
PyObject *const_str_digest_dbe5cb4d2eb1ac9bed937f4bd60984c2;
PyObject *const_str_plain_can_suspend;
PyObject *const_str_digest_446d0373386002532351befbc87115f6;
PyObject *const_dict_3f86662147083d97add555c651d7541c;
PyObject *const_str_digest_f960d74ce00178d6285a9eb4181252e7;
PyObject *const_str_plain_process_message;
PyObject *const_str_digest_8acdc80ddf12796f577d5f5619087c8d;
PyObject *const_dict_91c9153a0540373827acf3db0f9e3f9a;
PyObject *const_str_digest_fd8bf5ff24c4504cda09dadca56f3dd8;
PyObject *const_str_digest_4c85deaa4b98ef8ed5b3da57b3d93bbc;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_f14f8c2d857166f63fc3accae40a0fa4;
PyObject *const_str_plain_flush;
PyObject *const_str_digest_0315421437d449cf72ebba1322596d23;
PyObject *const_str_digest_033324208d3568471a71e12f6956edf5;
PyObject *const_str_digest_eb7282dec38b9735874f0d5a191a6686;
PyObject *const_str_digest_163cb7a10f212731f6dd4ce0d4cea17f;
PyObject *const_str_plain_disable_input;
PyObject *const_str_digest_fb2a12623b5e9a3c0a267478b31d71bd;
PyObject *const_str_digest_f418a88de6d4294076b463dfaa0ec0b7;
PyObject *const_str_digest_45ad0897bf1ba863e95ea824e4e504f2;
PyObject *const_str_plain_suspend_application_mode;
PyObject *const_str_digest_f82a14fd3561270993f3189d4f26c829;
PyObject *const_str_plain_resume_application_mode;
PyObject *const_str_digest_d75c2c26233dd013cdb902ea7320946f;
PyObject *const_str_plain_Event;
PyObject *const_str_plain_SignalResume;
PyObject *const_str_digest_2a7f21d89a3a70664598b404e74fd53e;
PyObject *const_str_digest_50fd3d2e0ae25472e7aa2a02dc50f393;
PyObject *const_int_pos_174;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_6891d8c1634f5f278622e2f49ae92035;
PyObject *const_str_digest_d3918e5d6eacf942497ee59a63a99130;
PyObject *const_str_digest_718edaa7845b915dfe28abc94c9a7d45;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_0b20393aedfc65cc894427b0aad7d697;
PyObject *const_str_plain_open_url;
PyObject *const_str_digest_3af0d2d237c85521cff522a12cb2612d;
PyObject *const_dict_d8c245cb8c04bf0c4e4abd8d8f60775b;
PyObject *const_dict_47f4c212735af072adf0930c4c1f2efd;
PyObject *const_str_plain_deliver_binary;
PyObject *const_str_digest_67af079c0849c00c86afd8a38ce4bfde;
PyObject *const_dict_0b30f24e3b9c03266c283a271eb9fc01;
PyObject *const_str_digest_0bc3270266f07aa478c877397077ee74;
PyObject *const_dict_415bf09c43fd7ed3a77185ce794f491e;
PyObject *const_str_digest_cb9b66a2cdcdec2d4428478b48fa4117;
PyObject *const_tuple_07d55adf53a386d946145c5c93c5c4f9_tuple;
PyObject *const_str_digest_befe16f2fca1cbf69c90154ee283e0aa;
PyObject *const_str_digest_530463b237935a9c72a450e69f8754ba;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_0373ec40ed734eb61b6478f883730e6a_tuple;
PyObject *const_tuple_a531d1c24b9c76f68dc8cc272b32b92e_tuple;
PyObject *const_tuple_85f00465333f5ff9dab16bf3658e375f_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_3eeb613985ffd289275eea8b19aee8ba_tuple;
PyObject *const_tuple_str_plain_self_str_plain_auto_restart_tuple;
PyObject *const_tuple_c85aa18e3616cd3eed2316de9c83b406_tuple;
PyObject *const_tuple_e5be931e04d57b887ff07c8693239721_tuple;
PyObject *const_tuple_b691e9b87a771ac6929c4493bed8732c_tuple;
PyObject *const_tuple_a9e1f89110f63dd93b91bd015f5c7d10_tuple;
PyObject *const_tuple_str_plain_self_str_plain_message_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[199];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.driver"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__app);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__debug);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__mouse);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__size);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__loop);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__down_buttons);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__last_move_event);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__auto_restart);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_cursor_origin);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f06352753f3578ecfad4f9ca20fdc9c);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_coroutine_threadsafe);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__post_message);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e53e14697ae2a2c2a0579d2ecfadd96);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_sender);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseEvent);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain__x);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain__y);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__screen_x);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__screen_y);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseDown);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_button);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseUp);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_remove);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseMove);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_message);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_widget);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_move_event);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_x);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_y);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_meta);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen_x);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_screen_y);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_style);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_a277bcffb44298e715c68534ce23d614_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_2828f4a5e1bc1ab3a091fb63da0d1713);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_application_mode);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_86a65a2ee2808cc6d69836b353d908db);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_start_application_mode);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e1185f5b9f2b92612f5f017cc0f9253);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_66a5196fd225682eed5935fadbbbc056);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_no_automatic_restart);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_575d06ea75573a27752191c7d58f9bcf);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_webbrowser);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b8ead850d298254c85c0319cffe918e);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_47e626cb696ef8fbdc0c41d0cc0c2ad1);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_save_file_thread);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e0a813a656ebc0918958d6fd79074ff);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_wb);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Thread);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_target_str_plain_args_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b8528ddd79d82167179800cb61192b2);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_save_path);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_65536);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__delivery_complete);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_delivery_key);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_save_path_str_plain_name_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_error);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_d0ddd69c261b898781176dac3455ed6d);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_traceback);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_exc);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__delivery_failed);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exception_str_plain_name_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_closed);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_from_thread);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_post_message);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeliveryComplete);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_path_str_plain_name_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_96ff4005ff1ab9000f591a1c34d80b35);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeliveryFailed);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_exception_str_plain_name_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d5bc1df921e2b953fb5d8fcbc2a0a79);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABC);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextIO);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_str_plain_log_str_plain_messages_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_messages);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MouseUp_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Driver);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed9b7525e14e4844b1fbdaab5ca1fd1e);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e09328f7bdfbb9a8bef368734a14cde);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_int_pos_17);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_0dd25ba2b56a1c05f54ba21afbc92db7);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_a3368a96e3f0be8f997c1eb9ce2ee988);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b792ba75b89bb7c25a4aceb2d500052);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_8846ed8c03dbd8cf9f22254124c40f7f);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_headless);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8c460b05973ed2254bc6938b06a72dd);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_3dd6ad80513f1c6e8001a2eb6044c3ba);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_inline);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fe45812de1d74666a59bd95ee3fb349);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_297935a3af597558d4681c6ed7f82c79);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_web);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_f984f1fad7f5cdee9de04b1fd5b7235b);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbe5cb4d2eb1ac9bed937f4bd60984c2);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_can_suspend);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_446d0373386002532351befbc87115f6);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_3f86662147083d97add555c651d7541c);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_f960d74ce00178d6285a9eb4181252e7);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_process_message);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_8acdc80ddf12796f577d5f5619087c8d);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_91c9153a0540373827acf3db0f9e3f9a);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd8bf5ff24c4504cda09dadca56f3dd8);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c85deaa4b98ef8ed5b3da57b3d93bbc);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_f14f8c2d857166f63fc3accae40a0fa4);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_0315421437d449cf72ebba1322596d23);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_033324208d3568471a71e12f6956edf5);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb7282dec38b9735874f0d5a191a6686);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_163cb7a10f212731f6dd4ce0d4cea17f);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_disable_input);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb2a12623b5e9a3c0a267478b31d71bd);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_f418a88de6d4294076b463dfaa0ec0b7);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_45ad0897bf1ba863e95ea824e4e504f2);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_suspend_application_mode);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_f82a14fd3561270993f3189d4f26c829);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_resume_application_mode);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_d75c2c26233dd013cdb902ea7320946f);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_Event);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_SignalResume);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a7f21d89a3a70664598b404e74fd53e);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_50fd3d2e0ae25472e7aa2a02dc50f393);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_int_pos_174);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_dict_6891d8c1634f5f278622e2f49ae92035);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3918e5d6eacf942497ee59a63a99130);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_718edaa7845b915dfe28abc94c9a7d45);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_0b20393aedfc65cc894427b0aad7d697);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_url);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_3af0d2d237c85521cff522a12cb2612d);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_d8c245cb8c04bf0c4e4abd8d8f60775b);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_47f4c212735af072adf0930c4c1f2efd);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_deliver_binary);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_67af079c0849c00c86afd8a38ce4bfde);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_0b30f24e3b9c03266c283a271eb9fc01);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bc3270266f07aa478c877397077ee74);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_415bf09c43fd7ed3a77185ce794f491e);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb9b66a2cdcdec2d4428478b48fa4117);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_07d55adf53a386d946145c5c93c5c4f9_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_befe16f2fca1cbf69c90154ee283e0aa);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_digest_530463b237935a9c72a450e69f8754ba);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_0373ec40ed734eb61b6478f883730e6a_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_a531d1c24b9c76f68dc8cc272b32b92e_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_85f00465333f5ff9dab16bf3658e375f_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_3eeb613985ffd289275eea8b19aee8ba_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_auto_restart_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_c85aa18e3616cd3eed2316de9c83b406_tuple);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_e5be931e04d57b887ff07c8693239721_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_b691e9b87a771ac6929c4493bed8732c_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_a9e1f89110f63dd93b91bd015f5c7d10_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
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
void checkModuleConstants_textual$driver(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__app);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__debug);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__mouse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mouse);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__size);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_running_loop);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__loop);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__down_buttons));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__down_buttons);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__last_move_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__last_move_event);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__auto_restart));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__auto_restart);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_cursor_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cursor_origin);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f06352753f3578ecfad4f9ca20fdc9c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f06352753f3578ecfad4f9ca20fdc9c);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_coroutine_threadsafe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_coroutine_threadsafe);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__post_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__post_message);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_loop_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_loop_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e53e14697ae2a2c2a0579d2ecfadd96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e53e14697ae2a2c2a0579d2ecfadd96);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_sender));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_sender);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseEvent);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain__x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__x);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain__y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__y);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__screen_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__screen_x);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__screen_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__screen_y);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseDown);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_button));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_button);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseUp);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_remove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_remove);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseMove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseMove);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_message);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_widget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_widget);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_move_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move_event);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_x);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_y);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shift);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_meta);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ctrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ctrl);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen_x);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_screen_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_screen_y);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_style));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_style);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_a277bcffb44298e715c68534ce23d614_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a277bcffb44298e715c68534ce23d614_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_2828f4a5e1bc1ab3a091fb63da0d1713));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2828f4a5e1bc1ab3a091fb63da0d1713);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_application_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_application_mode);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_86a65a2ee2808cc6d69836b353d908db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_86a65a2ee2808cc6d69836b353d908db);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_start_application_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start_application_mode);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e1185f5b9f2b92612f5f017cc0f9253));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e1185f5b9f2b92612f5f017cc0f9253);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_66a5196fd225682eed5935fadbbbc056));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66a5196fd225682eed5935fadbbbc056);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_no_automatic_restart));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_no_automatic_restart);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_575d06ea75573a27752191c7d58f9bcf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_575d06ea75573a27752191c7d58f9bcf);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_webbrowser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_webbrowser);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b8ead850d298254c85c0319cffe918e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b8ead850d298254c85c0319cffe918e);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_47e626cb696ef8fbdc0c41d0cc0c2ad1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_47e626cb696ef8fbdc0c41d0cc0c2ad1);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_save_file_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_save_file_thread);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e0a813a656ebc0918958d6fd79074ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e0a813a656ebc0918958d6fd79074ff);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_BinaryIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BinaryIO);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_wb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wb);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Thread);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_target_str_plain_args_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_target_str_plain_args_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b8528ddd79d82167179800cb61192b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b8528ddd79d82167179800cb61192b2);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_save_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_save_path);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_65536));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65536);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_size);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__delivery_complete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__delivery_complete);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_delivery_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delivery_key);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_save_path_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_save_path_str_plain_name_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_error);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_d0ddd69c261b898781176dac3455ed6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d0ddd69c261b898781176dac3455ed6d);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_traceback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_traceback);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_exc);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__delivery_failed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__delivery_failed);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exception_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exception_str_plain_name_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closed);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_from_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_from_thread);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_post_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_post_message);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeliveryComplete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeliveryComplete);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_path_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_str_plain_path_str_plain_name_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_96ff4005ff1ab9000f591a1c34d80b35));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_96ff4005ff1ab9000f591a1c34d80b35);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeliveryFailed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeliveryFailed);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_str_plain_exception_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_str_plain_exception_str_plain_name_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d5bc1df921e2b953fb5d8fcbc2a0a79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d5bc1df921e2b953fb5d8fcbc2a0a79);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABC);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contextmanager_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterator);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextIO);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_events_str_plain_log_str_plain_messages_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_events_str_plain_log_str_plain_messages_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_messages);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_MouseUp_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_MouseUp_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Driver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Driver);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed9b7525e14e4844b1fbdaab5ca1fd1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed9b7525e14e4844b1fbdaab5ca1fd1e);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e09328f7bdfbb9a8bef368734a14cde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e09328f7bdfbb9a8bef368734a14cde);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_int_pos_17));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_17);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_0dd25ba2b56a1c05f54ba21afbc92db7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0dd25ba2b56a1c05f54ba21afbc92db7);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_a3368a96e3f0be8f997c1eb9ce2ee988));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a3368a96e3f0be8f997c1eb9ce2ee988);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b792ba75b89bb7c25a4aceb2d500052));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b792ba75b89bb7c25a4aceb2d500052);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_8846ed8c03dbd8cf9f22254124c40f7f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8846ed8c03dbd8cf9f22254124c40f7f);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_headless));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_headless);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8c460b05973ed2254bc6938b06a72dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8c460b05973ed2254bc6938b06a72dd);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_3dd6ad80513f1c6e8001a2eb6044c3ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3dd6ad80513f1c6e8001a2eb6044c3ba);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_inline);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fe45812de1d74666a59bd95ee3fb349));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fe45812de1d74666a59bd95ee3fb349);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_297935a3af597558d4681c6ed7f82c79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_297935a3af597558d4681c6ed7f82c79);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_web));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_web);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_f984f1fad7f5cdee9de04b1fd5b7235b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f984f1fad7f5cdee9de04b1fd5b7235b);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbe5cb4d2eb1ac9bed937f4bd60984c2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbe5cb4d2eb1ac9bed937f4bd60984c2);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_can_suspend));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_can_suspend);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_446d0373386002532351befbc87115f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_446d0373386002532351befbc87115f6);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_3f86662147083d97add555c651d7541c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3f86662147083d97add555c651d7541c);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_f960d74ce00178d6285a9eb4181252e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f960d74ce00178d6285a9eb4181252e7);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_process_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_process_message);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_8acdc80ddf12796f577d5f5619087c8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8acdc80ddf12796f577d5f5619087c8d);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_91c9153a0540373827acf3db0f9e3f9a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_91c9153a0540373827acf3db0f9e3f9a);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd8bf5ff24c4504cda09dadca56f3dd8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd8bf5ff24c4504cda09dadca56f3dd8);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c85deaa4b98ef8ed5b3da57b3d93bbc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c85deaa4b98ef8ed5b3da57b3d93bbc);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_f14f8c2d857166f63fc3accae40a0fa4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f14f8c2d857166f63fc3accae40a0fa4);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flush);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_0315421437d449cf72ebba1322596d23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0315421437d449cf72ebba1322596d23);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_033324208d3568471a71e12f6956edf5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_033324208d3568471a71e12f6956edf5);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb7282dec38b9735874f0d5a191a6686));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb7282dec38b9735874f0d5a191a6686);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_163cb7a10f212731f6dd4ce0d4cea17f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_163cb7a10f212731f6dd4ce0d4cea17f);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_disable_input));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_disable_input);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb2a12623b5e9a3c0a267478b31d71bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb2a12623b5e9a3c0a267478b31d71bd);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_f418a88de6d4294076b463dfaa0ec0b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f418a88de6d4294076b463dfaa0ec0b7);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_45ad0897bf1ba863e95ea824e4e504f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45ad0897bf1ba863e95ea824e4e504f2);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_suspend_application_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suspend_application_mode);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_f82a14fd3561270993f3189d4f26c829));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f82a14fd3561270993f3189d4f26c829);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_resume_application_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resume_application_mode);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_d75c2c26233dd013cdb902ea7320946f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d75c2c26233dd013cdb902ea7320946f);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_Event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Event);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_SignalResume));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SignalResume);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a7f21d89a3a70664598b404e74fd53e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a7f21d89a3a70664598b404e74fd53e);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_50fd3d2e0ae25472e7aa2a02dc50f393));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50fd3d2e0ae25472e7aa2a02dc50f393);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_int_pos_174));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_174);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_dict_6891d8c1634f5f278622e2f49ae92035));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6891d8c1634f5f278622e2f49ae92035);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3918e5d6eacf942497ee59a63a99130));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3918e5d6eacf942497ee59a63a99130);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_718edaa7845b915dfe28abc94c9a7d45));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_718edaa7845b915dfe28abc94c9a7d45);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_0b20393aedfc65cc894427b0aad7d697));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0b20393aedfc65cc894427b0aad7d697);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_url);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_3af0d2d237c85521cff522a12cb2612d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3af0d2d237c85521cff522a12cb2612d);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_d8c245cb8c04bf0c4e4abd8d8f60775b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d8c245cb8c04bf0c4e4abd8d8f60775b);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_47f4c212735af072adf0930c4c1f2efd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_47f4c212735af072adf0930c4c1f2efd);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_deliver_binary));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deliver_binary);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_67af079c0849c00c86afd8a38ce4bfde));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_67af079c0849c00c86afd8a38ce4bfde);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_0b30f24e3b9c03266c283a271eb9fc01));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0b30f24e3b9c03266c283a271eb9fc01);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bc3270266f07aa478c877397077ee74));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bc3270266f07aa478c877397077ee74);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_415bf09c43fd7ed3a77185ce794f491e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_415bf09c43fd7ed3a77185ce794f491e);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb9b66a2cdcdec2d4428478b48fa4117));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb9b66a2cdcdec2d4428478b48fa4117);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_07d55adf53a386d946145c5c93c5c4f9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_07d55adf53a386d946145c5c93c5c4f9_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_befe16f2fca1cbf69c90154ee283e0aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_befe16f2fca1cbf69c90154ee283e0aa);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_digest_530463b237935a9c72a450e69f8754ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_530463b237935a9c72a450e69f8754ba);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_0373ec40ed734eb61b6478f883730e6a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0373ec40ed734eb61b6478f883730e6a_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_a531d1c24b9c76f68dc8cc272b32b92e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a531d1c24b9c76f68dc8cc272b32b92e_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_85f00465333f5ff9dab16bf3658e375f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_85f00465333f5ff9dab16bf3658e375f_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_3eeb613985ffd289275eea8b19aee8ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3eeb613985ffd289275eea8b19aee8ba_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_auto_restart_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_auto_restart_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_c85aa18e3616cd3eed2316de9c83b406_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c85aa18e3616cd3eed2316de9c83b406_tuple);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_e5be931e04d57b887ff07c8693239721_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e5be931e04d57b887ff07c8693239721_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_b691e9b87a771ac6929c4493bed8732c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b691e9b87a771ac6929c4493bed8732c_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_a9e1f89110f63dd93b91bd015f5c7d10_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a9e1f89110f63dd93b91bd015f5c7d10_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_message_tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_tuple);
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
static PyObject *module_var_accessor_textual$driver$ABC(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABC);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABC, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ABC);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ABC, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$BinaryIO(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_BinaryIO);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BinaryIO);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BinaryIO, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BinaryIO);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BinaryIO, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_BinaryIO);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_BinaryIO);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BinaryIO);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$MouseUp(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_MouseUp);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MouseUp);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MouseUp, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MouseUp);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MouseUp, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_MouseUp);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_MouseUp);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MouseUp);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$abstractmethod(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstractmethod);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstractmethod, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$contextmanager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$events(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_events);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_events, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_events);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_events, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$log(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_log);
    }

    return result;
}

static PyObject *module_var_accessor_textual$driver$threading(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$driver->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$driver->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$driver->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_threading);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_65318184ef53c1dd20b044d6416a7bf9;
static PyCodeObject *code_objects_01b180c7a2e811e932cb6ad9c359215a;
static PyCodeObject *code_objects_01124effbb962bfd8f55d85f75aa9fc0;
static PyCodeObject *code_objects_a381917b07f2e0c9233c6f3dbb235daa;
static PyCodeObject *code_objects_c3475cd6dca9a3d235e6a914f50fa679;
static PyCodeObject *code_objects_ea0f8dd5e74f58b6a06c03390e18d7fc;
static PyCodeObject *code_objects_53bb1b2eaab56d357e2d84473a434b0f;
static PyCodeObject *code_objects_569f7f152b25be61e2bbfc24e4bdab1f;
static PyCodeObject *code_objects_97a3533d395c1c56f8446ba498210f6b;
static PyCodeObject *code_objects_c6cffc11e7f5ca4ca03a96164f230830;
static PyCodeObject *code_objects_a2fc9ab80c98860a09192928cd9504c0;
static PyCodeObject *code_objects_df3f7797e652aa7f9f709c1887523b84;
static PyCodeObject *code_objects_4cac60796a1a566d96da428f0102caf4;
static PyCodeObject *code_objects_8e913555572932086239f30920878822;
static PyCodeObject *code_objects_07908971651a2cdde1d394f06ef88a3d;
static PyCodeObject *code_objects_5b341851a97c2edddadc1ae34d36b7d3;
static PyCodeObject *code_objects_e35b8f951304ac7c58a18240f9ebb5b4;
static PyCodeObject *code_objects_a75804218ca5ba70904b7bede9bb3be8;
static PyCodeObject *code_objects_3d65f0cc137acb3d2f4fcfdd469abf08;
static PyCodeObject *code_objects_72a814ee718d7dd055addb1ccf168901;
static PyCodeObject *code_objects_ae77a8293762dc8cc89e9b4321c582f3;
static PyCodeObject *code_objects_d048a30f51a4692b1c33d00ed453b94c;
static PyCodeObject *code_objects_3880db9a4a0c37f02100de138e0deb7f;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_befe16f2fca1cbf69c90154ee283e0aa); CHECK_OBJECT(module_filename_obj);
code_objects_65318184ef53c1dd20b044d6416a7bf9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_530463b237935a9c72a450e69f8754ba, mod_consts.const_str_digest_530463b237935a9c72a450e69f8754ba, NULL, NULL, 0, 0, 0);
code_objects_01b180c7a2e811e932cb6ad9c359215a = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Driver, mod_consts.const_str_plain_Driver, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_01124effbb962bfd8f55d85f75aa9fc0 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_1b792ba75b89bb7c25a4aceb2d500052, mod_consts.const_tuple_0373ec40ed734eb61b6478f883730e6a_tuple, NULL, 2, 3, 0);
code_objects_a381917b07f2e0c9233c6f3dbb235daa = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__delivery_complete, mod_consts.const_str_digest_0bc3270266f07aa478c877397077ee74, mod_consts.const_tuple_a531d1c24b9c76f68dc8cc272b32b92e_tuple, NULL, 4, 0, 0);
code_objects_c3475cd6dca9a3d235e6a914f50fa679 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__delivery_failed, mod_consts.const_str_digest_cb9b66a2cdcdec2d4428478b48fa4117, mod_consts.const_tuple_85f00465333f5ff9dab16bf3658e375f_tuple, NULL, 4, 0, 0);
code_objects_ea0f8dd5e74f58b6a06c03390e18d7fc = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_can_suspend, mod_consts.const_str_digest_446d0373386002532351befbc87115f6, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_53bb1b2eaab56d357e2d84473a434b0f = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_close, mod_consts.const_str_digest_718edaa7845b915dfe28abc94c9a7d45, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_569f7f152b25be61e2bbfc24e4bdab1f = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_deliver_binary, mod_consts.const_str_digest_67af079c0849c00c86afd8a38ce4bfde, mod_consts.const_tuple_3eeb613985ffd289275eea8b19aee8ba_tuple, NULL, 2, 6, 0);
code_objects_97a3533d395c1c56f8446ba498210f6b = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_disable_input, mod_consts.const_str_digest_fb2a12623b5e9a3c0a267478b31d71bd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c6cffc11e7f5ca4ca03a96164f230830 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_flush, mod_consts.const_str_digest_0315421437d449cf72ebba1322596d23, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a2fc9ab80c98860a09192928cd9504c0 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_headless, mod_consts.const_str_digest_c8c460b05973ed2254bc6938b06a72dd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_df3f7797e652aa7f9f709c1887523b84 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_inline, mod_consts.const_str_digest_3fe45812de1d74666a59bd95ee3fb349, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_4cac60796a1a566d96da428f0102caf4 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_web, mod_consts.const_str_digest_f984f1fad7f5cdee9de04b1fd5b7235b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8e913555572932086239f30920878822 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_no_automatic_restart, mod_consts.const_str_digest_575d06ea75573a27752191c7d58f9bcf, mod_consts.const_tuple_str_plain_self_str_plain_auto_restart_tuple, NULL, 1, 0, 0);
code_objects_07908971651a2cdde1d394f06ef88a3d = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_url, mod_consts.const_str_digest_3af0d2d237c85521cff522a12cb2612d, mod_consts.const_tuple_c85aa18e3616cd3eed2316de9c83b406_tuple, NULL, 3, 0, 0);
code_objects_5b341851a97c2edddadc1ae34d36b7d3 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_process_message, mod_consts.const_str_digest_8acdc80ddf12796f577d5f5619087c8d, mod_consts.const_tuple_e5be931e04d57b887ff07c8693239721_tuple, NULL, 2, 0, 0);
code_objects_e35b8f951304ac7c58a18240f9ebb5b4 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resume_application_mode, mod_consts.const_str_digest_d75c2c26233dd013cdb902ea7320946f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a75804218ca5ba70904b7bede9bb3be8 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_save_file_thread, mod_consts.const_str_digest_8e0a813a656ebc0918958d6fd79074ff, mod_consts.const_tuple_b691e9b87a771ac6929c4493bed8732c_tuple, mod_consts.const_tuple_a9e1f89110f63dd93b91bd015f5c7d10_tuple, 2, 0, 0);
code_objects_3d65f0cc137acb3d2f4fcfdd469abf08 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_message, mod_consts.const_str_digest_f960d74ce00178d6285a9eb4181252e7, mod_consts.const_tuple_str_plain_self_str_plain_message_tuple, NULL, 2, 0, 0);
code_objects_72a814ee718d7dd055addb1ccf168901 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_start_application_mode, mod_consts.const_str_digest_eb7282dec38b9735874f0d5a191a6686, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ae77a8293762dc8cc89e9b4321c582f3 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_stop_application_mode, mod_consts.const_str_digest_45ad0897bf1ba863e95ea824e4e504f2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d048a30f51a4692b1c33d00ed453b94c = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_suspend_application_mode, mod_consts.const_str_digest_f82a14fd3561270993f3189d4f26c829, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_3880db9a4a0c37f02100de138e0deb7f = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_4c85deaa4b98ef8ed5b3da57b3d93bbc, mod_consts.const_tuple_str_plain_self_str_plain_data_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__10_start_application_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__11_disable_input(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__12_stop_application_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__13_suspend_application_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__14_resume_application_mode(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__15_no_automatic_restart(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__16_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__17_open_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__18_deliver_binary(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__19__delivery_complete(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__20__delivery_failed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__2_is_headless(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__3_is_inline(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__4_is_web(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__5_can_suspend(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__6_send_message(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__7_process_message(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__8_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$driver$$$function__9_flush(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$driver$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_app = python_pars[1];
PyObject *par_debug = python_pars[2];
PyObject *par_mouse = python_pars[3];
PyObject *par_size = python_pars[4];
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_01124effbb962bfd8f55d85f75aa9fc0, module_textual$driver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$driver$$$function__1___init__ = cache_frame_frame_textual$driver$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_app);
tmp_assattr_value_1 = par_app;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__app, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_debug);
tmp_assattr_value_2 = par_debug;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__debug, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_mouse);
tmp_assattr_value_3 = par_mouse;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__mouse, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_size);
tmp_assattr_value_4 = par_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__size, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_assattr_target_5;
tmp_called_instance_1 = module_var_accessor_textual$driver$asyncio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__1___init__->m_frame.f_lineno = 40;
tmp_assattr_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_running_loop);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__loop, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__down_buttons, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain__last_move_event, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain__auto_restart, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_cursor_origin, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__1___init__,
    type_description_1,
    par_self,
    par_app,
    par_debug,
    par_mouse,
    par_size
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__1___init__ == cache_frame_frame_textual$driver$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__1___init__);
    cache_frame_frame_textual$driver$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__1___init__);

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
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
CHECK_OBJECT(par_debug);
Py_DECREF(par_debug);
CHECK_OBJECT(par_mouse);
Py_DECREF(par_mouse);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_app);
Py_DECREF(par_app);
CHECK_OBJECT(par_debug);
Py_DECREF(par_debug);
CHECK_OBJECT(par_mouse);
Py_DECREF(par_mouse);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$driver$$$function__6_send_message(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__6_send_message;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__6_send_message = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__6_send_message)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__6_send_message);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__6_send_message == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__6_send_message = MAKE_FUNCTION_FRAME(tstate, code_objects_3d65f0cc137acb3d2f4fcfdd469abf08, module_textual$driver, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__6_send_message->m_type_description == NULL);
frame_frame_textual$driver$$$function__6_send_message = cache_frame_frame_textual$driver$$$function__6_send_message;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__6_send_message);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__6_send_message) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_textual$driver$asyncio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_run_coroutine_threadsafe);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__app);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 74;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
frame_frame_textual$driver$$$function__6_send_message->m_frame.f_lineno = 74;
tmp_kw_call_arg_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__post_message, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 74;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__loop);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 74;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__6_send_message->m_frame.f_lineno = 73;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_loop_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__6_send_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__6_send_message->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__6_send_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__6_send_message,
    type_description_1,
    par_self,
    par_message
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__6_send_message == cache_frame_frame_textual$driver$$$function__6_send_message) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__6_send_message);
    cache_frame_frame_textual$driver$$$function__6_send_message = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__6_send_message);

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
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$driver$$$function__7_process_message(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_message = python_pars[1];
PyObject *var_offset_x = NULL;
PyObject *var_offset_y = NULL;
PyObject *var_buttons = NULL;
PyObject *var_move_event = NULL;
PyObject *var_button = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
PyObject *tmp_inplace_assign_2__value = NULL;
PyObject *tmp_inplace_assign_3__value = NULL;
PyObject *tmp_inplace_assign_4__value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__7_process_message;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
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
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__7_process_message = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__7_process_message)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__7_process_message);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__7_process_message == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__7_process_message = MAKE_FUNCTION_FRAME(tstate, code_objects_5b341851a97c2edddadc1ae34d36b7d3, module_textual$driver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__7_process_message->m_type_description == NULL);
frame_frame_textual$driver$$$function__7_process_message = cache_frame_frame_textual$driver$$$function__7_process_message;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__7_process_message);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__7_process_message) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_message);
tmp_expression_value_1 = par_message;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_set_sender);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__app);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 85;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 85;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_cursor_origin);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
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
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = const_int_0;
assert(var_offset_x == NULL);
Py_INCREF(tmp_assign_source_1);
var_offset_x = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_int_0;
assert(var_offset_y == NULL);
Py_INCREF(tmp_assign_source_2);
var_offset_y = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_cursor_origin);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_1 = "ooooooo";
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
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
assert(var_offset_x == NULL);
Py_INCREF(tmp_assign_source_6);
var_offset_x = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_offset_y == NULL);
Py_INCREF(tmp_assign_source_7);
var_offset_y = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_message);
tmp_isinstance_inst_1 = par_message;
tmp_expression_value_5 = module_var_accessor_textual$driver$events(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_MouseEvent);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_message);
tmp_expression_value_6 = par_message;
tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__x);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_isub_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(var_offset_x);
tmp_isub_expr_right_1 = var_offset_x;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_9 = tmp_isub_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_9;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_message);
tmp_assattr_target_1 = par_message;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__x, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_inplace_assign_1__value);
CHECK_OBJECT(tmp_inplace_assign_1__value);
Py_DECREF(tmp_inplace_assign_1__value);
tmp_inplace_assign_1__value = NULL;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_message);
tmp_expression_value_7 = par_message;
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__y);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_2__value == NULL);
tmp_inplace_assign_2__value = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_isub_expr_left_2 = tmp_inplace_assign_2__value;
CHECK_OBJECT(var_offset_y);
tmp_isub_expr_right_2 = var_offset_y;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_11 = tmp_isub_expr_left_2;
tmp_inplace_assign_2__value = tmp_assign_source_11;

}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_inplace_assign_2__value);
tmp_assattr_value_2 = tmp_inplace_assign_2__value;
CHECK_OBJECT(par_message);
tmp_assattr_target_2 = par_message;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__y, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_inplace_assign_2__value);
CHECK_OBJECT(tmp_inplace_assign_2__value);
Py_DECREF(tmp_inplace_assign_2__value);
tmp_inplace_assign_2__value = NULL;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_message);
tmp_expression_value_8 = par_message;
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__screen_x);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_3__value == NULL);
tmp_inplace_assign_3__value = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_isub_expr_left_3;
PyObject *tmp_isub_expr_right_3;
CHECK_OBJECT(tmp_inplace_assign_3__value);
tmp_isub_expr_left_3 = tmp_inplace_assign_3__value;
CHECK_OBJECT(var_offset_x);
tmp_isub_expr_right_3 = var_offset_x;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_3, tmp_isub_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_13 = tmp_isub_expr_left_3;
tmp_inplace_assign_3__value = tmp_assign_source_13;

}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(tmp_inplace_assign_3__value);
tmp_assattr_value_3 = tmp_inplace_assign_3__value;
CHECK_OBJECT(par_message);
tmp_assattr_target_3 = par_message;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__screen_x, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooooooo";
    goto try_except_handler_6;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_3__value);
CHECK_OBJECT(tmp_inplace_assign_3__value);
Py_DECREF(tmp_inplace_assign_3__value);
tmp_inplace_assign_3__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_inplace_assign_3__value);
CHECK_OBJECT(tmp_inplace_assign_3__value);
Py_DECREF(tmp_inplace_assign_3__value);
tmp_inplace_assign_3__value = NULL;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_message);
tmp_expression_value_9 = par_message;
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain__screen_y);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_4__value == NULL);
tmp_inplace_assign_4__value = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_isub_expr_left_4;
PyObject *tmp_isub_expr_right_4;
CHECK_OBJECT(tmp_inplace_assign_4__value);
tmp_isub_expr_left_4 = tmp_inplace_assign_4__value;
CHECK_OBJECT(var_offset_y);
tmp_isub_expr_right_4 = var_offset_y;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_4, tmp_isub_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
tmp_assign_source_15 = tmp_isub_expr_left_4;
tmp_inplace_assign_4__value = tmp_assign_source_15;

}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(tmp_inplace_assign_4__value);
tmp_assattr_value_4 = tmp_inplace_assign_4__value;
CHECK_OBJECT(par_message);
tmp_assattr_target_4 = par_message;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__screen_y, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooo";
    goto try_except_handler_7;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_inplace_assign_4__value);
CHECK_OBJECT(tmp_inplace_assign_4__value);
Py_DECREF(tmp_inplace_assign_4__value);
tmp_inplace_assign_4__value = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_inplace_assign_4__value);
CHECK_OBJECT(tmp_inplace_assign_4__value);
Py_DECREF(tmp_inplace_assign_4__value);
tmp_inplace_assign_4__value = NULL;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_message);
tmp_isinstance_inst_2 = par_message;
tmp_expression_value_10 = module_var_accessor_textual$driver$events(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_MouseDown);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_message);
tmp_expression_value_11 = par_message;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_button);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 98;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__down_buttons);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_expression_value_14 = par_message;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_button);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 99;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_message);
tmp_isinstance_inst_3 = par_message;
tmp_expression_value_15 = module_var_accessor_textual$driver$events(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_MouseUp);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_message);
tmp_expression_value_16 = par_message;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_button);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_message);
tmp_expression_value_17 = par_message;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_button);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__down_buttons);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_21;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__down_buttons);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_remove);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_expression_value_21 = par_message;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_button);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 102;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 102;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(par_message);
tmp_isinstance_inst_4 = par_message;
tmp_expression_value_22 = module_var_accessor_textual$driver$events(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_MouseMove);
if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
CHECK_OBJECT(tmp_isinstance_cls_4);
Py_DECREF(tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_23;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_24;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(par_self);
tmp_expression_value_23 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__down_buttons);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 105;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_message);
tmp_expression_value_24 = par_message;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_button);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_25 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__last_move_event);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_right_value_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_8 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_8 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_list_arg_1;
PyObject *tmp_dict_arg_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(par_self);
tmp_expression_value_26 = par_self;
tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain__down_buttons);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 110;
tmp_dict_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, dict_builtin_fromkeys, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
assert(!(tmp_dict_arg_1 == NULL));
tmp_list_arg_1 = DICT_ITERKEYS(tstate, tmp_dict_arg_1);
CHECK_OBJECT(tmp_dict_arg_1);
Py_DECREF(tmp_dict_arg_1);
assert(!(tmp_list_arg_1 == NULL));
tmp_assign_source_16 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_buttons == NULL);
var_buttons = tmp_assign_source_16;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_expression_value_28 = par_self;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain__down_buttons);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_clear);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 111;
tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(par_self);
tmp_expression_value_29 = par_self;
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain__last_move_event);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_move_event == NULL);
var_move_event = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_buttons);
tmp_iter_arg_2 = var_buttons;
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_18;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_19 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_19 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 113;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_19;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_20 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_button;
    var_button = tmp_assign_source_20;
    Py_INCREF(var_button);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_30;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_31;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_32;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_33;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_expression_value_34;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_expression_value_35;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_expression_value_36;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_expression_value_37;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_expression_value_38;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_expression_value_39;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 114;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_30 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_send_message);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_called_value_6 = module_var_accessor_textual$driver$MouseUp(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MouseUp);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 115;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (par_message == NULL) {
Py_DECREF(tmp_called_value_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 116;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_31 = par_message;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_widget);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 116;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (var_move_event == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_move_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_32 = var_move_event;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_x);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 117;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (var_move_event == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_move_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 118;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_33 = var_move_event;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_y);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 118;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
tmp_kw_call_dict_value_2_1 = const_int_0;
tmp_kw_call_dict_value_3_1 = const_int_0;
CHECK_OBJECT(var_button);
tmp_kw_call_dict_value_4_1 = var_button;
if (par_message == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 122;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_34 = par_message;
tmp_kw_call_dict_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_shift);
if (tmp_kw_call_dict_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 122;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (par_message == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_35 = par_message;
tmp_kw_call_dict_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_meta);
if (tmp_kw_call_dict_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);

exception_lineno = 123;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (par_message == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_36 = par_message;
tmp_kw_call_dict_value_7_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_ctrl);
if (tmp_kw_call_dict_value_7_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);

exception_lineno = 124;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (var_move_event == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_move_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_37 = var_move_event;
tmp_kw_call_dict_value_8_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_screen_x);
if (tmp_kw_call_dict_value_8_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);

exception_lineno = 125;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (var_move_event == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_move_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 126;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_38 = var_move_event;
tmp_kw_call_dict_value_9_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_screen_y);
if (tmp_kw_call_dict_value_9_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);

exception_lineno = 126;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
if (par_message == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 127;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_39 = par_message;
tmp_kw_call_dict_value_10_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_style);
if (tmp_kw_call_dict_value_10_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);

exception_lineno = 127;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 115;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[11] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_a277bcffb44298e715c68534ce23d614_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
CHECK_OBJECT(tmp_kw_call_dict_value_6_1);
Py_DECREF(tmp_kw_call_dict_value_6_1);
CHECK_OBJECT(tmp_kw_call_dict_value_7_1);
Py_DECREF(tmp_kw_call_dict_value_7_1);
CHECK_OBJECT(tmp_kw_call_dict_value_8_1);
Py_DECREF(tmp_kw_call_dict_value_8_1);
CHECK_OBJECT(tmp_kw_call_dict_value_9_1);
Py_DECREF(tmp_kw_call_dict_value_9_1);
CHECK_OBJECT(tmp_kw_call_dict_value_10_1);
Py_DECREF(tmp_kw_call_dict_value_10_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 115;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 114;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooo";
    goto try_except_handler_8;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_8:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
if (par_message == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_5 = par_message;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__last_move_event, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
branch_end_5:;
branch_end_3:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_40;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_5;
if (par_self == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_40 = par_self;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_send_message);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (par_message == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = par_message;
frame_frame_textual$driver$$$function__7_process_message->m_frame.f_lineno = 132;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__7_process_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__7_process_message->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__7_process_message, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__7_process_message,
    type_description_1,
    par_self,
    par_message,
    var_offset_x,
    var_offset_y,
    var_buttons,
    var_move_event,
    var_button
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__7_process_message == cache_frame_frame_textual$driver$$$function__7_process_message) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__7_process_message);
    cache_frame_frame_textual$driver$$$function__7_process_message = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__7_process_message);

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
CHECK_OBJECT(var_offset_x);
CHECK_OBJECT(var_offset_x);
Py_DECREF(var_offset_x);
var_offset_x = NULL;
CHECK_OBJECT(var_offset_y);
CHECK_OBJECT(var_offset_y);
Py_DECREF(var_offset_y);
var_offset_y = NULL;
Py_XDECREF(var_buttons);
var_buttons = NULL;
Py_XDECREF(var_move_event);
var_move_event = NULL;
Py_XDECREF(var_button);
var_button = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_offset_x);
var_offset_x = NULL;
Py_XDECREF(var_offset_y);
var_offset_y = NULL;
Py_XDECREF(var_buttons);
var_buttons = NULL;
Py_XDECREF(var_move_event);
var_move_event = NULL;
Py_XDECREF(var_button);
var_button = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_message);
Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$driver$$$function__13_suspend_application_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__13_suspend_application_mode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__13_suspend_application_mode = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__13_suspend_application_mode)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__13_suspend_application_mode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__13_suspend_application_mode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__13_suspend_application_mode = MAKE_FUNCTION_FRAME(tstate, code_objects_d048a30f51a4692b1c33d00ed453b94c, module_textual$driver, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__13_suspend_application_mode->m_type_description == NULL);
frame_frame_textual$driver$$$function__13_suspend_application_mode = cache_frame_frame_textual$driver$$$function__13_suspend_application_mode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__13_suspend_application_mode);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__13_suspend_application_mode) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$driver$$$function__13_suspend_application_mode->m_frame.f_lineno = 163;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_stop_application_mode);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_textual$driver$$$function__13_suspend_application_mode->m_frame.f_lineno = 164;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__13_suspend_application_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__13_suspend_application_mode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__13_suspend_application_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__13_suspend_application_mode,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__13_suspend_application_mode == cache_frame_frame_textual$driver$$$function__13_suspend_application_mode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__13_suspend_application_mode);
    cache_frame_frame_textual$driver$$$function__13_suspend_application_mode = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__13_suspend_application_mode);

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


static PyObject *impl_textual$driver$$$function__14_resume_application_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__14_resume_application_mode;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__14_resume_application_mode = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__14_resume_application_mode)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__14_resume_application_mode);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__14_resume_application_mode == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__14_resume_application_mode = MAKE_FUNCTION_FRAME(tstate, code_objects_e35b8f951304ac7c58a18240f9ebb5b4, module_textual$driver, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__14_resume_application_mode->m_type_description == NULL);
frame_frame_textual$driver$$$function__14_resume_application_mode = cache_frame_frame_textual$driver$$$function__14_resume_application_mode;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__14_resume_application_mode);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__14_resume_application_mode) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_textual$driver$$$function__14_resume_application_mode->m_frame.f_lineno = 172;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_start_application_mode);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__14_resume_application_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__14_resume_application_mode->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__14_resume_application_mode, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__14_resume_application_mode,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__14_resume_application_mode == cache_frame_frame_textual$driver$$$function__14_resume_application_mode) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__14_resume_application_mode);
    cache_frame_frame_textual$driver$$$function__14_resume_application_mode = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__14_resume_application_mode);

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


static PyObject *impl_textual$driver$$$function__15_no_automatic_restart(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart(tstate, tmp_closure_1);

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
struct textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart_locals {
PyObject *var_auto_restart;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart_locals *generator_heap = (struct textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_auto_restart = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8e913555572932086239f30920878822, module_textual$driver, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__auto_restart);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_auto_restart == NULL);
generator_heap->var_auto_restart = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__auto_restart, tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_expression_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_2 = Py_None;
Py_INCREF(tmp_expression_value_2);
generator->m_yield_return_index = 1;
return tmp_expression_value_2;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 188;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(generator_heap->var_auto_restart);
tmp_assattr_value_2 = generator_heap->var_auto_restart;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__auto_restart, tmp_assattr_value_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "co";
    goto try_except_handler_3;
}
}
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 187;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "co";
goto try_except_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(generator_heap->var_auto_restart);
tmp_assattr_value_3 = generator_heap->var_auto_restart;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__auto_restart, tmp_assattr_value_3);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 190;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
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
    generator->m_closure[0],
    generator_heap->var_auto_restart
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
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_auto_restart);
generator_heap->var_auto_restart = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->var_auto_restart);
CHECK_OBJECT(generator_heap->var_auto_restart);
Py_DECREF(generator_heap->var_auto_restart);
generator_heap->var_auto_restart = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart_context,
        module_textual$driver,
        mod_consts.const_str_plain_no_automatic_restart,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_575d06ea75573a27752191c7d58f9bcf,
#endif
        code_objects_8e913555572932086239f30920878822,
        closure,
        1,
#if 1
        sizeof(struct textual$driver$$$function__15_no_automatic_restart$$$genobj__1_no_automatic_restart_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$driver$$$function__17_open_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *par_new_tab = python_pars[2];
PyObject *var_webbrowser = NULL;
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__17_open_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__17_open_url = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__17_open_url)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__17_open_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__17_open_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__17_open_url = MAKE_FUNCTION_FRAME(tstate, code_objects_07908971651a2cdde1d394f06ef88a3d, module_textual$driver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__17_open_url->m_type_description == NULL);
frame_frame_textual$driver$$$function__17_open_url = cache_frame_frame_textual$driver$$$function__17_open_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__17_open_url);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__17_open_url) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_webbrowser;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$driver$$$function__17_open_url->m_frame.f_lineno = 204;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_webbrowser == NULL);
var_webbrowser = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_webbrowser);
tmp_called_instance_1 = var_webbrowser;
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_textual$driver$$$function__17_open_url->m_frame.f_lineno = 206;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, const_str_plain_open, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__17_open_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__17_open_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__17_open_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__17_open_url,
    type_description_1,
    par_self,
    par_url,
    par_new_tab,
    var_webbrowser
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__17_open_url == cache_frame_frame_textual$driver$$$function__17_open_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__17_open_url);
    cache_frame_frame_textual$driver$$$function__17_open_url = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__17_open_url);

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
CHECK_OBJECT(var_webbrowser);
CHECK_OBJECT(var_webbrowser);
Py_DECREF(var_webbrowser);
var_webbrowser = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_webbrowser);
var_webbrowser = NULL;
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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_new_tab);
Py_DECREF(par_new_tab);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
CHECK_OBJECT(par_new_tab);
Py_DECREF(par_new_tab);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$driver$$$function__18_deliver_binary(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_binary = python_pars[1];
struct Nuitka_CellObject *par_delivery_key = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_save_path = Nuitka_Cell_New1(python_pars[3]);
PyObject *par_open_method = python_pars[4];
struct Nuitka_CellObject *par_encoding = Nuitka_Cell_New1(python_pars[5]);
PyObject *par_mime_type = python_pars[6];
struct Nuitka_CellObject *par_name = Nuitka_Cell_New1(python_pars[7]);
PyObject *var_save_file_thread = NULL;
PyObject *var_mode = NULL;
PyObject *var_thread = NULL;
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__18_deliver_binary;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__18_deliver_binary = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[5];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_47e626cb696ef8fbdc0c41d0cc0c2ad1);
tmp_closure_1[0] = par_delivery_key;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_encoding;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_name;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_save_path;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_self;
Py_INCREF(tmp_closure_1[4]);
tmp_assign_source_1 = MAKE_FUNCTION_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread(tstate, tmp_annotations_1, tmp_closure_1);

assert(var_save_file_thread == NULL);
var_save_file_thread = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__18_deliver_binary)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__18_deliver_binary);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__18_deliver_binary == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__18_deliver_binary = MAKE_FUNCTION_FRAME(tstate, code_objects_569f7f152b25be61e2bbfc24e4bdab1f, module_textual$driver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__18_deliver_binary->m_type_description == NULL);
frame_frame_textual$driver$$$function__18_deliver_binary = cache_frame_frame_textual$driver$$$function__18_deliver_binary;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__18_deliver_binary);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__18_deliver_binary) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_binary);
tmp_isinstance_inst_1 = par_binary;
tmp_isinstance_cls_1 = module_var_accessor_textual$driver$BinaryIO(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BinaryIO);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "coccococooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "coccococooo";
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_str_plain_wb;
assert(var_mode == NULL);
Py_INCREF(tmp_assign_source_2);
var_mode = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_str_plain_w;
assert(var_mode == NULL);
Py_INCREF(tmp_assign_source_3);
var_mode = tmp_assign_source_3;
}
branch_end_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_textual$driver$threading(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_threading);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "coccococooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Thread);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "coccococooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_save_file_thread);
tmp_kw_call_value_0_1 = var_save_file_thread;
CHECK_OBJECT(par_binary);
tmp_tuple_element_1 = par_binary;
tmp_kw_call_value_1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_kw_call_value_1_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_mode);
tmp_tuple_element_1 = var_mode;
PyTuple_SET_ITEM0(tmp_kw_call_value_1_1, 1, tmp_tuple_element_1);
frame_frame_textual$driver$$$function__18_deliver_binary->m_frame.f_lineno = 276;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_target_str_plain_args_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "coccococooo";
    goto frame_exception_exit_1;
}
assert(var_thread == NULL);
var_thread = tmp_assign_source_4;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_thread);
tmp_called_instance_1 = var_thread;
frame_frame_textual$driver$$$function__18_deliver_binary->m_frame.f_lineno = 277;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_start);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "coccococooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__18_deliver_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__18_deliver_binary->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__18_deliver_binary, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__18_deliver_binary,
    type_description_1,
    par_self,
    par_binary,
    par_delivery_key,
    par_save_path,
    par_open_method,
    par_encoding,
    par_mime_type,
    par_name,
    var_save_file_thread,
    var_mode,
    var_thread
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__18_deliver_binary == cache_frame_frame_textual$driver$$$function__18_deliver_binary) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__18_deliver_binary);
    cache_frame_frame_textual$driver$$$function__18_deliver_binary = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__18_deliver_binary);

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
CHECK_OBJECT(par_delivery_key);
CHECK_OBJECT(par_delivery_key);
Py_DECREF(par_delivery_key);
par_delivery_key = NULL;
CHECK_OBJECT(par_save_path);
CHECK_OBJECT(par_save_path);
Py_DECREF(par_save_path);
par_save_path = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
CHECK_OBJECT(var_save_file_thread);
CHECK_OBJECT(var_save_file_thread);
Py_DECREF(var_save_file_thread);
var_save_file_thread = NULL;
CHECK_OBJECT(var_mode);
CHECK_OBJECT(var_mode);
Py_DECREF(var_mode);
var_mode = NULL;
CHECK_OBJECT(var_thread);
CHECK_OBJECT(var_thread);
Py_DECREF(var_thread);
var_thread = NULL;
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
CHECK_OBJECT(par_delivery_key);
CHECK_OBJECT(par_delivery_key);
Py_DECREF(par_delivery_key);
par_delivery_key = NULL;
CHECK_OBJECT(par_save_path);
CHECK_OBJECT(par_save_path);
Py_DECREF(par_save_path);
par_save_path = NULL;
CHECK_OBJECT(par_encoding);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
par_encoding = NULL;
CHECK_OBJECT(par_name);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
par_name = NULL;
CHECK_OBJECT(var_save_file_thread);
CHECK_OBJECT(var_save_file_thread);
Py_DECREF(var_save_file_thread);
var_save_file_thread = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
Py_XDECREF(var_thread);
var_thread = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_binary);
Py_DECREF(par_binary);
CHECK_OBJECT(par_open_method);
Py_DECREF(par_open_method);
CHECK_OBJECT(par_mime_type);
Py_DECREF(par_mime_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_binary);
Py_DECREF(par_binary);
CHECK_OBJECT(par_open_method);
Py_DECREF(par_open_method);
CHECK_OBJECT(par_mime_type);
Py_DECREF(par_mime_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_binary = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *var_destination_file = NULL;
PyObject *var_read = NULL;
PyObject *var_write = NULL;
PyObject *var_chunk_size = NULL;
PyObject *var_data = NULL;
PyObject *var_error = NULL;
PyObject *var_traceback = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread = MAKE_FUNCTION_FRAME(tstate, code_objects_a75804218ca5ba70904b7bede9bb3be8, module_textual$driver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_type_description == NULL);
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread = cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread) == 2);

// Framed code:
// Tried code:
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
PyObject *tmp_open_encoding_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_save_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}

tmp_open_filename_1 = Nuitka_Cell_GET(self->m_closure[3]);
CHECK_OBJECT(par_mode);
tmp_open_mode_1 = par_mode;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_encoding);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 245;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = mod_consts.const_str_digest_c075052d723d6707083e869a0e3659bb;
tmp_open_encoding_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_open_encoding_1 = tmp_or_left_value_1;
or_end_1:;
tmp_assign_source_1 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_1 = tmp_with_1__source;
tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 244;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
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


exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_5 = tmp_with_1__enter;
assert(var_destination_file == NULL);
Py_INCREF(tmp_assign_source_5);
var_destination_file = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_binary);
tmp_expression_value_3 = par_binary;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_read);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}
assert(var_read == NULL);
var_read = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_destination_file);
tmp_expression_value_4 = var_destination_file;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_write);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}
assert(var_write == NULL);
var_write = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_int_pos_65536;
assert(var_chunk_size == NULL);
Py_INCREF(tmp_assign_source_8);
var_chunk_size = tmp_assign_source_8;
}
loop_start_1:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
if (var_read == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_read);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}

tmp_called_value_2 = var_read;
if (var_chunk_size == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_chunk_size);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 251;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}

tmp_args_element_value_1 = var_chunk_size;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 251;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}
{
    PyObject *old = var_data;
    var_data = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_data);
tmp_operand_value_1 = var_data;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}

tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[4]);
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__delivery_complete);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_delivery_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[0]);
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_save_path);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[3]);
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(self->m_closure[2]);
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 254;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_save_path_str_plain_name_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (var_write == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_write);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 258;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}

tmp_called_value_4 = var_write;
CHECK_OBJECT(var_data);
tmp_args_element_value_2 = var_data;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 258;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_6;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
nuitka_bool tmp_assign_source_10;
tmp_assign_source_10 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_10;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_5 = tmp_with_1__exit;
tmp_args_element_value_3 = EXC_TYPE(tstate);
tmp_args_element_value_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_4); 
tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_5 == NULL) {
    tmp_args_element_value_5 = Py_None;
}
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 244;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_7;
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
    exception_lineno = 244;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame)) {
        frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooccccc";
goto try_except_handler_7;
branch_no_3:;
goto branch_end_2;
branch_no_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 244;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame)) {
        frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooccccc";
goto try_except_handler_7;
branch_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_6 = tmp_with_1__exit;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 244;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_3);

exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
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
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_4;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 244;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_7, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_4:;
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
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_11); 
assert(var_error == NULL);
Py_INCREF(tmp_assign_source_11);
var_error = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_6 = module_var_accessor_textual$driver$log(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_error);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_d0ddd69c261b898781176dac3455ed6d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_error);
tmp_format_value_1 = var_error;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooccccc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_8);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_6 == NULL));
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 262;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_traceback;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 263;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
assert(var_traceback == NULL);
var_traceback = tmp_assign_source_12;
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_1;
tmp_expression_value_7 = module_var_accessor_textual$driver$log(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_log);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_error);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_traceback);
tmp_called_instance_1 = var_traceback;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 265;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_format_exc);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 265;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
tmp_args_element_value_7 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 265;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 265;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_7;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}

tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[4]);
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__delivery_failed);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_delivery_key);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}

tmp_kw_call_arg_value_0_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(var_error);
tmp_kw_call_dict_value_0_2 = var_error;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_10);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 266;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(self->m_closure[2]);
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 266;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_10, args, kw_values, mod_consts.const_tuple_str_plain_exception_str_plain_name_tuple);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_error);
var_error = NULL;

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_8;
// End of try:
try_end_6:;
Py_XDECREF(var_error);
var_error = NULL;

goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 243;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame)) {
        frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooccccc";
goto try_except_handler_8;
branch_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_2;
// End of try:
try_end_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
goto try_end_8;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_binary);
tmp_expression_value_9 = par_binary;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_closed);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_10;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_10;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_8;
CHECK_OBJECT(par_binary);
tmp_called_instance_2 = par_binary;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 269;
tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, const_str_plain_close);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooooccccc";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_7:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 243;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame)) {
        frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooccccc";
goto try_except_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_8:;
{
bool tmp_condition_result_8;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_binary);
tmp_expression_value_10 = par_binary;
tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_closed);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooccccc";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "oooooooooccccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_9;
CHECK_OBJECT(par_binary);
tmp_called_instance_3 = par_binary;
frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame.f_lineno = 269;
tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_close);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "oooooooooccccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_8:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread,
    type_description_1,
    par_binary,
    par_mode,
    var_destination_file,
    var_read,
    var_write,
    var_chunk_size,
    var_data,
    var_error,
    var_traceback,
    self->m_closure[3],
    self->m_closure[1],
    self->m_closure[4],
    self->m_closure[0],
    self->m_closure[2]
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread == cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread);
    cache_frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread);

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
Py_XDECREF(var_destination_file);
var_destination_file = NULL;
Py_XDECREF(var_read);
var_read = NULL;
Py_XDECREF(var_write);
var_write = NULL;
Py_XDECREF(var_chunk_size);
var_chunk_size = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_traceback);
var_traceback = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_destination_file);
var_destination_file = NULL;
Py_XDECREF(var_read);
var_read = NULL;
Py_XDECREF(var_write);
var_write = NULL;
Py_XDECREF(var_chunk_size);
var_chunk_size = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_traceback);
var_traceback = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_binary);
Py_DECREF(par_binary);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_binary);
Py_DECREF(par_binary);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$driver$$$function__19__delivery_complete(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_delivery_key = python_pars[1];
PyObject *par_save_path = python_pars[2];
PyObject *par_name = python_pars[3];
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__19__delivery_complete;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__19__delivery_complete = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__19__delivery_complete)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__19__delivery_complete);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__19__delivery_complete == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__19__delivery_complete = MAKE_FUNCTION_FRAME(tstate, code_objects_a381917b07f2e0c9233c6f3dbb235daa, module_textual$driver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__19__delivery_complete->m_type_description == NULL);
frame_frame_textual$driver$$$function__19__delivery_complete = cache_frame_frame_textual$driver$$$function__19__delivery_complete;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__19__delivery_complete);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__19__delivery_complete) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__app);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_call_from_thread);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__app);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_post_message);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_textual$driver$events(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 288;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_DeliveryComplete);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 288;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_delivery_key);
tmp_kw_call_value_0_1 = par_delivery_key;
CHECK_OBJECT(par_save_path);
tmp_kw_call_value_1_1 = par_save_path;
CHECK_OBJECT(par_name);
tmp_kw_call_value_2_1 = par_name;
frame_frame_textual$driver$$$function__19__delivery_complete->m_frame.f_lineno = 288;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_args_element_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_key_str_plain_path_str_plain_name_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 288;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__19__delivery_complete->m_frame.f_lineno = 286;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__19__delivery_complete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__19__delivery_complete->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__19__delivery_complete, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__19__delivery_complete,
    type_description_1,
    par_self,
    par_delivery_key,
    par_save_path,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__19__delivery_complete == cache_frame_frame_textual$driver$$$function__19__delivery_complete) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__19__delivery_complete);
    cache_frame_frame_textual$driver$$$function__19__delivery_complete = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__19__delivery_complete);

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
CHECK_OBJECT(par_delivery_key);
Py_DECREF(par_delivery_key);
CHECK_OBJECT(par_save_path);
Py_DECREF(par_save_path);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_delivery_key);
Py_DECREF(par_delivery_key);
CHECK_OBJECT(par_save_path);
Py_DECREF(par_save_path);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$driver$$$function__20__delivery_failed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_delivery_key = python_pars[1];
PyObject *par_exception = python_pars[2];
PyObject *par_name = python_pars[3];
struct Nuitka_FrameObject *frame_frame_textual$driver$$$function__20__delivery_failed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$driver$$$function__20__delivery_failed = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$driver$$$function__20__delivery_failed)) {
    Py_XDECREF(cache_frame_frame_textual$driver$$$function__20__delivery_failed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$driver$$$function__20__delivery_failed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$driver$$$function__20__delivery_failed = MAKE_FUNCTION_FRAME(tstate, code_objects_c3475cd6dca9a3d235e6a914f50fa679, module_textual$driver, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$driver$$$function__20__delivery_failed->m_type_description == NULL);
frame_frame_textual$driver$$$function__20__delivery_failed = cache_frame_frame_textual$driver$$$function__20__delivery_failed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$function__20__delivery_failed);
assert(Py_REFCNT(frame_frame_textual$driver$$$function__20__delivery_failed) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__app);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_call_from_thread);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__app);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 299;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_post_message);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 299;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_textual$driver$events(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 300;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_DeliveryFailed);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 300;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_delivery_key);
tmp_kw_call_value_0_1 = par_delivery_key;
CHECK_OBJECT(par_exception);
tmp_kw_call_value_1_1 = par_exception;
CHECK_OBJECT(par_name);
tmp_kw_call_value_2_1 = par_name;
frame_frame_textual$driver$$$function__20__delivery_failed->m_frame.f_lineno = 300;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_args_element_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_key_str_plain_exception_str_plain_name_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 300;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_textual$driver$$$function__20__delivery_failed->m_frame.f_lineno = 298;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$function__20__delivery_failed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$function__20__delivery_failed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$function__20__delivery_failed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$function__20__delivery_failed,
    type_description_1,
    par_self,
    par_delivery_key,
    par_exception,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_textual$driver$$$function__20__delivery_failed == cache_frame_frame_textual$driver$$$function__20__delivery_failed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$driver$$$function__20__delivery_failed);
    cache_frame_frame_textual$driver$$$function__20__delivery_failed = NULL;
}

assertFrameObject(frame_frame_textual$driver$$$function__20__delivery_failed);

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
CHECK_OBJECT(par_delivery_key);
Py_DECREF(par_delivery_key);
CHECK_OBJECT(par_exception);
Py_DECREF(par_exception);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_delivery_key);
Py_DECREF(par_delivery_key);
CHECK_OBJECT(par_exception);
Py_DECREF(par_exception);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__10_start_application_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_start_application_mode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_eb7282dec38b9735874f0d5a191a6686,
#endif
        code_objects_72a814ee718d7dd055addb1ccf168901,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_033324208d3568471a71e12f6956edf5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__11_disable_input(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_disable_input,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb2a12623b5e9a3c0a267478b31d71bd,
#endif
        code_objects_97a3533d395c1c56f8446ba498210f6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_163cb7a10f212731f6dd4ce0d4cea17f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__12_stop_application_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_stop_application_mode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_45ad0897bf1ba863e95ea824e4e504f2,
#endif
        code_objects_ae77a8293762dc8cc89e9b4321c582f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_f418a88de6d4294076b463dfaa0ec0b7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__13_suspend_application_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__13_suspend_application_mode,
        mod_consts.const_str_plain_suspend_application_mode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f82a14fd3561270993f3189d4f26c829,
#endif
        code_objects_d048a30f51a4692b1c33d00ed453b94c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_86a65a2ee2808cc6d69836b353d908db,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__14_resume_application_mode(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__14_resume_application_mode,
        mod_consts.const_str_plain_resume_application_mode,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d75c2c26233dd013cdb902ea7320946f,
#endif
        code_objects_e35b8f951304ac7c58a18240f9ebb5b4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_5e1185f5b9f2b92612f5f017cc0f9253,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__15_no_automatic_restart(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__15_no_automatic_restart,
        mod_consts.const_str_plain_no_automatic_restart,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_575d06ea75573a27752191c7d58f9bcf,
#endif
        code_objects_8e913555572932086239f30920878822,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_66a5196fd225682eed5935fadbbbc056,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__16_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_718edaa7845b915dfe28abc94c9a7d45,
#endif
        code_objects_53bb1b2eaab56d357e2d84473a434b0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_d3918e5d6eacf942497ee59a63a99130,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__17_open_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__17_open_url,
        mod_consts.const_str_plain_open_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3af0d2d237c85521cff522a12cb2612d,
#endif
        code_objects_07908971651a2cdde1d394f06ef88a3d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_1b8ead850d298254c85c0319cffe918e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__18_deliver_binary(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__18_deliver_binary,
        mod_consts.const_str_plain_deliver_binary,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_67af079c0849c00c86afd8a38ce4bfde,
#endif
        code_objects_569f7f152b25be61e2bbfc24e4bdab1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_4b8528ddd79d82167179800cb61192b2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread,
        mod_consts.const_str_plain_save_file_thread,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e0a813a656ebc0918958d6fd79074ff,
#endif
        code_objects_a75804218ca5ba70904b7bede9bb3be8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__19__delivery_complete(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__19__delivery_complete,
        mod_consts.const_str_plain__delivery_complete,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0bc3270266f07aa478c877397077ee74,
#endif
        code_objects_a381917b07f2e0c9233c6f3dbb235daa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_96ff4005ff1ab9000f591a1c34d80b35,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1b792ba75b89bb7c25a4aceb2d500052,
#endif
        code_objects_01124effbb962bfd8f55d85f75aa9fc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_8f06352753f3578ecfad4f9ca20fdc9c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__20__delivery_failed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__20__delivery_failed,
        mod_consts.const_str_plain__delivery_failed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb9b66a2cdcdec2d4428478b48fa4117,
#endif
        code_objects_c3475cd6dca9a3d235e6a914f50fa679,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_7d5bc1df921e2b953fb5d8fcbc2a0a79,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__2_is_headless(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_headless,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c8c460b05973ed2254bc6938b06a72dd,
#endif
        code_objects_a2fc9ab80c98860a09192928cd9504c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_8846ed8c03dbd8cf9f22254124c40f7f,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__3_is_inline(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_inline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3fe45812de1d74666a59bd95ee3fb349,
#endif
        code_objects_df3f7797e652aa7f9f709c1887523b84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_3dd6ad80513f1c6e8001a2eb6044c3ba,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__4_is_web(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_web,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f984f1fad7f5cdee9de04b1fd5b7235b,
#endif
        code_objects_4cac60796a1a566d96da428f0102caf4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_297935a3af597558d4681c6ed7f82c79,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__5_can_suspend(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_can_suspend,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_446d0373386002532351befbc87115f6,
#endif
        code_objects_ea0f8dd5e74f58b6a06c03390e18d7fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_dbe5cb4d2eb1ac9bed937f4bd60984c2,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__6_send_message(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__6_send_message,
        mod_consts.const_str_plain_send_message,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f960d74ce00178d6285a9eb4181252e7,
#endif
        code_objects_3d65f0cc137acb3d2f4fcfdd469abf08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_2e53e14697ae2a2c2a0579d2ecfadd96,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__7_process_message(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$driver$$$function__7_process_message,
        mod_consts.const_str_plain_process_message,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8acdc80ddf12796f577d5f5619087c8d,
#endif
        code_objects_5b341851a97c2edddadc1ae34d36b7d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_2828f4a5e1bc1ab3a091fb63da0d1713,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__8_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c85deaa4b98ef8ed5b3da57b3d93bbc,
#endif
        code_objects_3880db9a4a0c37f02100de138e0deb7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_fd8bf5ff24c4504cda09dadca56f3dd8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$driver$$$function__9_flush(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_flush,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0315421437d449cf72ebba1322596d23,
#endif
        code_objects_c6cffc11e7f5ca4ca03a96164f230830,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$driver,
        mod_consts.const_str_digest_f14f8c2d857166f63fc3accae40a0fa4,
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

static function_impl_code const function_table_textual$driver[] = {
impl_textual$driver$$$function__18_deliver_binary$$$function__1_save_file_thread,
impl_textual$driver$$$function__1___init__,
impl_textual$driver$$$function__6_send_message,
impl_textual$driver$$$function__7_process_message,
impl_textual$driver$$$function__13_suspend_application_mode,
impl_textual$driver$$$function__14_resume_application_mode,
impl_textual$driver$$$function__15_no_automatic_restart,
impl_textual$driver$$$function__17_open_url,
impl_textual$driver$$$function__18_deliver_binary,
impl_textual$driver$$$function__19__delivery_complete,
impl_textual$driver$$$function__20__delivery_failed,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$driver);
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
        module_textual$driver,
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
        function_table_textual$driver,
        sizeof(function_table_textual$driver) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.driver";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$driver(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$driver");

    // Store the module for future use.
    module_textual$driver = module;

    moduledict_textual$driver = MODULE_DICT(module_textual$driver);

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
        PRINT_STRING("textual$driver: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$driver: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$driver: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.driver" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$driver\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$driver,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$driver,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$driver,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$driver,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$driver,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$driver);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$driver);
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

        UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_Driver$class_container$class_creation_1__bases = NULL;
PyObject *tmp_Driver$class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_Driver$class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_Driver$class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_Driver$class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$driver;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_textual$driver$$$class__1_Driver_17 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$driver$$$class__1_Driver_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
PyObject *locals_textual$driver$$$class__2_SignalResume_174 = NULL;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$driver = MAKE_MODULE_FRAME(code_objects_65318184ef53c1dd20b044d6416a7bf9, module_textual$driver);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver);
assert(Py_REFCNT(frame_frame_textual$driver) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$driver$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$driver$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$driver->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_textual$driver->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_threading, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ABC_str_plain_abstractmethod_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$driver->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

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
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_ABC,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ABC);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_ABC, tmp_assign_source_8);
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
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_abstractmethod,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_abstractmethod, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_contextmanager_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$driver->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_contextmanager);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$driver->m_frame.f_lineno = 7;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_12 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_12);
tmp_import_from_2__module = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_13);
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_BinaryIO,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_BinaryIO);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_BinaryIO, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_Iterator,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Iterator);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterator, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_TextIO,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_TextIO);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_TextIO, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_events_str_plain_log_str_plain_messages_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$driver->m_frame.f_lineno = 10;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_events,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_events);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_events, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_log,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_log);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_log, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_messages,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_messages);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_messages, tmp_assign_source_22);
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
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_a79a6f7cb909a2e5ba41c580ffb66ac7;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$driver;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_MouseUp_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$driver->m_frame.f_lineno = 11;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$driver,
        mod_consts.const_str_plain_MouseUp,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_MouseUp);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_MouseUp, tmp_assign_source_23);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_textual$driver$ABC(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ABC);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto try_except_handler_4;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
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


exception_lineno = 17;

    goto try_except_handler_4;
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


exception_lineno = 17;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
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


exception_lineno = 17;

    goto try_except_handler_4;
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


exception_lineno = 17;

    goto try_except_handler_4;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_Driver;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$driver->m_frame.f_lineno = 17;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
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


exception_lineno = 17;

    goto try_except_handler_4;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_4;
}
frame_frame_textual$driver->m_frame.f_lineno = 17;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 17;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
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
locals_textual$driver$$$class__1_Driver_17 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ed9b7525e14e4844b1fbdaab5ca1fd1e;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_1e09328f7bdfbb9a8bef368734a14cde;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_Driver;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_17;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
frame_frame_textual$driver$$$class__1_Driver_2 = MAKE_CLASS_FRAME(tstate, code_objects_01b180c7a2e811e932cb6ad9c359215a, module_textual$driver, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$driver$$$class__1_Driver_2);
assert(Py_REFCNT(frame_frame_textual$driver$$$class__1_Driver_2) == 2);

// Framed code:
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_0dd25ba2b56a1c05f54ba21afbc92db7);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a3368a96e3f0be8f997c1eb9ce2ee988);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_2 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_1 = MAKE_FUNCTION_textual$driver$$$function__2_is_headless(tstate, tmp_annotations_2);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 47;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_is_headless, tmp_dictset_value);
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_3 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_2 = MAKE_FUNCTION_textual$driver$$$function__3_is_inline(tstate, tmp_annotations_3);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 52;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_is_inline, tmp_dictset_value);
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
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
tmp_called_value_4 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$driver$$$function__4_is_web(tstate, tmp_annotations_4);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 57;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_is_web, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_5;
tmp_called_value_5 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_4 = MAKE_FUNCTION_textual$driver$$$function__5_can_suspend(tstate, tmp_annotations_5);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 62;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_can_suspend, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_3f86662147083d97add555c651d7541c);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__6_send_message(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_send_message, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_3f86662147083d97add555c651d7541c);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__7_process_message(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_process_message, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_8;
tmp_called_value_6 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_textual$driver$abstractmethod(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_91c9153a0540373827acf3db0f9e3f9a);

tmp_args_element_value_5 = MAKE_FUNCTION_textual$driver$$$function__8_write(tstate, tmp_annotations_8);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 134;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__9_flush(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_flush, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_10;
tmp_called_value_7 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_textual$driver$abstractmethod(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_6 = MAKE_FUNCTION_textual$driver$$$function__10_start_application_mode(tstate, tmp_annotations_10);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 145;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_start_application_mode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_11;
tmp_called_value_8 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_textual$driver$abstractmethod(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_7 = MAKE_FUNCTION_textual$driver$$$function__11_disable_input(tstate, tmp_annotations_11);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 149;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_disable_input, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_12;
tmp_called_value_9 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_abstractmethod);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = module_var_accessor_textual$driver$abstractmethod(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstractmethod);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_args_element_value_8 = MAKE_FUNCTION_textual$driver$$$function__12_stop_application_mode(tstate, tmp_annotations_12);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 153;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_stop_application_mode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__13_suspend_application_mode(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_suspend_application_mode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__14_resume_application_mode(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_resume_application_mode, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_events);

if (tmp_expression_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_7 = module_var_accessor_textual$driver$events(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
        Py_INCREF(tmp_expression_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto try_except_handler_7;
    }
}

tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Event);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_31, 0, tmp_tuple_element_4);
assert(tmp_Driver$class_container$class_creation_1__bases_orig == NULL);
tmp_Driver$class_container$class_creation_1__bases_orig = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_2 = tmp_Driver$class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_32 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_Driver$class_container$class_creation_1__bases == NULL);
tmp_Driver$class_container$class_creation_1__bases = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Driver$class_container$class_creation_1__class_decl_dict == NULL);
tmp_Driver$class_container$class_creation_1__class_decl_dict = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_Driver$class_container$class_creation_1__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
tmp_expression_value_8 = tmp_Driver$class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
tmp_bases_value_2 = tmp_Driver$class_container$class_creation_1__bases;
tmp_assign_source_34 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_Driver$class_container$class_creation_1__metaclass == NULL);
tmp_Driver$class_container$class_creation_1__metaclass = tmp_assign_source_34;
}
{
bool tmp_condition_result_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_Driver$class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__metaclass);
tmp_expression_value_10 = tmp_Driver$class_container$class_creation_1__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_tuple_element_5 = mod_consts.const_str_plain_SignalResume;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_Driver$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_Driver$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 174;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
assert(tmp_Driver$class_container$class_creation_1__prepared == NULL);
tmp_Driver$class_container$class_creation_1__prepared = tmp_assign_source_35;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__prepared);
tmp_expression_value_11 = tmp_Driver$class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__metaclass);
tmp_expression_value_12 = tmp_Driver$class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_9, tmp_default_value_2);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__prepared);
tmp_type_arg_4 = tmp_Driver$class_container$class_creation_1__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 174;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 174;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_2 = "o";
goto try_except_handler_7;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_Driver$class_container$class_creation_1__prepared == NULL);
tmp_Driver$class_container$class_creation_1__prepared = tmp_assign_source_36;
}
branch_end_3:;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__prepared);
tmp_set_locals_2 = tmp_Driver$class_container$class_creation_1__prepared;
locals_textual$driver$$$class__2_SignalResume_174 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_ed9b7525e14e4844b1fbdaab5ca1fd1e;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__2_SignalResume_174, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_2a7f21d89a3a70664598b404e74fd53e;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__2_SignalResume_174, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_50fd3d2e0ae25472e7aa2a02dc50f393;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__2_SignalResume_174, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_174;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__2_SignalResume_174, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__2_SignalResume_174, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_Driver$class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_Driver$class_container$class_creation_1__bases_orig;
tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_Driver$class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__2_SignalResume_174, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
branch_no_5:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__metaclass);
tmp_called_value_11 = tmp_Driver$class_container$class_creation_1__metaclass;
tmp_tuple_element_7 = mod_consts.const_str_plain_SignalResume;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
tmp_tuple_element_7 = tmp_Driver$class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
tmp_tuple_element_7 = locals_textual$driver$$$class__2_SignalResume_174;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_7);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_3 = tmp_Driver$class_container$class_creation_1__class_decl_dict;
frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 174;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_dictset_value = outline_1_var___class__;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_textual$driver$$$class__2_SignalResume_174);
locals_textual$driver$$$class__2_SignalResume_174 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$driver$$$class__2_SignalResume_174);
locals_textual$driver$$$class__2_SignalResume_174 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 174;
goto try_except_handler_7;
outline_result_4:;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_SignalResume, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "o";
    goto try_except_handler_7;
}
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_Driver$class_container$class_creation_1__bases_orig);
tmp_Driver$class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_Driver$class_container$class_creation_1__bases);
tmp_Driver$class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_Driver$class_container$class_creation_1__class_decl_dict);
tmp_Driver$class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_Driver$class_container$class_creation_1__metaclass);
tmp_Driver$class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_Driver$class_container$class_creation_1__prepared);
tmp_Driver$class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_2;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_Driver$class_container$class_creation_1__bases_orig);
tmp_Driver$class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__bases);
Py_DECREF(tmp_Driver$class_container$class_creation_1__bases);
tmp_Driver$class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_Driver$class_container$class_creation_1__class_decl_dict);
tmp_Driver$class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__metaclass);
Py_DECREF(tmp_Driver$class_container$class_creation_1__metaclass);
tmp_Driver$class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_Driver$class_container$class_creation_1__prepared);
Py_DECREF(tmp_Driver$class_container$class_creation_1__prepared);
tmp_Driver$class_container$class_creation_1__prepared = NULL;
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
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_15;
tmp_called_value_12 = PyObject_GetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_contextmanager);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = module_var_accessor_textual$driver$contextmanager(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_6891d8c1634f5f278622e2f49ae92035);

tmp_args_element_value_9 = MAKE_FUNCTION_textual$driver$$$function__15_no_automatic_restart(tstate, tmp_annotations_15);

frame_frame_textual$driver$$$class__1_Driver_2->m_frame.f_lineno = 177;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_no_automatic_restart, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__16_close(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_17;
tmp_defaults_1 = mod_consts.const_tuple_true_tuple;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_0b20393aedfc65cc894427b0aad7d697);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__17_open_url(tstate, tmp_defaults_1, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_open_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_18;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_d8c245cb8c04bf0c4e4abd8d8f60775b);
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_47f4c212735af072adf0930c4c1f2efd);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__18_deliver_binary(tstate, tmp_kw_defaults_2, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain_deliver_binary, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_0b30f24e3b9c03266c283a271eb9fc01);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__19__delivery_complete(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain__delivery_complete, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_20;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_415bf09c43fd7ed3a77185ce794f491e);

tmp_dictset_value = MAKE_FUNCTION_textual$driver$$$function__20__delivery_failed(tstate, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain__delivery_failed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver$$$class__1_Driver_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver$$$class__1_Driver_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver$$$class__1_Driver_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$driver$$$class__1_Driver_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$driver$$$class__1_Driver_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_07d55adf53a386d946145c5c93c5c4f9_tuple;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_textual$driver$$$class__1_Driver_17, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_Driver;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_textual$driver$$$class__1_Driver_17;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$driver->m_frame.f_lineno = 17;
tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_38;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_30 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_textual$driver$$$class__1_Driver_17);
locals_textual$driver$$$class__1_Driver_17 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$driver$$$class__1_Driver_17);
locals_textual$driver$$$class__1_Driver_17 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 17;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$driver, (Nuitka_StringObject *)mod_consts.const_str_plain_Driver, tmp_assign_source_30);
}
goto try_end_5;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$driver, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$driver->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$driver, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$driver);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$driver", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.driver" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$driver);
    return module_textual$driver;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$driver, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$driver", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

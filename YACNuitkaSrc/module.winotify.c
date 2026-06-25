/* Generated code for Python module 'winotify'
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



/* The "module_winotify" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_winotify;
PyDictObject *moduledict_winotify;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_subprocess;
PyObject *const_str_plain_STARTUPINFO;
PyObject *const_str_plain_dwFlags;
PyObject *const_str_plain_STARTF_USESHOWWINDOW;
PyObject *const_str_digest_ffbcbf6968d0eb2623f19265f6c994be;
PyObject *const_str_digest_ed9498ae1c5208adccf9190a7a1dd88b;
PyObject *const_str_plain_Bypass;
PyObject *const_str_digest_5c7e5a2628ce4ad7792d0bf92e81420b;
PyObject *const_str_digest_817ffbbc54335a49d4be97e58e434548;
PyObject *const_str_plain_Popen;
PyObject *const_str_plain_DEVNULL;
PyObject *const_tuple_38da64769b584d3a43c147db2e1144c1_tuple;
PyObject *const_str_plain_app_id;
PyObject *const_str_plain_title;
PyObject *const_str_plain_msg;
PyObject *const_str_plain_icon;
PyObject *const_str_plain_duration;
PyObject *const_str_plain_launch;
PyObject *const_str_plain_audio;
PyObject *const_str_plain_Silent;
PyObject *const_str_plain_tag;
PyObject *const_str_plain_group;
PyObject *const_str_plain_actions;
PyObject *const_str_plain_script;
PyObject *const_tuple_str_plain_short_str_plain_long_tuple;
PyObject *const_str_digest_9dad6b3fe16f5a90342e4de4f9b8efd6;
PyObject *const_str_digest_9aeb3717c80311eb24f6c10ace62fde0;
PyObject *const_str_digest_745f58d86e218d47d08ccfed2ed63fad;
PyObject *const_str_digest_3a592a136daf4a6d8fc59592ba9bca9a;
PyObject *const_str_plain_callable;
PyObject *const_str_plain_url;
PyObject *const_str_digest_2fcd2177309d1531e41ca2b8624bd334;
PyObject *const_str_plain_append;
PyObject *const_str_digest_366a39b2847cf5f9256a6f26bfd0abc4;
PyObject *const_tuple_str_plain_label_str_plain_link_tuple;
PyObject *const_str_digest_f0128e10c3e04be40acaff867db9a086;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_780e43c5b8e8b878a8a8b7529f992676;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_str_digest_85abd8a5f9ad400ba1bf6a8236baeec5;
PyObject *const_str_newline;
PyObject *const_str_digest_2fdaf7d1d0f60a2e646df6bda737c022;
PyObject *const_str_digest_7c8e9c004ea404e4adc2c1095d197554;
PyObject *const_str_plain_TEMPLATE;
PyObject *const_str_plain__run_ps;
PyObject *const_tuple_str_plain_command_tuple;
PyObject *const_str_digest_dbf5d656739d5424376b44b00a873b22;
PyObject *const_str_plain_app;
PyObject *const_str_plain_join;
PyObject *const_str_plain_tempdir;
PyObject *const_str_digest_d93600e370d80215881e898f6fe32155;
PyObject *const_str_plain_callback_to_url;
PyObject *const_str_plain_cb_url;
PyObject *const_str_plain__protocol_launched;
PyObject *const_str_plain_argv;
PyObject *const_tuple_str_chr_58_tuple;
PyObject *const_str_plain_func_to_call;
PyObject *const_str_plain__cb;
PyObject *const_str_plain_Sender;
PyObject *const_str_plain_Listener;
PyObject *const_str_plain_listener;
PyObject *const_str_plain_write;
PyObject *const_str_plain_getpid;
PyObject *const_str_plain_atexit;
PyObject *const_str_plain_unlink;
PyObject *const_str_digest_87e872e5615effaade4b37ea744c2f05;
PyObject *const_str_plain_callbacks;
PyObject *const_str_digest_50185f5c285e8f5d5bbebdcccefb6fbc;
PyObject *const_str_digest_1e9c1d8835601840a6597a6412369928;
PyObject *const_str_plain_Notification;
PyObject *const_str_digest_56e278130b2dc32059b6862033842974;
PyObject *const_str_plain_update;
PyObject *const_str_plain_thread;
PyObject *const_str_plain_start;
PyObject *const_str_digest_74cf8726edfd0ac6c6a66307cbb0421a;
PyObject *const_str_plain_queue;
PyObject *const_str_plain_get_nowait;
PyObject *const_str_space;
PyObject *const_str_plain_Empty;
PyObject *const_str_digest_0328754044a948000edde48e6dfcb8f1;
PyObject *const_str_plain_format_name;
PyObject *const_str_chr_58;
PyObject *const_str_digest_932848412e7f4f1c42d1fd5767aeb9bc;
PyObject *const_str_plain_inner;
PyObject *const_str_digest_c00fc00984af70695db2a9e2963e6663;
PyObject *const_str_digest_611bf2dd93c511e14d5a1e339c25aec8;
PyObject *const_str_plain_run_in_main_thread;
PyObject *const_str_plain_rimt;
PyObject *const_str_plain_self;
PyObject *const_str_digest_043bc04b29042b8cd3bc74aca0d778bd;
PyObject *const_str_digest_65fd45473ba35fd75f70b2d165d0a6f1;
PyObject *const_str_digest_7e520d7bb3081bb515af61e4f5cd6efb;
PyObject *const_str_digest_6316328e5d0a86b7061f9d3fc19892c3;
PyObject *const_str_digest_5278eea8a63cf88a0f70a5ffa9b51daa;
PyObject *const_str_plain_environ;
PyObject *const_tuple_b1bc5cc34248fd7221bbc7290fdca33d_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_tempfile;
PyObject *const_tuple_str_plain_gettempdir_tuple;
PyObject *const_str_plain_gettempdir;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_winotify;
PyObject *const_tuple_str_plain_audio_tuple;
PyObject *const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e;
PyObject *const_tuple_20a4dee6c81777d49ed0b9d6a31fa970_tuple;
PyObject *const_str_plain_Registry;
PyObject *const_str_plain_PY_EXE;
PyObject *const_str_plain_PYW_EXE;
PyObject *const_str_digest_7a7e86dc0f3d95c869abc077f76aede7;
PyObject *const_tuple_str_plain_Listener_str_plain_Sender_tuple;
PyObject *const_str_digest_cde61ede84c732d672439c8032f58ddc;
PyObject *const_str_plain___author__;
PyObject *const_str_digest_2f034170825bb6c984aad3fc0b9b467a;
PyObject *const_str_plain___version__;
PyObject *const_list_44dd46cdc6d5110cf4a005675c4b831d_list;
PyObject *const_str_digest_4f51ccbbcf1041380d144c65474f851d;
PyObject *const_dict_2e5f7200a56cd27f37445dd6288c9381;
PyObject *const_tuple_type_object_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_82;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_empty_str_empty_str_plain_short_str_empty_tuple;
PyObject *const_str_plain_str;
PyObject *const_str_digest_b1c155bc30d0edbec7d534d026f688d4;
PyObject *const_str_plain_sound;
PyObject *const_str_plain_Sound;
PyObject *const_str_plain_loop;
PyObject *const_str_plain_bool;
PyObject *const_str_plain_set_audio;
PyObject *const_str_digest_1f936149aa2be10893affdf0c9fe3e01;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_str_plain_label;
PyObject *const_str_plain_add_actions;
PyObject *const_str_digest_b991f483c4ef658821f691000685413a;
PyObject *const_str_plain_build;
PyObject *const_str_digest_8ca000c53127b90f15d37553ad4ecc33;
PyObject *const_str_plain_show;
PyObject *const_str_digest_ed448a2a2e89e3e146abc96303e61686;
PyObject *const_tuple_dae180b8deae6987e17a1bb68f775652_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Notifier;
PyObject *const_int_pos_200;
PyObject *const_str_plain_registry;
PyObject *const_str_digest_83dae3e8a678874a7001c2e08a7a0622;
PyObject *const_str_digest_db7df47fef09f749d83204913c0633d9;
PyObject *const_dict_17270019bc9a2a9500263d048a40a11a;
PyObject *const_str_plain_set_icon;
PyObject *const_str_digest_4634e54f7c81fd27a8fa8707ffd7a5e4;
PyObject *const_str_plain_return;
PyObject *const_str_plain_create_notification;
PyObject *const_str_digest_bc40d2b5ad5668beada99706b87f4ea2;
PyObject *const_str_digest_a6c25676f656f9973f2569c5902a075d;
PyObject *const_str_digest_fb9538eb5db7920515dffcd23c96de23;
PyObject *const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1;
PyObject *const_str_digest_14d7bb3590992e408c71327f9ab74806;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_8c08c7095947bed730941b346d30f542;
PyObject *const_str_plain_register_callback;
PyObject *const_str_digest_db07bb51ca9d26b7197a3db3d65b1c75;
PyObject *const_str_plain_func;
PyObject *const_str_digest_3fade0a2503e5f52998dd943c7b3d0f1;
PyObject *const_str_plain_clear;
PyObject *const_str_digest_b9a5ef2411d9a882e57310a91384524c;
PyObject *const_tuple_1dd7593ab5642db7bd634c44fc44af77_tuple;
PyObject *const_str_digest_09993265b84d01624a9a296084d8679d;
PyObject *const_str_digest_87cc09aa00cc50fa54d7e13c5e37db9d;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_9dd8f858b6f633732a8cf0d4b46cb159_tuple;
PyObject *const_tuple_82c8e274fd53178dae9644c744704b9d_tuple;
PyObject *const_tuple_str_plain_self_str_plain_arg_tuple;
PyObject *const_tuple_str_plain_file_str_plain_command_str_plain_si_str_plain_cmd_tuple;
PyObject *const_tuple_b6654f89203a28bec844c0a145d7fab2_tuple;
PyObject *const_tuple_str_plain_self_str_plain_warnings_tuple;
PyObject *const_tuple_str_plain_self_str_plain_func_str_plain_url_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_cmd_tuple;
PyObject *const_tuple_8bf6ac4dcbe205088524cc5ddc1e3399_tuple;
PyObject *const_tuple_str_plain_f_str_plain_run_in_main_thread_str_plain_self_tuple;
PyObject *const_tuple_str_plain_run_in_main_thread_str_plain_self_tuple;
PyObject *const_tuple_cb2ae2bf17655ac2a4c9b94799fc84b1_tuple;
PyObject *const_tuple_str_plain_self_str_plain_sound_str_plain_loop_tuple;
PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
PyObject *const_tuple_str_plain_self_str_plain_q_str_plain_func_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[194];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("winotify"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_STARTUPINFO);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_STARTF_USESHOWWINDOW);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffbcbf6968d0eb2623f19265f6c994be);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed9498ae1c5208adccf9190a7a1dd88b);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Bypass);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_5c7e5a2628ce4ad7792d0bf92e81420b);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_817ffbbc54335a49d4be97e58e434548);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_Popen);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEVNULL);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_38da64769b584d3a43c147db2e1144c1_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_app_id);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_msg);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_icon);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_duration);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_launch);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_audio);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Silent);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_tag);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_actions);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_script);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_short_str_plain_long_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_9dad6b3fe16f5a90342e4de4f9b8efd6);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_9aeb3717c80311eb24f6c10ace62fde0);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_745f58d86e218d47d08ccfed2ed63fad);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a592a136daf4a6d8fc59592ba9bca9a);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_callable);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fcd2177309d1531e41ca2b8624bd334);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_366a39b2847cf5f9256a6f26bfd0abc4);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_str_plain_link_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_f0128e10c3e04be40acaff867db9a086);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_780e43c5b8e8b878a8a8b7529f992676);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_85abd8a5f9ad400ba1bf6a8236baeec5);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fdaf7d1d0f60a2e646df6bda737c022);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c8e9c004ea404e4adc2c1095d197554);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_TEMPLATE);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain__run_ps);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbf5d656739d5424376b44b00a873b22);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempdir);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_d93600e370d80215881e898f6fe32155);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_callback_to_url);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_cb_url);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__protocol_launched);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_argv);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_func_to_call);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__cb);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sender);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Listener);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_listener);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_getpid);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_atexit);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_unlink);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_87e872e5615effaade4b37ea744c2f05);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_callbacks);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_50185f5c285e8f5d5bbebdcccefb6fbc);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e9c1d8835601840a6597a6412369928);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Notification);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_56e278130b2dc32059b6862033842974);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_thread);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_74cf8726edfd0ac6c6a66307cbb0421a);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_queue);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_nowait);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_Empty);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_0328754044a948000edde48e6dfcb8f1);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_name);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_932848412e7f4f1c42d1fd5767aeb9bc);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_inner);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_c00fc00984af70695db2a9e2963e6663);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_611bf2dd93c511e14d5a1e339c25aec8);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_main_thread);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_rimt);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_043bc04b29042b8cd3bc74aca0d778bd);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_65fd45473ba35fd75f70b2d165d0a6f1);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e520d7bb3081bb515af61e4f5cd6efb);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_6316328e5d0a86b7061f9d3fc19892c3);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_5278eea8a63cf88a0f70a5ffa9b51daa);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_b1bc5cc34248fd7221bbc7290fdca33d_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gettempdir_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_gettempdir);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_winotify);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_audio_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_20a4dee6c81777d49ed0b9d6a31fa970_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_Registry);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_PY_EXE);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_PYW_EXE);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_7a7e86dc0f3d95c869abc077f76aede7);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Listener_str_plain_Sender_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_cde61ede84c732d672439c8032f58ddc);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain___author__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f034170825bb6c984aad3fc0b9b467a);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_list_44dd46cdc6d5110cf4a005675c4b831d_list);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f51ccbbcf1041380d144c65474f851d);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_2e5f7200a56cd27f37445dd6288c9381);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_int_pos_82);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_str_plain_short_str_empty_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1c155bc30d0edbec7d534d026f688d4);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_sound);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sound);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_loop);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_audio);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f936149aa2be10893affdf0c9fe3e01);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_label);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_add_actions);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_b991f483c4ef658821f691000685413a);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_build);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ca000c53127b90f15d37553ad4ecc33);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_show);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed448a2a2e89e3e146abc96303e61686);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_dae180b8deae6987e17a1bb68f775652_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_Notifier);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_int_pos_200);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_registry);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_83dae3e8a678874a7001c2e08a7a0622);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_db7df47fef09f749d83204913c0633d9);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_dict_17270019bc9a2a9500263d048a40a11a);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_icon);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_4634e54f7c81fd27a8fa8707ffd7a5e4);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_notification);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc40d2b5ad5668beada99706b87f4ea2);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6c25676f656f9973f2569c5902a075d);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb9538eb5db7920515dffcd23c96de23);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_14d7bb3590992e408c71327f9ab74806);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_8c08c7095947bed730941b346d30f542);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_register_callback);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_db07bb51ca9d26b7197a3db3d65b1c75);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fade0a2503e5f52998dd943c7b3d0f1);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_clear);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9a5ef2411d9a882e57310a91384524c);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_1dd7593ab5642db7bd634c44fc44af77_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_09993265b84d01624a9a296084d8679d);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_87cc09aa00cc50fa54d7e13c5e37db9d);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_tuple_9dd8f858b6f633732a8cf0d4b46cb159_tuple);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_82c8e274fd53178dae9644c744704b9d_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_arg_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_command_str_plain_si_str_plain_cmd_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_b6654f89203a28bec844c0a145d7fab2_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_warnings_tuple);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_url_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cmd_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_8bf6ac4dcbe205088524cc5ddc1e3399_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_str_plain_run_in_main_thread_str_plain_self_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_in_main_thread_str_plain_self_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_cb2ae2bf17655ac2a4c9b94799fc84b1_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sound_str_plain_loop_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_q_str_plain_func_tuple);
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
void checkModuleConstants_winotify(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_STARTUPINFO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STARTUPINFO);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_dwFlags));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dwFlags);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_STARTF_USESHOWWINDOW));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STARTF_USESHOWWINDOW);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffbcbf6968d0eb2623f19265f6c994be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffbcbf6968d0eb2623f19265f6c994be);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed9498ae1c5208adccf9190a7a1dd88b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed9498ae1c5208adccf9190a7a1dd88b);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Bypass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Bypass);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_5c7e5a2628ce4ad7792d0bf92e81420b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5c7e5a2628ce4ad7792d0bf92e81420b);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_817ffbbc54335a49d4be97e58e434548));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_817ffbbc54335a49d4be97e58e434548);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_Popen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Popen);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEVNULL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEVNULL);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_38da64769b584d3a43c147db2e1144c1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_38da64769b584d3a43c147db2e1144c1_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_app_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app_id);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_title);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_msg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msg);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_icon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_icon);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_duration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_duration);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_launch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_launch);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audio);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Silent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Silent);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tag);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_actions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_actions);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_script));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_script);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_short_str_plain_long_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_short_str_plain_long_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_9dad6b3fe16f5a90342e4de4f9b8efd6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9dad6b3fe16f5a90342e4de4f9b8efd6);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_9aeb3717c80311eb24f6c10ace62fde0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9aeb3717c80311eb24f6c10ace62fde0);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_745f58d86e218d47d08ccfed2ed63fad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_745f58d86e218d47d08ccfed2ed63fad);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a592a136daf4a6d8fc59592ba9bca9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a592a136daf4a6d8fc59592ba9bca9a);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callable);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fcd2177309d1531e41ca2b8624bd334));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fcd2177309d1531e41ca2b8624bd334);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_366a39b2847cf5f9256a6f26bfd0abc4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_366a39b2847cf5f9256a6f26bfd0abc4);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_label_str_plain_link_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_label_str_plain_link_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_f0128e10c3e04be40acaff867db9a086));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f0128e10c3e04be40acaff867db9a086);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_780e43c5b8e8b878a8a8b7529f992676));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_780e43c5b8e8b878a8a8b7529f992676);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_85abd8a5f9ad400ba1bf6a8236baeec5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85abd8a5f9ad400ba1bf6a8236baeec5);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fdaf7d1d0f60a2e646df6bda737c022));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fdaf7d1d0f60a2e646df6bda737c022);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c8e9c004ea404e4adc2c1095d197554));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c8e9c004ea404e4adc2c1095d197554);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_TEMPLATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TEMPLATE);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain__run_ps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run_ps);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_command_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_command_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbf5d656739d5424376b44b00a873b22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbf5d656739d5424376b44b00a873b22);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tempdir);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_d93600e370d80215881e898f6fe32155));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d93600e370d80215881e898f6fe32155);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_callback_to_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callback_to_url);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_cb_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cb_url);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__protocol_launched));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__protocol_launched);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_argv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_argv);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_58_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_func_to_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func_to_call);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__cb);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sender));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sender);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Listener);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_listener));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_listener);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_getpid));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getpid);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_atexit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_atexit);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_unlink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unlink);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_87e872e5615effaade4b37ea744c2f05));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87e872e5615effaade4b37ea744c2f05);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_callbacks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callbacks);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_50185f5c285e8f5d5bbebdcccefb6fbc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50185f5c285e8f5d5bbebdcccefb6fbc);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e9c1d8835601840a6597a6412369928));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e9c1d8835601840a6597a6412369928);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Notification));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Notification);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_56e278130b2dc32059b6862033842974));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56e278130b2dc32059b6862033842974);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thread);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_74cf8726edfd0ac6c6a66307cbb0421a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74cf8726edfd0ac6c6a66307cbb0421a);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_queue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_queue);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_nowait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_nowait);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_Empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Empty);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_0328754044a948000edde48e6dfcb8f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0328754044a948000edde48e6dfcb8f1);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_name);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_932848412e7f4f1c42d1fd5767aeb9bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_932848412e7f4f1c42d1fd5767aeb9bc);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_inner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inner);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_c00fc00984af70695db2a9e2963e6663));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c00fc00984af70695db2a9e2963e6663);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_611bf2dd93c511e14d5a1e339c25aec8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_611bf2dd93c511e14d5a1e339c25aec8);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_in_main_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_in_main_thread);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_rimt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rimt);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_043bc04b29042b8cd3bc74aca0d778bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_043bc04b29042b8cd3bc74aca0d778bd);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_65fd45473ba35fd75f70b2d165d0a6f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65fd45473ba35fd75f70b2d165d0a6f1);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e520d7bb3081bb515af61e4f5cd6efb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e520d7bb3081bb515af61e4f5cd6efb);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_6316328e5d0a86b7061f9d3fc19892c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6316328e5d0a86b7061f9d3fc19892c3);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_5278eea8a63cf88a0f70a5ffa9b51daa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5278eea8a63cf88a0f70a5ffa9b51daa);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_b1bc5cc34248fd7221bbc7290fdca33d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b1bc5cc34248fd7221bbc7290fdca33d_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gettempdir_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_gettempdir_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_gettempdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gettempdir);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_winotify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_winotify);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_audio_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_audio_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_20a4dee6c81777d49ed0b9d6a31fa970_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_20a4dee6c81777d49ed0b9d6a31fa970_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_Registry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Registry);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_PY_EXE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PY_EXE);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_PYW_EXE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PYW_EXE);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_7a7e86dc0f3d95c869abc077f76aede7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7a7e86dc0f3d95c869abc077f76aede7);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Listener_str_plain_Sender_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Listener_str_plain_Sender_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_cde61ede84c732d672439c8032f58ddc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cde61ede84c732d672439c8032f58ddc);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain___author__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___author__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f034170825bb6c984aad3fc0b9b467a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f034170825bb6c984aad3fc0b9b467a);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_list_44dd46cdc6d5110cf4a005675c4b831d_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_44dd46cdc6d5110cf4a005675c4b831d_list);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f51ccbbcf1041380d144c65474f851d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f51ccbbcf1041380d144c65474f851d);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_2e5f7200a56cd27f37445dd6288c9381));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2e5f7200a56cd27f37445dd6288c9381);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_type_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_object_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_int_pos_82));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_82);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_str_empty_str_plain_short_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_str_empty_str_plain_short_str_empty_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1c155bc30d0edbec7d534d026f688d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1c155bc30d0edbec7d534d026f688d4);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_sound));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sound);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sound));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sound);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loop);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_audio);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f936149aa2be10893affdf0c9fe3e01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f936149aa2be10893affdf0c9fe3e01);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_label);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_add_actions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add_actions);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_b991f483c4ef658821f691000685413a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b991f483c4ef658821f691000685413a);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_build));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_build);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ca000c53127b90f15d37553ad4ecc33));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ca000c53127b90f15d37553ad4ecc33);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_show));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed448a2a2e89e3e146abc96303e61686));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed448a2a2e89e3e146abc96303e61686);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_dae180b8deae6987e17a1bb68f775652_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dae180b8deae6987e17a1bb68f775652_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_Notifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Notifier);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_int_pos_200));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_200);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_registry));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_registry);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_83dae3e8a678874a7001c2e08a7a0622));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83dae3e8a678874a7001c2e08a7a0622);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_db7df47fef09f749d83204913c0633d9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db7df47fef09f749d83204913c0633d9);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_dict_17270019bc9a2a9500263d048a40a11a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17270019bc9a2a9500263d048a40a11a);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_icon));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_icon);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_4634e54f7c81fd27a8fa8707ffd7a5e4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4634e54f7c81fd27a8fa8707ffd7a5e4);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_notification));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_notification);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc40d2b5ad5668beada99706b87f4ea2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc40d2b5ad5668beada99706b87f4ea2);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6c25676f656f9973f2569c5902a075d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6c25676f656f9973f2569c5902a075d);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb9538eb5db7920515dffcd23c96de23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb9538eb5db7920515dffcd23c96de23);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_14d7bb3590992e408c71327f9ab74806));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14d7bb3590992e408c71327f9ab74806);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_8c08c7095947bed730941b346d30f542));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8c08c7095947bed730941b346d30f542);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_register_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_register_callback);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_db07bb51ca9d26b7197a3db3d65b1c75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db07bb51ca9d26b7197a3db3d65b1c75);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fade0a2503e5f52998dd943c7b3d0f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fade0a2503e5f52998dd943c7b3d0f1);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_clear));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clear);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9a5ef2411d9a882e57310a91384524c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9a5ef2411d9a882e57310a91384524c);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_1dd7593ab5642db7bd634c44fc44af77_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1dd7593ab5642db7bd634c44fc44af77_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_09993265b84d01624a9a296084d8679d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09993265b84d01624a9a296084d8679d);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_87cc09aa00cc50fa54d7e13c5e37db9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87cc09aa00cc50fa54d7e13c5e37db9d);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_tuple_9dd8f858b6f633732a8cf0d4b46cb159_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9dd8f858b6f633732a8cf0d4b46cb159_tuple);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_82c8e274fd53178dae9644c744704b9d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_82c8e274fd53178dae9644c744704b9d_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_arg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_arg_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_command_str_plain_si_str_plain_cmd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_str_plain_command_str_plain_si_str_plain_cmd_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_b6654f89203a28bec844c0a145d7fab2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b6654f89203a28bec844c0a145d7fab2_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_warnings_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_warnings_tuple);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_url_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_cmd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_cmd_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_8bf6ac4dcbe205088524cc5ddc1e3399_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8bf6ac4dcbe205088524cc5ddc1e3399_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_f_str_plain_run_in_main_thread_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_f_str_plain_run_in_main_thread_str_plain_self_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_run_in_main_thread_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_run_in_main_thread_str_plain_self_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_cb2ae2bf17655ac2a4c9b94799fc84b1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cb2ae2bf17655ac2a4c9b94799fc84b1_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_sound_str_plain_loop_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_sound_str_plain_loop_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_path_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_q_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_q_str_plain_func_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
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
static PyObject *module_var_accessor_winotify$Callable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$Listener(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Listener);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Listener, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Listener);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Listener, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$Notification(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Notification);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Notification);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Notification, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Notification);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Notification, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Notification);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Notification);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Notification);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$Registry(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Registry);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Registry);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Registry, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Registry);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Registry, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Registry);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Registry);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Registry);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$Sender(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Sender);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sender);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sender, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sender);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sender, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Sender);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Sender);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sender);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$TEMPLATE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_TEMPLATE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TEMPLATE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TEMPLATE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TEMPLATE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TEMPLATE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_TEMPLATE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_TEMPLATE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TEMPLATE);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$_run_ps(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain__run_ps);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_ps);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_ps, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__run_ps);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__run_ps, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain__run_ps);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain__run_ps);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__run_ps);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$atexit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_atexit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_atexit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_atexit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_atexit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$audio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_audio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_audio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_audio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_audio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_audio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_audio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_audio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_audio);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$format_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_format_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_format_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_format_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_format_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$gettempdir(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_gettempdir);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gettempdir);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gettempdir, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_gettempdir);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_gettempdir, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_gettempdir);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_gettempdir);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_gettempdir);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$queue(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_queue);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_queue);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_queue, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_queue);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_queue, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_queue);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_queue);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_queue);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$subprocess(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_subprocess);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_subprocess, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_subprocess);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_subprocess, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess);
    }

    return result;
}

static PyObject *module_var_accessor_winotify$tempdir(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_winotify->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_winotify->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_tempdir);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_winotify->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempdir);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempdir, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempdir);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempdir, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_tempdir);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_tempdir);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tempdir);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a4b0997524ec3817480c8ac3c9788550;
static PyCodeObject *code_objects_5b932b72b1da6e9fbe31e5e63e00315b;
static PyCodeObject *code_objects_2d732cb4ac96674e61172486ddd6ac87;
static PyCodeObject *code_objects_66584a34dc6683ca3ce23ab404494a41;
static PyCodeObject *code_objects_edab28c921de8129e7cc2bf419c15183;
static PyCodeObject *code_objects_be39b273d9dc6e04ccb33df304c09836;
static PyCodeObject *code_objects_a707d42b8013722606d96d0f43b5cb55;
static PyCodeObject *code_objects_ac0406ef3325690e3d0c43d5823da667;
static PyCodeObject *code_objects_43231286b6dc2b098c4d9b368418f556;
static PyCodeObject *code_objects_9994f68943d670c43bb30fd4f8dff91c;
static PyCodeObject *code_objects_a5d0c9a1da0973fb756550b9bfc63388;
static PyCodeObject *code_objects_08e05cb384cd51e9dc82c2f7b3225255;
static PyCodeObject *code_objects_c3a9f3cd65181c316e1ecee59633617b;
static PyCodeObject *code_objects_e326b75eebc37c7eedd9eb9060fd8059;
static PyCodeObject *code_objects_959e99994720600019ec2570373c9273;
static PyCodeObject *code_objects_20af1a33373febc61c5cd0a672c9fa4a;
static PyCodeObject *code_objects_74131349a531ba2df301deedd491b11b;
static PyCodeObject *code_objects_10a255a64cea0955a43fb13447efbb08;
static PyCodeObject *code_objects_13d0167573819b83acf88fa0c585903a;
static PyCodeObject *code_objects_efca53c606d37fe5c07def2742f09782;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_09993265b84d01624a9a296084d8679d); CHECK_OBJECT(module_filename_obj);
code_objects_a4b0997524ec3817480c8ac3c9788550 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_87cc09aa00cc50fa54d7e13c5e37db9d, mod_consts.const_str_digest_87cc09aa00cc50fa54d7e13c5e37db9d, NULL, NULL, 0, 0, 0);
code_objects_5b932b72b1da6e9fbe31e5e63e00315b = MAKE_CODE_OBJECT(module_filename_obj, 82, 0, mod_consts.const_str_plain_Notification, mod_consts.const_str_plain_Notification, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_2d732cb4ac96674e61172486ddd6ac87 = MAKE_CODE_OBJECT(module_filename_obj, 200, 0, mod_consts.const_str_plain_Notifier, mod_consts.const_str_plain_Notifier, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_66584a34dc6683ca3ce23ab404494a41 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_b1c155bc30d0edbec7d534d026f688d4, mod_consts.const_tuple_9dd8f858b6f633732a8cf0d4b46cb159_tuple, NULL, 7, 0, 0);
code_objects_edab28c921de8129e7cc2bf419c15183 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_83dae3e8a678874a7001c2e08a7a0622, mod_consts.const_tuple_82c8e274fd53178dae9644c744704b9d_tuple, NULL, 2, 0, 0);
code_objects_be39b273d9dc6e04ccb33df304c09836 = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__protocol_launched, mod_consts.const_str_digest_14d7bb3590992e408c71327f9ab74806, mod_consts.const_tuple_str_plain_self_str_plain_arg_tuple, NULL, 1, 0, 0);
code_objects_a707d42b8013722606d96d0f43b5cb55 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__run_ps, mod_consts.const_str_plain__run_ps, mod_consts.const_tuple_str_plain_file_str_plain_command_str_plain_si_str_plain_cmd_tuple, NULL, 0, 2, 0);
code_objects_ac0406ef3325690e3d0c43d5823da667 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_add_actions, mod_consts.const_str_digest_b991f483c4ef658821f691000685413a, mod_consts.const_tuple_b6654f89203a28bec844c0a145d7fab2_tuple, NULL, 3, 0, 0);
code_objects_43231286b6dc2b098c4d9b368418f556 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_build, mod_consts.const_str_digest_8ca000c53127b90f15d37553ad4ecc33, mod_consts.const_tuple_str_plain_self_str_plain_warnings_tuple, NULL, 1, 0, 0);
code_objects_9994f68943d670c43bb30fd4f8dff91c = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_callback_to_url, mod_consts.const_str_digest_3fade0a2503e5f52998dd943c7b3d0f1, mod_consts.const_tuple_str_plain_self_str_plain_func_str_plain_url_tuple, NULL, 2, 0, 0);
code_objects_a5d0c9a1da0973fb756550b9bfc63388 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_callbacks, mod_consts.const_str_digest_db7df47fef09f749d83204913c0633d9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_08e05cb384cd51e9dc82c2f7b3225255 = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_clear, mod_consts.const_str_digest_b9a5ef2411d9a882e57310a91384524c, mod_consts.const_tuple_str_plain_self_str_plain_cmd_tuple, NULL, 1, 0, 0);
code_objects_c3a9f3cd65181c316e1ecee59633617b = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_create_notification, mod_consts.const_str_digest_bc40d2b5ad5668beada99706b87f4ea2, mod_consts.const_tuple_8bf6ac4dcbe205088524cc5ddc1e3399_tuple, NULL, 6, 0, 0);
code_objects_e326b75eebc37c7eedd9eb9060fd8059 = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_inner, mod_consts.const_str_digest_c00fc00984af70695db2a9e2963e6663, mod_consts.const_tuple_str_plain_f_str_plain_run_in_main_thread_str_plain_self_tuple, mod_consts.const_tuple_str_plain_run_in_main_thread_str_plain_self_tuple, 1, 0, 0);
code_objects_959e99994720600019ec2570373c9273 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_register_callback, mod_consts.const_str_digest_db07bb51ca9d26b7197a3db3d65b1c75, mod_consts.const_tuple_cb2ae2bf17655ac2a4c9b94799fc84b1_tuple, NULL, 2, 1, 0);
code_objects_20af1a33373febc61c5cd0a672c9fa4a = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_audio, mod_consts.const_str_digest_1f936149aa2be10893affdf0c9fe3e01, mod_consts.const_tuple_str_plain_self_str_plain_sound_str_plain_loop_tuple, NULL, 3, 0, 0);
code_objects_74131349a531ba2df301deedd491b11b = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_icon, mod_consts.const_str_digest_4634e54f7c81fd27a8fa8707ffd7a5e4, mod_consts.const_tuple_str_plain_self_str_plain_path_tuple, NULL, 2, 0, 0);
code_objects_10a255a64cea0955a43fb13447efbb08 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_show, mod_consts.const_str_digest_ed448a2a2e89e3e146abc96303e61686, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_13d0167573819b83acf88fa0c585903a = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_start, mod_consts.const_str_digest_a6c25676f656f9973f2569c5902a075d, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_efca53c606d37fe5c07def2742f09782 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_fb9538eb5db7920515dffcd23c96de23, mod_consts.const_tuple_str_plain_self_str_plain_q_str_plain_func_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_winotify$$$function__10_create_notification(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$$$function__11_start(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$$$function__12_update(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$$$function__13__protocol_launched(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$$$function__14_register_callback(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_winotify$$$function__14_register_callback$$$function__1_inner(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_winotify$$$function__15_callback_to_url(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$$$function__16_clear(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$$$function__1__run_ps(PyThreadState *tstate, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_winotify$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$$$function__3_set_audio(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$$$function__4_add_actions(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$$$function__5_build(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$$$function__6_show(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$$$function__7___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_winotify$$$function__8_callbacks(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_winotify$$$function__9_set_icon(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_winotify$$$function__1__run_ps(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_file = python_pars[0];
PyObject *par_command = python_pars[1];
PyObject *var_si = NULL;
PyObject *var_cmd = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__1__run_ps;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__1__run_ps = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__1__run_ps)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__1__run_ps);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__1__run_ps == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__1__run_ps = MAKE_FUNCTION_FRAME(tstate, code_objects_a707d42b8013722606d96d0f43b5cb55, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__1__run_ps->m_type_description == NULL);
frame_frame_winotify$$$function__1__run_ps = cache_frame_frame_winotify$$$function__1__run_ps;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__1__run_ps);
assert(Py_REFCNT(frame_frame_winotify$$$function__1__run_ps) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_winotify$subprocess(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__1__run_ps->m_frame.f_lineno = 59;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_STARTUPINFO);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_si == NULL);
var_si = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_si);
tmp_expression_value_1 = var_si;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dwFlags);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_ibitor_expr_left_1;
PyObject *tmp_ibitor_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_ibitor_expr_left_1 = tmp_inplace_assign_1__value;
tmp_expression_value_2 = module_var_accessor_winotify$subprocess(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_ibitor_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_STARTF_USESHOWWINDOW);
if (tmp_ibitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_result = INPLACE_OPERATION_BITOR_OBJECT_OBJECT(&tmp_ibitor_expr_left_1, tmp_ibitor_expr_right_1);
CHECK_OBJECT(tmp_ibitor_expr_right_1);
Py_DECREF(tmp_ibitor_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_3 = tmp_ibitor_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_3;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(var_si);
tmp_assattr_target_1 = var_si;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_dwFlags, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST3(tstate, mod_consts.const_str_digest_ffbcbf6968d0eb2623f19265f6c994be,mod_consts.const_str_digest_ed9498ae1c5208adccf9190a7a1dd88b,mod_consts.const_str_plain_Bypass);
assert(var_cmd == NULL);
var_cmd = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_file);
tmp_truth_name_1 = CHECK_IF_TRUE(par_file);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_command);
tmp_truth_name_2 = CHECK_IF_TRUE(par_command);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
tmp_raise_type_1 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_ValueError);
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_file);
tmp_truth_name_3 = CHECK_IF_TRUE(par_file);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_value_value_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(var_cmd);
tmp_list_arg_value_1 = var_cmd;
tmp_list_element_1 = mod_consts.const_str_digest_5c7e5a2628ce4ad7792d0bf92e81420b;
tmp_value_value_1 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_value_value_1, 0, tmp_list_element_1);
CHECK_OBJECT(par_file);
tmp_list_element_1 = par_file;
PyList_SET_ITEM0(tmp_value_value_1, 1, tmp_list_element_1);
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_4;
CHECK_OBJECT(par_command);
tmp_truth_name_4 = CHECK_IF_TRUE(par_command);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_value_value_2;
PyObject *tmp_list_element_2;
CHECK_OBJECT(var_cmd);
tmp_list_arg_value_2 = var_cmd;
tmp_list_element_2 = mod_consts.const_str_digest_817ffbbc54335a49d4be97e58e434548;
tmp_value_value_2 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_value_value_2, 0, tmp_list_element_2);
CHECK_OBJECT(par_command);
tmp_list_element_2 = par_command;
PyList_SET_ITEM0(tmp_value_value_2, 1, tmp_list_element_2);
tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_2, tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_2;
tmp_raise_type_2 = MAKE_BASE_EXCEPTION_DERIVED_EMPTY(PyExc_ValueError);
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 70;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_2:;
branch_end_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_3_1;
tmp_expression_value_3 = module_var_accessor_winotify$subprocess(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Popen);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cmd);
tmp_kw_call_arg_value_0_1 = var_cmd;
tmp_expression_value_4 = module_var_accessor_winotify$subprocess(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_DEVNULL);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 75;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_winotify$subprocess(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 76;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_DEVNULL);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 76;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_winotify$subprocess(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_subprocess);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 77;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_DEVNULL);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);

exception_lineno = 77;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_si);
tmp_kw_call_dict_value_3_1 = var_si;
frame_frame_winotify$$$function__1__run_ps->m_frame.f_lineno = 72;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_38da64769b584d3a43c147db2e1144c1_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__1__run_ps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__1__run_ps->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__1__run_ps, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__1__run_ps,
    type_description_1,
    par_file,
    par_command,
    var_si,
    var_cmd
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__1__run_ps == cache_frame_frame_winotify$$$function__1__run_ps) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__1__run_ps);
    cache_frame_frame_winotify$$$function__1__run_ps = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__1__run_ps);

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
CHECK_OBJECT(var_si);
CHECK_OBJECT(var_si);
Py_DECREF(var_si);
var_si = NULL;
CHECK_OBJECT(var_cmd);
CHECK_OBJECT(var_cmd);
Py_DECREF(var_cmd);
var_cmd = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_si);
var_si = NULL;
Py_XDECREF(var_cmd);
var_cmd = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_command);
Py_DECREF(par_command);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
CHECK_OBJECT(par_command);
Py_DECREF(par_command);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_app_id = python_pars[1];
PyObject *par_title = python_pars[2];
PyObject *par_msg = python_pars[3];
PyObject *par_icon = python_pars[4];
PyObject *par_duration = python_pars[5];
PyObject *par_launch = python_pars[6];
struct Nuitka_FrameObject *frame_frame_winotify$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_66584a34dc6683ca3ce23ab404494a41, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__2___init__->m_type_description == NULL);
frame_frame_winotify$$$function__2___init__ = cache_frame_frame_winotify$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__2___init__);
assert(Py_REFCNT(frame_frame_winotify$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_app_id);
tmp_assattr_value_1 = par_app_id;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_app_id, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_title);
tmp_assattr_value_2 = par_title;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_title, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_msg);
tmp_assattr_value_3 = par_msg;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_msg, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_icon);
tmp_assattr_value_4 = par_icon;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_icon, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_duration);
tmp_assattr_value_5 = par_duration;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_duration, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_launch);
tmp_assattr_value_6 = par_launch;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_launch, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_7;
tmp_expression_value_1 = module_var_accessor_winotify$audio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_audio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Silent);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_audio, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_title);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_tag, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_app_id);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_group, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_assattr_target_10;
tmp_assattr_value_10 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_actions, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
tmp_assattr_value_11 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts.const_str_plain_script, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_duration);
tmp_cmp_expr_left_1 = par_duration;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_plain_short_str_plain_long_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9dad6b3fe16f5a90342e4de4f9b8efd6;
frame_frame_winotify$$$function__2___init__->m_frame.f_lineno = 123;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__2___init__,
    type_description_1,
    par_self,
    par_app_id,
    par_title,
    par_msg,
    par_icon,
    par_duration,
    par_launch
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__2___init__ == cache_frame_frame_winotify$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__2___init__);
    cache_frame_frame_winotify$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__2___init__);

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
CHECK_OBJECT(par_app_id);
Py_DECREF(par_app_id);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_icon);
Py_DECREF(par_icon);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_launch);
Py_DECREF(par_launch);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_app_id);
Py_DECREF(par_app_id);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_icon);
Py_DECREF(par_icon);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_launch);
Py_DECREF(par_launch);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__3_set_audio(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_sound = python_pars[1];
PyObject *par_loop = python_pars[2];
struct Nuitka_FrameObject *frame_frame_winotify$$$function__3_set_audio;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__3_set_audio = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$$$function__3_set_audio)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__3_set_audio);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__3_set_audio == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__3_set_audio = MAKE_FUNCTION_FRAME(tstate, code_objects_20af1a33373febc61c5cd0a672c9fa4a, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__3_set_audio->m_type_description == NULL);
frame_frame_winotify$$$function__3_set_audio = cache_frame_frame_winotify$$$function__3_set_audio;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__3_set_audio);
assert(Py_REFCNT(frame_frame_winotify$$$function__3_set_audio) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_assattr_target_1;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_745f58d86e218d47d08ccfed2ed63fad;
CHECK_OBJECT(par_sound);
tmp_kw_call_arg_value_1_1 = par_sound;
CHECK_OBJECT(par_loop);
tmp_unicode_arg_1 = par_loop;
tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__3_set_audio->m_frame.f_lineno = 136;
tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__3_set_audio->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_audio, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__3_set_audio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__3_set_audio->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__3_set_audio, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__3_set_audio,
    type_description_1,
    par_self,
    par_sound,
    par_loop
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__3_set_audio == cache_frame_frame_winotify$$$function__3_set_audio) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__3_set_audio);
    cache_frame_frame_winotify$$$function__3_set_audio = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__3_set_audio);

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
CHECK_OBJECT(par_sound);
Py_DECREF(par_sound);
CHECK_OBJECT(par_loop);
Py_DECREF(par_loop);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_sound);
Py_DECREF(par_sound);
CHECK_OBJECT(par_loop);
Py_DECREF(par_loop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__4_add_actions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_label = python_pars[1];
PyObject *par_launch = python_pars[2];
PyObject *var_url = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__4_add_actions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__4_add_actions = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__4_add_actions)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__4_add_actions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__4_add_actions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__4_add_actions = MAKE_FUNCTION_FRAME(tstate, code_objects_ac0406ef3325690e3d0c43d5823da667, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__4_add_actions->m_type_description == NULL);
frame_frame_winotify$$$function__4_add_actions = cache_frame_frame_winotify$$$function__4_add_actions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__4_add_actions);
assert(Py_REFCNT(frame_frame_winotify$$$function__4_add_actions) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_launch);
tmp_args_element_value_1 = par_launch;
frame_frame_winotify$$$function__4_add_actions->m_frame.f_lineno = 156;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 156;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
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
bool tmp_condition_result_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_launch);
tmp_expression_value_1 = par_launch;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_url);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_launch);
tmp_expression_value_2 = par_launch;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_url);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_launch);
tmp_format_value_1 = par_launch;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_2fcd2177309d1531e41ca2b8624bd334;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_winotify$$$function__4_add_actions->m_frame.f_lineno = 160;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 160;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooN";
goto frame_exception_exit_1;
}
branch_end_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_launch);
tmp_assign_source_2 = par_launch;
assert(var_url == NULL);
Py_INCREF(tmp_assign_source_2);
var_url = tmp_assign_source_2;
}
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_actions);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 5;
tmp_condition_result_3 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_actions);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_366a39b2847cf5f9256a6f26bfd0abc4;
CHECK_OBJECT(par_label);
tmp_kw_call_dict_value_0_1 = par_label;
CHECK_OBJECT(var_url);
tmp_kw_call_dict_value_1_1 = var_url;
frame_frame_winotify$$$function__4_add_actions->m_frame.f_lineno = 166;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, unicode_builtin_format, args, kw_values, mod_consts.const_tuple_str_plain_label_str_plain_link_tuple);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 166;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__4_add_actions->m_frame.f_lineno = 166;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooN";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__4_add_actions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__4_add_actions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__4_add_actions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__4_add_actions,
    type_description_1,
    par_self,
    par_label,
    par_launch,
    var_url,
    NULL
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__4_add_actions == cache_frame_frame_winotify$$$function__4_add_actions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__4_add_actions);
    cache_frame_frame_winotify$$$function__4_add_actions = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__4_add_actions);

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
CHECK_OBJECT(var_url);
CHECK_OBJECT(var_url);
Py_DECREF(var_url);
var_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_url);
var_url = NULL;
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
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_launch);
Py_DECREF(par_launch);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_launch);
Py_DECREF(par_launch);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__5_build(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_warnings = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__5_build;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__5_build = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__5_build)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__5_build);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__5_build == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__5_build = MAKE_FUNCTION_FRAME(tstate, code_objects_43231286b6dc2b098c4d9b368418f556, module_winotify, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__5_build->m_type_description == NULL);
frame_frame_winotify$$$function__5_build = cache_frame_frame_winotify$$$function__5_build;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__5_build);
assert(Py_REFCNT(frame_frame_winotify$$$function__5_build) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_winotify$$$function__5_build->m_frame.f_lineno = 176;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_warnings == NULL);
var_warnings = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_warnings);
tmp_expression_value_1 = var_warnings;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warn);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_780e43c5b8e8b878a8a8b7529f992676;
tmp_args_element_value_2 = module_var_accessor_winotify$DeprecationWarning(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 177;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__5_build->m_frame.f_lineno = 177;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__5_build, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__5_build->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__5_build, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__5_build,
    type_description_1,
    par_self,
    var_warnings
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__5_build == cache_frame_frame_winotify$$$function__5_build) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__5_build);
    cache_frame_frame_winotify$$$function__5_build = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__5_build);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_warnings);
CHECK_OBJECT(var_warnings);
Py_DECREF(var_warnings);
var_warnings = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_warnings);
var_warnings = NULL;
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


static PyObject *impl_winotify$$$function__6_show(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$$$function__6_show;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__6_show = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$$$function__6_show)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__6_show);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__6_show == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__6_show = MAKE_FUNCTION_FRAME(tstate, code_objects_10a255a64cea0955a43fb13447efbb08, module_winotify, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__6_show->m_type_description == NULL);
frame_frame_winotify$$$function__6_show = cache_frame_frame_winotify$$$function__6_show;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__6_show);
assert(Py_REFCNT(frame_frame_winotify$$$function__6_show) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_actions);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 184;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_1;
tmp_str_arg_value_1 = mod_consts.const_str_newline;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_actions);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_actions, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_actions, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_audio);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_winotify$audio(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_audio);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 189;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Silent);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 189;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
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
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = mod_consts.const_str_digest_2fdaf7d1d0f60a2e646df6bda737c022;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_audio, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_launch);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 192;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_assattr_target_4;
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_digest_7c8e9c004ea404e4adc2c1095d197554;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_launch);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__6_show->m_frame.f_lineno = 193;
{
    PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
}

CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_launch, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_5;
tmp_expression_value_7 = module_var_accessor_winotify$TEMPLATE(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TEMPLATE);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_format);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_direct_call_arg2_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_8);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assattr_value_5 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_script, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_9;
tmp_called_value_1 = module_var_accessor_winotify$_run_ps(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__run_ps);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_script);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__6_show->m_frame.f_lineno = 197;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_command_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__6_show, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__6_show->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__6_show, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__6_show,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__6_show == cache_frame_frame_winotify$$$function__6_show) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__6_show);
    cache_frame_frame_winotify$$$function__6_show = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__6_show);

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


static PyObject *impl_winotify$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_registry = python_pars[1];
PyObject *var_pidfile = NULL;
PyObject *var_sender = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_edab28c921de8129e7cc2bf419c15183, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__7___init__->m_type_description == NULL);
frame_frame_winotify$$$function__7___init__ = cache_frame_frame_winotify$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__7___init__);
assert(Py_REFCNT(frame_frame_winotify$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_registry);
tmp_expression_value_1 = par_registry;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_app);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_app_id, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_str_empty;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_icon, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
tmp_expression_value_2 = IMPORT_HARD_NTPATH();
assert(!(tmp_expression_value_2 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_winotify$tempdir(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tempdir);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 210;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_app_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 210;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 210;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_d93600e370d80215881e898f6fe32155;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 210;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_pidfile == NULL);
var_pidfile = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_callback_to_url);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_cb_url, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 215;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__protocol_launched);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 215;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_1;
PyObject *tmp_subscript_value_2;
PyObject *tmp_assattr_target_4;
tmp_expression_value_8 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_argv);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_expression_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_split);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 217;
tmp_expression_value_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = const_int_pos_1;
tmp_assattr_value_4 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, 1);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_func_to_call, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__cb, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isfile_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(var_pidfile);
tmp_isfile_arg_1 = var_pidfile;
tmp_capi_result_1 = OS_PATH_FILE_ISFILE(tstate, tmp_isfile_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 219;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_9;
tmp_called_value_3 = module_var_accessor_winotify$Sender(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sender);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_app_id);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 220;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_sender == NULL);
var_sender = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_sender);
tmp_expression_value_10 = var_sender;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_send);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_func_to_call);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 221;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 221;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_raise_type_1;
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 222;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_SystemExit);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 222;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_6;
tmp_called_value_5 = module_var_accessor_winotify$Listener(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Listener);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_app_id);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 224;
tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_listener, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_13;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_pidfile);
tmp_open_filename_1 = var_pidfile;
tmp_open_mode_1 = const_str_plain_w;
tmp_expression_value_13 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 225;
tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_getpid);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 225;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_6 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 225;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 225;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 225;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_8;
tmp_expression_value_14 = module_var_accessor_winotify$atexit(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_atexit);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_register);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_15 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_15 == NULL));
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_unlink);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 226;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_pidfile);
tmp_args_element_value_8 = var_pidfile;
frame_frame_winotify$$$function__7___init__->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__7___init__,
    type_description_1,
    par_self,
    par_registry,
    var_pidfile,
    var_sender
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__7___init__ == cache_frame_frame_winotify$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__7___init__);
    cache_frame_frame_winotify$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__7___init__);

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
CHECK_OBJECT(var_pidfile);
CHECK_OBJECT(var_pidfile);
Py_DECREF(var_pidfile);
var_pidfile = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pidfile);
var_pidfile = NULL;
Py_XDECREF(var_sender);
var_sender = NULL;
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
CHECK_OBJECT(par_registry);
Py_DECREF(par_registry);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_registry);
Py_DECREF(par_registry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__8_callbacks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$$$function__8_callbacks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__8_callbacks = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$$$function__8_callbacks)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__8_callbacks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__8_callbacks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__8_callbacks = MAKE_FUNCTION_FRAME(tstate, code_objects_a5d0c9a1da0973fb756550b9bfc63388, module_winotify, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__8_callbacks->m_type_description == NULL);
frame_frame_winotify$$$function__8_callbacks = cache_frame_frame_winotify$$$function__8_callbacks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__8_callbacks);
assert(Py_REFCNT(frame_frame_winotify$$$function__8_callbacks) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_listener);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_listener);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_callbacks);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__cb);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "o";
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__8_callbacks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__8_callbacks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__8_callbacks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__8_callbacks,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__8_callbacks == cache_frame_frame_winotify$$$function__8_callbacks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__8_callbacks);
    cache_frame_frame_winotify$$$function__8_callbacks = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__8_callbacks);

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


static PyObject *impl_winotify$$$function__9_set_icon(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_path = python_pars[1];
struct Nuitka_FrameObject *frame_frame_winotify$$$function__9_set_icon;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__9_set_icon = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$$$function__9_set_icon)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__9_set_icon);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__9_set_icon == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__9_set_icon = MAKE_FUNCTION_FRAME(tstate, code_objects_74131349a531ba2df301deedd491b11b, module_winotify, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__9_set_icon->m_type_description == NULL);
frame_frame_winotify$$$function__9_set_icon = cache_frame_frame_winotify$$$function__9_set_icon;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__9_set_icon);
assert(Py_REFCNT(frame_frame_winotify$$$function__9_set_icon) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_path);
tmp_assattr_value_1 = par_path;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_icon, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__9_set_icon, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__9_set_icon->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__9_set_icon, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__9_set_icon,
    type_description_1,
    par_self,
    par_path
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__9_set_icon == cache_frame_frame_winotify$$$function__9_set_icon) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__9_set_icon);
    cache_frame_frame_winotify$$$function__9_set_icon = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__9_set_icon);

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
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_path);
Py_DECREF(par_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__10_create_notification(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_title = python_pars[1];
PyObject *par_msg = python_pars[2];
PyObject *par_icon = python_pars[3];
PyObject *par_duration = python_pars[4];
PyObject *par_launch = python_pars[5];
PyObject *var_url = NULL;
PyObject *var_notif = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__10_create_notification;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__10_create_notification = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__10_create_notification)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__10_create_notification);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__10_create_notification == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__10_create_notification = MAKE_FUNCTION_FRAME(tstate, code_objects_c3a9f3cd65181c316e1ecee59633617b, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__10_create_notification->m_type_description == NULL);
frame_frame_winotify$$$function__10_create_notification = cache_frame_frame_winotify$$$function__10_create_notification;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__10_create_notification);
assert(Py_REFCNT(frame_frame_winotify$$$function__10_create_notification) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_icon);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 270;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_icon);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_icon;
    assert(old != NULL);
    par_icon = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_launch);
tmp_args_element_value_1 = par_launch;
frame_frame_winotify$$$function__10_create_notification->m_frame.f_lineno = 273;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 273;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_launch);
tmp_args_element_value_2 = par_launch;
frame_frame_winotify$$$function__10_create_notification->m_frame.f_lineno = 274;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_callback_to_url, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_2;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_launch);
tmp_assign_source_3 = par_launch;
assert(var_url == NULL);
Py_INCREF(tmp_assign_source_3);
var_url = tmp_assign_source_3;
}
branch_end_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
tmp_called_value_2 = module_var_accessor_winotify$Notification(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Notification);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_app_id);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_title);
tmp_args_element_value_4 = par_title;
CHECK_OBJECT(par_msg);
tmp_args_element_value_5 = par_msg;
CHECK_OBJECT(par_icon);
tmp_args_element_value_6 = par_icon;
CHECK_OBJECT(par_duration);
tmp_args_element_value_7 = par_duration;
CHECK_OBJECT(var_url);
tmp_args_element_value_8 = var_url;
frame_frame_winotify$$$function__10_create_notification->m_frame.f_lineno = 278;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_notif == NULL);
var_notif = tmp_assign_source_4;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__10_create_notification, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__10_create_notification->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__10_create_notification, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__10_create_notification,
    type_description_1,
    par_self,
    par_title,
    par_msg,
    par_icon,
    par_duration,
    par_launch,
    var_url,
    var_notif
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__10_create_notification == cache_frame_frame_winotify$$$function__10_create_notification) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__10_create_notification);
    cache_frame_frame_winotify$$$function__10_create_notification = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__10_create_notification);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_notif);
tmp_return_value = var_notif;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_icon);
CHECK_OBJECT(par_icon);
Py_DECREF(par_icon);
par_icon = NULL;
CHECK_OBJECT(var_url);
CHECK_OBJECT(var_url);
Py_DECREF(var_url);
var_url = NULL;
CHECK_OBJECT(var_notif);
CHECK_OBJECT(var_notif);
Py_DECREF(var_notif);
var_notif = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_icon);
par_icon = NULL;
Py_XDECREF(var_url);
var_url = NULL;
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
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_launch);
Py_DECREF(par_launch);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_msg);
Py_DECREF(par_msg);
CHECK_OBJECT(par_duration);
Py_DECREF(par_duration);
CHECK_OBJECT(par_launch);
Py_DECREF(par_launch);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__11_start(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$$$function__11_start;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__11_start = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$$$function__11_start)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__11_start);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__11_start == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__11_start = MAKE_FUNCTION_FRAME(tstate, code_objects_13d0167573819b83acf88fa0c585903a, module_winotify, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__11_start->m_type_description == NULL);
frame_frame_winotify$$$function__11_start = cache_frame_frame_winotify$$$function__11_start;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__11_start);
assert(Py_REFCNT(frame_frame_winotify$$$function__11_start) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_winotify$$$function__11_start->m_frame.f_lineno = 293;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__protocol_launched);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 293;
type_description_1 = "o";
    goto frame_exception_exit_1;
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
PyObject *tmp_called_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_callbacks);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_func_to_call);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__11_start->m_frame.f_lineno = 294;
tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__11_start->m_frame.f_lineno = 294;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_listener);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_callbacks);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_callbacks);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 297;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__11_start->m_frame.f_lineno = 297;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_listener);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_thread);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__11_start->m_frame.f_lineno = 298;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_start);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__11_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__11_start->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__11_start, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__11_start,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__11_start == cache_frame_frame_winotify$$$function__11_start) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__11_start);
    cache_frame_frame_winotify$$$function__11_start = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__11_start);

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


static PyObject *impl_winotify$$$function__12_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_q = NULL;
PyObject *var_func = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__12_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__12_update = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__12_update)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__12_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__12_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__12_update = MAKE_FUNCTION_FRAME(tstate, code_objects_efca53c606d37fe5c07def2742f09782, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__12_update->m_type_description == NULL);
frame_frame_winotify$$$function__12_update = cache_frame_frame_winotify$$$function__12_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__12_update);
assert(Py_REFCNT(frame_frame_winotify$$$function__12_update) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_winotify$$$function__12_update->m_frame.f_lineno = 315;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__protocol_launched);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 315;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_listener);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_queue);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_q == NULL);
var_q = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_q);
tmp_called_instance_2 = var_q;
frame_frame_winotify$$$function__12_update->m_frame.f_lineno = 320;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_nowait);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(var_func == NULL);
var_func = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(var_func);
tmp_args_element_value_1 = var_func;
frame_frame_winotify$$$function__12_update->m_frame.f_lineno = 321;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 321;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_3;
CHECK_OBJECT(var_func);
tmp_called_value_2 = var_func;
frame_frame_winotify$$$function__12_update->m_frame.f_lineno = 322;
tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
tmp_called_value_3 = LOOKUP_BUILTIN(const_str_plain_print);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(var_func);
tmp_expression_value_3 = var_func;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___name__);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_space;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
frame_frame_winotify$$$function__12_update->m_frame.f_lineno = 324;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__12_update, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__12_update, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_expression_value_4 = module_var_accessor_winotify$queue(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_queue);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Empty);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto try_except_handler_3;
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
    exception_lineno = 319;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_winotify$$$function__12_update->m_frame)) {
        frame_frame_winotify$$$function__12_update->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_no_3:;
goto try_end_2;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__12_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__12_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__12_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__12_update,
    type_description_1,
    par_self,
    var_q,
    var_func
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__12_update == cache_frame_frame_winotify$$$function__12_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__12_update);
    cache_frame_frame_winotify$$$function__12_update = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__12_update);

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
Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_func);
var_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_q);
var_q = NULL;
Py_XDECREF(var_func);
var_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_winotify$$$function__13__protocol_launched(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_arg = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__13__protocol_launched;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__13__protocol_launched = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__13__protocol_launched)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__13__protocol_launched);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__13__protocol_launched == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__13__protocol_launched = MAKE_FUNCTION_FRAME(tstate, code_objects_be39b273d9dc6e04ccb33df304c09836, module_winotify, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__13__protocol_launched->m_type_description == NULL);
frame_frame_winotify$$$function__13__protocol_launched = cache_frame_frame_winotify$$$function__13__protocol_launched;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__13__protocol_launched);
assert(Py_REFCNT(frame_frame_winotify$$$function__13__protocol_launched) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_argv);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = 1;
tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_3 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_argv);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = const_int_pos_1;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_arg == NULL);
var_arg = tmp_assign_source_1;
}
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
bool tmp_tmp_and_right_value_1_cbool_1;
tmp_called_value_1 = module_var_accessor_winotify$format_name(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_format_name);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_app_id);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__13__protocol_launched->m_frame.f_lineno = 337;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_chr_58;
tmp_cmp_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_arg);
tmp_cmp_expr_right_2 = var_arg;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_arg);
tmp_expression_value_5 = var_arg;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__13__protocol_launched->m_frame.f_lineno = 337;
tmp_len_arg_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = 0;
tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_right_value_1 = (tmp_tmp_and_right_value_1_cbool_1 != false) ? Py_True : Py_False;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__13__protocol_launched, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__13__protocol_launched->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__13__protocol_launched, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__13__protocol_launched,
    type_description_1,
    par_self,
    var_arg
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__13__protocol_launched == cache_frame_frame_winotify$$$function__13__protocol_launched) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__13__protocol_launched);
    cache_frame_frame_winotify$$$function__13__protocol_launched = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__13__protocol_launched);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_arg);
var_arg = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_arg);
var_arg = NULL;
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


static PyObject *impl_winotify$$$function__14_register_callback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_func = python_pars[1];
struct Nuitka_CellObject *par_run_in_main_thread = Nuitka_Cell_New1(python_pars[2]);
PyObject *var_inner = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__14_register_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__14_register_callback = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_run_in_main_thread;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_1 = MAKE_FUNCTION_winotify$$$function__14_register_callback$$$function__1_inner(tstate, tmp_closure_1);

assert(var_inner == NULL);
var_inner = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__14_register_callback)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__14_register_callback);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__14_register_callback == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__14_register_callback = MAKE_FUNCTION_FRAME(tstate, code_objects_959e99994720600019ec2570373c9273, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__14_register_callback->m_type_description == NULL);
frame_frame_winotify$$$function__14_register_callback = cache_frame_frame_winotify$$$function__14_register_callback;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__14_register_callback);
assert(Py_REFCNT(frame_frame_winotify$$$function__14_register_callback) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_func);
tmp_cmp_expr_left_1 = par_func;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(var_inner);
tmp_return_value = var_inner;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_inner);
tmp_called_value_1 = var_inner;
CHECK_OBJECT(par_func);
tmp_args_element_value_1 = par_func;
frame_frame_winotify$$$function__14_register_callback->m_frame.f_lineno = 368;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "coco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__14_register_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__14_register_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__14_register_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__14_register_callback,
    type_description_1,
    par_self,
    par_func,
    par_run_in_main_thread,
    var_inner
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__14_register_callback == cache_frame_frame_winotify$$$function__14_register_callback) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__14_register_callback);
    cache_frame_frame_winotify$$$function__14_register_callback = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__14_register_callback);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_run_in_main_thread);
CHECK_OBJECT(par_run_in_main_thread);
Py_DECREF(par_run_in_main_thread);
par_run_in_main_thread = NULL;
CHECK_OBJECT(var_inner);
CHECK_OBJECT(var_inner);
Py_DECREF(var_inner);
var_inner = NULL;
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
CHECK_OBJECT(par_run_in_main_thread);
CHECK_OBJECT(par_run_in_main_thread);
Py_DECREF(par_run_in_main_thread);
par_run_in_main_thread = NULL;
CHECK_OBJECT(var_inner);
CHECK_OBJECT(var_inner);
Py_DECREF(var_inner);
var_inner = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__14_register_callback$$$function__1_inner(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_f = python_pars[0];
struct Nuitka_FrameObject *frame_frame_winotify$$$function__14_register_callback$$$function__1_inner;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner = MAKE_FUNCTION_FRAME(tstate, code_objects_e326b75eebc37c7eedd9eb9060fd8059, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner->m_type_description == NULL);
frame_frame_winotify$$$function__14_register_callback$$$function__1_inner = cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__14_register_callback$$$function__1_inner);
assert(Py_REFCNT(frame_frame_winotify$$$function__14_register_callback$$$function__1_inner) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_run_in_main_thread);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 359;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "occ";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_run_in_main_thread);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 360;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_assattr_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_f);
tmp_assattr_target_1 = par_f;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_rimt, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_f);
tmp_ass_subvalue_1 = par_f;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 361;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_callbacks);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_f);
tmp_expression_value_2 = par_f;
tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___name__);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_1);

exception_lineno = 361;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 362;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_f);
tmp_args_element_value_1 = par_f;
frame_frame_winotify$$$function__14_register_callback$$$function__1_inner->m_frame.f_lineno = 362;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_callback_to_url, tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_f);
tmp_assattr_target_2 = par_f;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_url, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__14_register_callback$$$function__1_inner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__14_register_callback$$$function__1_inner->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__14_register_callback$$$function__1_inner, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__14_register_callback$$$function__1_inner,
    type_description_1,
    par_f,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__14_register_callback$$$function__1_inner == cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner);
    cache_frame_frame_winotify$$$function__14_register_callback$$$function__1_inner = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__14_register_callback$$$function__1_inner);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_f);
tmp_return_value = par_f;
Py_INCREF(tmp_return_value);
goto function_return_exit;

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


static PyObject *impl_winotify$$$function__15_callback_to_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_func = python_pars[1];
PyObject *var_url = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__15_callback_to_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__15_callback_to_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__15_callback_to_url)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__15_callback_to_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__15_callback_to_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__15_callback_to_url = MAKE_FUNCTION_FRAME(tstate, code_objects_9994f68943d670c43bb30fd4f8dff91c, module_winotify, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__15_callback_to_url->m_type_description == NULL);
frame_frame_winotify$$$function__15_callback_to_url = cache_frame_frame_winotify$$$function__15_callback_to_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__15_callback_to_url);
assert(Py_REFCNT(frame_frame_winotify$$$function__15_callback_to_url) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_callable);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_func);
tmp_args_element_value_1 = par_func;
frame_frame_winotify$$$function__15_callback_to_url->m_frame.f_lineno = 382;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_func);
tmp_expression_value_1 = par_func;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___name__);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_callbacks);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_called_value_2 = module_var_accessor_winotify$format_name(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_format_name);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_app_id);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_winotify$$$function__15_callback_to_url->m_frame.f_lineno = 383;
tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_str_chr_58;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_expression_value_4 = par_func;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 383;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_1;
}
CHECK_OBJECT(var_url);
tmp_return_value = var_url;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__15_callback_to_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__15_callback_to_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__15_callback_to_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__15_callback_to_url,
    type_description_1,
    par_self,
    par_func,
    var_url
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__15_callback_to_url == cache_frame_frame_winotify$$$function__15_callback_to_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__15_callback_to_url);
    cache_frame_frame_winotify$$$function__15_callback_to_url = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__15_callback_to_url);

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
Py_XDECREF(var_url);
var_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_winotify$$$function__16_clear(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_cmd = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$function__16_clear;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_winotify$$$function__16_clear = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_winotify$$$function__16_clear)) {
    Py_XDECREF(cache_frame_frame_winotify$$$function__16_clear);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_winotify$$$function__16_clear == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_winotify$$$function__16_clear = MAKE_FUNCTION_FRAME(tstate, code_objects_08e05cb384cd51e9dc82c2f7b3225255, module_winotify, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_winotify$$$function__16_clear->m_type_description == NULL);
frame_frame_winotify$$$function__16_clear = cache_frame_frame_winotify$$$function__16_clear;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$function__16_clear);
assert(Py_REFCNT(frame_frame_winotify$$$function__16_clear) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_65fd45473ba35fd75f70b2d165d0a6f1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_app_id);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_7e520d7bb3081bb515af61e4f5cd6efb;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_1 == NULL));
assert(var_cmd == NULL);
var_cmd = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_1 = module_var_accessor_winotify$_run_ps(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__run_ps);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cmd);
tmp_kw_call_value_0_1 = var_cmd;
frame_frame_winotify$$$function__16_clear->m_frame.f_lineno = 396;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_command_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$function__16_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$function__16_clear->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$function__16_clear, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$function__16_clear,
    type_description_1,
    par_self,
    var_cmd
);


// Release cached frame if used for exception.
if (frame_frame_winotify$$$function__16_clear == cache_frame_frame_winotify$$$function__16_clear) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_winotify$$$function__16_clear);
    cache_frame_frame_winotify$$$function__16_clear = NULL;
}

assertFrameObject(frame_frame_winotify$$$function__16_clear);

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
CHECK_OBJECT(var_cmd);
CHECK_OBJECT(var_cmd);
Py_DECREF(var_cmd);
var_cmd = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_cmd);
var_cmd = NULL;
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



static PyObject *MAKE_FUNCTION_winotify$$$function__10_create_notification(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__10_create_notification,
        mod_consts.const_str_plain_create_notification,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bc40d2b5ad5668beada99706b87f4ea2,
#endif
        code_objects_c3a9f3cd65181c316e1ecee59633617b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_56e278130b2dc32059b6862033842974,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__11_start(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__11_start,
        mod_consts.const_str_plain_start,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a6c25676f656f9973f2569c5902a075d,
#endif
        code_objects_13d0167573819b83acf88fa0c585903a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify,
        mod_consts.const_str_digest_74cf8726edfd0ac6c6a66307cbb0421a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__12_update(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__12_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb9538eb5db7920515dffcd23c96de23,
#endif
        code_objects_efca53c606d37fe5c07def2742f09782,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify,
        mod_consts.const_str_digest_0328754044a948000edde48e6dfcb8f1,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__13__protocol_launched(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__13__protocol_launched,
        mod_consts.const_str_plain__protocol_launched,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_14d7bb3590992e408c71327f9ab74806,
#endif
        code_objects_be39b273d9dc6e04ccb33df304c09836,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_932848412e7f4f1c42d1fd5767aeb9bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__14_register_callback(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__14_register_callback,
        mod_consts.const_str_plain_register_callback,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_db07bb51ca9d26b7197a3db3d65b1c75,
#endif
        code_objects_959e99994720600019ec2570373c9273,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_winotify,
        mod_consts.const_str_digest_611bf2dd93c511e14d5a1e339c25aec8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__14_register_callback$$$function__1_inner(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__14_register_callback$$$function__1_inner,
        mod_consts.const_str_plain_inner,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c00fc00984af70695db2a9e2963e6663,
#endif
        code_objects_e326b75eebc37c7eedd9eb9060fd8059,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__15_callback_to_url(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__15_callback_to_url,
        mod_consts.const_str_plain_callback_to_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3fade0a2503e5f52998dd943c7b3d0f1,
#endif
        code_objects_9994f68943d670c43bb30fd4f8dff91c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_043bc04b29042b8cd3bc74aca0d778bd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__16_clear(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__16_clear,
        mod_consts.const_str_plain_clear,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b9a5ef2411d9a882e57310a91384524c,
#endif
        code_objects_08e05cb384cd51e9dc82c2f7b3225255,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify,
        mod_consts.const_str_digest_6316328e5d0a86b7061f9d3fc19892c3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__1__run_ps(PyThreadState *tstate, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__1__run_ps,
        mod_consts.const_str_plain__run_ps,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a707d42b8013722606d96d0f43b5cb55,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_winotify,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b1c155bc30d0edbec7d534d026f688d4,
#endif
        code_objects_66584a34dc6683ca3ce23ab404494a41,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_9aeb3717c80311eb24f6c10ace62fde0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__3_set_audio(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__3_set_audio,
        mod_consts.const_str_plain_set_audio,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1f936149aa2be10893affdf0c9fe3e01,
#endif
        code_objects_20af1a33373febc61c5cd0a672c9fa4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_3a592a136daf4a6d8fc59592ba9bca9a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__4_add_actions(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__4_add_actions,
        mod_consts.const_str_plain_add_actions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b991f483c4ef658821f691000685413a,
#endif
        code_objects_ac0406ef3325690e3d0c43d5823da667,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_f0128e10c3e04be40acaff867db9a086,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__5_build(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__5_build,
        mod_consts.const_str_plain_build,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ca000c53127b90f15d37553ad4ecc33,
#endif
        code_objects_43231286b6dc2b098c4d9b368418f556,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify,
        mod_consts.const_str_digest_85abd8a5f9ad400ba1bf6a8236baeec5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__6_show(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__6_show,
        mod_consts.const_str_plain_show,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ed448a2a2e89e3e146abc96303e61686,
#endif
        code_objects_10a255a64cea0955a43fb13447efbb08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify,
        mod_consts.const_str_digest_dbf5d656739d5424376b44b00a873b22,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__7___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_83dae3e8a678874a7001c2e08a7a0622,
#endif
        code_objects_edab28c921de8129e7cc2bf419c15183,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_87e872e5615effaade4b37ea744c2f05,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__8_callbacks(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__8_callbacks,
        mod_consts.const_str_plain_callbacks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_db7df47fef09f749d83204913c0633d9,
#endif
        code_objects_a5d0c9a1da0973fb756550b9bfc63388,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_winotify,
        mod_consts.const_str_digest_50185f5c285e8f5d5bbebdcccefb6fbc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_winotify$$$function__9_set_icon(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_winotify$$$function__9_set_icon,
        mod_consts.const_str_plain_set_icon,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4634e54f7c81fd27a8fa8707ffd7a5e4,
#endif
        code_objects_74131349a531ba2df301deedd491b11b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_winotify,
        mod_consts.const_str_digest_1e9c1d8835601840a6597a6412369928,
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

static function_impl_code const function_table_winotify[] = {
impl_winotify$$$function__14_register_callback$$$function__1_inner,
impl_winotify$$$function__1__run_ps,
impl_winotify$$$function__2___init__,
impl_winotify$$$function__3_set_audio,
impl_winotify$$$function__4_add_actions,
impl_winotify$$$function__5_build,
impl_winotify$$$function__6_show,
impl_winotify$$$function__7___init__,
impl_winotify$$$function__8_callbacks,
impl_winotify$$$function__9_set_icon,
impl_winotify$$$function__10_create_notification,
impl_winotify$$$function__11_start,
impl_winotify$$$function__12_update,
impl_winotify$$$function__13__protocol_launched,
impl_winotify$$$function__14_register_callback,
impl_winotify$$$function__15_callback_to_url,
impl_winotify$$$function__16_clear,
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

    return Nuitka_Function_GetFunctionState(function, function_table_winotify);
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
        module_winotify,
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
        function_table_winotify,
        sizeof(function_table_winotify) / sizeof(function_impl_code)
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
static char const *module_full_name = "winotify";
#endif

// Internal entry point for module code.
PyObject *module_code_winotify(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("winotify");

    // Store the module for future use.
    module_winotify = module;

    moduledict_winotify = MODULE_DICT(module_winotify);

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
        PRINT_STRING("winotify: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("winotify: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("winotify: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "winotify" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwinotify\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_winotify,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_winotify,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_winotify,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_winotify,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_winotify,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_winotify);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_winotify);
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

        UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_winotify;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_winotify$$$class__1_Notification_82 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_winotify$$$class__1_Notification_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_winotify$$$class__2_Notifier_200 = NULL;
struct Nuitka_FrameObject *frame_frame_winotify$$$class__2_Notifier_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
tmp_assign_source_1 = mod_consts.const_str_digest_5278eea8a63cf88a0f70a5ffa9b51daa;
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_winotify = MAKE_MODULE_FRAME(code_objects_a4b0997524ec3817480c8ac3c9788550, module_winotify);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify);
assert(Py_REFCNT(frame_frame_winotify) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_winotify->m_frame.f_lineno = 1;
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
frame_frame_winotify->m_frame.f_lineno = 1;
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
frame_frame_winotify->m_frame.f_lineno = 1;
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
frame_frame_winotify->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_b1bc5cc34248fd7221bbc7290fdca33d_tuple);

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
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_winotify$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_winotify$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_winotify$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_winotify$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_queue;
tmp_globals_arg_value_1 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_winotify->m_frame.f_lineno = 6;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_queue, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_2 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_winotify->m_frame.f_lineno = 8;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_subprocess, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_atexit;
tmp_globals_arg_value_3 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_winotify->m_frame.f_lineno = 10;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_atexit, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_4 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_gettempdir_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_winotify->m_frame.f_lineno = 11;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_gettempdir,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_gettempdir);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_gettempdir, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_import_from_1__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_13);
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
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_winotify;
tmp_globals_arg_value_5 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_audio_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_winotify->m_frame.f_lineno = 14;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_audio,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_audio);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_audio, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_6d055be7c25f8440cec0ff2c82c6bf7e;
tmp_globals_arg_value_6 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_20a4dee6c81777d49ed0b9d6a31fa970_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_winotify->m_frame.f_lineno = 15;
tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_Registry,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Registry);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Registry, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_format_name,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_format_name);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_format_name, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_PY_EXE,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_PY_EXE);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_PY_EXE, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_PYW_EXE,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_PYW_EXE);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_PYW_EXE, tmp_assign_source_19);
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
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_7a7e86dc0f3d95c869abc077f76aede7;
tmp_globals_arg_value_7 = (PyObject *)moduledict_winotify;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Listener_str_plain_Sender_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_winotify->m_frame.f_lineno = 16;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_Listener,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Listener);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Listener, tmp_assign_source_21);
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
        (PyObject *)moduledict_winotify,
        mod_consts.const_str_plain_Sender,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Sender);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Sender, tmp_assign_source_22);
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
tmp_assign_source_23 = mod_consts.const_str_digest_cde61ede84c732d672439c8032f58ddc;
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain___author__, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = mod_consts.const_str_digest_2f034170825bb6c984aad3fc0b9b467a;
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_LIST4(tstate, mod_consts.const_list_44dd46cdc6d5110cf4a005675c4b831d_list);
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = mod_consts.const_str_digest_4f51ccbbcf1041380d144c65474f851d;
UPDATE_STRING_DICT0(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_TEMPLATE, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_winotify$gettempdir(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_gettempdir);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto frame_exception_exit_1;
}
frame_frame_winotify->m_frame.f_lineno = 55;
tmp_assign_source_27 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_tempdir, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_kw_defaults_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_2e5f7200a56cd27f37445dd6288c9381);

tmp_assign_source_28 = MAKE_FUNCTION_winotify$$$function__1__run_ps(tstate, tmp_kw_defaults_1);

UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain__run_ps, tmp_assign_source_28);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_object_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
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


exception_lineno = 82;

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
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_31;
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


exception_lineno = 82;

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
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_Notification;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_winotify->m_frame.f_lineno = 82;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_32;
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


exception_lineno = 82;

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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_4;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


exception_lineno = 82;

    goto try_except_handler_4;
}
frame_frame_winotify->m_frame.f_lineno = 82;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 82;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_33;
tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_33;
}
branch_end_1:;
{
PyObject *tmp_assign_source_34;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_winotify$$$class__1_Notification_82 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_winotify;
tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_Notification;
tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_82;
tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_6;
}
frame_frame_winotify$$$class__1_Notification_2 = MAKE_CLASS_FRAME(tstate, code_objects_5b932b72b1da6e9fbe31e5e63e00315b, module_winotify, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$class__1_Notification_2);
assert(Py_REFCNT(frame_frame_winotify$$$class__1_Notification_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_defaults_1 = mod_consts.const_tuple_str_empty_str_empty_str_plain_short_str_empty_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_app_id;
tmp_dict_value_1 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = _PyDict_NewPresized( 6 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_title;
tmp_dict_value_1 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_msg;
tmp_dict_value_1 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_icon;
tmp_dict_value_1 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_duration;
tmp_dict_value_1 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_launch;
tmp_dict_value_1 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__2___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_9;
tmp_dict_key_2 = mod_consts.const_str_plain_sound;
tmp_expression_value_9 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_audio);

if (tmp_expression_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_9 = module_var_accessor_winotify$audio(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_audio);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Sound);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_loop;
tmp_dict_value_2 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_bool);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__3_set_audio(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_set_audio, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_defaults_2 = mod_consts.const_tuple_str_empty_tuple;
tmp_dict_key_3 = mod_consts.const_str_plain_label;
tmp_dict_value_3 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_3;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_launch;
tmp_expression_value_10 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_Union);

if (tmp_expression_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_10 = module_var_accessor_winotify$Union(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_expression_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_tuple_element_3 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_str);

if (tmp_tuple_element_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_tuple_element_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = PyObject_GetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_Callable);

if (tmp_tuple_element_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_3 = module_var_accessor_winotify$Callable(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "o";
    goto tuple_build_exception_2;
}
        Py_INCREF(tmp_tuple_element_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_2;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_10);
Py_DECREF(tmp_subscript_value_2);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__4_add_actions(tstate, tmp_defaults_2, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_add_actions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__5_build(tstate);

tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_build, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__6_show(tstate);

tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain_show, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "o";
    goto frame_exception_exit_2;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$class__1_Notification_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$class__1_Notification_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$class__1_Notification_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$class__1_Notification_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_winotify$$$class__1_Notification_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_6;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_dae180b8deae6987e17a1bb68f775652_tuple;
tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_object_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_6;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_object_tuple;
tmp_res = PyObject_SetItem(locals_winotify$$$class__1_Notification_82, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_6;
}
branch_no_3:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_Notification;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_winotify$$$class__1_Notification_82;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_winotify->m_frame.f_lineno = 82;
tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_6;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_35;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_34 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_34);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_winotify$$$class__1_Notification_82);
locals_winotify$$$class__1_Notification_82 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_winotify$$$class__1_Notification_82);
locals_winotify$$$class__1_Notification_82 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 82;
goto try_except_handler_4;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Notification, tmp_assign_source_34);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_36;
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_winotify$$$class__2_Notifier_200 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_plain_winotify;
tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Notifier;
tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_200;
tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_winotify$$$class__2_Notifier_3 = MAKE_CLASS_FRAME(tstate, code_objects_2d732cb4ac96674e61172486ddd6ac87, module_winotify, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_winotify$$$class__2_Notifier_3);
assert(Py_REFCNT(frame_frame_winotify$$$class__2_Notifier_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_registry;
tmp_dict_value_4 = module_var_accessor_winotify$Registry(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Registry);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__7___init__(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_2;
tmp_called_value_6 = (PyObject *)&PyProperty_Type;

tmp_args_element_value_2 = MAKE_FUNCTION_winotify$$$function__8_callbacks(tstate);

frame_frame_winotify$$$class__2_Notifier_3->m_frame.f_lineno = 228;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_callbacks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_17270019bc9a2a9500263d048a40a11a);

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__9_set_icon(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_set_icon, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_defaults_3 = mod_consts.const_tuple_str_empty_str_empty_str_plain_short_str_empty_tuple;
tmp_dict_key_5 = mod_consts.const_str_plain_title;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_annotations_6 = _PyDict_NewPresized( 6 );
{
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_5;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_msg;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_icon;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_duration;
tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_launch;
tmp_expression_value_11 = module_var_accessor_winotify$Union(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = module_var_accessor_winotify$Callable(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_5);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_3);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = module_var_accessor_winotify$Notification(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Notification);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__10_create_notification(tstate, tmp_defaults_3, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_create_notification, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__11_start(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_start, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__12_update(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_7469ff340bb1bb37fdc1a8804bcfd0b1);

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__13__protocol_launched(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain__protocol_launched, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_defaults_4;
PyObject *tmp_kw_defaults_2;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_8c08c7095947bed730941b346d30f542);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__14_register_callback(tstate, tmp_defaults_4, tmp_kw_defaults_2);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_register_callback, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_func;
tmp_dict_value_6 = module_var_accessor_winotify$Callable(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_8 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__15_callback_to_url(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_callback_to_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify$$$class__2_Notifier_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify$$$class__2_Notifier_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify$$$class__2_Notifier_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_winotify$$$class__2_Notifier_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_winotify$$$class__2_Notifier_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_9;
skip_nested_handling_2:;

tmp_dictset_value = MAKE_FUNCTION_winotify$$$function__16_clear(tstate);

tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain_clear, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_tuple_1dd7593ab5642db7bd634c44fc44af77_tuple;
tmp_result = DICT_SET_ITEM(locals_winotify$$$class__2_Notifier_200, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
tmp_called_value_7 = (PyObject *)&PyType_Type;
tmp_tuple_element_6 = mod_consts.const_str_plain_Notifier;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_winotify$$$class__2_Notifier_200;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_winotify->m_frame.f_lineno = 200;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;

    goto try_except_handler_9;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_39;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_38 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_winotify$$$class__2_Notifier_200);
locals_winotify$$$class__2_Notifier_200 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_winotify$$$class__2_Notifier_200);
locals_winotify$$$class__2_Notifier_200 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

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
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 200;
goto try_except_handler_7;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_winotify, (Nuitka_StringObject *)mod_consts.const_str_plain_Notifier, tmp_assign_source_38);
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_winotify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_winotify->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_winotify, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_winotify);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("winotify", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "winotify" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_winotify);
    return module_winotify;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_winotify, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("winotify", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

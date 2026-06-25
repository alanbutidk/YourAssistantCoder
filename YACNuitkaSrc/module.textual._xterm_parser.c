/* Generated code for Python module 'textual$_xterm_parser'
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



/* The "module_textual$_xterm_parser" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_xterm_parser;
PyDictObject *moduledict_textual$_xterm_parser;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_last_x;
PyObject *const_str_plain_last_y;
PyObject *const_str_plain_mouse_pixels;
PyObject *const_str_plain_terminal_size;
PyObject *const_str_plain_terminal_pixel_size;
PyObject *const_str_digest_7e72f39dd48f4dfbaf1927b3e3c8d50a;
PyObject *const_str_plain_at;
PyObject *const_str_plain__debug_log_file;
PyObject *const_str_plain_debug_log;
PyObject *const_tuple_str_digest_e8e3b2f2a4e4b709efb0df34b0e0bcb0_tuple;
PyObject *const_str_plain_write;
PyObject *const_str_space;
PyObject *const_str_newline;
PyObject *const_str_plain_flush;
PyObject *const_str_digest_dd288f204e4dbe6a3fb84081e73abf78;
PyObject *const_str_plain_feed;
PyObject *const_str_plain__re_sgr_mouse;
PyObject *const_str_plain_match;
PyObject *const_str_plain_groups;
PyObject *const_int_pos_64;
PyObject *const_str_plain_events;
PyObject *const_str_plain_MouseScrollUp;
PyObject *const_str_plain_MouseScrollDown;
PyObject *const_str_plain_MouseScrollLeft;
PyObject *const_str_plain_MouseScrollRight;
PyObject *const_int_pos_3;
PyObject *const_int_pos_32;
PyObject *const_str_plain_MouseMove;
PyObject *const_str_plain_M;
PyObject *const_str_plain_MouseDown;
PyObject *const_str_plain_MouseUp;
PyObject *const_int_pos_4;
PyObject *const_int_pos_8;
PyObject *const_int_pos_16;
PyObject *const_tuple_str_plain_screen_x_str_plain_screen_y_tuple;
PyObject *const_str_chr_27;
PyObject *const_str_plain_self;
PyObject *const_str_plain_read1;
PyObject *const_str_plain__sequence_to_key_events;
PyObject *const_dict_a690e70dcc5cdd0dc8509a76e8b78c1f;
PyObject *const_str_digest_096ddde7bccab4b369016af8a8fa2819;
PyObject *const_str_plain_on_token;
PyObject *const_str_digest_d748cee8c885a434bcf2cdcb95125863;
PyObject *const_dict_341ad1328217657d7dca5abd8ea41021;
PyObject *const_str_digest_2365823bbdb671c3735c4bc1d921f592;
PyObject *const_str_plain_on_key_token;
PyObject *const_str_digest_3837d7bbcf32d73d214333119b4027fb;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_9fffaa8175e90d193fbb5f71770e572d;
PyObject *const_str_digest_55526fd9720ff0cf31e7cf31025d6258;
PyObject *const_str_plain_reissue_sequence_as_keys;
PyObject *const_str_digest_ea9e922f6e5203817d7abd494682e756;
PyObject *const_str_plain_is_eof;
PyObject *const_str_plain_bracketed_paste;
PyObject *const_str_plain_paste_buffer;
PyObject *const_slice_none_int_neg_1_none;
PyObject *const_str_plain_Paste;
PyObject *const_str_null;
PyObject *const_str_plain_ParseEOF;
PyObject *const_str_plain_append;
PyObject *const_str_digest_222cf4559b78ab4db3bb88c1e9d281e6;
PyObject *const_str_plain_ESC;
PyObject *const_str_plain_sequence_to_key_events;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_367a10d8c28961f8a808126fd761fee6;
PyObject *const_str_digest_e069089ca20383c2143feb8bd3aaccce;
PyObject *const_str_plain_send_sequence;
PyObject *const_str_digest_87b90ba1e66d698d157ed555796c1402;
PyObject *const_str_plain_constants;
PyObject *const_str_plain_ESCAPE_DELAY;
PyObject *const_str_plain_ParseTimeout;
PyObject *const_tuple_str_plain_process_alt_tuple;
PyObject *const_str_plain_character;
PyObject *const_str_plain_sequence;
PyObject *const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD;
PyObject *const_str_digest_54f4fe879e57897f68513e4b506400ed;
PyObject *const_str_plain_SPECIAL_SEQUENCES;
PyObject *const_str_plain_FOCUSIN;
PyObject *const_str_plain_AppFocus;
PyObject *const_str_plain_FOCUSOUT;
PyObject *const_str_plain_AppBlur;
PyObject *const_str_plain_BRACKETED_PASTE_START;
PyObject *const_str_plain_BRACKETED_PASTE_END;
PyObject *const_str_plain__re_in_band_window_resize;
PyObject *const_str_plain_fullmatch;
PyObject *const_str_plain_partition;
PyObject *const_tuple_str_chr_58_tuple;
PyObject *const_str_plain_Resize;
PyObject *const_str_plain_from_dimensions;
PyObject *const_str_plain_size;
PyObject *const_str_plain_pixel_size;
PyObject *const_str_plain__re_cursor_position;
PyObject *const_str_plain_CursorPosition;
PyObject *const_str_plain__re_mouse_event;
PyObject *const_str_plain_group;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_parse_mouse_code;
PyObject *const_str_plain__re_terminal_mode_response;
PyObject *const_str_plain_mode_id;
PyObject *const_str_plain_setting_parameter;
PyObject *const_str_plain_2026;
PyObject *const_str_plain_messages;
PyObject *const_str_plain_TerminalSupportsSynchronizedOutput;
PyObject *const_str_plain_2048;
PyObject *const_str_plain_SMOOTH_SCROLL;
PyObject *const_str_plain_IS_ITERM;
PyObject *const_str_plain_InBandWindowResize;
PyObject *const_str_plain_from_setting_parameter;
PyObject *const_str_plain_parse;
PyObject *const_str_digest_72e35b033d8fbbf3faa81e6165b6c07d;
PyObject *const_str_plain_token_callback;
PyObject *const_str_plain_key;
PyObject *const_str_plain_Keys;
PyObject *const_str_plain_Ignore;
PyObject *const_str_digest_564c13fe7fe60703848f4acc37618dfa;
PyObject *const_str_plain_REISSUE;
PyObject *const_str_plain_alt;
PyObject *const_tuple_str_plain_alt_tuple;
PyObject *const_str_plain_escape;
PyObject *const_str_plain_Key;
PyObject *const_tuple_str_plain_circumflex_accent_str_chr_94_tuple;
PyObject *const_str_plain_event;
PyObject *const_tuple_str_plain_escape_str_chr_27_tuple;
PyObject *const_str_plain__re_extended_key;
PyObject *const_tuple_str_empty_tuple;
PyObject *const_tuple_str_plain_default_tuple;
PyObject *const_tuple_str_chr_59_tuple;
PyObject *const_str_digest_7391172483fe3c72f3ef95ee0e768c22;
PyObject *const_str_plain_1;
PyObject *const_str_plain_0;
PyObject *const_str_plain_FUNCTIONAL_KEYS;
PyObject *const_str_plain__character_to_key;
PyObject *const_str_plain_MODIFIER_FUNCTIONAL_KEYS;
PyObject *const_str_plain_isspace;
PyObject *const_str_plain_shift;
PyObject *const_tuple_tuple_197015d52b8b98752d089bed825d6f1a_tuple_int_pos_1_tuple;
PyObject *const_str_plain_modifier_bits;
PyObject *const_str_plain_key_tokens;
PyObject *const_str_plain_sort;
PyObject *const_str_chr_43;
PyObject *const_str_plain_SPECIAL_KEY_TO_CHARACTER;
PyObject *const_str_digest_e73565ee51bc6f5ac44f26dfb923b60d;
PyObject *const_str_digest_3a32c27652d640ce1f0663d3d93fe872;
PyObject *const_str_plain_DISABLE_KITTY_KEY;
PyObject *const_str_plain__parse_extended_key;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_ANSI_SEQUENCES_KEYS;
PyObject *const_str_plain_IGNORE_SEQUENCE;
PyObject *const_str_plain_value;
PyObject *const_str_plain_isalnum;
PyObject *const_str_plain_KEY_NAME_REPLACEMENTS;
PyObject *const_str_plain_isupper;
PyObject *const_str_digest_a6ee4e981b9392a78057805bb4666916;
PyObject *const_str_digest_d3f2adff805c11b63cc8882c88afd039;
PyObject *const_str_digest_4499074a0f4932445d54d99677fc3b9d;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_re;
PyObject *const_str_plain_lru_cache;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Generator;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Final_tuple;
PyObject *const_str_plain_Final;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_constants_str_plain_events_str_plain_messages_tuple;
PyObject *const_str_digest_60cd04fcc20f4c05519752c0e6952b04;
PyObject *const_tuple_str_plain_ANSI_SEQUENCES_KEYS_str_plain_IGNORE_SEQUENCE_tuple;
PyObject *const_str_digest_8abab6873037389950cb75adad852b75;
PyObject *const_tuple_str_plain_FUNCTIONAL_KEYS_str_plain_MODIFIER_FUNCTIONAL_KEYS_tuple;
PyObject *const_str_digest_6024def156f90da73268d3bc4a27ea4b;
PyObject *const_tuple_87dc8921a2c14a8e826310b5af492e72_tuple;
PyObject *const_str_plain_Parser;
PyObject *const_str_plain_Peek1;
PyObject *const_str_plain_Read1;
PyObject *const_str_plain_TokenCallback;
PyObject *const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b;
PyObject *const_tuple_3151873bdc877614c2d581226d69ec4d_tuple;
PyObject *const_str_digest_14bc17522953bd7736a9eecd7e365b1a;
PyObject *const_tuple_str_plain_Message_tuple;
PyObject *const_str_plain_Message;
PyObject *const_str_chr_94;
PyObject *const_tuple_str_digest_52eb4f81ebdca710bdf151533294a7ec_tuple;
PyObject *const_str_digest_85b73f811e077effed724028b28e672b;
PyObject *const_str_digest_52400abb6a189b2764c9f15e37608655;
PyObject *const_tuple_str_digest_a123bb55cb0f12727ec4f8388791d8a5_tuple;
PyObject *const_str_digest_c8f27a7f54392ae4a09ee9a266151602;
PyObject *const_str_digest_eb66ae95c4bf509b335704e1d611e706;
PyObject *const_str_digest_46a43312facab81e8fdf5b66907ef46c;
PyObject *const_str_digest_d795a908ff02a5157fe0e060d31b129b;
PyObject *const_str_digest_55881a100c3ee524327c845d6b4ced14;
PyObject *const_tuple_str_digest_d4d4b90b37a7b314d4a222d52d2a9c77_tuple;
PyObject *const_str_digest_196dd155faf52f234dfa17e03d42f4b0;
PyObject *const_tuple_str_digest_3a19aac68cb0012bafc10fe8cbbce6a9_tuple;
PyObject *const_str_plain_environ;
PyObject *const_tuple_str_plain_LC_TERMINAL_str_empty_tuple;
PyObject *const_str_plain_iTerm2;
PyObject *const_tuple_str_plain_TERM_PROGRAM_str_empty_tuple;
PyObject *const_str_digest_7c6e0012f743df927b572832b363aff4;
PyObject *const_dict_f5ef48c511f33cb19a91b24f3155f445;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_XTermParser;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_e18faf774281761f65a7b570641a194a;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_62;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_str_digest_26dc38014fe7a9a1f2713938eff3a07d_tuple;
PyObject *const_dict_83d3b89c6e29396ebf68ee8ab1e8920d;
PyObject *const_str_digest_379376bdad186c8dc06ceaafa9c69a10;
PyObject *const_dict_a5bea44468ab210088bde1914ad2592a;
PyObject *const_str_digest_2b115460fec1b301f375eb3f25e04107;
PyObject *const_dict_16d8686515db4d36d1751e302b81c6c1;
PyObject *const_str_digest_bbfb197dda90d0c171d3bf935a99e386;
PyObject *const_dict_107ae1f8fbc1ba844c691c5593ae85da;
PyObject *const_str_digest_a91c298032646763cd297d2ca88a19ae;
PyObject *const_dict_b6ec720f982be354c5fa375b309918c4;
PyObject *const_tuple_int_pos_1024_tuple;
PyObject *const_tuple_str_plain_maxsize_tuple;
PyObject *const_dict_1da4053fa64ddbd6dbd6ebd4074d0f98;
PyObject *const_str_digest_79d7812f3bc8306e7c5f3f63d8c1b780;
PyObject *const_dict_deefa11227bfff6db06cdd1b26207e49;
PyObject *const_tuple_c14b9cb26fa5f8a6514bb381c5b3c9bb_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_6ddfc3e5038fba7bd58a5175a5f01716;
PyObject *const_str_digest_4a7f4d7aa7508085c95cde637a846aeb;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_debug_str_plain___class___tuple;
PyObject *const_tuple_caae36f388b1b76bcf6afbbc61ad8160_tuple;
PyObject *const_tuple_20f08c2abbab05721829201bbd72368a_tuple;
PyObject *const_tuple_str_plain_self_str_plain_args_tuple;
PyObject *const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple;
PyObject *const_tuple_str_plain_event_str_plain_self_str_plain_on_token_tuple;
PyObject *const_tuple_str_plain_on_token_str_plain_self_tuple;
PyObject *const_tuple_str_plain_token_str_plain_self_str_plain_token_callback_tuple;
PyObject *const_tuple_str_plain_self_str_plain_token_callback_tuple;
PyObject *const_tuple_9ebb66d4d8b81e5da1b8b5dd8b8422a5_tuple;
PyObject *const_tuple_ab166617362206a58555c362b2caa675_tuple;
PyObject *const_tuple_30f88fd8a4d21fa81f4a277ade3fad82_tuple;
PyObject *const_tuple_cfedaaca42d717503c710ad1afce06fe_tuple;
PyObject *const_tuple_92de6e276601b21a4c3f170ae5f99ef6_tuple;
PyObject *const_tuple_42ed2d438d2b4009aac42a74c3f6f7ba_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[248];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._xterm_parser"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_x);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_y);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_mouse_pixels);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_size);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_pixel_size);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e72f39dd48f4dfbaf1927b3e3c8d50a);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_at);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__debug_log_file);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug_log);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e8e3b2f2a4e4b709efb0df34b0e0bcb0_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd288f204e4dbe6a3fb84081e73abf78);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_feed);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__re_sgr_mouse);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_groups);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_events);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollUp);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollDown);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollLeft);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollRight);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_32);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseMove);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_M);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseDown);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_MouseUp);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_int_pos_4);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_16);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_x_str_plain_screen_y_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_chr_27);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_read1);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__sequence_to_key_events);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_a690e70dcc5cdd0dc8509a76e8b78c1f);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_096ddde7bccab4b369016af8a8fa2819);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_token);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_d748cee8c885a434bcf2cdcb95125863);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_341ad1328217657d7dca5abd8ea41021);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_2365823bbdb671c3735c4bc1d921f592);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_on_key_token);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_3837d7bbcf32d73d214333119b4027fb);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_9fffaa8175e90d193fbb5f71770e572d);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_55526fd9720ff0cf31e7cf31025d6258);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_reissue_sequence_as_keys);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea9e922f6e5203817d7abd494682e756);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_eof);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_bracketed_paste);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_paste_buffer);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Paste);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_null);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParseEOF);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_222cf4559b78ab4db3bb88c1e9d281e6);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ESC);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_to_key_events);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_dict_367a10d8c28961f8a808126fd761fee6);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_e069089ca20383c2143feb8bd3aaccce);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_send_sequence);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_87b90ba1e66d698d157ed555796c1402);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_constants);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_ESCAPE_DELAY);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParseTimeout);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_process_alt_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_character);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequence);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_54f4fe879e57897f68513e4b506400ed);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIAL_SEQUENCES);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_FOCUSIN);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_AppFocus);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_FOCUSOUT);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_AppBlur);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_BRACKETED_PASTE_START);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_BRACKETED_PASTE_END);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__re_in_band_window_resize);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_partition);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_Resize);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_dimensions);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_pixel_size);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__re_cursor_position);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_CursorPosition);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__re_mouse_event);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_group);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_mouse_code);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__re_terminal_mode_response);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode_id);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_setting_parameter);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_2026);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_messages);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalSupportsSynchronizedOutput);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_2048);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_SMOOTH_SCROLL);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_IS_ITERM);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_InBandWindowResize);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_setting_parameter);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_72e35b033d8fbbf3faa81e6165b6c07d);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_token_callback);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_Keys);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_Ignore);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_564c13fe7fe60703848f4acc37618dfa);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_REISSUE);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_alt);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alt_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_escape);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Key);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_circumflex_accent_str_chr_94_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_event);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_escape_str_chr_27_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__re_extended_key);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_1);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_0);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_FUNCTIONAL_KEYS);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain__character_to_key);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_isspace);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_shift);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_197015d52b8b98752d089bed825d6f1a_tuple_int_pos_1_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_modifier_bits);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_key_tokens);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_chr_43);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_e73565ee51bc6f5ac44f26dfb923b60d);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_digest_3a32c27652d640ce1f0663d3d93fe872);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_DISABLE_KITTY_KEY);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_extended_key);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORE_SEQUENCE);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_isalnum);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_isupper);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_a6ee4e981b9392a78057805bb4666916);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3f2adff805c11b63cc8882c88afd039);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_4499074a0f4932445d54d99677fc3b9d);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_re);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generator);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Final_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_Final);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constants_str_plain_events_str_plain_messages_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_60cd04fcc20f4c05519752c0e6952b04);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANSI_SEQUENCES_KEYS_str_plain_IGNORE_SEQUENCE_tuple);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_digest_8abab6873037389950cb75adad852b75);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FUNCTIONAL_KEYS_str_plain_MODIFIER_FUNCTIONAL_KEYS_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_6024def156f90da73268d3bc4a27ea4b);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_tuple_87dc8921a2c14a8e826310b5af492e72_tuple);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_Parser);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_Peek1);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_Read1);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_TokenCallback);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_tuple_3151873bdc877614c2d581226d69ec4d_tuple);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_Message);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_chr_94);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_52eb4f81ebdca710bdf151533294a7ec_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_85b73f811e077effed724028b28e672b);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_52400abb6a189b2764c9f15e37608655);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a123bb55cb0f12727ec4f8388791d8a5_tuple);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8f27a7f54392ae4a09ee9a266151602);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb66ae95c4bf509b335704e1d611e706);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_46a43312facab81e8fdf5b66907ef46c);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_digest_d795a908ff02a5157fe0e060d31b129b);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_55881a100c3ee524327c845d6b4ced14);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d4d4b90b37a7b314d4a222d52d2a9c77_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_digest_196dd155faf52f234dfa17e03d42f4b0);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3a19aac68cb0012bafc10fe8cbbce6a9_tuple);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LC_TERMINAL_str_empty_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_iTerm2);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TERM_PROGRAM_str_empty_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c6e0012f743df927b572832b363aff4);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_f5ef48c511f33cb19a91b24f3155f445);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_XTermParser);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_int_pos_62);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_26dc38014fe7a9a1f2713938eff3a07d_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_dict_83d3b89c6e29396ebf68ee8ab1e8920d);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_digest_379376bdad186c8dc06ceaafa9c69a10);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_dict_a5bea44468ab210088bde1914ad2592a);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_digest_2b115460fec1b301f375eb3f25e04107);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_dict_16d8686515db4d36d1751e302b81c6c1);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbfb197dda90d0c171d3bf935a99e386);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_dict_107ae1f8fbc1ba844c691c5593ae85da);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_a91c298032646763cd297d2ca88a19ae);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_dict_b6ec720f982be354c5fa375b309918c4);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_dict_1da4053fa64ddbd6dbd6ebd4074d0f98);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_79d7812f3bc8306e7c5f3f63d8c1b780);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_dict_deefa11227bfff6db06cdd1b26207e49);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_c14b9cb26fa5f8a6514bb381c5b3c9bb_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ddfc3e5038fba7bd58a5175a5f01716);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a7f4d7aa7508085c95cde637a846aeb);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_debug_str_plain___class___tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_caae36f388b1b76bcf6afbbc61ad8160_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_20f08c2abbab05721829201bbd72368a_tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_self_str_plain_on_token_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_token_str_plain_self_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_str_plain_self_str_plain_token_callback_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_callback_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_9ebb66d4d8b81e5da1b8b5dd8b8422a5_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_ab166617362206a58555c362b2caa675_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_30f88fd8a4d21fa81f4a277ade3fad82_tuple);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_tuple_cfedaaca42d717503c710ad1afce06fe_tuple);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_tuple_92de6e276601b21a4c3f170ae5f99ef6_tuple);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_42ed2d438d2b4009aac42a74c3f6f7ba_tuple);
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
void checkModuleConstants_textual$_xterm_parser(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_x));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_x);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_y));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_y);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_mouse_pixels));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mouse_pixels);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_terminal_size);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_terminal_pixel_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_terminal_pixel_size);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e72f39dd48f4dfbaf1927b3e3c8d50a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e72f39dd48f4dfbaf1927b3e3c8d50a);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_at);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__debug_log_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__debug_log_file);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug_log);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_e8e3b2f2a4e4b709efb0df34b0e0bcb0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_e8e3b2f2a4e4b709efb0df34b0e0bcb0_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flush);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd288f204e4dbe6a3fb84081e73abf78));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd288f204e4dbe6a3fb84081e73abf78);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_feed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_feed);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__re_sgr_mouse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__re_sgr_mouse);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_groups));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_groups);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_events);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseScrollUp);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseScrollDown);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollLeft));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseScrollLeft);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseScrollRight));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseScrollRight);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_32));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_32);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseMove));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseMove);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_M));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_M);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseDown));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseDown);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_MouseUp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MouseUp);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_int_pos_4));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_4);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_16));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_16);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_screen_x_str_plain_screen_y_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_screen_x_str_plain_screen_y_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_chr_27));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_27);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_read1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read1);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__sequence_to_key_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__sequence_to_key_events);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_a690e70dcc5cdd0dc8509a76e8b78c1f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a690e70dcc5cdd0dc8509a76e8b78c1f);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_096ddde7bccab4b369016af8a8fa2819));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_096ddde7bccab4b369016af8a8fa2819);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_token);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_d748cee8c885a434bcf2cdcb95125863));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d748cee8c885a434bcf2cdcb95125863);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_341ad1328217657d7dca5abd8ea41021));
CHECK_OBJECT_DEEP(mod_consts.const_dict_341ad1328217657d7dca5abd8ea41021);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_2365823bbdb671c3735c4bc1d921f592));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2365823bbdb671c3735c4bc1d921f592);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_on_key_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_on_key_token);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_3837d7bbcf32d73d214333119b4027fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3837d7bbcf32d73d214333119b4027fb);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_9fffaa8175e90d193fbb5f71770e572d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9fffaa8175e90d193fbb5f71770e572d);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_55526fd9720ff0cf31e7cf31025d6258));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55526fd9720ff0cf31e7cf31025d6258);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_reissue_sequence_as_keys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reissue_sequence_as_keys);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea9e922f6e5203817d7abd494682e756));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea9e922f6e5203817d7abd494682e756);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_eof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_eof);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_bracketed_paste));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bracketed_paste);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_paste_buffer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_paste_buffer);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_slice_none_int_neg_1_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_none_int_neg_1_none);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Paste));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Paste);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_null));
CHECK_OBJECT_DEEP(mod_consts.const_str_null);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParseEOF));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParseEOF);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_222cf4559b78ab4db3bb88c1e9d281e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_222cf4559b78ab4db3bb88c1e9d281e6);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ESC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ESC);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_to_key_events));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sequence_to_key_events);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_dict_367a10d8c28961f8a808126fd761fee6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_367a10d8c28961f8a808126fd761fee6);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_e069089ca20383c2143feb8bd3aaccce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e069089ca20383c2143feb8bd3aaccce);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_send_sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_send_sequence);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_87b90ba1e66d698d157ed555796c1402));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87b90ba1e66d698d157ed555796c1402);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_constants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_constants);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_ESCAPE_DELAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ESCAPE_DELAY);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParseTimeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParseTimeout);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_process_alt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_process_alt_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_character));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_character);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sequence);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_54f4fe879e57897f68513e4b506400ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_54f4fe879e57897f68513e4b506400ed);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIAL_SEQUENCES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SPECIAL_SEQUENCES);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_FOCUSIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FOCUSIN);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_AppFocus));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AppFocus);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_FOCUSOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FOCUSOUT);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_AppBlur));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AppBlur);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_BRACKETED_PASTE_START));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BRACKETED_PASTE_START);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_BRACKETED_PASTE_END));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BRACKETED_PASTE_END);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__re_in_band_window_resize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__re_in_band_window_resize);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_fullmatch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fullmatch);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_partition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partition);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_58_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_Resize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Resize);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_dimensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_dimensions);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_pixel_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pixel_size);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__re_cursor_position));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__re_cursor_position);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_CursorPosition));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CursorPosition);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__re_mouse_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__re_mouse_event);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_group);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_mouse_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_mouse_code);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__re_terminal_mode_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__re_terminal_mode_response);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mode_id);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_setting_parameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setting_parameter);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_2026));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_2026);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_messages));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_messages);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_TerminalSupportsSynchronizedOutput));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TerminalSupportsSynchronizedOutput);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_2048));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_2048);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_SMOOTH_SCROLL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SMOOTH_SCROLL);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_IS_ITERM));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IS_ITERM);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_InBandWindowResize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InBandWindowResize);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_setting_parameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_setting_parameter);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_72e35b033d8fbbf3faa81e6165b6c07d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72e35b033d8fbbf3faa81e6165b6c07d);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_token_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token_callback);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_Keys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Keys);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_Ignore));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Ignore);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_564c13fe7fe60703848f4acc37618dfa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_564c13fe7fe60703848f4acc37618dfa);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_REISSUE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_REISSUE);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_alt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_alt);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_alt_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_alt_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_escape));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_escape);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Key);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_circumflex_accent_str_chr_94_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_circumflex_accent_str_chr_94_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_escape_str_chr_27_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_escape_str_chr_27_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__re_extended_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__re_extended_key);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_empty_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_default_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_default_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_59_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_59_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_1);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_0));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_0);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_FUNCTIONAL_KEYS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FUNCTIONAL_KEYS);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain__character_to_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__character_to_key);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_isspace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isspace);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_shift));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shift);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_197015d52b8b98752d089bed825d6f1a_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_197015d52b8b98752d089bed825d6f1a_tuple_int_pos_1_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_modifier_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modifier_bits);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_key_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key_tokens);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_chr_43));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_43);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_e73565ee51bc6f5ac44f26dfb923b60d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e73565ee51bc6f5ac44f26dfb923b60d);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_digest_3a32c27652d640ce1f0663d3d93fe872));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3a32c27652d640ce1f0663d3d93fe872);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_DISABLE_KITTY_KEY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DISABLE_KITTY_KEY);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_extended_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_extended_key);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_IGNORE_SEQUENCE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IGNORE_SEQUENCE);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_isalnum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isalnum);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_isupper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isupper);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_a6ee4e981b9392a78057805bb4666916));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a6ee4e981b9392a78057805bb4666916);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3f2adff805c11b63cc8882c88afd039));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3f2adff805c11b63cc8882c88afd039);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_4499074a0f4932445d54d99677fc3b9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4499074a0f4932445d54d99677fc3b9d);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_re));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_re);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_lru_cache));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lru_cache);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generator);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Final_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Final_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_Final));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Final);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_constants_str_plain_events_str_plain_messages_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_constants_str_plain_events_str_plain_messages_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_60cd04fcc20f4c05519752c0e6952b04));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60cd04fcc20f4c05519752c0e6952b04);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ANSI_SEQUENCES_KEYS_str_plain_IGNORE_SEQUENCE_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ANSI_SEQUENCES_KEYS_str_plain_IGNORE_SEQUENCE_tuple);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_digest_8abab6873037389950cb75adad852b75));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8abab6873037389950cb75adad852b75);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FUNCTIONAL_KEYS_str_plain_MODIFIER_FUNCTIONAL_KEYS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FUNCTIONAL_KEYS_str_plain_MODIFIER_FUNCTIONAL_KEYS_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_6024def156f90da73268d3bc4a27ea4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6024def156f90da73268d3bc4a27ea4b);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_tuple_87dc8921a2c14a8e826310b5af492e72_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_87dc8921a2c14a8e826310b5af492e72_tuple);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_Parser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Parser);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_Peek1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Peek1);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_Read1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Read1);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_TokenCallback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TokenCallback);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_tuple_3151873bdc877614c2d581226d69ec4d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3151873bdc877614c2d581226d69ec4d_tuple);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Message_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Message_tuple);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_Message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Message);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_chr_94));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_94);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_52eb4f81ebdca710bdf151533294a7ec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_52eb4f81ebdca710bdf151533294a7ec_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_85b73f811e077effed724028b28e672b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85b73f811e077effed724028b28e672b);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_52400abb6a189b2764c9f15e37608655));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_52400abb6a189b2764c9f15e37608655);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a123bb55cb0f12727ec4f8388791d8a5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a123bb55cb0f12727ec4f8388791d8a5_tuple);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8f27a7f54392ae4a09ee9a266151602));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8f27a7f54392ae4a09ee9a266151602);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb66ae95c4bf509b335704e1d611e706));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb66ae95c4bf509b335704e1d611e706);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_46a43312facab81e8fdf5b66907ef46c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_46a43312facab81e8fdf5b66907ef46c);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_digest_d795a908ff02a5157fe0e060d31b129b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d795a908ff02a5157fe0e060d31b129b);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_55881a100c3ee524327c845d6b4ced14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55881a100c3ee524327c845d6b4ced14);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d4d4b90b37a7b314d4a222d52d2a9c77_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d4d4b90b37a7b314d4a222d52d2a9c77_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_digest_196dd155faf52f234dfa17e03d42f4b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_196dd155faf52f234dfa17e03d42f4b0);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3a19aac68cb0012bafc10fe8cbbce6a9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3a19aac68cb0012bafc10fe8cbbce6a9_tuple);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LC_TERMINAL_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_LC_TERMINAL_str_empty_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_iTerm2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iTerm2);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TERM_PROGRAM_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TERM_PROGRAM_str_empty_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c6e0012f743df927b572832b363aff4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c6e0012f743df927b572832b363aff4);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_f5ef48c511f33cb19a91b24f3155f445));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f5ef48c511f33cb19a91b24f3155f445);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_XTermParser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_XTermParser);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_int_pos_62));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_62);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_26dc38014fe7a9a1f2713938eff3a07d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_26dc38014fe7a9a1f2713938eff3a07d_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_dict_83d3b89c6e29396ebf68ee8ab1e8920d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_83d3b89c6e29396ebf68ee8ab1e8920d);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_digest_379376bdad186c8dc06ceaafa9c69a10));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_379376bdad186c8dc06ceaafa9c69a10);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_dict_a5bea44468ab210088bde1914ad2592a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a5bea44468ab210088bde1914ad2592a);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_digest_2b115460fec1b301f375eb3f25e04107));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2b115460fec1b301f375eb3f25e04107);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_dict_16d8686515db4d36d1751e302b81c6c1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_16d8686515db4d36d1751e302b81c6c1);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbfb197dda90d0c171d3bf935a99e386));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbfb197dda90d0c171d3bf935a99e386);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_dict_107ae1f8fbc1ba844c691c5593ae85da));
CHECK_OBJECT_DEEP(mod_consts.const_dict_107ae1f8fbc1ba844c691c5593ae85da);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_a91c298032646763cd297d2ca88a19ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a91c298032646763cd297d2ca88a19ae);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_dict_b6ec720f982be354c5fa375b309918c4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b6ec720f982be354c5fa375b309918c4);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1024_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1024_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxsize_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxsize_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_dict_1da4053fa64ddbd6dbd6ebd4074d0f98));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1da4053fa64ddbd6dbd6ebd4074d0f98);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_79d7812f3bc8306e7c5f3f63d8c1b780));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_79d7812f3bc8306e7c5f3f63d8c1b780);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_dict_deefa11227bfff6db06cdd1b26207e49));
CHECK_OBJECT_DEEP(mod_consts.const_dict_deefa11227bfff6db06cdd1b26207e49);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_c14b9cb26fa5f8a6514bb381c5b3c9bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c14b9cb26fa5f8a6514bb381c5b3c9bb_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ddfc3e5038fba7bd58a5175a5f01716));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ddfc3e5038fba7bd58a5175a5f01716);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a7f4d7aa7508085c95cde637a846aeb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a7f4d7aa7508085c95cde637a846aeb);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_debug_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_debug_str_plain___class___tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_caae36f388b1b76bcf6afbbc61ad8160_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_caae36f388b1b76bcf6afbbc61ad8160_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_20f08c2abbab05721829201bbd72368a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_20f08c2abbab05721829201bbd72368a_tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_args_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_args_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_str_plain_self_str_plain_on_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_event_str_plain_self_str_plain_on_token_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_on_token_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_on_token_str_plain_self_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_token_str_plain_self_str_plain_token_callback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_token_str_plain_self_str_plain_token_callback_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_token_callback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_token_callback_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_9ebb66d4d8b81e5da1b8b5dd8b8422a5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9ebb66d4d8b81e5da1b8b5dd8b8422a5_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_ab166617362206a58555c362b2caa675_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ab166617362206a58555c362b2caa675_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_30f88fd8a4d21fa81f4a277ade3fad82_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_30f88fd8a4d21fa81f4a277ade3fad82_tuple);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_tuple_cfedaaca42d717503c710ad1afce06fe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cfedaaca42d717503c710ad1afce06fe_tuple);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_tuple_92de6e276601b21a4c3f170ae5f99ef6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_92de6e276601b21a4c3f170ae5f99ef6_tuple);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_42ed2d438d2b4009aac42a74c3f6f7ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_42ed2d438d2b4009aac42a74c3f6f7ba_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 31
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
static PyObject *module_var_accessor_textual$_xterm_parser$ANSI_SEQUENCES_KEYS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$BRACKETED_PASTE_END(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_END);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BRACKETED_PASTE_END);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BRACKETED_PASTE_END, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BRACKETED_PASTE_END);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BRACKETED_PASTE_END, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_END);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_END);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_END);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$BRACKETED_PASTE_START(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_START);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BRACKETED_PASTE_START);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BRACKETED_PASTE_START, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BRACKETED_PASTE_START);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BRACKETED_PASTE_START, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_START);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_START);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_START);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$FOCUSIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FOCUSIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FOCUSIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FOCUSIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FOCUSIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSIN);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$FOCUSOUT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FOCUSOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FOCUSOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FOCUSOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FOCUSOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSOUT);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$FUNCTIONAL_KEYS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FUNCTIONAL_KEYS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FUNCTIONAL_KEYS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FUNCTIONAL_KEYS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_FUNCTIONAL_KEYS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_FUNCTIONAL_KEYS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FUNCTIONAL_KEYS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FUNCTIONAL_KEYS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_FUNCTIONAL_KEYS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$IGNORE_SEQUENCE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORE_SEQUENCE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IGNORE_SEQUENCE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IGNORE_SEQUENCE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IGNORE_SEQUENCE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IGNORE_SEQUENCE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORE_SEQUENCE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORE_SEQUENCE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORE_SEQUENCE);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$IS_ITERM(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_ITERM);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IS_ITERM);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IS_ITERM, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_IS_ITERM);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_IS_ITERM, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_ITERM);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_ITERM);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_ITERM);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$KEY_NAME_REPLACEMENTS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$Keys(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Keys);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Keys);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Keys, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Keys);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Keys, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Keys);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Keys);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Keys);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$MODIFIER_FUNCTIONAL_KEYS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$Message(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Message);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Message, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Message);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$ParseEOF(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseEOF);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseEOF);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseEOF, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseEOF);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseEOF, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseEOF);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseEOF);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseEOF);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$ParseTimeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseTimeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseTimeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseTimeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParseTimeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParseTimeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseTimeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseTimeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseTimeout);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$Parser(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Parser);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Parser);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Parser, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Parser);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Parser, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Parser);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Parser);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Parser);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$SPECIAL_KEY_TO_CHARACTER(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$SPECIAL_SEQUENCES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_SEQUENCES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SPECIAL_SEQUENCES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SPECIAL_SEQUENCES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SPECIAL_SEQUENCES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SPECIAL_SEQUENCES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_SEQUENCES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_SEQUENCES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_SEQUENCES);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$_MAX_SEQUENCE_SEARCH_THRESHOLD(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$_character_to_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__character_to_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__character_to_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__character_to_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__character_to_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$_re_cursor_position(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_cursor_position);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_cursor_position);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_cursor_position, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_cursor_position);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_cursor_position, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_cursor_position);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_cursor_position);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__re_cursor_position);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$_re_extended_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_extended_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_extended_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_extended_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_extended_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_extended_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_extended_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_extended_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__re_extended_key);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$_re_in_band_window_resize(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_in_band_window_resize);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_in_band_window_resize);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_in_band_window_resize, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_in_band_window_resize);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_in_band_window_resize, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_in_band_window_resize);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_in_band_window_resize);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__re_in_band_window_resize);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$_re_mouse_event(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_mouse_event);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_mouse_event);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_mouse_event, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_mouse_event);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_mouse_event, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_mouse_event);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_mouse_event);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__re_mouse_event);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$_re_terminal_mode_response(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_terminal_mode_response);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_terminal_mode_response);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_terminal_mode_response, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__re_terminal_mode_response);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__re_terminal_mode_response, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_terminal_mode_response);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_terminal_mode_response);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__re_terminal_mode_response);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$constants(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_constants);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$events(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_events);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$lru_cache(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_lru_cache);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_lru_cache, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$messages(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_messages);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_messages);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_messages, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_messages);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_messages, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_messages);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_messages);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_messages);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_xterm_parser$re(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_xterm_parser->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_xterm_parser->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_xterm_parser->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_re);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_re, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_re);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_dd222e820d40d24e19a55ed156638c12;
static PyCodeObject *code_objects_ae15e4d54ba5f49748b556575f2a13f9;
static PyCodeObject *code_objects_93a698e0b1769b93b49c6e482ee0dc11;
static PyCodeObject *code_objects_0ecc87061099b63aa6cdd38e5fcff165;
static PyCodeObject *code_objects_ee9731749b05556acd20ebcd8093783c;
static PyCodeObject *code_objects_19ca5cd3fa8f96d7a054aae426f6c592;
static PyCodeObject *code_objects_159c69a8af25644d5e5965884aa4e8ad;
static PyCodeObject *code_objects_ea115d62c6249dfebf0463ed61a46305;
static PyCodeObject *code_objects_f3be47ee1eb9cc9846f5a8a4cfe3473c;
static PyCodeObject *code_objects_9672c6a6e606ff96a1a7fdf742cd134c;
static PyCodeObject *code_objects_1fe2ed4f927f5f86cb0fd07150af4445;
static PyCodeObject *code_objects_cbc003f25d76b5de2ee8647fb65af032;
static PyCodeObject *code_objects_669e4900f6a36d61ec43655e6d7af659;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6ddfc3e5038fba7bd58a5175a5f01716); CHECK_OBJECT(module_filename_obj);
code_objects_dd222e820d40d24e19a55ed156638c12 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4a7f4d7aa7508085c95cde637a846aeb, mod_consts.const_str_digest_4a7f4d7aa7508085c95cde637a846aeb, NULL, NULL, 0, 0, 0);
code_objects_ae15e4d54ba5f49748b556575f2a13f9 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_XTermParser, mod_consts.const_str_plain_XTermParser, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_93a698e0b1769b93b49c6e482ee0dc11 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_379376bdad186c8dc06ceaafa9c69a10, mod_consts.const_tuple_str_plain_self_str_plain_debug_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_0ecc87061099b63aa6cdd38e5fcff165 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__parse_extended_key, mod_consts.const_str_digest_79d7812f3bc8306e7c5f3f63d8c1b780, mod_consts.const_tuple_caae36f388b1b76bcf6afbbc61ad8160_tuple, NULL, 2, 0, 0);
code_objects_ee9731749b05556acd20ebcd8093783c = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__sequence_to_key_events, mod_consts.const_str_digest_4499074a0f4932445d54d99677fc3b9d, mod_consts.const_tuple_20f08c2abbab05721829201bbd72368a_tuple, NULL, 3, 0, 0);
code_objects_19ca5cd3fa8f96d7a054aae426f6c592 = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_debug_log, mod_consts.const_str_digest_2b115460fec1b301f375eb3f25e04107, mod_consts.const_tuple_str_plain_self_str_plain_args_tuple, NULL, 1, 0, 0);
code_objects_159c69a8af25644d5e5965884aa4e8ad = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_feed, mod_consts.const_str_digest_bbfb197dda90d0c171d3bf935a99e386, mod_consts.const_tuple_str_plain_self_str_plain_data_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_ea115d62c6249dfebf0463ed61a46305 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_key_token, mod_consts.const_str_digest_3837d7bbcf32d73d214333119b4027fb, mod_consts.const_tuple_str_plain_event_str_plain_self_str_plain_on_token_tuple, mod_consts.const_tuple_str_plain_on_token_str_plain_self_tuple, 1, 0, 0);
code_objects_f3be47ee1eb9cc9846f5a8a4cfe3473c = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_on_token, mod_consts.const_str_digest_d748cee8c885a434bcf2cdcb95125863, mod_consts.const_tuple_str_plain_token_str_plain_self_str_plain_token_callback_tuple, mod_consts.const_tuple_str_plain_self_str_plain_token_callback_tuple, 1, 0, 0);
code_objects_9672c6a6e606ff96a1a7fdf742cd134c = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse, mod_consts.const_str_digest_72e35b033d8fbbf3faa81e6165b6c07d, mod_consts.const_tuple_9ebb66d4d8b81e5da1b8b5dd8b8422a5_tuple, NULL, 2, 0, 0);
code_objects_1fe2ed4f927f5f86cb0fd07150af4445 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_mouse_code, mod_consts.const_str_digest_a91c298032646763cd297d2ca88a19ae, mod_consts.const_tuple_ab166617362206a58555c362b2caa675_tuple, NULL, 2, 0, 0);
code_objects_cbc003f25d76b5de2ee8647fb65af032 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_reissue_sequence_as_keys, mod_consts.const_str_digest_ea9e922f6e5203817d7abd494682e756, mod_consts.const_tuple_30f88fd8a4d21fa81f4a277ade3fad82_tuple, mod_consts.const_tuple_cfedaaca42d717503c710ad1afce06fe_tuple, 2, 0, 0);
code_objects_669e4900f6a36d61ec43655e6d7af659 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_send_sequence, mod_consts.const_str_digest_87b90ba1e66d698d157ed555796c1402, mod_consts.const_tuple_92de6e276601b21a4c3f170ae5f99ef6_tuple, mod_consts.const_tuple_42ed2d438d2b4009aac42a74c3f6f7ba_tuple, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__2_debug_log(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__3_feed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__4_parse_mouse_code(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__6__parse_extended_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__7__sequence_to_key_events(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$_xterm_parser$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_debug = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_93a698e0b1769b93b49c6e482ee0dc11, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__1___init__->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__1___init__ = cache_frame_frame_textual$_xterm_parser$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__1___init__);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = const_float_0_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_last_x, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_float_0_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_last_y, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_mouse_pixels, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_terminal_size, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_terminal_pixel_size, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_debug);
tmp_truth_name_1 = CHECK_IF_TRUE(par_debug);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_open_filename_1 = mod_consts.const_str_digest_7e72f39dd48f4dfbaf1927b3e3c8d50a;
tmp_open_mode_1 = mod_consts.const_str_plain_at;
tmp_assattr_value_6 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assattr_value_6 = Py_None;
Py_INCREF(tmp_assattr_value_6);
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__debug_log_file, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 72;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$_xterm_parser, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__1___init__->m_frame.f_lineno = 72;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooc";
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
frame_frame_textual$_xterm_parser$$$function__1___init__->m_frame.f_lineno = 73;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_debug_log,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_e8e3b2f2a4e4b709efb0df34b0e0bcb0_tuple, 0)
);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__1___init__,
    type_description_1,
    par_self,
    par_debug,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__1___init__ == cache_frame_frame_textual$_xterm_parser$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__1___init__);
    cache_frame_frame_textual$_xterm_parser$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__1___init__);

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
CHECK_OBJECT(par_debug);
Py_DECREF(par_debug);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_debug);
Py_DECREF(par_debug);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__2_debug_log(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_args = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__2_debug_log;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log = MAKE_FUNCTION_FRAME(tstate, code_objects_19ca5cd3fa8f96d7a054aae426f6c592, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__2_debug_log = cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__2_debug_log);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__2_debug_log) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__debug_log_file);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__debug_log_file);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_args);
tmp_iterable_value_1 = par_args;
tmp_add_expr_left_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_newline;
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_textual$_xterm_parser$$$function__2_debug_log->m_frame.f_lineno = 77;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__debug_log_file);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__2_debug_log->m_frame.f_lineno = 78;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_flush);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__2_debug_log, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__2_debug_log->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__2_debug_log, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__2_debug_log,
    type_description_1,
    par_self,
    par_args
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__2_debug_log == cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log);
    cache_frame_frame_textual$_xterm_parser$$$function__2_debug_log = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__2_debug_log);

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
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__3_feed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__3_feed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__3_feed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__3_feed)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__3_feed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__3_feed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__3_feed = MAKE_FUNCTION_FRAME(tstate, code_objects_159c69a8af25644d5e5965884aa4e8ad, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__3_feed->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__3_feed = cache_frame_frame_textual$_xterm_parser$$$function__3_feed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__3_feed);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__3_feed) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_debug_log);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_dd288f204e4dbe6a3fb84081e73abf78;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_data);
tmp_operand_value_1 = par_data;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooc";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_textual$_xterm_parser$$$function__3_feed->m_frame.f_lineno = 81;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_textual$_xterm_parser, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_textual$_xterm_parser$$$function__3_feed->m_frame.f_lineno = 82;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_feed, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__3_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__3_feed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__3_feed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__3_feed,
    type_description_1,
    par_self,
    par_data,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__3_feed == cache_frame_frame_textual$_xterm_parser$$$function__3_feed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__3_feed);
    cache_frame_frame_textual$_xterm_parser$$$function__3_feed = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__3_feed);

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
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__4_parse_mouse_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_code = python_pars[1];
PyObject *var_event_class = NULL;
PyObject *var_sgr_match = NULL;
PyObject *var__buttons = NULL;
PyObject *var__x = NULL;
PyObject *var__y = NULL;
PyObject *var_state = NULL;
PyObject *var_buttons = NULL;
PyObject *var_x = NULL;
PyObject *var_y = NULL;
PyObject *var_pixel_width = NULL;
PyObject *var_pixel_height = NULL;
PyObject *var_width = NULL;
PyObject *var_height = NULL;
PyObject *var_x_ratio = NULL;
PyObject *var_y_ratio = NULL;
PyObject *var_delta_x = NULL;
PyObject *var_delta_y = NULL;
PyObject *var_button = NULL;
PyObject *var_event = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__element_4 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code;
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
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code = MAKE_FUNCTION_FRAME(tstate, code_objects_1fe2ed4f927f5f86cb0fd07150af4445, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code = cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__re_sgr_mouse);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_code);
tmp_args_element_value_1 = par_code;
frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code->m_frame.f_lineno = 85;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_sgr_match == NULL);
var_sgr_match = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_sgr_match);
tmp_truth_name_1 = CHECK_IF_TRUE(var_sgr_match);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooooooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_sgr_match);
tmp_called_instance_2 = var_sgr_match;
frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code->m_frame.f_lineno = 87;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_groups);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooo";
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
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooo";
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
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_3 == NULL);
tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_4 == NULL);
tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 4);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "ooooooooooooooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
assert(var__buttons == NULL);
Py_INCREF(tmp_assign_source_7);
var__buttons = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
assert(var__x == NULL);
Py_INCREF(tmp_assign_source_8);
var__x = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
assert(var__y == NULL);
Py_INCREF(tmp_assign_source_9);
var__y = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_4;
assert(var_state == NULL);
Py_INCREF(tmp_assign_source_10);
var_state = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_4);
tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_11;
PyObject *tmp_int_arg_1;
CHECK_OBJECT(var__buttons);
tmp_int_arg_1 = var__buttons;
tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_buttons == NULL);
var_buttons = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_float_arg_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_int_arg_2;
CHECK_OBJECT(var__x);
tmp_int_arg_2 = var__x;
tmp_sub_expr_left_1 = PyNumber_Int(tmp_int_arg_2);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_float_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_float_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_12 = TO_FLOAT(tmp_float_arg_1);
CHECK_OBJECT(tmp_float_arg_1);
Py_DECREF(tmp_float_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x == NULL);
var_x = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_float_arg_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_int_arg_3;
CHECK_OBJECT(var__y);
tmp_int_arg_3 = var__y;
tmp_sub_expr_left_2 = PyNumber_Int(tmp_int_arg_3);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_float_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_float_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = TO_FLOAT(tmp_float_arg_2);
CHECK_OBJECT(tmp_float_arg_2);
Py_DECREF(tmp_float_arg_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_y == NULL);
var_y = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_x);
tmp_cmp_expr_left_1 = var_x;
tmp_cmp_expr_right_1 = const_int_0;
tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_y);
tmp_cmp_expr_left_2 = var_y;
tmp_cmp_expr_right_2 = const_int_0;
tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
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
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mouse_pixels);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_terminal_pixel_size);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_terminal_size);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_terminal_pixel_size);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_16 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "ooooooooooooooooooooo";
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
PyObject *tmp_assign_source_17;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
assert(var_pixel_width == NULL);
Py_INCREF(tmp_assign_source_17);
var_pixel_width = tmp_assign_source_17;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
assert(var_pixel_height == NULL);
Py_INCREF(tmp_assign_source_18);
var_pixel_height = tmp_assign_source_18;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_terminal_size);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_3__source_iter == NULL);
tmp_tuple_unpack_3__source_iter = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_20 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_1 == NULL);
tmp_tuple_unpack_3__element_1 = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_21 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_tuple_unpack_3__element_2 == NULL);
tmp_tuple_unpack_3__element_2 = tmp_assign_source_21;
}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;
type_description_1 = "ooooooooooooooooooooo";
    goto try_except_handler_7;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_22 = tmp_tuple_unpack_3__element_1;
assert(var_width == NULL);
Py_INCREF(tmp_assign_source_22);
var_width = tmp_assign_source_22;
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_23 = tmp_tuple_unpack_3__element_2;
assert(var_height == NULL);
Py_INCREF(tmp_assign_source_23);
var_height = tmp_assign_source_23;
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_assign_source_24;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
CHECK_OBJECT(var_pixel_width);
tmp_truediv_expr_left_1 = var_pixel_width;
CHECK_OBJECT(var_width);
tmp_truediv_expr_right_1 = var_width;
tmp_assign_source_24 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_x_ratio == NULL);
var_x_ratio = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_truediv_expr_left_2;
PyObject *tmp_truediv_expr_right_2;
CHECK_OBJECT(var_pixel_height);
tmp_truediv_expr_left_2 = var_pixel_height;
CHECK_OBJECT(var_height);
tmp_truediv_expr_right_2 = var_height;
tmp_assign_source_25 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_y_ratio == NULL);
var_y_ratio = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_itruediv_expr_left_1;
PyObject *tmp_itruediv_expr_right_1;
CHECK_OBJECT(var_x);
tmp_itruediv_expr_left_1 = var_x;
CHECK_OBJECT(var_x_ratio);
tmp_itruediv_expr_right_1 = var_x_ratio;
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_26 = tmp_itruediv_expr_left_1;
var_x = tmp_assign_source_26;

}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_itruediv_expr_left_2;
PyObject *tmp_itruediv_expr_right_2;
CHECK_OBJECT(var_y);
tmp_itruediv_expr_left_2 = var_y;
CHECK_OBJECT(var_y_ratio);
tmp_itruediv_expr_right_2 = var_y_ratio;
tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_2, tmp_itruediv_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_27 = tmp_itruediv_expr_left_2;
var_y = tmp_assign_source_27;

}
branch_no_3:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_int_arg_4;
PyObject *tmp_int_arg_5;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_x);
tmp_int_arg_4 = var_x;
tmp_sub_expr_left_3 = PyNumber_Int(tmp_int_arg_4);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_int_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_last_x);
if (tmp_int_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_3);

exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_3 = PyNumber_Int(tmp_int_arg_5);
CHECK_OBJECT(tmp_int_arg_5);
Py_DECREF(tmp_int_arg_5);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_3);

exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_28 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_delta_x == NULL);
var_delta_x = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
PyObject *tmp_int_arg_6;
PyObject *tmp_int_arg_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_y);
tmp_int_arg_6 = var_y;
tmp_sub_expr_left_4 = PyNumber_Int(tmp_int_arg_6);
if (tmp_sub_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_int_arg_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_last_y);
if (tmp_int_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_4);

exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_4 = PyNumber_Int(tmp_int_arg_7);
CHECK_OBJECT(tmp_int_arg_7);
Py_DECREF(tmp_int_arg_7);
if (tmp_sub_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_4);

exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_29 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
CHECK_OBJECT(tmp_sub_expr_left_4);
Py_DECREF(tmp_sub_expr_left_4);
CHECK_OBJECT(tmp_sub_expr_right_4);
Py_DECREF(tmp_sub_expr_right_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_delta_y == NULL);
var_delta_y = tmp_assign_source_29;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_x);
tmp_assattr_value_1 = var_x;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_last_x, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var_y);
tmp_assattr_value_2 = var_y;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_last_y, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(var_buttons);
tmp_bitand_expr_left_1 = var_buttons;
tmp_bitand_expr_right_1 = mod_consts.const_int_pos_64;
tmp_condition_result_4 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_expression_value_9;
PyObject *tmp_list_element_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
tmp_expression_value_10 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_MouseScrollUp);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyList_SET_ITEM(tmp_expression_value_9, 0, tmp_list_element_1);
tmp_expression_value_11 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooo";
    goto list_build_exception_1;
}
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_MouseScrollDown);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "ooooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_expression_value_9, 1, tmp_list_element_1);
tmp_expression_value_12 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooooooooooooooooooooo";
    goto list_build_exception_1;
}
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_MouseScrollLeft);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_expression_value_9, 2, tmp_list_element_1);
tmp_expression_value_13 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooo";
    goto list_build_exception_1;
}
tmp_list_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_MouseScrollRight);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooooooooooooooooooooo";
    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_expression_value_9, 3, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_expression_value_9);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
CHECK_OBJECT(var_buttons);
tmp_bitand_expr_left_2 = var_buttons;
tmp_bitand_expr_right_2 = mod_consts.const_int_pos_3;
tmp_subscript_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_9);

exception_lineno = 118;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_event_class == NULL);
var_event_class = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = const_int_0;
assert(var_button == NULL);
Py_INCREF(tmp_assign_source_31);
var_button = tmp_assign_source_31;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_bitand_expr_left_3;
PyObject *tmp_bitand_expr_right_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
CHECK_OBJECT(var_buttons);
tmp_add_expr_left_1 = var_buttons;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_bitand_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_bitand_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_bitand_expr_right_3 = mod_consts.const_int_pos_3;
tmp_assign_source_32 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
CHECK_OBJECT(tmp_bitand_expr_left_3);
Py_DECREF(tmp_bitand_expr_left_3);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_button == NULL);
var_button = tmp_assign_source_32;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_bitand_expr_left_4;
PyObject *tmp_bitand_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_buttons);
tmp_bitand_expr_left_4 = var_buttons;
tmp_bitand_expr_right_4 = mod_consts.const_int_pos_32;
tmp_or_left_value_2 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_4, tmp_bitand_expr_right_4);
if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_button);
tmp_cmp_expr_left_5 = var_button;
tmp_cmp_expr_right_5 = const_int_0;
tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_5 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_33;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_MouseMove);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_event_class == NULL);
var_event_class = tmp_assign_source_33;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_assign_source_34;
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(var_state);
tmp_cmp_expr_left_6 = var_state;
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_M;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_15 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_MouseDown);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_expression_value_16 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_MouseUp);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_event_class == NULL);
var_event_class = tmp_assign_source_34;
}
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_35;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_kw_call_arg_value_6_1;
PyObject *tmp_value_value_1;
PyObject *tmp_bitand_expr_left_5;
PyObject *tmp_bitand_expr_right_5;
PyObject *tmp_kw_call_arg_value_7_1;
PyObject *tmp_value_value_2;
PyObject *tmp_bitand_expr_left_6;
PyObject *tmp_bitand_expr_right_6;
PyObject *tmp_kw_call_arg_value_8_1;
PyObject *tmp_value_value_3;
PyObject *tmp_bitand_expr_left_7;
PyObject *tmp_bitand_expr_right_7;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(var_event_class);
tmp_called_value_1 = var_event_class;
tmp_kw_call_arg_value_0_1 = Py_None;
CHECK_OBJECT(var_x);
tmp_kw_call_arg_value_1_1 = var_x;
CHECK_OBJECT(var_y);
tmp_kw_call_arg_value_2_1 = var_y;
CHECK_OBJECT(var_delta_x);
tmp_kw_call_arg_value_3_1 = var_delta_x;
CHECK_OBJECT(var_delta_y);
tmp_kw_call_arg_value_4_1 = var_delta_y;
CHECK_OBJECT(var_button);
tmp_kw_call_arg_value_5_1 = var_button;
CHECK_OBJECT(var_buttons);
tmp_bitand_expr_left_5 = var_buttons;
tmp_bitand_expr_right_5 = mod_consts.const_int_pos_4;
tmp_value_value_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_5, tmp_bitand_expr_right_5);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_6_1 = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_buttons);
tmp_bitand_expr_left_6 = var_buttons;
tmp_bitand_expr_right_6 = mod_consts.const_int_pos_8;
tmp_value_value_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_6, tmp_bitand_expr_right_6);
if (tmp_value_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_2);
CHECK_OBJECT(tmp_value_value_2);
Py_DECREF(tmp_value_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_7_1 = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_buttons);
tmp_bitand_expr_left_7 = var_buttons;
tmp_bitand_expr_right_7 = mod_consts.const_int_pos_16;
tmp_value_value_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_LONG(tmp_bitand_expr_left_7, tmp_bitand_expr_right_7);
if (tmp_value_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_value_value_3);
CHECK_OBJECT(tmp_value_value_3);
Py_DECREF(tmp_value_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_8_1 = (tmp_res != 0) ? Py_True : Py_False;
CHECK_OBJECT(var_x);
tmp_kw_call_dict_value_0_1 = var_x;
CHECK_OBJECT(var_y);
tmp_kw_call_dict_value_1_1 = var_y;
frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code->m_frame.f_lineno = 129;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1, tmp_kw_call_arg_value_7_1, tmp_kw_call_arg_value_8_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS9_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_screen_x_str_plain_screen_y_tuple);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_event == NULL);
var_event = tmp_assign_source_35;
}
CHECK_OBJECT(var_event);
tmp_return_value = var_event;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code,
    type_description_1,
    par_self,
    par_code,
    var_event_class,
    var_sgr_match,
    var__buttons,
    var__x,
    var__y,
    var_state,
    var_buttons,
    var_x,
    var_y,
    var_pixel_width,
    var_pixel_height,
    var_width,
    var_height,
    var_x_ratio,
    var_y_ratio,
    var_delta_x,
    var_delta_y,
    var_button,
    var_event
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code == cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code);
    cache_frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__4_parse_mouse_code);

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
Py_XDECREF(var_event_class);
var_event_class = NULL;
CHECK_OBJECT(var_sgr_match);
CHECK_OBJECT(var_sgr_match);
Py_DECREF(var_sgr_match);
var_sgr_match = NULL;
Py_XDECREF(var__buttons);
var__buttons = NULL;
Py_XDECREF(var__x);
var__x = NULL;
Py_XDECREF(var__y);
var__y = NULL;
Py_XDECREF(var_state);
var_state = NULL;
Py_XDECREF(var_buttons);
var_buttons = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_pixel_width);
var_pixel_width = NULL;
Py_XDECREF(var_pixel_height);
var_pixel_height = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_x_ratio);
var_x_ratio = NULL;
Py_XDECREF(var_y_ratio);
var_y_ratio = NULL;
Py_XDECREF(var_delta_x);
var_delta_x = NULL;
Py_XDECREF(var_delta_y);
var_delta_y = NULL;
Py_XDECREF(var_button);
var_button = NULL;
Py_XDECREF(var_event);
var_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_event_class);
var_event_class = NULL;
Py_XDECREF(var_sgr_match);
var_sgr_match = NULL;
Py_XDECREF(var__buttons);
var__buttons = NULL;
Py_XDECREF(var__x);
var__x = NULL;
Py_XDECREF(var__y);
var__y = NULL;
Py_XDECREF(var_state);
var_state = NULL;
Py_XDECREF(var_buttons);
var_buttons = NULL;
Py_XDECREF(var_x);
var_x = NULL;
Py_XDECREF(var_y);
var_y = NULL;
Py_XDECREF(var_pixel_width);
var_pixel_width = NULL;
Py_XDECREF(var_pixel_height);
var_pixel_height = NULL;
Py_XDECREF(var_width);
var_width = NULL;
Py_XDECREF(var_height);
var_height = NULL;
Py_XDECREF(var_x_ratio);
var_x_ratio = NULL;
Py_XDECREF(var_y_ratio);
var_y_ratio = NULL;
Py_XDECREF(var_delta_x);
var_delta_x = NULL;
Py_XDECREF(var_delta_y);
var_delta_y = NULL;
Py_XDECREF(var_button);
var_button = NULL;
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
CHECK_OBJECT(par_code);
Py_DECREF(par_code);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_code);
Py_DECREF(par_code);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__5_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_token_callback = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_token_callback;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_token_callback);
CHECK_OBJECT(par_token_callback);
Py_DECREF(par_token_callback);
par_token_callback = NULL;
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
struct textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse_locals {
PyObject *var_paste_buffer;
struct Nuitka_CellObject *var_sequence;
struct Nuitka_CellObject *var_ESC;
PyObject *var_read1;
struct Nuitka_CellObject *var_sequence_to_key_events;
PyObject *var_bracketed_paste;
struct Nuitka_CellObject *var_on_token;
PyObject *var_on_key_token;
struct Nuitka_CellObject *var_reissue_sequence_as_keys;
PyObject *var_pasted_text;
PyObject *var_character;
PyObject *var_event;
PyObject *var_send_sequence;
PyObject *var_new_character;
PyObject *var_match;
PyObject *var_height;
PyObject *var_width;
PyObject *var_pixel_height;
PyObject *var_pixel_width;
PyObject *var_resize_event;
PyObject *var_cursor_position_match;
PyObject *var_row;
PyObject *var_column;
PyObject *var_x;
PyObject *var_y;
PyObject *var_key_events;
PyObject *var_key_event;
PyObject *var_mouse_match;
PyObject *var_mouse_code;
PyObject *var_mouse_event;
PyObject *var_mode_report_match;
PyObject *var_mode_id;
PyObject *var_setting_parameter;
PyObject *var_in_band_event;
PyObject *outline_0_var_group;
PyObject *tmp_assignment_expr_1__value;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
PyObject *tmp_for_loop_2__for_iterator;
PyObject *tmp_for_loop_2__iter_value;
PyObject *tmp_listcomp_1__$0;
PyObject *tmp_listcomp_1__contraction;
PyObject *tmp_listcomp_1__iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__element_3;
PyObject *tmp_tuple_unpack_1__element_4;
PyObject *tmp_tuple_unpack_1__source_iter;
PyObject *tmp_tuple_unpack_2__element_1;
PyObject *tmp_tuple_unpack_2__element_2;
PyObject *tmp_tuple_unpack_2__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
PyObject *tmp_return_value;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
int exception_keeper_lineno_14;
};
#endif

static PyObject *textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse_locals *generator_heap = (struct textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_paste_buffer = NULL;
generator_heap->var_sequence = Nuitka_Cell_NewEmpty();
generator_heap->var_ESC = Nuitka_Cell_NewEmpty();
generator_heap->var_read1 = NULL;
generator_heap->var_sequence_to_key_events = Nuitka_Cell_NewEmpty();
generator_heap->var_bracketed_paste = NULL;
generator_heap->var_on_token = Nuitka_Cell_NewEmpty();
generator_heap->var_on_key_token = NULL;
generator_heap->var_reissue_sequence_as_keys = Nuitka_Cell_NewEmpty();
generator_heap->var_pasted_text = NULL;
generator_heap->var_character = NULL;
generator_heap->var_event = NULL;
generator_heap->var_send_sequence = NULL;
generator_heap->var_new_character = NULL;
generator_heap->var_match = NULL;
generator_heap->var_height = NULL;
generator_heap->var_width = NULL;
generator_heap->var_pixel_height = NULL;
generator_heap->var_pixel_width = NULL;
generator_heap->var_resize_event = NULL;
generator_heap->var_cursor_position_match = NULL;
generator_heap->var_row = NULL;
generator_heap->var_column = NULL;
generator_heap->var_x = NULL;
generator_heap->var_y = NULL;
generator_heap->var_key_events = NULL;
generator_heap->var_key_event = NULL;
generator_heap->var_mouse_match = NULL;
generator_heap->var_mouse_code = NULL;
generator_heap->var_mouse_event = NULL;
generator_heap->var_mode_report_match = NULL;
generator_heap->var_mode_id = NULL;
generator_heap->var_setting_parameter = NULL;
generator_heap->var_in_band_event = NULL;
generator_heap->outline_0_var_group = NULL;
generator_heap->tmp_assignment_expr_1__value = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_for_loop_2__for_iterator = NULL;
generator_heap->tmp_for_loop_2__iter_value = NULL;
generator_heap->tmp_listcomp_1__$0 = NULL;
generator_heap->tmp_listcomp_1__contraction = NULL;
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
generator_heap->tmp_tuple_unpack_1__element_4 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_chr_27;
assert(Nuitka_Cell_GET(generator_heap->var_ESC) == NULL);
Py_INCREF(tmp_assign_source_1);
Nuitka_Cell_SET(generator_heap->var_ESC, tmp_assign_source_1);

}
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9672c6a6e606ff96a1a7fdf742cd134c, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_read1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_read1 == NULL);
generator_heap->var_read1 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 150;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__sequence_to_key_events);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 150;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(generator_heap->var_sequence_to_key_events) == NULL);
Nuitka_Cell_SET(generator_heap->var_sequence_to_key_events, tmp_assign_source_3);

}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->var_paste_buffer == NULL);
generator_heap->var_paste_buffer = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_False;
assert(generator_heap->var_bracketed_paste == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_bracketed_paste = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a690e70dcc5cdd0dc8509a76e8b78c1f);
tmp_closure_1[0] = generator->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = generator->m_closure[1];
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_6 = MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token(tstate, tmp_annotations_1, tmp_closure_1);

assert(Nuitka_Cell_GET(generator_heap->var_on_token) == NULL);
Nuitka_Cell_SET(generator_heap->var_on_token, tmp_assign_source_6);

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_341ad1328217657d7dca5abd8ea41021);
tmp_closure_2[0] = generator_heap->var_on_token;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = generator->m_closure[0];
Py_INCREF(tmp_closure_2[1]);
tmp_assign_source_7 = MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token(tstate, tmp_annotations_2, tmp_closure_2);

assert(generator_heap->var_on_key_token == NULL);
generator_heap->var_on_key_token = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_3;
struct Nuitka_CellObject *tmp_closure_3[4];
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_9fffaa8175e90d193fbb5f71770e572d);
Py_INCREF(tmp_defaults_1);
tmp_closure_3[0] = generator_heap->var_ESC;
Py_INCREF(tmp_closure_3[0]);
tmp_closure_3[1] = generator_heap->var_on_token;
Py_INCREF(tmp_closure_3[1]);
tmp_closure_3[2] = generator->m_closure[0];
Py_INCREF(tmp_closure_3[2]);
tmp_closure_3[3] = generator_heap->var_sequence_to_key_events;
Py_INCREF(tmp_closure_3[3]);
tmp_assign_source_8 = MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys(tstate, tmp_defaults_1, tmp_annotations_3, tmp_closure_3);

assert(Nuitka_Cell_GET(generator_heap->var_reissue_sequence_as_keys) == NULL);
Nuitka_Cell_SET(generator_heap->var_reissue_sequence_as_keys, tmp_assign_source_8);

}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 200;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_is_eof);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 200;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 200;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (generator_heap->tmp_res == 0) ? Py_True : Py_False;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
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
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_3;
int tmp_truth_name_1;
if (generator_heap->var_bracketed_paste == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_bracketed_paste);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 201;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_3 = generator_heap->var_bracketed_paste;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 201;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (generator_heap->var_paste_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_paste_buffer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 201;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_paste_buffer);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 201;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
tmp_str_arg_value_1 = const_str_empty;
if (generator_heap->var_paste_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_paste_buffer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = generator_heap->var_paste_buffer;
tmp_subscript_value_1 = mod_consts.const_slice_none_int_neg_1_none;
tmp_iterable_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_iterable_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 208;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_pasted_text;
    generator_heap->var_pasted_text = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_old_value_1;
PyObject *tmp_new_value_1;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(generator_heap->var_on_token);
tmp_expression_value_5 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Paste);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_pasted_text);
tmp_str_arg_value_2 = generator_heap->var_pasted_text;
tmp_old_value_1 = mod_consts.const_str_null;
tmp_new_value_1 = const_str_empty;
tmp_args_element_value_2 = UNICODE_REPLACE3(tstate, tmp_str_arg_value_2, tmp_old_value_1, tmp_new_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_2);

generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 210;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 210;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 210;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_list_arg_value_1;
if (generator_heap->var_paste_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_paste_buffer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 211;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_list_arg_value_1 = generator_heap->var_paste_buffer;
LIST_CLEAR(tmp_list_arg_value_1);
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_3;
if (generator_heap->var_read1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read1);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_called_value_3 = generator_heap->var_read1;
generator->m_frame->m_frame.f_lineno = 214;
tmp_expression_value_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_6;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 214;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = yield_return_value;
{
    PyObject *old = generator_heap->var_character;
    generator_heap->var_character = tmp_assign_source_10;
    Py_XDECREF(old);
}

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
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = module_var_accessor_textual$_xterm_parser$ParseEOF(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ParseEOF);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 215;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 215;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto try_return_handler_3;
goto branch_end_3;
branch_no_3:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 213;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto frame_return_exit_1;
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
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
if (generator_heap->var_bracketed_paste == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_bracketed_paste);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 218;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->var_bracketed_paste);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 218;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
if (generator_heap->var_paste_buffer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_paste_buffer);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 219;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = generator_heap->var_paste_buffer;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_append);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 219;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_character);
tmp_args_element_value_3 = generator_heap->var_character;
generator->m_frame->m_frame.f_lineno = 219;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 219;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_debug_log);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_222cf4559b78ab4db3bb88c1e9d281e6;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_4;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_character);
tmp_operand_value_4 = generator_heap->var_character;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_4 == NULL));
generator->m_frame->m_frame.f_lineno = 221;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 221;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->var_character);
tmp_cmp_expr_left_2 = generator_heap->var_character;
if (Nuitka_Cell_GET(generator_heap->var_ESC) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ESC);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_2 = Nuitka_Cell_GET(generator_heap->var_ESC);
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 222;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_5;
if (generator_heap->var_bracketed_paste == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_bracketed_paste);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_5 = generator_heap->var_bracketed_paste;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 223;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
if (Nuitka_Cell_GET(generator_heap->var_sequence_to_key_events) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence_to_key_events);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_6 = Nuitka_Cell_GET(generator_heap->var_sequence_to_key_events);
CHECK_OBJECT(generator_heap->var_character);
tmp_args_element_value_5 = generator_heap->var_character;
generator->m_frame->m_frame.f_lineno = 224;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_1__for_iterator;
    generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
generator_heap->exception_lineno = 224;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_13 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_event;
    generator_heap->var_event = tmp_assign_source_13;
    Py_INCREF(generator_heap->var_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_6;
if (generator_heap->var_on_key_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_key_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 225;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_4;
}

tmp_called_value_7 = generator_heap->var_on_key_token;
CHECK_OBJECT(generator_heap->var_event);
tmp_args_element_value_6 = generator_heap->var_event;
generator->m_frame->m_frame.f_lineno = 225;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 225;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 224;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_6;
CHECK_OBJECT(generator_heap->var_character);
tmp_operand_value_6 = generator_heap->var_character;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 226;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_7:;
goto loop_start_1;
branch_no_5:;
{
PyObject *tmp_assign_source_14;
if (Nuitka_Cell_GET(generator_heap->var_ESC) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ESC);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 231;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_14 = Nuitka_Cell_GET(generator_heap->var_ESC);
{
    PyObject *old = Nuitka_Cell_GET(generator_heap->var_sequence);
    Nuitka_Cell_SET(generator_heap->var_sequence, tmp_assign_source_14);
    Py_INCREF(tmp_assign_source_14);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_4;
struct Nuitka_CellObject *tmp_closure_4[4];
tmp_defaults_2 = mod_consts.const_tuple_true_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_367a10d8c28961f8a808126fd761fee6);
Py_INCREF(tmp_defaults_2);
tmp_closure_4[0] = generator_heap->var_ESC;
Py_INCREF(tmp_closure_4[0]);
tmp_closure_4[1] = generator_heap->var_on_token;
Py_INCREF(tmp_closure_4[1]);
tmp_closure_4[2] = generator_heap->var_reissue_sequence_as_keys;
Py_INCREF(tmp_closure_4[2]);
tmp_closure_4[3] = generator_heap->var_sequence;
Py_INCREF(tmp_closure_4[3]);
tmp_assign_source_15 = MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence(tstate, tmp_defaults_2, tmp_annotations_4, tmp_closure_4);

{
    PyObject *old = generator_heap->var_send_sequence;
    generator_heap->var_send_sequence = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
loop_start_3:;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_expression_value_10;
if (generator_heap->var_read1 == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_read1);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 242;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_5;
}

tmp_called_value_8 = generator_heap->var_read1;
tmp_expression_value_10 = module_var_accessor_textual$_xterm_parser$constants(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_constants);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 242;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ESCAPE_DELAY);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 242;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
generator->m_frame->m_frame.f_lineno = 242;
tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 242;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_9;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 242;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_16 = yield_return_value;
{
    PyObject *old = generator_heap->var_new_character;
    generator_heap->var_new_character = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 2.
generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_4, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = module_var_accessor_textual$_xterm_parser$ParseTimeout(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ParseTimeout);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 243;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 243;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_8 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_5;
if (generator_heap->var_send_sequence == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_send_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_value_9 = generator_heap->var_send_sequence;
generator->m_frame->m_frame.f_lineno = 244;
tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 244;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto try_break_handler_6;
goto branch_end_8;
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = module_var_accessor_textual$_xterm_parser$ParseEOF(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ParseEOF);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 246;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 246;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_9 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_6;
if (generator_heap->var_send_sequence == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_send_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_value_10 = generator_heap->var_send_sequence;
generator->m_frame->m_frame.f_lineno = 247;
tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 247;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto try_return_handler_6;
goto branch_end_9;
branch_no_9:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 241;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
goto try_except_handler_6;
branch_end_9:;
branch_end_8:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// try break handler code:
try_break_handler_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_2);

goto loop_end_3;
// End of try:
// End of try:
try_end_3:;
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(generator_heap->var_new_character);
tmp_cmp_expr_left_5 = generator_heap->var_new_character;
if (Nuitka_Cell_GET(generator_heap->var_ESC) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ESC);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_5 = Nuitka_Cell_GET(generator_heap->var_ESC);
tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 250;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_7;
if (generator_heap->var_send_sequence == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_send_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_11 = generator_heap->var_send_sequence;
generator->m_frame->m_frame.f_lineno = 251;
tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_process_alt_tuple);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 251;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_assign_source_17;
if (generator_heap->var_character == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_character);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 252;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_17 = generator_heap->var_character;
{
    PyObject *old = Nuitka_Cell_GET(generator_heap->var_sequence);
    Nuitka_Cell_SET(generator_heap->var_sequence, tmp_assign_source_17);
    Py_INCREF(tmp_assign_source_17);
    Py_XDECREF(old);
}

}
goto loop_start_3;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (Nuitka_Cell_GET(generator_heap->var_sequence) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = Nuitka_Cell_GET(generator_heap->var_sequence);
CHECK_OBJECT(generator_heap->var_new_character);
tmp_iadd_expr_right_1 = generator_heap->var_new_character;
generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 255;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_18 = tmp_iadd_expr_left_1;
Nuitka_Cell_SET(generator_heap->var_sequence, tmp_assign_source_18);

}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_len_arg_1 = Nuitka_Cell_GET(generator_heap->var_sequence);
tmp_cmp_expr_left_6 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = module_var_accessor_textual$_xterm_parser$_MAX_SEQUENCE_SEARCH_THRESHOLD(tstate);
if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD);
}

if (tmp_cmp_expr_right_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_6);

generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 256;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_8;
if (Nuitka_Cell_GET(generator_heap->var_reissue_sequence_as_keys) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_reissue_sequence_as_keys);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_12 = Nuitka_Cell_GET(generator_heap->var_reissue_sequence_as_keys);
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_args_element_value_8 = Nuitka_Cell_GET(generator_heap->var_sequence);
generator->m_frame->m_frame.f_lineno = 257;
tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 257;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
goto loop_end_3;
branch_no_11:;
branch_end_10:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_9;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_debug_log);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_54f4fe879e57897f68513e4b506400ed;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_operand_value_7;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_operand_value_7 = Nuitka_Cell_GET(generator_heap->var_sequence);
tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_7);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_args_element_value_9 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_9 == NULL));
generator->m_frame->m_frame.f_lineno = 260;
tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 260;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_cmp_expr_left_7 = Nuitka_Cell_GET(generator_heap->var_sequence);
tmp_cmp_expr_right_7 = module_var_accessor_textual$_xterm_parser$SPECIAL_SEQUENCES(tstate);
if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_SPECIAL_SEQUENCES);
}

if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 261;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = (generator_heap->tmp_res == 1) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_cmp_expr_left_8 = Nuitka_Cell_GET(generator_heap->var_sequence);
tmp_cmp_expr_right_8 = module_var_accessor_textual$_xterm_parser$FOCUSIN(tstate);
if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_FOCUSIN);
}

if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 262;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_14 = Nuitka_Cell_GET(generator_heap->var_on_token);
tmp_called_instance_1 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 263;
tmp_args_element_value_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_AppFocus);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 263;
tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_10);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 263;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
goto branch_end_13;
branch_no_13:;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_cmp_expr_left_9 = Nuitka_Cell_GET(generator_heap->var_sequence);
tmp_cmp_expr_right_9 = module_var_accessor_textual$_xterm_parser$FOCUSOUT(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_FOCUSOUT);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 264;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_11;
PyObject *tmp_called_instance_2;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_15 = Nuitka_Cell_GET(generator_heap->var_on_token);
tmp_called_instance_2 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 265;
tmp_args_element_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_AppBlur);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 265;
tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 265;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
goto branch_end_14;
branch_no_14:;
{
nuitka_bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_cmp_expr_left_10 = Nuitka_Cell_GET(generator_heap->var_sequence);
tmp_cmp_expr_right_10 = module_var_accessor_textual$_xterm_parser$BRACKETED_PASTE_START(tstate);
if (unlikely(tmp_cmp_expr_right_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_BRACKETED_PASTE_START);
}

if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 266;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = Py_True;
{
    PyObject *old = generator_heap->var_bracketed_paste;
    generator_heap->var_bracketed_paste = tmp_assign_source_19;
    Py_INCREF(generator_heap->var_bracketed_paste);
    Py_XDECREF(old);
}

}
goto branch_end_15;
branch_no_15:;
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_cmp_expr_left_11 = Nuitka_Cell_GET(generator_heap->var_sequence);
tmp_cmp_expr_right_11 = module_var_accessor_textual$_xterm_parser$BRACKETED_PASTE_END(tstate);
if (unlikely(tmp_cmp_expr_right_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_BRACKETED_PASTE_END);
}

if (tmp_cmp_expr_right_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 268;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = Py_False;
{
    PyObject *old = generator_heap->var_bracketed_paste;
    generator_heap->var_bracketed_paste = tmp_assign_source_20;
    Py_INCREF(generator_heap->var_bracketed_paste);
    Py_XDECREF(old);
}

}
branch_no_16:;
branch_end_15:;
branch_end_14:;
branch_end_13:;
goto loop_end_3;
branch_no_12:;
{
nuitka_bool tmp_condition_result_17;
PyObject *tmp_outline_return_value_1;
int tmp_truth_name_3;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_12;
tmp_called_instance_3 = module_var_accessor_textual$_xterm_parser$_re_in_band_window_resize(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__re_in_band_window_resize);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 271;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_args_element_value_12 = Nuitka_Cell_GET(generator_heap->var_sequence);
generator->m_frame->m_frame.f_lineno = 271;
tmp_assign_source_21 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_fullmatch, tmp_args_element_value_12);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 271;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = generator_heap->tmp_assignment_expr_1__value;
    generator_heap->tmp_assignment_expr_1__value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_assign_source_22 = generator_heap->tmp_assignment_expr_1__value;
{
    PyObject *old = generator_heap->var_match;
    generator_heap->var_match = tmp_assign_source_22;
    Py_INCREF(generator_heap->var_match);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_outline_return_value_1 = generator_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_outline_return_value_1);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
Py_DECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_outline_return_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_outline_return_value_1);

generator_heap->exception_lineno = 271;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_17 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iter_arg_2;
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_instance_4;
CHECK_OBJECT(generator_heap->var_match);
tmp_called_instance_4 = generator_heap->var_match;
generator->m_frame->m_frame.f_lineno = 273;
tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_groups);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_9;
}
assert(generator_heap->tmp_listcomp_1__$0 == NULL);
generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = MAKE_LIST_EMPTY(tstate, 0);
assert(generator_heap->tmp_listcomp_1__contraction == NULL);
generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_25;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_26;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
tmp_next_source_2 = generator_heap->tmp_listcomp_1__$0;
tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_26 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
generator_heap->exception_lineno = 272;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
    generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_27;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
tmp_assign_source_27 = generator_heap->tmp_listcomp_1__iter_value_0;
{
    PyObject *old = generator_heap->outline_0_var_group;
    generator_heap->outline_0_var_group = tmp_assign_source_27;
    Py_INCREF(generator_heap->outline_0_var_group);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
CHECK_OBJECT(generator_heap->outline_0_var_group);
tmp_expression_value_13 = generator_heap->outline_0_var_group;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_partition);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
generator->m_frame->m_frame.f_lineno = 273;
tmp_expression_value_12 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_chr_58_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_subscript_value_2 = const_int_0;
tmp_append_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 273;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
tmp_iter_arg_2 = generator_heap->tmp_listcomp_1__contraction;
Py_INCREF(tmp_iter_arg_2);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
Py_DECREF(generator_heap->tmp_listcomp_1__$0);
generator_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
generator_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
Py_DECREF(generator_heap->tmp_listcomp_1__$0);
generator_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
generator_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(generator_heap->outline_0_var_group);
generator_heap->outline_0_var_group = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->outline_0_var_group);
generator_heap->outline_0_var_group = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
generator_heap->exception_lineno = 272;
goto try_except_handler_8;
outline_result_2:;
tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 4);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_30 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 2, 4);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
    generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_31 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 3, 4);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_4;
    generator_heap->tmp_tuple_unpack_1__element_4 = tmp_assign_source_31;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 4);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 272;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_11;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_11:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_9;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

goto try_except_handler_8;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_4);
generator_heap->tmp_tuple_unpack_1__element_4 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_32;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_32 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_height;
    generator_heap->var_height = tmp_assign_source_32;
    Py_INCREF(generator_heap->var_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_33;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_33 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_width;
    generator_heap->var_width = tmp_assign_source_33;
    Py_INCREF(generator_heap->var_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
tmp_assign_source_34 = generator_heap->tmp_tuple_unpack_1__element_3;
{
    PyObject *old = generator_heap->var_pixel_height;
    generator_heap->var_pixel_height = tmp_assign_source_34;
    Py_INCREF(generator_heap->var_pixel_height);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

{
PyObject *tmp_assign_source_35;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_4);
tmp_assign_source_35 = generator_heap->tmp_tuple_unpack_1__element_4;
{
    PyObject *old = generator_heap->var_pixel_width;
    generator_heap->var_pixel_width = tmp_assign_source_35;
    Py_INCREF(generator_heap->var_pixel_width);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_4);
generator_heap->tmp_tuple_unpack_1__element_4 = NULL;

{
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_13;
PyObject *tmp_tuple_element_3;
PyObject *tmp_int_arg_1;
PyObject *tmp_args_element_value_14;
PyObject *tmp_tuple_element_4;
PyObject *tmp_int_arg_3;
tmp_expression_value_15 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Resize);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_from_dimensions);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_width);
tmp_int_arg_1 = generator_heap->var_width;
tmp_tuple_element_3 = PyNumber_Int(tmp_int_arg_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_17);

generator_heap->exception_lineno = 276;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_int_arg_2;
PyTuple_SET_ITEM(tmp_args_element_value_13, 0, tmp_tuple_element_3);
CHECK_OBJECT(generator_heap->var_height);
tmp_int_arg_2 = generator_heap->var_height;
tmp_tuple_element_3 = PyNumber_Int(tmp_int_arg_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 276;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_args_element_value_13, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_args_element_value_13);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
CHECK_OBJECT(generator_heap->var_pixel_width);
tmp_int_arg_3 = generator_heap->var_pixel_width;
tmp_tuple_element_4 = PyNumber_Int(tmp_int_arg_3);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_args_element_value_13);

generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_int_arg_4;
PyTuple_SET_ITEM(tmp_args_element_value_14, 0, tmp_tuple_element_4);
CHECK_OBJECT(generator_heap->var_pixel_height);
tmp_int_arg_4 = generator_heap->var_pixel_height;
tmp_tuple_element_4 = PyNumber_Int(tmp_int_arg_4);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 277;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_args_element_value_14, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_14);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
generator->m_frame->m_frame.f_lineno = 275;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 275;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_resize_event;
    generator_heap->var_resize_event = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(generator_heap->var_resize_event);
tmp_expression_value_16 = generator_heap->var_resize_event;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_size);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_terminal_size, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 280;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_17;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(generator_heap->var_resize_event);
tmp_expression_value_17 = generator_heap->var_resize_event;
tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_pixel_size);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_terminal_pixel_size, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 281;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_True;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_3 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_mouse_pixels, tmp_assattr_value_3);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 282;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_15;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_18 = Nuitka_Cell_GET(generator_heap->var_on_token);
CHECK_OBJECT(generator_heap->var_resize_event);
tmp_args_element_value_15 = generator_heap->var_resize_event;
generator->m_frame->m_frame.f_lineno = 283;
tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_15);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 283;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
goto loop_end_3;
branch_no_17:;
{
bool tmp_condition_result_18;
PyObject *tmp_operand_value_8;
if (generator_heap->var_bracketed_paste == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_bracketed_paste);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 286;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_8 = generator_heap->var_bracketed_paste;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 286;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_18 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_16;
tmp_called_instance_5 = module_var_accessor_textual$_xterm_parser$_re_cursor_position(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__re_cursor_position);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 288;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_args_element_value_16 = Nuitka_Cell_GET(generator_heap->var_sequence);
generator->m_frame->m_frame.f_lineno = 288;
tmp_assign_source_37 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_match, tmp_args_element_value_16);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 288;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_cursor_position_match;
    generator_heap->var_cursor_position_match = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(generator_heap->var_cursor_position_match);
tmp_cmp_expr_left_12 = generator_heap->var_cursor_position_match;
tmp_cmp_expr_right_12 = Py_None;
tmp_condition_result_19 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_iter_arg_4;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_called_instance_6;
tmp_called_value_19 = (PyObject *)&PyMap_Type;
tmp_args_element_value_17 = (PyObject *)&PyLong_Type;
CHECK_OBJECT(generator_heap->var_cursor_position_match);
tmp_called_instance_6 = generator_heap->var_cursor_position_match;
generator->m_frame->m_frame.f_lineno = 290;
tmp_args_element_value_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_groups);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
generator->m_frame->m_frame.f_lineno = 290;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_12;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
    generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_unpack_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_39 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
    generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_39;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_unpack_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_unpack_6 = generator_heap->tmp_tuple_unpack_2__source_iter;
tmp_assign_source_40 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
    generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_2__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 290;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_13;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_13:;
generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_11 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_11;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_12:;
generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_12 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_12;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_41;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
tmp_assign_source_41 = generator_heap->tmp_tuple_unpack_2__element_1;
{
    PyObject *old = generator_heap->var_row;
    generator_heap->var_row = tmp_assign_source_41;
    Py_INCREF(generator_heap->var_row);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_42;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
tmp_assign_source_42 = generator_heap->tmp_tuple_unpack_2__element_2;
{
    PyObject *old = generator_heap->var_column;
    generator_heap->var_column = tmp_assign_source_42;
    Py_INCREF(generator_heap->var_column);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_43;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_int_arg_5;
CHECK_OBJECT(generator_heap->var_column);
tmp_int_arg_5 = generator_heap->var_column;
tmp_sub_expr_left_1 = PyNumber_Int(tmp_int_arg_5);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_43 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 291;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_x;
    generator_heap->var_x = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_int_arg_6;
CHECK_OBJECT(generator_heap->var_row);
tmp_int_arg_6 = generator_heap->var_row;
tmp_sub_expr_left_2 = PyNumber_Int(tmp_int_arg_6);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_assign_source_44 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 292;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_y;
    generator_heap->var_y = tmp_assign_source_44;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_20;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_20 = Nuitka_Cell_GET(generator_heap->var_on_token);
tmp_called_instance_7 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_x);
tmp_args_element_value_20 = generator_heap->var_x;
CHECK_OBJECT(generator_heap->var_y);
tmp_args_element_value_21 = generator_heap->var_y;
generator->m_frame->m_frame.f_lineno = 293;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_args_element_value_19 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_7,
        mod_consts.const_str_plain_CursorPosition,
        call_args
    );
}

if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 293;
tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_19);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 293;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
goto loop_end_3;
branch_no_19:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_22;
if (Nuitka_Cell_GET(generator_heap->var_sequence_to_key_events) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence_to_key_events);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 297;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_21 = Nuitka_Cell_GET(generator_heap->var_sequence_to_key_events);
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_args_element_value_22 = Nuitka_Cell_GET(generator_heap->var_sequence);
generator->m_frame->m_frame.f_lineno = 297;
tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_22);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 297;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_45 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 297;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_key_events;
    generator_heap->var_key_events = tmp_assign_source_45;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(generator_heap->var_key_events);
tmp_iter_arg_5 = generator_heap->var_key_events;
tmp_assign_source_46 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
    generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_46;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_47;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
tmp_assign_source_47 = ITERATOR_NEXT_ITERATOR(tmp_next_source_3);
if (tmp_assign_source_47 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
generator_heap->exception_lineno = 298;
        goto try_except_handler_14;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
    generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_47;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_48;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
tmp_assign_source_48 = generator_heap->tmp_for_loop_2__iter_value;
{
    PyObject *old = generator_heap->var_key_event;
    generator_heap->var_key_event = tmp_assign_source_48;
    Py_INCREF(generator_heap->var_key_event);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_22;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_23;
if (generator_heap->var_on_key_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_key_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 299;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_14;
}

tmp_called_value_22 = generator_heap->var_on_key_token;
CHECK_OBJECT(generator_heap->var_key_event);
tmp_args_element_value_23 = generator_heap->var_key_event;
generator->m_frame->m_frame.f_lineno = 299;
tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_23);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 299;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 298;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto try_except_handler_14;
}
goto loop_start_5;
loop_end_5:;
goto try_end_8;
// Exception handler code:
try_except_handler_14:;
generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_13 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_13;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
generator_heap->tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
generator_heap->tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_20;
CHECK_OBJECT(generator_heap->var_key_events);
tmp_condition_result_20 = CHECK_IF_TRUE(generator_heap->var_key_events) == 1;
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
goto loop_end_3;
branch_no_20:;
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_24;
tmp_called_instance_8 = module_var_accessor_textual$_xterm_parser$_re_mouse_event(tstate);
if (unlikely(tmp_called_instance_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__re_mouse_event);
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 303;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_args_element_value_24 = Nuitka_Cell_GET(generator_heap->var_sequence);
generator->m_frame->m_frame.f_lineno = 303;
tmp_assign_source_49 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_match, tmp_args_element_value_24);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 303;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_mouse_match;
    generator_heap->var_mouse_match = tmp_assign_source_49;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(generator_heap->var_mouse_match);
tmp_cmp_expr_left_13 = generator_heap->var_mouse_match;
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_21 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_instance_9;
CHECK_OBJECT(generator_heap->var_mouse_match);
tmp_called_instance_9 = generator_heap->var_mouse_match;
generator->m_frame->m_frame.f_lineno = 305;
tmp_assign_source_50 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_9,
    mod_consts.const_str_plain_group,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 305;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_mouse_code;
    generator_heap->var_mouse_code = tmp_assign_source_50;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_instance_10;
PyObject *tmp_args_element_value_25;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 306;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_10 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_mouse_code);
tmp_args_element_value_25 = generator_heap->var_mouse_code;
generator->m_frame->m_frame.f_lineno = 306;
tmp_assign_source_51 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_parse_mouse_code, tmp_args_element_value_25);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 306;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_mouse_event;
    generator_heap->var_mouse_event = tmp_assign_source_51;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(generator_heap->var_mouse_event);
tmp_cmp_expr_left_14 = generator_heap->var_mouse_event;
tmp_cmp_expr_right_14 = Py_None;
tmp_condition_result_22 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_call_result_15;
PyObject *tmp_args_element_value_26;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 308;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_23 = Nuitka_Cell_GET(generator_heap->var_on_token);
CHECK_OBJECT(generator_heap->var_mouse_event);
tmp_args_element_value_26 = generator_heap->var_mouse_event;
generator->m_frame->m_frame.f_lineno = 308;
tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_26);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 308;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
branch_no_22:;
goto loop_end_3;
branch_no_21:;
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_instance_11;
PyObject *tmp_args_element_value_27;
tmp_called_instance_11 = module_var_accessor_textual$_xterm_parser$_re_terminal_mode_response(tstate);
if (unlikely(tmp_called_instance_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__re_terminal_mode_response);
}

if (tmp_called_instance_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 313;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_sequence));
tmp_args_element_value_27 = Nuitka_Cell_GET(generator_heap->var_sequence);
generator->m_frame->m_frame.f_lineno = 313;
tmp_assign_source_52 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_11, mod_consts.const_str_plain_match, tmp_args_element_value_27);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 313;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_mode_report_match;
    generator_heap->var_mode_report_match = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(generator_heap->var_mode_report_match);
tmp_cmp_expr_left_15 = generator_heap->var_mode_report_match;
tmp_cmp_expr_right_15 = Py_None;
tmp_condition_result_23 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(generator_heap->var_mode_report_match);
tmp_expression_value_18 = generator_heap->var_mode_report_match;
tmp_subscript_value_3 = mod_consts.const_str_plain_mode_id;
tmp_assign_source_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_3);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 315;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_mode_id;
    generator_heap->var_mode_id = tmp_assign_source_53;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_int_arg_7;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(generator_heap->var_mode_report_match);
tmp_expression_value_19 = generator_heap->var_mode_report_match;
tmp_subscript_value_4 = mod_consts.const_str_plain_setting_parameter;
tmp_int_arg_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_4);
if (tmp_int_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 316;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_54 = PyNumber_Int(tmp_int_arg_7);
CHECK_OBJECT(tmp_int_arg_7);
Py_DECREF(tmp_int_arg_7);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 316;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_setting_parameter;
    generator_heap->var_setting_parameter = tmp_assign_source_54;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_24;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
CHECK_OBJECT(generator_heap->var_mode_id);
tmp_cmp_expr_left_16 = generator_heap->var_mode_id;
tmp_cmp_expr_right_16 = mod_consts.const_str_plain_2026;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 317;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 317;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(generator_heap->var_setting_parameter);
tmp_cmp_expr_left_17 = generator_heap->var_setting_parameter;
tmp_cmp_expr_right_17 = const_int_0;
tmp_and_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 317;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_24 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_24 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_called_value_24;
PyObject *tmp_call_result_16;
PyObject *tmp_args_element_value_28;
PyObject *tmp_called_instance_12;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 318;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_24 = Nuitka_Cell_GET(generator_heap->var_on_token);
tmp_called_instance_12 = module_var_accessor_textual$_xterm_parser$messages(tstate);
if (unlikely(tmp_called_instance_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_messages);
}

if (tmp_called_instance_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 318;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 318;
tmp_args_element_value_28 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_12, mod_consts.const_str_plain_TerminalSupportsSynchronizedOutput);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 318;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 318;
tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_28);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 318;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
goto branch_end_24;
branch_no_24:;
{
nuitka_bool tmp_condition_result_25;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_4;
PyObject *tmp_operand_value_9;
CHECK_OBJECT(generator_heap->var_mode_id);
tmp_cmp_expr_left_18 = generator_heap->var_mode_id;
tmp_cmp_expr_right_18 = mod_consts.const_str_plain_2048;
tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 320;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
tmp_expression_value_20 = module_var_accessor_textual$_xterm_parser$constants(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_constants);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 321;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_SMOOTH_SCROLL);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 321;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 321;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 321;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
tmp_operand_value_9 = module_var_accessor_textual$_xterm_parser$IS_ITERM(tstate);
if (unlikely(tmp_operand_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_IS_ITERM);
}

if (tmp_operand_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 322;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 322;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_3 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_and_right_value_3 = tmp_and_left_value_4;
and_end_4:;
tmp_condition_result_25 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_25 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_instance_13;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_element_value_29;
tmp_expression_value_21 = module_var_accessor_textual$_xterm_parser$messages(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_messages);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_InBandWindowResize);
if (tmp_called_instance_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(generator_heap->var_setting_parameter);
tmp_args_element_value_29 = generator_heap->var_setting_parameter;
generator->m_frame->m_frame.f_lineno = 326;
tmp_assign_source_55 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_13, mod_consts.const_str_plain_from_setting_parameter, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_instance_13);
Py_DECREF(tmp_called_instance_13);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 326;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = generator_heap->var_in_band_event;
    generator_heap->var_in_band_event = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_25;
PyObject *tmp_call_result_17;
PyObject *tmp_args_element_value_30;
if (Nuitka_Cell_GET(generator_heap->var_on_token) == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 330;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_25 = Nuitka_Cell_GET(generator_heap->var_on_token);
CHECK_OBJECT(generator_heap->var_in_band_event);
tmp_args_element_value_30 = generator_heap->var_in_band_event;
generator->m_frame->m_frame.f_lineno = 330;
tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_30);
if (tmp_call_result_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 330;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_17);
Py_DECREF(tmp_call_result_17);
}
branch_no_25:;
branch_end_24:;
goto loop_end_3;
branch_no_23:;
branch_no_18:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 240;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 200;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;
{
bool tmp_condition_result_26;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_expression_value_22;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_22 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain__debug_log_file);
if (tmp_cmp_expr_left_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 333;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_19 = Py_None;
tmp_condition_result_26 = (tmp_cmp_expr_left_19 != tmp_cmp_expr_right_19) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_19);
Py_DECREF(tmp_cmp_expr_left_19);
if (tmp_condition_result_26 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_called_instance_14;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_18;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 334;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain__debug_log_file);
if (tmp_called_instance_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 334;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 334;
tmp_call_result_18 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_14, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_14);
Py_DECREF(tmp_called_instance_14);
if (tmp_call_result_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 334;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_18);
Py_DECREF(tmp_call_result_18);
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_None;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 335;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_4 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__debug_log_file, tmp_assattr_value_4);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 335;
generator_heap->type_description_1 = "ccoccocococooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_26:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto try_return_handler_1;

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
    generator->m_closure[1],
    generator_heap->var_paste_buffer,
    generator_heap->var_sequence,
    generator_heap->var_ESC,
    generator_heap->var_read1,
    generator_heap->var_sequence_to_key_events,
    generator_heap->var_bracketed_paste,
    generator_heap->var_on_token,
    generator_heap->var_on_key_token,
    generator_heap->var_reissue_sequence_as_keys,
    generator_heap->var_pasted_text,
    generator_heap->var_character,
    generator_heap->var_event,
    generator_heap->var_send_sequence,
    generator_heap->var_new_character,
    generator_heap->var_match,
    generator_heap->var_height,
    generator_heap->var_width,
    generator_heap->var_pixel_height,
    generator_heap->var_pixel_width,
    generator_heap->var_resize_event,
    generator_heap->var_cursor_position_match,
    generator_heap->var_row,
    generator_heap->var_column,
    generator_heap->var_x,
    generator_heap->var_y,
    generator_heap->var_key_events,
    generator_heap->var_key_event,
    generator_heap->var_mouse_match,
    generator_heap->var_mouse_code,
    generator_heap->var_mouse_event,
    generator_heap->var_mode_report_match,
    generator_heap->var_mode_id,
    generator_heap->var_setting_parameter,
    generator_heap->var_in_band_event
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
goto try_end_9;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(generator_heap->var_paste_buffer);
generator_heap->var_paste_buffer = NULL;
CHECK_OBJECT(generator_heap->var_sequence);
CHECK_OBJECT(generator_heap->var_sequence);
Py_DECREF(generator_heap->var_sequence);
generator_heap->var_sequence = NULL;
CHECK_OBJECT(generator_heap->var_ESC);
CHECK_OBJECT(generator_heap->var_ESC);
Py_DECREF(generator_heap->var_ESC);
generator_heap->var_ESC = NULL;
Py_XDECREF(generator_heap->var_read1);
generator_heap->var_read1 = NULL;
CHECK_OBJECT(generator_heap->var_sequence_to_key_events);
CHECK_OBJECT(generator_heap->var_sequence_to_key_events);
Py_DECREF(generator_heap->var_sequence_to_key_events);
generator_heap->var_sequence_to_key_events = NULL;
Py_XDECREF(generator_heap->var_bracketed_paste);
generator_heap->var_bracketed_paste = NULL;
CHECK_OBJECT(generator_heap->var_on_token);
CHECK_OBJECT(generator_heap->var_on_token);
Py_DECREF(generator_heap->var_on_token);
generator_heap->var_on_token = NULL;
Py_XDECREF(generator_heap->var_on_key_token);
generator_heap->var_on_key_token = NULL;
CHECK_OBJECT(generator_heap->var_reissue_sequence_as_keys);
CHECK_OBJECT(generator_heap->var_reissue_sequence_as_keys);
Py_DECREF(generator_heap->var_reissue_sequence_as_keys);
generator_heap->var_reissue_sequence_as_keys = NULL;
Py_XDECREF(generator_heap->var_pasted_text);
generator_heap->var_pasted_text = NULL;
Py_XDECREF(generator_heap->var_character);
generator_heap->var_character = NULL;
Py_XDECREF(generator_heap->var_event);
generator_heap->var_event = NULL;
Py_XDECREF(generator_heap->var_send_sequence);
generator_heap->var_send_sequence = NULL;
Py_XDECREF(generator_heap->var_new_character);
generator_heap->var_new_character = NULL;
Py_XDECREF(generator_heap->var_match);
generator_heap->var_match = NULL;
Py_XDECREF(generator_heap->var_height);
generator_heap->var_height = NULL;
Py_XDECREF(generator_heap->var_width);
generator_heap->var_width = NULL;
Py_XDECREF(generator_heap->var_pixel_height);
generator_heap->var_pixel_height = NULL;
Py_XDECREF(generator_heap->var_pixel_width);
generator_heap->var_pixel_width = NULL;
Py_XDECREF(generator_heap->var_resize_event);
generator_heap->var_resize_event = NULL;
Py_XDECREF(generator_heap->var_cursor_position_match);
generator_heap->var_cursor_position_match = NULL;
Py_XDECREF(generator_heap->var_row);
generator_heap->var_row = NULL;
Py_XDECREF(generator_heap->var_column);
generator_heap->var_column = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
Py_XDECREF(generator_heap->var_y);
generator_heap->var_y = NULL;
Py_XDECREF(generator_heap->var_key_events);
generator_heap->var_key_events = NULL;
Py_XDECREF(generator_heap->var_key_event);
generator_heap->var_key_event = NULL;
Py_XDECREF(generator_heap->var_mouse_match);
generator_heap->var_mouse_match = NULL;
Py_XDECREF(generator_heap->var_mouse_code);
generator_heap->var_mouse_code = NULL;
Py_XDECREF(generator_heap->var_mouse_event);
generator_heap->var_mouse_event = NULL;
Py_XDECREF(generator_heap->var_mode_report_match);
generator_heap->var_mode_report_match = NULL;
Py_XDECREF(generator_heap->var_mode_id);
generator_heap->var_mode_id = NULL;
Py_XDECREF(generator_heap->var_setting_parameter);
generator_heap->var_setting_parameter = NULL;
Py_XDECREF(generator_heap->var_in_band_event);
generator_heap->var_in_band_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_14 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_paste_buffer);
generator_heap->var_paste_buffer = NULL;
CHECK_OBJECT(generator_heap->var_sequence);
CHECK_OBJECT(generator_heap->var_sequence);
Py_DECREF(generator_heap->var_sequence);
generator_heap->var_sequence = NULL;
CHECK_OBJECT(generator_heap->var_ESC);
CHECK_OBJECT(generator_heap->var_ESC);
Py_DECREF(generator_heap->var_ESC);
generator_heap->var_ESC = NULL;
Py_XDECREF(generator_heap->var_read1);
generator_heap->var_read1 = NULL;
CHECK_OBJECT(generator_heap->var_sequence_to_key_events);
CHECK_OBJECT(generator_heap->var_sequence_to_key_events);
Py_DECREF(generator_heap->var_sequence_to_key_events);
generator_heap->var_sequence_to_key_events = NULL;
Py_XDECREF(generator_heap->var_bracketed_paste);
generator_heap->var_bracketed_paste = NULL;
CHECK_OBJECT(generator_heap->var_on_token);
CHECK_OBJECT(generator_heap->var_on_token);
Py_DECREF(generator_heap->var_on_token);
generator_heap->var_on_token = NULL;
Py_XDECREF(generator_heap->var_on_key_token);
generator_heap->var_on_key_token = NULL;
CHECK_OBJECT(generator_heap->var_reissue_sequence_as_keys);
CHECK_OBJECT(generator_heap->var_reissue_sequence_as_keys);
Py_DECREF(generator_heap->var_reissue_sequence_as_keys);
generator_heap->var_reissue_sequence_as_keys = NULL;
Py_XDECREF(generator_heap->var_pasted_text);
generator_heap->var_pasted_text = NULL;
Py_XDECREF(generator_heap->var_character);
generator_heap->var_character = NULL;
Py_XDECREF(generator_heap->var_event);
generator_heap->var_event = NULL;
Py_XDECREF(generator_heap->var_send_sequence);
generator_heap->var_send_sequence = NULL;
Py_XDECREF(generator_heap->var_new_character);
generator_heap->var_new_character = NULL;
Py_XDECREF(generator_heap->var_match);
generator_heap->var_match = NULL;
Py_XDECREF(generator_heap->var_height);
generator_heap->var_height = NULL;
Py_XDECREF(generator_heap->var_width);
generator_heap->var_width = NULL;
Py_XDECREF(generator_heap->var_pixel_height);
generator_heap->var_pixel_height = NULL;
Py_XDECREF(generator_heap->var_pixel_width);
generator_heap->var_pixel_width = NULL;
Py_XDECREF(generator_heap->var_resize_event);
generator_heap->var_resize_event = NULL;
Py_XDECREF(generator_heap->var_cursor_position_match);
generator_heap->var_cursor_position_match = NULL;
Py_XDECREF(generator_heap->var_row);
generator_heap->var_row = NULL;
Py_XDECREF(generator_heap->var_column);
generator_heap->var_column = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
Py_XDECREF(generator_heap->var_y);
generator_heap->var_y = NULL;
Py_XDECREF(generator_heap->var_key_events);
generator_heap->var_key_events = NULL;
Py_XDECREF(generator_heap->var_key_event);
generator_heap->var_key_event = NULL;
Py_XDECREF(generator_heap->var_mouse_match);
generator_heap->var_mouse_match = NULL;
Py_XDECREF(generator_heap->var_mouse_code);
generator_heap->var_mouse_code = NULL;
Py_XDECREF(generator_heap->var_mouse_event);
generator_heap->var_mouse_event = NULL;
Py_XDECREF(generator_heap->var_mode_report_match);
generator_heap->var_mode_report_match = NULL;
Py_XDECREF(generator_heap->var_mode_id);
generator_heap->var_mode_id = NULL;
Py_XDECREF(generator_heap->var_setting_parameter);
generator_heap->var_setting_parameter = NULL;
Py_XDECREF(generator_heap->var_in_band_event);
generator_heap->var_in_band_event = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_14;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

goto function_exception_exit;
// End of try:
try_end_9:;
Py_XDECREF(generator_heap->var_paste_buffer);
generator_heap->var_paste_buffer = NULL;
CHECK_OBJECT(generator_heap->var_sequence);
CHECK_OBJECT(generator_heap->var_sequence);
Py_DECREF(generator_heap->var_sequence);
generator_heap->var_sequence = NULL;
CHECK_OBJECT(generator_heap->var_ESC);
CHECK_OBJECT(generator_heap->var_ESC);
Py_DECREF(generator_heap->var_ESC);
generator_heap->var_ESC = NULL;
Py_XDECREF(generator_heap->var_read1);
generator_heap->var_read1 = NULL;
CHECK_OBJECT(generator_heap->var_sequence_to_key_events);
CHECK_OBJECT(generator_heap->var_sequence_to_key_events);
Py_DECREF(generator_heap->var_sequence_to_key_events);
generator_heap->var_sequence_to_key_events = NULL;
Py_XDECREF(generator_heap->var_bracketed_paste);
generator_heap->var_bracketed_paste = NULL;
CHECK_OBJECT(generator_heap->var_on_token);
CHECK_OBJECT(generator_heap->var_on_token);
Py_DECREF(generator_heap->var_on_token);
generator_heap->var_on_token = NULL;
Py_XDECREF(generator_heap->var_on_key_token);
generator_heap->var_on_key_token = NULL;
CHECK_OBJECT(generator_heap->var_reissue_sequence_as_keys);
CHECK_OBJECT(generator_heap->var_reissue_sequence_as_keys);
Py_DECREF(generator_heap->var_reissue_sequence_as_keys);
generator_heap->var_reissue_sequence_as_keys = NULL;
Py_XDECREF(generator_heap->var_pasted_text);
generator_heap->var_pasted_text = NULL;
Py_XDECREF(generator_heap->var_character);
generator_heap->var_character = NULL;
Py_XDECREF(generator_heap->var_event);
generator_heap->var_event = NULL;
Py_XDECREF(generator_heap->var_send_sequence);
generator_heap->var_send_sequence = NULL;
Py_XDECREF(generator_heap->var_new_character);
generator_heap->var_new_character = NULL;
Py_XDECREF(generator_heap->var_match);
generator_heap->var_match = NULL;
Py_XDECREF(generator_heap->var_height);
generator_heap->var_height = NULL;
Py_XDECREF(generator_heap->var_width);
generator_heap->var_width = NULL;
Py_XDECREF(generator_heap->var_pixel_height);
generator_heap->var_pixel_height = NULL;
Py_XDECREF(generator_heap->var_pixel_width);
generator_heap->var_pixel_width = NULL;
Py_XDECREF(generator_heap->var_resize_event);
generator_heap->var_resize_event = NULL;
Py_XDECREF(generator_heap->var_cursor_position_match);
generator_heap->var_cursor_position_match = NULL;
Py_XDECREF(generator_heap->var_row);
generator_heap->var_row = NULL;
Py_XDECREF(generator_heap->var_column);
generator_heap->var_column = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
Py_XDECREF(generator_heap->var_y);
generator_heap->var_y = NULL;
Py_XDECREF(generator_heap->var_key_events);
generator_heap->var_key_events = NULL;
Py_XDECREF(generator_heap->var_key_event);
generator_heap->var_key_event = NULL;
Py_XDECREF(generator_heap->var_mouse_match);
generator_heap->var_mouse_match = NULL;
Py_XDECREF(generator_heap->var_mouse_code);
generator_heap->var_mouse_code = NULL;
Py_XDECREF(generator_heap->var_mouse_event);
generator_heap->var_mouse_event = NULL;
Py_XDECREF(generator_heap->var_mode_report_match);
generator_heap->var_mode_report_match = NULL;
Py_XDECREF(generator_heap->var_mode_id);
generator_heap->var_mode_id = NULL;
Py_XDECREF(generator_heap->var_setting_parameter);
generator_heap->var_setting_parameter = NULL;
Py_XDECREF(generator_heap->var_in_band_event);
generator_heap->var_in_band_event = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse_context,
        module_textual$_xterm_parser,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_72e35b033d8fbbf3faa81e6165b6c07d,
#endif
        code_objects_9672c6a6e606ff96a1a7fdf742cd134c,
        closure,
        2,
#if 1
        sizeof(struct textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_token = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token = MAKE_FUNCTION_FRAME(tstate, code_objects_f3be47ee1eb9cc9846f5a8a4cfe3473c, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token = cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_unicode_arg_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_debug_log);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_token);
tmp_unicode_arg_1 = par_token;
tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 156;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token->m_frame.f_lineno = 156;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_token);
tmp_isinstance_inst_1 = par_token;
tmp_expression_value_2 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Resize);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "occ";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_token);
tmp_expression_value_3 = par_token;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_size);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_terminal_size, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_token);
tmp_expression_value_4 = par_token;
tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_pixel_size);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_terminal_pixel_size, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_token_callback);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
CHECK_OBJECT(par_token);
tmp_args_element_value_2 = par_token;
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token->m_frame.f_lineno = 160;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "occ";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token,
    type_description_1,
    par_token,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token == cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token);
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token);

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
CHECK_OBJECT(par_token);
Py_DECREF(par_token);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_token);
Py_DECREF(par_token);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_event = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token = MAKE_FUNCTION_FRAME(tstate, code_objects_ea115d62c6249dfebf0463ed61a46305, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token = cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_event);
tmp_expression_value_1 = par_event;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_key);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_textual$_xterm_parser$Keys(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Keys);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 171;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Ignore);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 171;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "occ";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 172;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_debug_log);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_564c13fe7fe60703848f4acc37618dfa;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_event);
tmp_expression_value_4 = par_event;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_character);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "occ";
    goto tuple_build_exception_1;
}
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "occ";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "occ";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token->m_frame.f_lineno = 172;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 174;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_event);
tmp_args_element_value_2 = par_event;
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token->m_frame.f_lineno = 174;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "occ";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token,
    type_description_1,
    par_event,
    self->m_closure[1],
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token == cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token);
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token);

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
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_reissue_sequence = python_pars[0];
PyObject *par_process_alt = python_pars[1];
PyObject *var_alt = NULL;
PyObject *var_character = NULL;
PyObject *var_key_events = NULL;
PyObject *var_event = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_False;
assert(var_alt == NULL);
Py_INCREF(tmp_assign_source_1);
var_alt = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys = MAKE_FUNCTION_FRAME(tstate, code_objects_cbc003f25d76b5de2ee8647fb65af032, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys = cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_reissue_sequence);
tmp_truth_name_1 = CHECK_IF_TRUE(par_reissue_sequence);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "oooooocccc";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_operand_value_1;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 188;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_debug_log);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_REISSUE;
CHECK_OBJECT(par_reissue_sequence);
tmp_operand_value_1 = par_reissue_sequence;
tmp_args_element_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 188;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys->m_frame.f_lineno = 188;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_reissue_sequence);
tmp_iter_arg_1 = par_reissue_sequence;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooocccc";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooocccc";
exception_lineno = 189;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_character;
    var_character = tmp_assign_source_4;
    Py_INCREF(var_character);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_process_alt);
tmp_truth_name_2 = CHECK_IF_TRUE(par_process_alt);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_character);
tmp_cmp_expr_left_1 = var_character;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ESC);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_True;
{
    PyObject *old = var_alt;
    var_alt = tmp_assign_source_5;
    Py_INCREF(var_alt);
    Py_XDECREF(old);
}

}
goto loop_start_1;
branch_no_2:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequence_to_key_events);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[3]);
CHECK_OBJECT(var_character);
tmp_kw_call_arg_value_0_1 = var_character;
if (var_alt == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_alt);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = var_alt;
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys->m_frame.f_lineno = 193;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_alt_tuple);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
{
    PyObject *old = var_key_events;
    var_key_events = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(var_key_events);
tmp_iter_arg_2 = var_key_events;
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooocccc";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooocccc";
exception_lineno = 194;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_9 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_event;
    var_event = tmp_assign_source_9;
    Py_INCREF(var_event);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_event);
tmp_expression_value_2 = var_event;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_key);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_escape;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_process_alt);
tmp_operand_value_2 = par_process_alt;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_3 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys->m_frame.f_lineno = 196;
tmp_assign_source_10 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_Key,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_circumflex_accent_str_chr_94_tuple, 0)
);

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}
{
    PyObject *old = var_event;
    assert(old != NULL);
    var_event = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 197;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}

tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
if (var_event == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_event);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 197;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}

tmp_args_element_value_3 = var_event;
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys->m_frame.f_lineno = 197;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "oooooocccc";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooooocccc";
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

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
{
    PyObject *old = var_alt;
    var_alt = tmp_assign_source_11;
    Py_INCREF(var_alt);
    Py_XDECREF(old);
}

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "oooooocccc";
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
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys,
    type_description_1,
    par_reissue_sequence,
    par_process_alt,
    var_alt,
    var_character,
    var_key_events,
    var_event,
    self->m_closure[2],
    self->m_closure[0],
    self->m_closure[3],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys == cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys);
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys);

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
Py_XDECREF(var_alt);
var_alt = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_key_events);
var_key_events = NULL;
Py_XDECREF(var_event);
var_event = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_alt);
var_alt = NULL;
Py_XDECREF(var_character);
var_character = NULL;
Py_XDECREF(var_key_events);
var_key_events = NULL;
Py_XDECREF(var_event);
var_event = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_reissue_sequence);
Py_DECREF(par_reissue_sequence);
CHECK_OBJECT(par_process_alt);
Py_DECREF(par_process_alt);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_reissue_sequence);
Py_DECREF(par_reissue_sequence);
CHECK_OBJECT(par_process_alt);
Py_DECREF(par_process_alt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_process_alt = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence = MAKE_FUNCTION_FRAME(tstate, code_objects_669e4900f6a36d61ec43655e6d7af659, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence = cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[3]);
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ESC);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 235;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "occcc";
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
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_on_token);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 236;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_called_instance_1 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 236;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence->m_frame.f_lineno = 236;
tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_Key,
    &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_escape_str_chr_27_tuple, 0)
);

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence->m_frame.f_lineno = 236;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_reissue_sequence_as_keys);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(self->m_closure[3]);
CHECK_OBJECT(par_process_alt);
tmp_kw_call_dict_value_0_1 = par_process_alt;
frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence->m_frame.f_lineno = 238;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_process_alt_tuple);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "occcc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence,
    type_description_1,
    par_process_alt,
    self->m_closure[3],
    self->m_closure[0],
    self->m_closure[1],
    self->m_closure[2]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence == cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence);
    cache_frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence);

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
CHECK_OBJECT(par_process_alt);
Py_DECREF(par_process_alt);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_process_alt);
Py_DECREF(par_process_alt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__6__parse_extended_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_sequence = python_pars[1];
PyObject *var_key_tokens = NULL;
PyObject *var_match = NULL;
PyObject *var_codes = NULL;
PyObject *var_end = NULL;
PyObject *var_codepoint_str = NULL;
PyObject *var_modifiers_str = NULL;
PyObject *var_text_str = NULL;
PyObject *var__ = NULL;
PyObject *var_codepoint = NULL;
PyObject *var_modifiers = NULL;
PyObject *var_text = NULL;
PyObject *var_key = NULL;
PyObject *var_modifier_bits = NULL;
PyObject *var_bit = NULL;
PyObject *var_modifier = NULL;
PyObject *tmp_assignment_expr_1__value = NULL;
PyObject *tmp_assignment_expr_2__value = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__element_3 = NULL;
PyObject *tmp_tuple_unpack_2__element_4 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
bool tmp_result;
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
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key)) {
    Py_XDECREF(cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key = MAKE_FUNCTION_FRAME(tstate, code_objects_0ecc87061099b63aa6cdd38e5fcff165, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_type_description == NULL);
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key = cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_textual$_xterm_parser$_re_extended_key(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__re_extended_key);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 348;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_sequence);
tmp_args_element_value_1 = par_sequence;
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 348;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_fullmatch, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_2;
}
assert(tmp_assignment_expr_1__value == NULL);
tmp_assignment_expr_1__value = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_assign_source_2 = tmp_assignment_expr_1__value;
assert(var_match == NULL);
Py_INCREF(tmp_assign_source_2);
var_match = tmp_assign_source_2;
}
CHECK_OBJECT(tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_assignment_expr_1__value);
CHECK_OBJECT(tmp_assignment_expr_1__value);
Py_DECREF(tmp_assignment_expr_1__value);
tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_match);
tmp_expression_value_1 = var_match;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_groups);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_3;
}
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 351;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_empty_tuple, 0), mod_consts.const_tuple_str_plain_default_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_3;
}
tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_3;
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



exception_lineno = 351;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_4;
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



exception_lineno = 351;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_4;
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



exception_lineno = 351;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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
assert(var_codes == NULL);
Py_INCREF(tmp_assign_source_6);
var_codes = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
assert(var_end == NULL);
Py_INCREF(tmp_assign_source_7);
var_end = tmp_assign_source_7;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_codes);
tmp_expression_value_2 = var_codes;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_5;
}
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 352;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_chr_59_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_5;
}
tmp_add_expr_right_1 = MAKE_LIST_REPEATED(tstate, 3, const_str_empty);
tmp_iter_arg_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_5;
}
tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_5;
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
tmp_assign_source_9 = UNPACK_NEXT_STARRED(tstate, &exception_state, tmp_unpack_3, 0, 3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_10 = UNPACK_NEXT_STARRED(tstate, &exception_state, tmp_unpack_4, 1, 3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_11 = UNPACK_NEXT_STARRED(tstate, &exception_state, tmp_unpack_5, 2, 3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_3 == NULL);
tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_list_arg_1;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_list_arg_1 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_12 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_4 == NULL);
tmp_tuple_unpack_2__element_4 = tmp_assign_source_12;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
nuitka_digit tmp_cmp_expr_right_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_len_arg_1 = tmp_tuple_unpack_2__element_4;
tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = 0;
tmp_condition_result_2 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_add_expr_left_2;
nuitka_digit tmp_add_expr_right_2;
PyObject *tmp_len_arg_2;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_7391172483fe3c72f3ef95ee0e768c22;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_len_arg_2 = tmp_tuple_unpack_2__element_4;
tmp_add_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_2);
assert(!(tmp_add_expr_left_2 == NULL));
tmp_add_expr_right_2 = 3;
tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
assert(!(tmp_mod_expr_right_1 == NULL));
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_6;
}
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 352;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 352;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooNoo";
goto try_except_handler_6;
}
branch_no_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
assert(var_codepoint_str == NULL);
Py_INCREF(tmp_assign_source_13);
var_codepoint_str = tmp_assign_source_13;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
assert(var_modifiers_str == NULL);
Py_INCREF(tmp_assign_source_14);
var_modifiers_str = tmp_assign_source_14;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
assert(var_text_str == NULL);
Py_INCREF(tmp_assign_source_15);
var_text_str = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_2__element_3);
tmp_tuple_unpack_2__element_3 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
tmp_assign_source_16 = tmp_tuple_unpack_2__element_4;
assert(var__ == NULL);
Py_INCREF(tmp_assign_source_16);
var__ = tmp_assign_source_16;
}
Py_XDECREF(tmp_tuple_unpack_2__element_4);
tmp_tuple_unpack_2__element_4 = NULL;

{
PyObject *tmp_assign_source_17;
PyObject *tmp_int_arg_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
CHECK_OBJECT(var_codepoint_str);
tmp_or_left_value_1 = var_codepoint_str;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = mod_consts.const_str_plain_1;
tmp_int_arg_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_int_arg_1 = tmp_or_left_value_1;
or_end_1:;
tmp_assign_source_17 = PyNumber_Int(tmp_int_arg_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
assert(var_codepoint == NULL);
var_codepoint = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_int_arg_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
CHECK_OBJECT(var_modifiers_str);
tmp_or_left_value_2 = var_modifiers_str;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = mod_consts.const_str_plain_0;
tmp_int_arg_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_int_arg_2 = tmp_or_left_value_2;
or_end_2:;
tmp_assign_source_18 = PyNumber_Int(tmp_int_arg_2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
assert(var_modifiers == NULL);
var_modifiers = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
PyObject *tmp_chr_arg_1;
PyObject *tmp_int_arg_3;
CHECK_OBJECT(var_text_str);
tmp_truth_name_1 = CHECK_IF_TRUE(var_text_str);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_text_str);
tmp_int_arg_3 = var_text_str;
tmp_chr_arg_1 = PyNumber_Int(tmp_int_arg_3);
if (tmp_chr_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = BUILTIN_CHR(tstate, tmp_chr_arg_1);
CHECK_OBJECT(tmp_chr_arg_1);
Py_DECREF(tmp_chr_arg_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_19 = Py_None;
Py_INCREF(tmp_assign_source_19);
condexpr_end_1:;
assert(var_text == NULL);
var_text = tmp_assign_source_19;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_3 = module_var_accessor_textual$_xterm_parser$FUNCTIONAL_KEYS(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FUNCTIONAL_KEYS);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_7;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_codepoint);
tmp_format_value_1 = var_codepoint;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 358;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_7;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_end);
tmp_format_value_2 = var_end;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooNoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_2 == NULL));
tmp_args_element_value_3 = const_str_empty;
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 358;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_7;
}
assert(tmp_assignment_expr_2__value == NULL);
tmp_assignment_expr_2__value = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_assign_source_21 = tmp_assignment_expr_2__value;
assert(var_key == NULL);
Py_INCREF(tmp_assign_source_21);
var_key = tmp_assign_source_21;
}
CHECK_OBJECT(tmp_assignment_expr_2__value);
tmp_operand_value_1 = tmp_assignment_expr_2__value;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_assignment_expr_2__value);
CHECK_OBJECT(tmp_assignment_expr_2__value);
Py_DECREF(tmp_assignment_expr_2__value);
tmp_assignment_expr_2__value = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_chr_arg_2;
tmp_called_value_4 = module_var_accessor_textual$_xterm_parser$_character_to_key(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__character_to_key);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_text);
tmp_truth_name_2 = CHECK_IF_TRUE(var_text);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(var_text);
tmp_args_element_value_4 = var_text;
Py_INCREF(tmp_args_element_value_4);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(var_codepoint);
tmp_chr_arg_2 = var_codepoint;
tmp_args_element_value_4 = BUILTIN_CHR(tstate, tmp_chr_arg_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
condexpr_end_2:;
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 359;
tmp_assign_source_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_key;
    assert(old != NULL);
    var_key = tmp_assign_source_22;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_key_tokens == NULL);
var_key_tokens = tmp_assign_source_23;
}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_modifiers);
tmp_truth_name_3 = CHECK_IF_TRUE(var_modifiers);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_3 = var_key;
tmp_cmp_expr_right_3 = module_var_accessor_textual$_xterm_parser$MODIFIER_FUNCTIONAL_KEYS(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_text_str);
tmp_cmp_expr_left_4 = var_text_str;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_int_arg_4;
CHECK_OBJECT(var_modifiers);
tmp_int_arg_4 = var_modifiers;
tmp_sub_expr_left_1 = PyNumber_Int(tmp_int_arg_4);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_assign_source_24 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
assert(var_modifier_bits == NULL);
var_modifier_bits = tmp_assign_source_24;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
int tmp_truth_name_4;
CHECK_OBJECT(var_modifier_bits);
tmp_bitand_expr_left_1 = var_modifier_bits;
tmp_bitand_expr_right_1 = const_int_pos_1;
tmp_and_left_value_3 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_LONG(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_text);
tmp_cmp_expr_left_5 = var_text;
tmp_cmp_expr_right_5 = Py_None;
tmp_or_left_value_3 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_text);
tmp_expression_value_4 = var_text;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_isspace);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 368;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 368;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_right_value_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_and_right_value_3 = tmp_or_left_value_3;
or_end_3:;
tmp_condition_result_7 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_7 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_key_tokens);
tmp_list_arg_value_1 = var_key_tokens;
tmp_item_value_1 = mod_consts.const_str_plain_shift;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_5:;
{
PyObject *tmp_assign_source_25;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_6;
tmp_called_value_6 = (PyObject *)&PyEnum_Type;
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 370;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_tuple_197015d52b8b98752d089bed825d6f1a_tuple_int_pos_1_tuple);

if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_25 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_25;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_26 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooNoo";
exception_lineno = 370;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 0, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_29 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 1, 2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_29;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 370;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_10;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_30 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var_bit;
    var_bit = tmp_assign_source_30;
    Py_INCREF(var_bit);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_31 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_modifier;
    var_modifier = tmp_assign_source_31;
    Py_INCREF(var_modifier);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_modifier);
tmp_cmp_expr_left_6 = var_modifier;
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_alt;
tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_8;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(var_text);
tmp_cmp_expr_left_7 = var_text;
tmp_cmp_expr_right_7 = Py_None;
tmp_and_right_value_4 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_8 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_8 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
goto loop_start_1;
branch_no_6:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_bitand_expr_left_2;
PyObject *tmp_bitand_expr_right_2;
PyObject *tmp_lshift_expr_left_1;
PyObject *tmp_lshift_expr_right_1;
if (var_modifier_bits == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_modifier_bits);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 373;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_8;
}

tmp_bitand_expr_left_2 = var_modifier_bits;
tmp_lshift_expr_left_1 = const_int_pos_1;
CHECK_OBJECT(var_bit);
tmp_lshift_expr_right_1 = var_bit;
tmp_bitand_expr_right_2 = BINARY_OPERATION_LSHIFT_OBJECT_LONG_OBJECT(tmp_lshift_expr_left_1, tmp_lshift_expr_right_1);
if (tmp_bitand_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_8;
}
tmp_condition_result_9 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
CHECK_OBJECT(tmp_bitand_expr_right_2);
Py_DECREF(tmp_bitand_expr_right_2);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_8;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
if (var_key_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 374;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_8;
}

tmp_list_arg_value_2 = var_key_tokens;
CHECK_OBJECT(var_modifier);
tmp_item_value_2 = var_modifier;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_7:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
type_description_1 = "oooooooooooooooNoo";
    goto try_except_handler_8;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
if (var_key_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 376;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = var_key_tokens;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_sort);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 376;
tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_key);
tmp_cmp_expr_left_8 = var_key;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
if (var_key_tokens == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 378;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = var_key_tokens;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_append);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_5 = var_key;
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 378;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyObject *tmp_args_element_value_7;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_5;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_7 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Key);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_str_arg_value_1 = mod_consts.const_str_chr_43;
if (var_key_tokens == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_key_tokens);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 380;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}

tmp_iterable_value_1 = var_key_tokens;
tmp_args_element_value_6 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 380;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_text);
tmp_or_left_value_4 = var_text;
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 381;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(var_modifiers);
tmp_truth_name_5 = CHECK_IF_TRUE(var_modifiers);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 381;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_or_right_value_4 = Py_None;
Py_INCREF(tmp_or_right_value_4);
goto condexpr_end_3;
condexpr_false_3:;
tmp_expression_value_8 = module_var_accessor_textual$_xterm_parser$SPECIAL_KEY_TO_CHARACTER(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 381;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 381;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_8 = var_key;
tmp_args_element_value_9 = Py_None;
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 381;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_or_right_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_or_right_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 381;
type_description_1 = "oooooooooooooooNoo";
    goto frame_exception_exit_1;
}
condexpr_end_3:;
tmp_args_element_value_7 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
Py_INCREF(tmp_or_left_value_4);
tmp_args_element_value_7 = tmp_or_left_value_4;
or_end_4:;
frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame.f_lineno = 379;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooooooooooooooNoo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key,
    type_description_1,
    par_self,
    par_sequence,
    var_key_tokens,
    var_match,
    var_codes,
    var_end,
    var_codepoint_str,
    var_modifiers_str,
    var_text_str,
    var__,
    var_codepoint,
    var_modifiers,
    var_text,
    var_key,
    var_modifier_bits,
    NULL,
    var_bit,
    var_modifier
);


// Release cached frame if used for exception.
if (frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key == cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key);
    cache_frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key = NULL;
}

assertFrameObject(frame_frame_textual$_xterm_parser$$$function__6__parse_extended_key);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_key_tokens);
var_key_tokens = NULL;
CHECK_OBJECT(var_match);
CHECK_OBJECT(var_match);
Py_DECREF(var_match);
var_match = NULL;
Py_XDECREF(var_codes);
var_codes = NULL;
Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_codepoint_str);
var_codepoint_str = NULL;
Py_XDECREF(var_modifiers_str);
var_modifiers_str = NULL;
Py_XDECREF(var_text_str);
var_text_str = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_codepoint);
var_codepoint = NULL;
Py_XDECREF(var_modifiers);
var_modifiers = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_modifier_bits);
var_modifier_bits = NULL;
Py_XDECREF(var_bit);
var_bit = NULL;
Py_XDECREF(var_modifier);
var_modifier = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key_tokens);
var_key_tokens = NULL;
Py_XDECREF(var_match);
var_match = NULL;
Py_XDECREF(var_codes);
var_codes = NULL;
Py_XDECREF(var_end);
var_end = NULL;
Py_XDECREF(var_codepoint_str);
var_codepoint_str = NULL;
Py_XDECREF(var_modifiers_str);
var_modifiers_str = NULL;
Py_XDECREF(var_text_str);
var_text_str = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_codepoint);
var_codepoint = NULL;
Py_XDECREF(var_modifiers);
var_modifiers = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_modifier_bits);
var_modifier_bits = NULL;
Py_XDECREF(var_bit);
var_bit = NULL;
Py_XDECREF(var_modifier);
var_modifier = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_sequence);
Py_DECREF(par_sequence);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_sequence);
Py_DECREF(par_sequence);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_xterm_parser$$$function__7__sequence_to_key_events(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_sequence = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_alt = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_alt;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_sequence;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_GENERATOR_textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_sequence);
CHECK_OBJECT(par_sequence);
Py_DECREF(par_sequence);
par_sequence = NULL;
CHECK_OBJECT(par_alt);
CHECK_OBJECT(par_alt);
Py_DECREF(par_alt);
par_alt = NULL;
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
struct textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events_locals {
PyObject *var_key;
PyObject *var_keys;
PyObject *var_name;
PyObject *tmp_assignment_expr_1__value;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events_locals *generator_heap = (struct textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_key = NULL;
generator_heap->var_keys = NULL;
generator_heap->var_name = NULL;
generator_heap->tmp_assignment_expr_1__value = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_ee9731749b05556acd20ebcd8093783c, module_textual$_xterm_parser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_expression_value_1 = module_var_accessor_textual$_xterm_parser$constants(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_constants);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DISABLE_KITTY_KEY);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 397;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (generator_heap->tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__parse_extended_key);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 398;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 398;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_assignment_expr_1__value == NULL);
generator_heap->tmp_assignment_expr_1__value = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_assign_source_2 = generator_heap->tmp_assignment_expr_1__value;
assert(generator_heap->var_key == NULL);
Py_INCREF(tmp_assign_source_2);
generator_heap->var_key = tmp_assign_source_2;
}
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
tmp_cmp_expr_left_1 = generator_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_cmp_expr_left_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(generator_heap->tmp_assignment_expr_1__value);
Py_DECREF(generator_heap->tmp_assignment_expr_1__value);
generator_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (generator_heap->var_key == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_key);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = generator_heap->var_key;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 400;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 400;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
tmp_expression_value_5 = module_var_accessor_textual$_xterm_parser$ANSI_SEQUENCES_KEYS(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 403;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 403;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_keys == NULL);
generator_heap->var_keys = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(generator_heap->var_keys);
tmp_cmp_expr_left_2 = generator_heap->var_keys;
tmp_cmp_expr_right_2 = module_var_accessor_textual$_xterm_parser$IGNORE_SEQUENCE(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_IGNORE_SEQUENCE);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 405;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_4;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_expression_value_7 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Key);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_textual$_xterm_parser$Keys(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_Keys);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));

Py_DECREF(tmp_called_value_4);

generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_Ignore);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_4);

generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_args_element_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 410;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
return tmp_expression_value_6;
yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 410;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(generator_heap->var_keys);
tmp_isinstance_inst_1 = generator_heap->var_keys;
tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 412;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->var_keys);
tmp_iter_arg_1 = generator_heap->var_keys;
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 415;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cccooo";
generator_heap->exception_lineno = 415;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_6 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_6;
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
nuitka_digit tmp_cmp_expr_right_3;
PyObject *tmp_len_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
tmp_expression_value_10 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Key);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->var_key);
tmp_expression_value_11 = generator_heap->var_key;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_value);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_5);

generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}

tmp_len_arg_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_5);

generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_3 = 1;
tmp_condition_result_4 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_args_element_value_5);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(generator->m_closure[2]);
goto condexpr_end_1;
condexpr_false_1:;
tmp_args_element_value_6 = Py_None;
condexpr_end_1:;
generator->m_frame->m_frame.f_lineno = 416;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_expression_value_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_condition_result_4, sizeof(bool), &tmp_cmp_expr_left_3, sizeof(PyObject *), &tmp_cmp_expr_right_3, sizeof(nuitka_digit), &tmp_len_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_9;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_condition_result_4, sizeof(bool), &tmp_cmp_expr_left_3, sizeof(PyObject *), &tmp_cmp_expr_right_3, sizeof(nuitka_digit), &tmp_len_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 416;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}
tmp_yield_result_3 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_3);
Py_DECREF(tmp_yield_result_3);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 415;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(generator_heap->var_keys);
tmp_isinstance_inst_2 = generator_heap->var_keys;
tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 421;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(generator_heap->var_keys);
tmp_assign_source_7 = generator_heap->var_keys;
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[2]);
    Nuitka_Cell_SET(generator->m_closure[2], tmp_assign_source_7);
    Py_INCREF(tmp_assign_source_7);
    Py_XDECREF(old);
}

}
branch_no_4:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_2;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 426;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}

tmp_len_arg_2 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 426;
generator_heap->type_description_1 = "cccooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 1;
tmp_condition_result_6 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 428;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_isalnum);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 428;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
generator->m_frame->m_frame.f_lineno = 428;
tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 428;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 428;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_condition_result_7 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
tmp_called_value_7 = module_var_accessor_textual$_xterm_parser$_character_to_key(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__character_to_key);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 429;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 429;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_7 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 429;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 429;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
assert(generator_heap->var_name == NULL);
generator_heap->var_name = tmp_assign_source_8;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_9;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 431;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_assign_source_9 = Nuitka_Cell_GET(generator->m_closure[2]);
assert(generator_heap->var_name == NULL);
Py_INCREF(tmp_assign_source_9);
generator_heap->var_name = tmp_assign_source_9;
}
branch_end_6:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_13 = module_var_accessor_textual$_xterm_parser$KEY_NAME_REPLACEMENTS(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 433;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 433;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(generator_heap->var_name);
tmp_args_element_value_8 = generator_heap->var_name;
CHECK_OBJECT(generator_heap->var_name);
tmp_args_element_value_9 = generator_heap->var_name;
generator->m_frame->m_frame.f_lineno = 433;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 433;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->var_name;
    assert(old != NULL);
    generator_heap->var_name = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_5;
nuitka_digit tmp_cmp_expr_right_5;
PyObject *tmp_len_arg_3;
bool tmp_tmp_and_left_value_2_cbool_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_name);
tmp_len_arg_3 = generator_heap->var_name;
tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_3);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 434;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_cmp_expr_right_5 = 1;
tmp_tmp_and_left_value_2_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
tmp_and_left_value_2 = tmp_tmp_and_left_value_2_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_alt);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 434;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[0]));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 434;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_8 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_8 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_call_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(generator_heap->var_name);
tmp_expression_value_14 = generator_heap->var_name;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_isupper);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 435;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
generator->m_frame->m_frame.f_lineno = 435;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 435;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 435;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_a6ee4e981b9392a78057805bb4666916;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_15;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_name);
tmp_expression_value_15 = generator_heap->var_name;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_lower);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 436;
generator_heap->type_description_1 = "cccooo";
    goto tuple_build_exception_1;
}
generator->m_frame->m_frame.f_lineno = 436;
tmp_format_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 436;
generator_heap->type_description_1 = "cccooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 436;
generator_heap->type_description_1 = "cccooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_11 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_11 == NULL));
{
    PyObject *old = generator_heap->var_name;
    assert(old != NULL);
    generator_heap->var_name = tmp_assign_source_11;
    Py_DECREF(old);
}

}
branch_no_8:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_d3f2adff805c11b63cc8882c88afd039;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
if (generator_heap->var_name == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "cccooo";
    goto tuple_build_exception_2;
}

tmp_format_value_2 = generator_heap->var_name;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 437;
generator_heap->type_description_1 = "cccooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_12 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_12 == NULL));
{
    PyObject *old = generator_heap->var_name;
    generator_heap->var_name = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_expression_value_16;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
tmp_expression_value_17 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Key);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
if (generator_heap->var_name == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, const_str_plain_name);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_10 = generator_heap->var_name;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_11);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}

tmp_args_element_value_11 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 438;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_expression_value_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 4;
return tmp_expression_value_16;
yield_return_4:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 438;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_4;
}
tmp_yield_result_4 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_4);
Py_DECREF(tmp_yield_result_4);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_Exception;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_10 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_expression_value_18;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_5;
tmp_expression_value_19 = module_var_accessor_textual$_xterm_parser$events(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_events);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Key);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}

tmp_args_element_value_12 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_12);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_sequence);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}

tmp_args_element_value_13 = Nuitka_Cell_GET(generator->m_closure[2]);
generator->m_frame->m_frame.f_lineno = 440;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_expression_value_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_12, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
SAVE_GENERATOR_EXCEPTION(tstate, generator);
generator->m_yield_return_index = 5;
return tmp_expression_value_18;
yield_return_5:
RESTORE_GENERATOR_EXCEPTION(tstate, generator);
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_12, sizeof(PyObject *), &tmp_expression_value_19, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 440;
generator_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
}
tmp_yield_result_5 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_5);
Py_DECREF(tmp_yield_result_5);
}
goto branch_end_9;
branch_no_9:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 427;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cccooo";
goto try_except_handler_5;
branch_end_9:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
branch_no_5:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto try_return_handler_1;

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
    generator->m_closure[1],
    generator->m_closure[2],
    generator->m_closure[0],
    generator_heap->var_key,
    generator_heap->var_keys,
    generator_heap->var_name
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
goto try_end_4;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
Py_XDECREF(generator_heap->var_keys);
generator_heap->var_keys = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
Py_XDECREF(generator_heap->var_keys);
generator_heap->var_keys = NULL;
Py_XDECREF(generator_heap->var_name);
generator_heap->var_name = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
CHECK_OBJECT(generator_heap->var_keys);
CHECK_OBJECT(generator_heap->var_keys);
Py_DECREF(generator_heap->var_keys);
generator_heap->var_keys = NULL;
Py_XDECREF(generator_heap->var_name);
generator_heap->var_name = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events_context,
        module_textual$_xterm_parser,
        mod_consts.const_str_plain__sequence_to_key_events,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_4499074a0f4932445d54d99677fc3b9d,
#endif
        code_objects_ee9731749b05556acd20ebcd8093783c,
        closure,
        3,
#if 1
        sizeof(struct textual$_xterm_parser$$$function__7__sequence_to_key_events$$$genobj__1__sequence_to_key_events_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_379376bdad186c8dc06ceaafa9c69a10,
#endif
        code_objects_93a698e0b1769b93b49c6e482ee0dc11,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__2_debug_log(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__2_debug_log,
        mod_consts.const_str_plain_debug_log,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2b115460fec1b301f375eb3f25e04107,
#endif
        code_objects_19ca5cd3fa8f96d7a054aae426f6c592,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__3_feed(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__3_feed,
        mod_consts.const_str_plain_feed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bbfb197dda90d0c171d3bf935a99e386,
#endif
        code_objects_159c69a8af25644d5e5965884aa4e8ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__4_parse_mouse_code(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__4_parse_mouse_code,
        mod_consts.const_str_plain_parse_mouse_code,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a91c298032646763cd297d2ca88a19ae,
#endif
        code_objects_1fe2ed4f927f5f86cb0fd07150af4445,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__5_parse,
        mod_consts.const_str_plain_parse,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_72e35b033d8fbbf3faa81e6165b6c07d,
#endif
        code_objects_9672c6a6e606ff96a1a7fdf742cd134c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token,
        mod_consts.const_str_plain_on_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d748cee8c885a434bcf2cdcb95125863,
#endif
        code_objects_f3be47ee1eb9cc9846f5a8a4cfe3473c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        mod_consts.const_str_digest_096ddde7bccab4b369016af8a8fa2819,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token,
        mod_consts.const_str_plain_on_key_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3837d7bbcf32d73d214333119b4027fb,
#endif
        code_objects_ea115d62c6249dfebf0463ed61a46305,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        mod_consts.const_str_digest_2365823bbdb671c3735c4bc1d921f592,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys,
        mod_consts.const_str_plain_reissue_sequence_as_keys,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea9e922f6e5203817d7abd494682e756,
#endif
        code_objects_cbc003f25d76b5de2ee8647fb65af032,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        mod_consts.const_str_digest_55526fd9720ff0cf31e7cf31025d6258,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence,
        mod_consts.const_str_plain_send_sequence,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_87b90ba1e66d698d157ed555796c1402,
#endif
        code_objects_669e4900f6a36d61ec43655e6d7af659,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        mod_consts.const_str_digest_e069089ca20383c2143feb8bd3aaccce,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__6__parse_extended_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__6__parse_extended_key,
        mod_consts.const_str_plain__parse_extended_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_79d7812f3bc8306e7c5f3f63d8c1b780,
#endif
        code_objects_0ecc87061099b63aa6cdd38e5fcff165,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        mod_consts.const_str_digest_e73565ee51bc6f5ac44f26dfb923b60d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_xterm_parser$$$function__7__sequence_to_key_events(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_xterm_parser$$$function__7__sequence_to_key_events,
        mod_consts.const_str_plain__sequence_to_key_events,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4499074a0f4932445d54d99677fc3b9d,
#endif
        code_objects_ee9731749b05556acd20ebcd8093783c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_xterm_parser,
        mod_consts.const_str_digest_3a32c27652d640ce1f0663d3d93fe872,
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

static function_impl_code const function_table_textual$_xterm_parser[] = {
impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__1_on_token,
impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__2_on_key_token,
impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__3_reissue_sequence_as_keys,
impl_textual$_xterm_parser$$$function__5_parse$$$genobj__1_parse$$$function__4_send_sequence,
impl_textual$_xterm_parser$$$function__1___init__,
impl_textual$_xterm_parser$$$function__2_debug_log,
impl_textual$_xterm_parser$$$function__3_feed,
impl_textual$_xterm_parser$$$function__4_parse_mouse_code,
impl_textual$_xterm_parser$$$function__5_parse,
impl_textual$_xterm_parser$$$function__6__parse_extended_key,
impl_textual$_xterm_parser$$$function__7__sequence_to_key_events,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_xterm_parser);
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
        module_textual$_xterm_parser,
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
        function_table_textual$_xterm_parser,
        sizeof(function_table_textual$_xterm_parser) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._xterm_parser";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_xterm_parser(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_xterm_parser");

    // Store the module for future use.
    module_textual$_xterm_parser = module;

    moduledict_textual$_xterm_parser = MODULE_DICT(module_textual$_xterm_parser);

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
        PRINT_STRING("textual$_xterm_parser: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_xterm_parser: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_xterm_parser: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._xterm_parser" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_xterm_parser\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_xterm_parser,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_xterm_parser,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_xterm_parser,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_xterm_parser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_xterm_parser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_xterm_parser);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_xterm_parser);
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

        UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_textual$_xterm_parser$$$class__1_XTermParser_62 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_xterm_parser = MAKE_MODULE_FRAME(code_objects_dd222e820d40d24e19a55ed156638c12, module_textual$_xterm_parser);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_xterm_parser$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_xterm_parser$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_re;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 4;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_re, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_lru_cache,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_lru_cache);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_lru_cache, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_import_from_1__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_10);
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
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Generator,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Generator);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Generator, tmp_assign_source_11);
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
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Final_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Final,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Final);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Final, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_constants_str_plain_events_str_plain_messages_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 10;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_constants,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_constants);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_constants, tmp_assign_source_15);
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
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_events,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_events);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_events, tmp_assign_source_16);
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
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_messages,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_messages);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_messages, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_60cd04fcc20f4c05519752c0e6952b04;
tmp_globals_arg_value_4 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ANSI_SEQUENCES_KEYS_str_plain_IGNORE_SEQUENCE_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 11;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ANSI_SEQUENCES_KEYS, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_IGNORE_SEQUENCE,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_IGNORE_SEQUENCE);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IGNORE_SEQUENCE, tmp_assign_source_20);
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
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_8abab6873037389950cb75adad852b75;
tmp_globals_arg_value_5 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_FUNCTIONAL_KEYS_str_plain_MODIFIER_FUNCTIONAL_KEYS_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 12;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_11 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_FUNCTIONAL_KEYS,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_FUNCTIONAL_KEYS);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FUNCTIONAL_KEYS, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_12 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_MODIFIER_FUNCTIONAL_KEYS, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_6024def156f90da73268d3bc4a27ea4b;
tmp_globals_arg_value_6 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_87dc8921a2c14a8e826310b5af492e72_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 13;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_13 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_ParseEOF,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ParseEOF);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseEOF, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_14 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Parser,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Parser);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Parser, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_15 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_ParseTimeout,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_ParseTimeout);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_ParseTimeout, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_16 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Peek1,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_Peek1);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Peek1, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_17 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Read1,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_Read1);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Read1, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_TokenCallback,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_TokenCallback);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_TokenCallback, tmp_assign_source_30);
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
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_4bd1e91230116e9da2a8532fbb7fd77b;
tmp_globals_arg_value_7 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_3151873bdc877614c2d581226d69ec4d_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 14;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_19 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_KEY_NAME_REPLACEMENTS, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_20 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Keys,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_Keys);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Keys, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_21 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain__character_to_key,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain__character_to_key);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__character_to_key, tmp_assign_source_34);
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
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_digest_14bc17522953bd7736a9eecd7e365b1a;
tmp_globals_arg_value_8 = (PyObject *)moduledict_textual$_xterm_parser;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_Message_tuple;
tmp_level_value_8 = const_int_0;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 15;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_textual$_xterm_parser,
        mod_consts.const_str_plain_Message,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_Message);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_Message, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
tmp_assign_source_36 = mod_consts.const_int_pos_32;
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__MAX_SEQUENCE_SEARCH_THRESHOLD, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_instance_1;
tmp_expression_value_1 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_compile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = mod_consts.const_str_chr_94;
tmp_called_instance_1 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 22;
tmp_add_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_escape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_52eb4f81ebdca710bdf151533294a7ec_tuple, 0)
);

if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_digest_85b73f811e077effed724028b28e672b;
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 22;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 22;
tmp_assign_source_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_mouse_event, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_called_instance_2;
tmp_expression_value_2 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_compile);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = mod_consts.const_str_chr_94;
tmp_called_instance_2 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 24;
tmp_add_expr_right_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_escape,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_52eb4f81ebdca710bdf151533294a7ec_tuple, 0)
);

if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_add_expr_right_3 = mod_consts.const_str_digest_52400abb6a189b2764c9f15e37608655;
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 24;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 23;
tmp_assign_source_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_terminal_mode_response, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_instance_3;
tmp_called_instance_3 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 27;
tmp_assign_source_39 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_3,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_a123bb55cb0f12727ec4f8388791d8a5_tuple, 0)
);

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_cursor_position, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = mod_consts.const_str_digest_c8f27a7f54392ae4a09ee9a266151602;
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_START, tmp_assign_source_40);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_eb66ae95c4bf509b335704e1d611e706;
tmp_ass_subscribed_1 = module_var_accessor_textual$_xterm_parser$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_BRACKETED_PASTE_START;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = mod_consts.const_str_digest_46a43312facab81e8fdf5b66907ef46c;
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_BRACKETED_PASTE_END, tmp_assign_source_41);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_eb66ae95c4bf509b335704e1d611e706;
tmp_ass_subscribed_2 = module_var_accessor_textual$_xterm_parser$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_BRACKETED_PASTE_END;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = mod_consts.const_str_digest_d795a908ff02a5157fe0e060d31b129b;
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSIN, tmp_assign_source_42);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_eb66ae95c4bf509b335704e1d611e706;
tmp_ass_subscribed_3 = module_var_accessor_textual$_xterm_parser$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_FOCUSIN;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = mod_consts.const_str_digest_55881a100c3ee524327c845d6b4ced14;
UPDATE_STRING_DICT0(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_FOCUSOUT, tmp_assign_source_43);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_eb66ae95c4bf509b335704e1d611e706;
tmp_ass_subscribed_4 = module_var_accessor_textual$_xterm_parser$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_FOCUSOUT;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_set_element_1;
tmp_set_element_1 = module_var_accessor_textual$_xterm_parser$BRACKETED_PASTE_START(tstate);
if (unlikely(tmp_set_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BRACKETED_PASTE_START);
}

if (tmp_set_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_assign_source_44 = PySet_New(NULL);
assert(tmp_assign_source_44);
tmp_res = PySet_Add(tmp_assign_source_44, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_44);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = module_var_accessor_textual$_xterm_parser$BRACKETED_PASTE_END(tstate);
if (unlikely(tmp_set_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BRACKETED_PASTE_END);
}

if (tmp_set_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_44);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_44, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_44);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = module_var_accessor_textual$_xterm_parser$FOCUSIN(tstate);
if (unlikely(tmp_set_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FOCUSIN);
}

if (tmp_set_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_44);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_44, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_44);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_set_element_1 = module_var_accessor_textual$_xterm_parser$FOCUSOUT(tstate);
if (unlikely(tmp_set_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_FOCUSOUT);
}

if (tmp_set_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assign_source_44);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
tmp_res = PySet_Add(tmp_assign_source_44, tmp_set_element_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_assign_source_44);

exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_SEQUENCES, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_instance_4;
tmp_called_instance_4 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 41;
tmp_assign_source_45 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_4,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_d4d4b90b37a7b314d4a222d52d2a9c77_tuple, 0)
);

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_extended_key, tmp_assign_source_45);
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_196dd155faf52f234dfa17e03d42f4b0;
tmp_ass_subscribed_5 = module_var_accessor_textual$_xterm_parser$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain__re_extended_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_called_instance_5;
tmp_called_instance_5 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_called_instance_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 44;
tmp_assign_source_46 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_3a19aac68cb0012bafc10fe8cbbce6a9_tuple, 0)
);

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain__re_in_band_window_resize, tmp_assign_source_46);
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_196dd155faf52f234dfa17e03d42f4b0;
tmp_ass_subscribed_6 = module_var_accessor_textual$_xterm_parser$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain__re_in_band_window_resize;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_47;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 50;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_LC_TERMINAL_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_iTerm2;
tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 51;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_TERM_PROGRAM_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_digest_7c6e0012f743df927b572832b363aff4;
tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_assign_source_47 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_47 = tmp_or_left_value_1;
or_end_1:;
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_IS_ITERM, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = DICT_COPY(tstate, mod_consts.const_dict_f5ef48c511f33cb19a91b24f3155f445);
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER, tmp_assign_source_48);
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_Final;
tmp_ass_subscribed_7 = module_var_accessor_textual$_xterm_parser$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_SPECIAL_KEY_TO_CHARACTER;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_1;
tmp_expression_value_7 = module_var_accessor_textual$_xterm_parser$Parser(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Parser);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto try_except_handler_7;
}
tmp_subscript_value_1 = module_var_accessor_textual$_xterm_parser$Message(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Message);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;

    goto try_except_handler_7;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_49, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_XTermParser;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 62;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
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
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_9, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_7;
}
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 62;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 62;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_54;
}
branch_end_1:;
{
PyObject *tmp_assign_source_55;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_textual$_xterm_parser$$$class__1_XTermParser_62 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_e18faf774281761f65a7b570641a194a;
tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_XTermParser;
tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_62;
tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_9;
}
frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2 = MAKE_CLASS_FRAME(tstate, code_objects_ae15e4d54ba5f49748b556575f2a13f9, module_textual$_xterm_parser, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2);
assert(Py_REFCNT(frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2) == 2);

// Framed code:
{
PyObject *tmp_called_instance_6;
tmp_called_instance_6 = PyObject_GetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain_re);

if (tmp_called_instance_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_6 = module_var_accessor_textual$_xterm_parser$re(tstate);
if (unlikely(tmp_called_instance_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_re);
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_instance_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2->m_frame.f_lineno = 63;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_6,
    const_str_plain_compile,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_26dc38014fe7a9a1f2713938eff3a07d_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain__re_sgr_mouse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_83d3b89c6e29396ebf68ee8ab1e8920d);
Py_INCREF(tmp_defaults_1);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$_xterm_parser$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a5bea44468ab210088bde1914ad2592a);

tmp_dictset_value = MAKE_FUNCTION_textual$_xterm_parser$$$function__2_debug_log(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain_debug_log, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_16d8686515db4d36d1751e302b81c6c1);
tmp_closure_2[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_textual$_xterm_parser$$$function__3_feed(tstate, tmp_annotations_3, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain_feed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_107ae1f8fbc1ba844c691c5593ae85da);

tmp_dictset_value = MAKE_FUNCTION_textual$_xterm_parser$$$function__4_parse_mouse_code(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain_parse_mouse_code, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_b6ec720f982be354c5fa375b309918c4);

tmp_dictset_value = MAKE_FUNCTION_textual$_xterm_parser$$$function__5_parse(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain_parse, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_6;
tmp_called_value_7 = PyObject_GetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain_lru_cache);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_textual$_xterm_parser$lru_cache(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lru_cache);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2->m_frame.f_lineno = 337;
tmp_called_value_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts.const_tuple_int_pos_1024_tuple, 0), mod_consts.const_tuple_str_plain_maxsize_tuple);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_1da4053fa64ddbd6dbd6ebd4074d0f98);

tmp_args_element_value_3 = MAKE_FUNCTION_textual$_xterm_parser$$$function__6__parse_extended_key(tstate, tmp_annotations_6);

frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2->m_frame.f_lineno = 337;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain__parse_extended_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_7;
tmp_defaults_2 = mod_consts.const_tuple_false_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_deefa11227bfff6db06cdd1b26207e49);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_textual$_xterm_parser$$$function__7__sequence_to_key_events(tstate, tmp_defaults_2, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain__sequence_to_key_events, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_textual$_xterm_parser$$$class__1_XTermParser_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_c14b9cb26fa5f8a6514bb381c5b3c9bb_tuple;
tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_textual$_xterm_parser$$$class__1_XTermParser_62, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_9;
}
branch_no_3:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_XTermParser;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_textual$_xterm_parser$$$class__1_XTermParser_62;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_textual$_xterm_parser->m_frame.f_lineno = 62;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;

    goto try_except_handler_9;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_56);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_55 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_textual$_xterm_parser$$$class__1_XTermParser_62);
locals_textual$_xterm_parser$$$class__1_XTermParser_62 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_textual$_xterm_parser$$$class__1_XTermParser_62);
locals_textual$_xterm_parser$$$class__1_XTermParser_62 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
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
exception_lineno = 62;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)mod_consts.const_str_plain_XTermParser, tmp_assign_source_55);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
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
try_end_7:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_xterm_parser, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_xterm_parser->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_xterm_parser, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_xterm_parser);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_xterm_parser", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._xterm_parser" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_xterm_parser);
    return module_textual$_xterm_parser;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_xterm_parser, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_xterm_parser", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'click$_termui_impl'
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



/* The "module_click$_termui_impl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$_termui_impl;
PyDictObject *moduledict_click$_termui_impl;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_fill_char;
PyObject *const_str_plain_empty_char;
PyObject *const_str_plain_bar_template;
PyObject *const_str_plain_info_sep;
PyObject *const_str_plain_hidden;
PyObject *const_str_plain_show_eta;
PyObject *const_str_plain_show_percent;
PyObject *const_str_plain_show_pos;
PyObject *const_str_plain_item_show_func;
PyObject *const_str_plain_label;
PyObject *const_str_plain__default_text_stdout;
PyObject *const_str_plain_StringIO;
PyObject *const_str_plain_color;
PyObject *const_str_plain_update_min_steps;
PyObject *const_str_plain__completed_intervals;
PyObject *const_str_plain_width;
PyObject *const_str_plain_autowidth;
PyObject *const_str_plain_operator;
PyObject *const_tuple_str_plain_length_hint_tuple;
PyObject *const_str_plain_length_hint;
PyObject *const_str_digest_6328f2a6526a87a2c25a6da9b1c2a925;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_1953dfea08518fefc8c14ab95df13451;
PyObject *const_str_plain_iterable;
PyObject *const_str_plain_length;
PyObject *const_str_plain_pos;
PyObject *const_str_plain_avg;
PyObject *const_str_plain_time;
PyObject *const_str_plain_start;
PyObject *const_str_plain_last_eta;
PyObject *const_str_plain_eta_known;
PyObject *const_str_plain_finished;
PyObject *const_str_plain_max_width;
PyObject *const_str_plain_entered;
PyObject *const_str_plain_current_item;
PyObject *const_str_plain_isatty;
PyObject *const_str_plain__is_atty;
PyObject *const_str_plain__last_line;
PyObject *const_str_plain_render_progress;
PyObject *const_str_plain_render_finish;
PyObject *const_str_digest_b89208f8e14b2085f7f61bd3f36773b2;
PyObject *const_str_plain_generator;
PyObject *const_str_plain_write;
PyObject *const_str_plain_AFTER_BAR;
PyObject *const_str_plain_flush;
PyObject *const_str_plain_min;
PyObject *const_str_plain_time_per_iteration;
PyObject *const_str_plain_eta;
PyObject *const_int_pos_60;
PyObject *const_int_pos_24;
PyObject *const_str_digest_3c3e95247cbf48cc31188ec1a2c4da85;
PyObject *const_str_plain_02;
PyObject *const_str_chr_58;
PyObject *const_str_plain_pct;
PyObject *const_int_pos_100;
PyObject *const_str_digest_230488818e3d4bcbb83168b1b1b2891a;
PyObject *const_str_chr_37;
PyObject *const_slice_int_pos_1_none_none;
PyObject *const_str_plain_math;
PyObject *const_str_plain_cos;
PyObject *const_float_2_0;
PyObject *const_float_0_5;
PyObject *const_str_plain_format_pos;
PyObject *const_str_plain_format_pct;
PyObject *const_str_plain_format_eta;
PyObject *const_str_plain_bar;
PyObject *const_str_plain_format_bar;
PyObject *const_str_plain_info;
PyObject *const_str_plain_join;
PyObject *const_str_plain_rstrip;
PyObject *const_str_plain_echo;
PyObject *const_tuple_str_plain_file_str_plain_color_tuple;
PyObject *const_str_plain_shutil;
PyObject *const_str_plain_term_len;
PyObject *const_str_plain_format_progress_line;
PyObject *const_str_plain_max;
PyObject *const_str_plain_get_terminal_size;
PyObject *const_str_plain_columns;
PyObject *const_str_plain_BEFORE_BAR;
PyObject *const_str_space;
PyObject *const_tuple_str_plain_file_str_plain_color_str_plain_nl_tuple;
PyObject *const_slice_int_neg_6_none_none;
PyObject *const_str_plain_make_step;
PyObject *const_str_digest_af7fb5454071f5e05a450794953afb9e;
PyObject *const_str_digest_151c1ae0a2a7f58bbb12b2d73745e975;
PyObject *const_str_plain_self;
PyObject *const_str_plain_update;
PyObject *const_tuple_int_pos_1_tuple;
PyObject *const_str_plain_finish;
PyObject *const_str_digest_0e3c8d40431b73912fdeca388b7e3a6f;
PyObject *const_str_plain_stdin;
PyObject *const_str_plain__nullpager;
PyObject *const_str_plain_shlex;
PyObject *const_str_plain_environ;
PyObject *const_tuple_str_plain_PAGER_str_empty_tuple;
PyObject *const_dict_63e362e518f8a13fad3fbc6757a1f4b5;
PyObject *const_str_plain_WIN;
PyObject *const_str_plain__tempfilepager;
PyObject *const_str_plain__pipepager;
PyObject *const_tuple_str_plain_TERM_tuple;
PyObject *const_tuple_str_plain_dumb_str_plain_emacs_tuple;
PyObject *const_str_plain_more;
PyObject *const_str_plain_less;
PyObject *const_str_plain_tempfile;
PyObject *const_str_plain_mkstemp;
PyObject *const_str_plain_unlink;
PyObject *const_str_digest_590efb5a3a8b121f921fcf4884fcd9f6;
PyObject *const_str_plain_which;
PyObject *const_str_plain_Path;
PyObject *const_str_plain_resolve;
PyObject *const_str_plain_subprocess;
PyObject *const_tuple_str_plain_LESS_str_empty_tuple;
PyObject *const_str_digest_661170a362c0712dfb804f7826b521cc;
PyObject *const_str_plain_LESS;
PyObject *const_str_plain_R;
PyObject *const_str_plain_Popen;
PyObject *const_str_plain_PIPE;
PyObject *const_str_plain_replace;
PyObject *const_tuple_553d6b17c6654250428b63599dbe130b_tuple;
PyObject *const_str_plain_strip_ansi;
PyObject *const_str_plain_c;
PyObject *const_str_plain_terminate;
PyObject *const_str_plain_wait;
PyObject *const_str_digest_6f0e12de08fbce07cf609f661c326021;
PyObject *const_str_plain_get_best_encoding;
PyObject *const_str_plain_stdout;
PyObject *const_str_plain_open_stream;
PyObject *const_str_plain_wb;
PyObject *const_str_plain_encode;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_call;
PyObject *const_str_digest_7ffa22168742811e83e40d8de6139f28;
PyObject *const_str_plain_stream;
PyObject *const_str_digest_7e1a6ac8cc4b0d49b7b98a50724295af;
PyObject *const_str_plain_editor;
PyObject *const_str_plain_env;
PyObject *const_str_plain_require_save;
PyObject *const_str_plain_extension;
PyObject *const_tuple_str_plain_VISUAL_str_plain_EDITOR_tuple;
PyObject *const_str_plain_notepad;
PyObject *const_tuple_str_plain_which_tuple;
PyObject *const_tuple_dae631f11a6d1b147103b75cf190468f_tuple;
PyObject *const_str_plain_vi;
PyObject *const_str_plain_get_editor;
PyObject *const_str_plain_copy;
PyObject *const_tuple_str_plain_args_str_plain_env_str_plain_shell_tuple;
PyObject *const_str_plain_ClickException;
PyObject *const_tuple_str_digest_d37be71476ee638bfebd31858dd0b094_tuple;
PyObject *const_tuple_str_plain_editor_tuple;
PyObject *const_tuple_str_digest_d6aaefdada719c76bf6ae0015ae7cb2e_tuple;
PyObject *const_tuple_str_plain_editor_str_plain_e_tuple;
PyObject *const_str_chr_34;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_91ba4a3473d59fc6957f11a4d3e3b9b5;
PyObject *const_tuple_type_bytes_type_bytearray_tuple;
PyObject *const_str_plain_endswith;
PyObject *const_tuple_str_newline_tuple;
PyObject *const_str_newline;
PyObject *const_str_plain_text;
PyObject *const_tuple_str_newline_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple;
PyObject *const_tuple_str_digest_b92226bee77e9ca773ad5eaea1d64ab0_tuple;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_digest_2581d4c78e0eaa34c194c0d21c6458b9;
PyObject *const_tuple_str_plain_prefix_str_plain_suffix_tuple;
PyObject *const_str_plain_fdopen;
PyObject *const_str_plain_utime;
PyObject *const_str_plain_getatime;
PyObject *const_str_plain_getmtime;
PyObject *const_int_pos_2;
PyObject *const_str_plain_edit_files;
PyObject *const_str_plain_rv;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_str_newline_tuple;
PyObject *const_dict_c151dd6ecc15908c8ae1b00d3728c62e;
PyObject *const_str_plain__unquote_file;
PyObject *const_str_digest_c4ce112c7b92e43eb9d61fea1609aace;
PyObject *const_str_plain_explorer;
PyObject *const_str_digest_abe117187c282b418c72fcfdbfdf6f06;
PyObject *const_str_digest_3f3652ce16ff08499c954eda4725f692;
PyObject *const_int_pos_127;
PyObject *const_str_plain_CYGWIN;
PyObject *const_str_plain_cygstart;
PyObject *const_str_digest_27a7628ab85cd892afa96bd047d5a375;
PyObject *const_str_digest_784f37fe623d9cd4886a11d0e6c70022;
PyObject *const_str_plain_url;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_tuple_8a631a4c76b9eb6a7489e728189268f5_tuple_tuple;
PyObject *const_str_plain_webbrowser;
PyObject *const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
PyObject *const_tuple_str_plain_unquote_tuple;
PyObject *const_str_plain_unquote;
PyObject *const_tuple_str_digest_87da8febe1e63f89773e0686c4dca4a1_tuple;
PyObject *const_slice_int_pos_7_none_none;
PyObject *const_str_chr_3;
PyObject *const_str_chr_4;
PyObject *const_str_chr_26;
PyObject *const_str_plain_raw_terminal;
PyObject *const_str_plain_Callable;
PyObject *const_tuple_list_empty_type_str_tuple;
PyObject *const_str_plain_msvcrt;
PyObject *const_str_plain_getwche;
PyObject *const_str_plain_getwch;
PyObject *const_tuple_str_null_str_chr_224_tuple;
PyObject *const_str_plain__translate_ch_to_exc;
PyObject *const_str_digest_8395c8eb4781e4c60a681285fa97c42c;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_cabc;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_t;
PyObject *const_str_plain_gettext;
PyObject *const_tuple_str_plain_gettext_tuple;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_Path_tuple;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain__default_text_stdout_tuple;
PyObject *const_tuple_str_plain_CYGWIN_tuple;
PyObject *const_tuple_str_plain_get_best_encoding_tuple;
PyObject *const_tuple_str_plain_isatty_tuple;
PyObject *const_tuple_str_plain_open_stream_tuple;
PyObject *const_tuple_str_plain_strip_ansi_tuple;
PyObject *const_tuple_str_plain_term_len_tuple;
PyObject *const_tuple_str_plain_WIN_tuple;
PyObject *const_str_plain_exceptions;
PyObject *const_tuple_str_plain_ClickException_tuple;
PyObject *const_str_plain_utils;
PyObject *const_tuple_str_plain_echo_tuple;
PyObject *const_str_plain_TypeVar;
PyObject *const_tuple_str_plain_V_tuple;
PyObject *const_str_plain_V;
PyObject *const_str_chr_13;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_ProgressBar;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a4776240f12ee143b983c443abc8eef4;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_43;
PyObject *const_str_plain___firstlineno__;
PyObject *const_tuple_64d330d9c24daa5a78e0953ed598c1bf_tuple;
PyObject *const_dict_c3f0b374689c3c4017972c135cf66e65;
PyObject *const_str_digest_fad7b12621558405fca3d592c4e129f1;
PyObject *const_dict_8a7693edb1482f8dca8d2ad446d41d99;
PyObject *const_str_digest_5e006cc4e42812ae282921c7519334ce;
PyObject *const_dict_f79351c2ba9a4f120a51e1a6e293eb6f;
PyObject *const_str_digest_352c31331323dbb93f9bebbec95cb9dc;
PyObject *const_dict_50d43a724f49760c8a15f96c45fefa03;
PyObject *const_str_digest_2054f27488b140f080bfa12c7d4995e5;
PyObject *const_dict_91819b79a81c1b5b2c4466025923b8cf;
PyObject *const_str_plain___next__;
PyObject *const_str_digest_e778c5231b5311a42dbbefac365c2d13;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_12aa3c4a1a8c4a5ec85fc10821aa28a2;
PyObject *const_str_plain_property;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_str_digest_d600cdd183887c7ad9595b0922db7c39;
PyObject *const_str_digest_1409961a8e6dc8da5f9cbc93ebb7adcb;
PyObject *const_str_digest_ae55c44f1ee1411e39332e672269d261;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_digest_7b8e8189c8ba209ed49f3f8785eabeaf;
PyObject *const_str_digest_4bbebc1d9722adc37be2a9a9ce3b6435;
PyObject *const_str_digest_5f0e66e8c7da124e1e88bb8521fc0e41;
PyObject *const_str_digest_1249e3580ba3d71fe7d2209ee5e39793;
PyObject *const_str_digest_b18f80f11f952018d57a3a549174628e;
PyObject *const_str_digest_27651526b531aabb27832bc5261ffe1e;
PyObject *const_dict_1740977ed38cb311388dd658c402334a;
PyObject *const_str_digest_dc4dc5842ffa44bed073423da63a5ef6;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_43c90fe5e80637d6ab18c5d7f4b6a8d1;
PyObject *const_str_digest_bff4d4ac71f5bac6f3ded14153c521f9;
PyObject *const_str_digest_a936144c251342dd26410f831ae96873;
PyObject *const_tuple_b93b510e0f8e941bc2e3083afab68c70_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_9d104c315b4317661906a460e41356f4;
PyObject *const_str_plain_pager;
PyObject *const_dict_7db0fff42e7e00ad5e8dc9a487472eeb;
PyObject *const_dict_9e2ef94610658d7d311fc1de6ff93016;
PyObject *const_str_plain_Editor;
PyObject *const_int_pos_559;
PyObject *const_tuple_none_none_true_str_digest_038a28107205f832c6bf850b3119b5af_tuple;
PyObject *const_dict_a505e30710178ccee71387a2e431090b;
PyObject *const_str_digest_cb79f5d8a7e76e66122f39ed31eef225;
PyObject *const_str_digest_b6f0432676863e88ba6f484a8109cf54;
PyObject *const_dict_d2d899c82c8cb22296a00fe864d5697a;
PyObject *const_str_digest_fde5013974246bd6fa76ed1b06866455;
PyObject *const_str_plain_overload;
PyObject *const_dict_8ecb1d7a9ff1d90b57e61d3f57128d42;
PyObject *const_str_plain_edit;
PyObject *const_str_digest_74d1075bf823d89605ed07d6610dadf1;
PyObject *const_dict_05530c269864a4aa1c325cdcefa3e0bb;
PyObject *const_dict_cf0d693194e42eea3ce3fc6bc72d8cf3;
PyObject *const_tuple_b1a0fc1d363dcca62562d8233a9d8ff0_tuple;
PyObject *const_tuple_false_false_tuple;
PyObject *const_dict_5625fe8142f98c5870abd09f8d52e3f8;
PyObject *const_str_plain_open_url;
PyObject *const_dict_5763beeec081f731b28476c862da8f22;
PyObject *const_str_plain_contextmanager;
PyObject *const_dict_380ee4567d318183ecb9d3b6325b282b;
PyObject *const_dict_881e89748939c33ad42bfe3cdcbd3c0d;
PyObject *const_str_plain_getchar;
PyObject *const_str_digest_3cad46b367dba9c328b9ff066bf8118c;
PyObject *const_tuple_d4d86f101fb11f76878866fd8c04cd94_tuple;
PyObject *const_str_digest_cdc9477f8b36ddea2e9bdedf1b9b42eb;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_ab5eabab950404d8ac2154666b738f8b_tuple;
PyObject *const_tuple_b86b9e6b7404ad8dde291c5f88ce8e5c_tuple;
PyObject *const_tuple_a2fbfe68bf62ac361ea6686eb227242a_tuple;
PyObject *const_tuple_04a687a464e9d025464a8ca1d8a4aabe_tuple;
PyObject *const_tuple_180b9610a734456dc7f903278a527e05_tuple;
PyObject *const_tuple_903dff06c3e1b44c8095595423cab0ad_tuple;
PyObject *const_tuple_str_plain_ch_tuple;
PyObject *const_tuple_str_plain_url_str_plain_unquote_tuple;
PyObject *const_tuple_str_plain_self_str_plain_text_tuple;
PyObject *const_tuple_aae618253389c5bbf1140f910a509a16_tuple;
PyObject *const_tuple_0a6536038ce45638449e660153f39881_tuple;
PyObject *const_tuple_4a7bc6fc05bd02a6e1223ab5b51a95e0_tuple;
PyObject *const_tuple_336df753320775396968a091f9ef1e73_tuple;
PyObject *const_tuple_str_plain_self_str_plain_pos_tuple;
PyObject *const_tuple_4fe4b33915060ff7e4364e11ac18a1ac_tuple;
PyObject *const_tuple_str_plain_self_str_plain_rv_tuple;
PyObject *const_tuple_a81e0b826aacd9669034ad21b03a4fd5_tuple;
PyObject *const_tuple_str_plain_echo_str_plain_func_str_plain_rv_tuple;
PyObject *const_tuple_str_plain_self_str_plain_n_steps_str_plain_step_tuple;
PyObject *const_tuple_08d3e1039e2d9acad5f049ece2842d3f_tuple;
PyObject *const_tuple_976b44622d4c5745ce5caa3616df8b35_tuple;
PyObject *const_tuple_e4957552a044c48d80d9e40a7a625b09_tuple;
PyObject *const_tuple_str_plain_self_str_plain_n_steps_str_plain_current_item_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[337];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("click._termui_impl"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_fill_char);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty_char);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_bar_template);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_info_sep);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_hidden);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_eta);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_percent);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_show_pos);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_item_show_func);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_label);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_text_stdout);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_update_min_steps);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__completed_intervals);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_width);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_autowidth);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_operator);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_length_hint_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_length_hint);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_6328f2a6526a87a2c25a6da9b1c2a925);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_1953dfea08518fefc8c14ab95df13451);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_iterable);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_pos);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_avg);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_time);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_last_eta);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_eta_known);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_finished);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_width);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_entered);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_item);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_isatty);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_atty);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__last_line);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_progress);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_render_finish);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_b89208f8e14b2085f7f61bd3f36773b2);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_generator);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_AFTER_BAR);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_flush);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_time_per_iteration);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_eta);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_int_pos_60);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_int_pos_24);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c3e95247cbf48cc31188ec1a2c4da85);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_02);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_pct);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_230488818e3d4bcbb83168b1b1b2891a);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_chr_37);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_cos);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_float_2_0);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_float_0_5);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_pos);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_pct);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_eta);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_bar);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_bar);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_echo);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_color_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_shutil);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_term_len);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_format_progress_line);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_terminal_size);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_columns);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_BEFORE_BAR);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_color_str_plain_nl_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_slice_int_neg_6_none_none);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_make_step);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_af7fb5454071f5e05a450794953afb9e);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_151c1ae0a2a7f58bbb12b2d73745e975);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_update);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_finish);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e3c8d40431b73912fdeca388b7e3a6f);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdin);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__nullpager);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_shlex);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PAGER_str_empty_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_63e362e518f8a13fad3fbc6757a1f4b5);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_WIN);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__tempfilepager);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__pipepager);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TERM_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dumb_str_plain_emacs_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_more);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_less);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkstemp);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_unlink);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_590efb5a3a8b121f921fcf4884fcd9f6);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_which);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_Path);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LESS_str_empty_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_661170a362c0712dfb804f7826b521cc);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_LESS);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_R);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_Popen);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_PIPE);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_553d6b17c6654250428b63599dbe130b_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip_ansi);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_terminate);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_6f0e12de08fbce07cf609f661c326021);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_best_encoding);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_stdout);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_stream);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_wb);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_encode);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_call);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ffa22168742811e83e40d8de6139f28);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_7e1a6ac8cc4b0d49b7b98a50724295af);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_editor);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_env);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_require_save);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_extension);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VISUAL_str_plain_EDITOR_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_notepad);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_which_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_dae631f11a6d1b147103b75cf190468f_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_vi);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_editor);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_env_str_plain_shell_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClickException);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d37be71476ee638bfebd31858dd0b094_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_editor_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d6aaefdada719c76bf6ae0015ae7cb2e_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_editor_str_plain_e_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_chr_34);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_91ba4a3473d59fc6957f11a4d3e3b9b5);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_endswith);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_newline);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b92226bee77e9ca773ad5eaea1d64ab0_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_2581d4c78e0eaa34c194c0d21c6458b9);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_str_plain_suffix_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_fdopen);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_utime);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_getatime);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_getmtime);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_edit_files);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_rv);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_str_newline_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain__unquote_file);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4ce112c7b92e43eb9d61fea1609aace);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_explorer);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_abe117187c282b418c72fcfdbfdf6f06);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f3652ce16ff08499c954eda4725f692);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_int_pos_127);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_CYGWIN);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_cygstart);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_27a7628ab85cd892afa96bd047d5a375);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_digest_784f37fe623d9cd4886a11d0e6c70022);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_tuple_tuple_8a631a4c76b9eb6a7489e728189268f5_tuple_tuple);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_webbrowser);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unquote_tuple);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_unquote);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_87da8febe1e63f89773e0686c4dca4a1_tuple);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_7_none_none);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_chr_3);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_chr_4);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_chr_26);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_terminal);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_type_str_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_msvcrt);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_getwche);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain_getwch);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_str_null_str_chr_224_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain__translate_ch_to_exc);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_8395c8eb4781e4c60a681285fa97c42c);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_cabc);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_gettext);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gettext_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__default_text_stdout_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CYGWIN_tuple);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_best_encoding_tuple);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isatty_tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_stream_tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strip_ansi_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_term_len_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WIN_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClickException_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_plain_utils);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_V_tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_plain_V);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_chr_13);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProgressBar);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_str_digest_a4776240f12ee143b983c443abc8eef4);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_int_pos_43);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_64d330d9c24daa5a78e0953ed598c1bf_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_dict_c3f0b374689c3c4017972c135cf66e65);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_str_digest_fad7b12621558405fca3d592c4e129f1);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_dict_8a7693edb1482f8dca8d2ad446d41d99);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e006cc4e42812ae282921c7519334ce);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_dict_f79351c2ba9a4f120a51e1a6e293eb6f);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_str_digest_352c31331323dbb93f9bebbec95cb9dc);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_dict_50d43a724f49760c8a15f96c45fefa03);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_str_digest_2054f27488b140f080bfa12c7d4995e5);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_dict_91819b79a81c1b5b2c4466025923b8cf);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_str_plain___next__);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_e778c5231b5311a42dbbefac365c2d13);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_str_digest_12aa3c4a1a8c4a5ec85fc10821aa28a2);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_str_digest_d600cdd183887c7ad9595b0922db7c39);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_digest_1409961a8e6dc8da5f9cbc93ebb7adcb);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae55c44f1ee1411e39332e672269d261);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b8e8189c8ba209ed49f3f8785eabeaf);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_digest_4bbebc1d9722adc37be2a9a9ce3b6435);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f0e66e8c7da124e1e88bb8521fc0e41);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_digest_1249e3580ba3d71fe7d2209ee5e39793);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_str_digest_b18f80f11f952018d57a3a549174628e);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_str_digest_27651526b531aabb27832bc5261ffe1e);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_dict_1740977ed38cb311388dd658c402334a);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc4dc5842ffa44bed073423da63a5ef6);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_dict_43c90fe5e80637d6ab18c5d7f4b6a8d1);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_str_digest_bff4d4ac71f5bac6f3ded14153c521f9);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_str_digest_a936144c251342dd26410f831ae96873);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_tuple_b93b510e0f8e941bc2e3083afab68c70_tuple);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_dict_9d104c315b4317661906a460e41356f4);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_str_plain_pager);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_dict_7db0fff42e7e00ad5e8dc9a487472eeb);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_dict_9e2ef94610658d7d311fc1de6ff93016);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_str_plain_Editor);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_int_pos_559);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_str_digest_038a28107205f832c6bf850b3119b5af_tuple);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_dict_a505e30710178ccee71387a2e431090b);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb79f5d8a7e76e66122f39ed31eef225);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6f0432676863e88ba6f484a8109cf54);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_dict_d2d899c82c8cb22296a00fe864d5697a);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_str_digest_fde5013974246bd6fa76ed1b06866455);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_dict_8ecb1d7a9ff1d90b57e61d3f57128d42);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_str_plain_edit);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_dict_05530c269864a4aa1c325cdcefa3e0bb);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_dict_cf0d693194e42eea3ce3fc6bc72d8cf3);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_tuple_b1a0fc1d363dcca62562d8233a9d8ff0_tuple);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_dict_5625fe8142f98c5870abd09f8d52e3f8);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_str_plain_open_url);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_dict_5763beeec081f731b28476c862da8f22);
mod_consts_hash[305] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[306] = DEEP_HASH(tstate, mod_consts.const_dict_380ee4567d318183ecb9d3b6325b282b);
mod_consts_hash[307] = DEEP_HASH(tstate, mod_consts.const_dict_881e89748939c33ad42bfe3cdcbd3c0d);
mod_consts_hash[308] = DEEP_HASH(tstate, mod_consts.const_str_plain_getchar);
mod_consts_hash[309] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cad46b367dba9c328b9ff066bf8118c);
mod_consts_hash[310] = DEEP_HASH(tstate, mod_consts.const_tuple_d4d86f101fb11f76878866fd8c04cd94_tuple);
mod_consts_hash[311] = DEEP_HASH(tstate, mod_consts.const_str_digest_cdc9477f8b36ddea2e9bdedf1b9b42eb);
mod_consts_hash[312] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[313] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[314] = DEEP_HASH(tstate, mod_consts.const_tuple_ab5eabab950404d8ac2154666b738f8b_tuple);
mod_consts_hash[315] = DEEP_HASH(tstate, mod_consts.const_tuple_b86b9e6b7404ad8dde291c5f88ce8e5c_tuple);
mod_consts_hash[316] = DEEP_HASH(tstate, mod_consts.const_tuple_a2fbfe68bf62ac361ea6686eb227242a_tuple);
mod_consts_hash[317] = DEEP_HASH(tstate, mod_consts.const_tuple_04a687a464e9d025464a8ca1d8a4aabe_tuple);
mod_consts_hash[318] = DEEP_HASH(tstate, mod_consts.const_tuple_180b9610a734456dc7f903278a527e05_tuple);
mod_consts_hash[319] = DEEP_HASH(tstate, mod_consts.const_tuple_903dff06c3e1b44c8095595423cab0ad_tuple);
mod_consts_hash[320] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ch_tuple);
mod_consts_hash[321] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_unquote_tuple);
mod_consts_hash[322] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
mod_consts_hash[323] = DEEP_HASH(tstate, mod_consts.const_tuple_aae618253389c5bbf1140f910a509a16_tuple);
mod_consts_hash[324] = DEEP_HASH(tstate, mod_consts.const_tuple_0a6536038ce45638449e660153f39881_tuple);
mod_consts_hash[325] = DEEP_HASH(tstate, mod_consts.const_tuple_4a7bc6fc05bd02a6e1223ab5b51a95e0_tuple);
mod_consts_hash[326] = DEEP_HASH(tstate, mod_consts.const_tuple_336df753320775396968a091f9ef1e73_tuple);
mod_consts_hash[327] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
mod_consts_hash[328] = DEEP_HASH(tstate, mod_consts.const_tuple_4fe4b33915060ff7e4364e11ac18a1ac_tuple);
mod_consts_hash[329] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_rv_tuple);
mod_consts_hash[330] = DEEP_HASH(tstate, mod_consts.const_tuple_a81e0b826aacd9669034ad21b03a4fd5_tuple);
mod_consts_hash[331] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_str_plain_func_str_plain_rv_tuple);
mod_consts_hash[332] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_step_tuple);
mod_consts_hash[333] = DEEP_HASH(tstate, mod_consts.const_tuple_08d3e1039e2d9acad5f049ece2842d3f_tuple);
mod_consts_hash[334] = DEEP_HASH(tstate, mod_consts.const_tuple_976b44622d4c5745ce5caa3616df8b35_tuple);
mod_consts_hash[335] = DEEP_HASH(tstate, mod_consts.const_tuple_e4957552a044c48d80d9e40a7a625b09_tuple);
mod_consts_hash[336] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_current_item_tuple);
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
void checkModuleConstants_click$_termui_impl(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_fill_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fill_char);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty_char));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty_char);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_bar_template));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bar_template);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_info_sep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info_sep);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_hidden));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hidden);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_eta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_eta);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_percent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_percent);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_show_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_show_pos);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_item_show_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_item_show_func);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_label));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_label);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_text_stdout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_text_stdout);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringIO);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_update_min_steps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update_min_steps);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__completed_intervals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__completed_intervals);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_width);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_autowidth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_autowidth);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_operator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_operator);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_length_hint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_length_hint_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_length_hint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_length_hint);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_6328f2a6526a87a2c25a6da9b1c2a925));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6328f2a6526a87a2c25a6da9b1c2a925);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_1953dfea08518fefc8c14ab95df13451));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1953dfea08518fefc8c14ab95df13451);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_iterable);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_length);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pos);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_avg));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_avg);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_last_eta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_last_eta);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_eta_known));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eta_known);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_finished));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finished);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_width));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_width);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_entered));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_entered);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_item);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_isatty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isatty);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_atty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_atty);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__last_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__last_line);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_progress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_progress);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_render_finish));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_render_finish);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_b89208f8e14b2085f7f61bd3f36773b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b89208f8e14b2085f7f61bd3f36773b2);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generator);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_AFTER_BAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AFTER_BAR);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_flush));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_flush);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_time_per_iteration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time_per_iteration);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_eta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_eta);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_int_pos_60));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_60);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_int_pos_24));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_24);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c3e95247cbf48cc31188ec1a2c4da85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c3e95247cbf48cc31188ec1a2c4da85);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_02));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_02);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_pct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pct);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_230488818e3d4bcbb83168b1b1b2891a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_230488818e3d4bcbb83168b1b1b2891a);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_chr_37));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_37);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_1_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_1_none_none);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_cos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cos);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_float_2_0));
CHECK_OBJECT_DEEP(mod_consts.const_float_2_0);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_float_0_5));
CHECK_OBJECT_DEEP(mod_consts.const_float_0_5);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_pos));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_pos);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_pct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_pct);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_eta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_eta);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_bar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bar);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_bar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_bar);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_echo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_echo);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_color_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_str_plain_color_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_shutil));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shutil);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_term_len));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_term_len);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_format_progress_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_format_progress_line);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_terminal_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_terminal_size);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_columns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_columns);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_BEFORE_BAR));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BEFORE_BAR);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_str_plain_color_str_plain_nl_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_str_plain_color_str_plain_nl_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_slice_int_neg_6_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_neg_6_none_none);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_make_step));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_make_step);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_af7fb5454071f5e05a450794953afb9e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af7fb5454071f5e05a450794953afb9e);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_151c1ae0a2a7f58bbb12b2d73745e975));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_151c1ae0a2a7f58bbb12b2d73745e975);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_update));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_update);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_pos_1_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_finish));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_finish);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e3c8d40431b73912fdeca388b7e3a6f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e3c8d40431b73912fdeca388b7e3a6f);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdin);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__nullpager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__nullpager);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_shlex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shlex);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PAGER_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PAGER_str_empty_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_63e362e518f8a13fad3fbc6757a1f4b5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_63e362e518f8a13fad3fbc6757a1f4b5);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_WIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WIN);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__tempfilepager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tempfilepager);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__pipepager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pipepager);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TERM_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TERM_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dumb_str_plain_emacs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dumb_str_plain_emacs_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_more));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_more);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_less));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_less);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkstemp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkstemp);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_unlink));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unlink);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_590efb5a3a8b121f921fcf4884fcd9f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_590efb5a3a8b121f921fcf4884fcd9f6);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_which));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_which);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_Path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Path);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_subprocess));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_subprocess);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LESS_str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_LESS_str_empty_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_661170a362c0712dfb804f7826b521cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_661170a362c0712dfb804f7826b521cc);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_LESS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LESS);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_R));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_R);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_Popen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Popen);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_PIPE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PIPE);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_553d6b17c6654250428b63599dbe130b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_553d6b17c6654250428b63599dbe130b_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip_ansi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip_ansi);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_terminate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_terminate);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_6f0e12de08fbce07cf609f661c326021));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6f0e12de08fbce07cf609f661c326021);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_best_encoding));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_best_encoding);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_stdout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stdout);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_stream);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_wb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wb);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_encode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encode);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ffa22168742811e83e40d8de6139f28));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ffa22168742811e83e40d8de6139f28);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_7e1a6ac8cc4b0d49b7b98a50724295af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7e1a6ac8cc4b0d49b7b98a50724295af);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_editor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_editor);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_env));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_env);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_require_save));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_require_save);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_extension));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extension);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VISUAL_str_plain_EDITOR_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VISUAL_str_plain_EDITOR_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_notepad));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_notepad);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_which_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_which_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_dae631f11a6d1b147103b75cf190468f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dae631f11a6d1b147103b75cf190468f_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_vi));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vi);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_editor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_editor);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_args_str_plain_env_str_plain_shell_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_args_str_plain_env_str_plain_shell_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClickException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClickException);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d37be71476ee638bfebd31858dd0b094_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d37be71476ee638bfebd31858dd0b094_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_editor_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_editor_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_d6aaefdada719c76bf6ae0015ae7cb2e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_d6aaefdada719c76bf6ae0015ae7cb2e_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_editor_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_editor_str_plain_e_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_chr_34));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_34);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_91ba4a3473d59fc6957f11a4d3e3b9b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_91ba4a3473d59fc6957f11a4d3e3b9b5);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_type_bytes_type_bytearray_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_bytes_type_bytearray_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_endswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_endswith);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_newline_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_newline);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_newline_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_newline_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b92226bee77e9ca773ad5eaea1d64ab0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b92226bee77e9ca773ad5eaea1d64ab0_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_2581d4c78e0eaa34c194c0d21c6458b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2581d4c78e0eaa34c194c0d21c6458b9);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefix_str_plain_suffix_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_prefix_str_plain_suffix_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_fdopen));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fdopen);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_utime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utime);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_getatime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getatime);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_getmtime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getmtime);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_edit_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_edit_files);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_rv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rv);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_str_newline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_str_newline_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain__unquote_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__unquote_file);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4ce112c7b92e43eb9d61fea1609aace));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4ce112c7b92e43eb9d61fea1609aace);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_explorer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_explorer);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_abe117187c282b418c72fcfdbfdf6f06));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abe117187c282b418c72fcfdbfdf6f06);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f3652ce16ff08499c954eda4725f692));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f3652ce16ff08499c954eda4725f692);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_int_pos_127));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_127);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_CYGWIN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CYGWIN);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_cygstart));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cygstart);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_27a7628ab85cd892afa96bd047d5a375));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27a7628ab85cd892afa96bd047d5a375);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_digest_784f37fe623d9cd4886a11d0e6c70022));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_784f37fe623d9cd4886a11d0e6c70022);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_tuple_tuple_8a631a4c76b9eb6a7489e728189268f5_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_tuple_8a631a4c76b9eb6a7489e728189268f5_tuple_tuple);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_webbrowser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_webbrowser);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_unquote_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_unquote_tuple);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_unquote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unquote);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_87da8febe1e63f89773e0686c4dca4a1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_87da8febe1e63f89773e0686c4dca4a1_tuple);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_7_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_7_none_none);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_chr_3));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_3);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_chr_4));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_4);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_chr_26));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_26);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_terminal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_terminal);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_type_str_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_msvcrt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_msvcrt);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_getwche));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getwche);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain_getwch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getwch);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_str_null_str_chr_224_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_null_str_chr_224_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain__translate_ch_to_exc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__translate_ch_to_exc);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_8395c8eb4781e4c60a681285fa97c42c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8395c8eb4781e4c60a681285fa97c42c);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_cabc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cabc);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_gettext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gettext);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gettext_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_gettext_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Path_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__default_text_stdout_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__default_text_stdout_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CYGWIN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CYGWIN_tuple);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_best_encoding_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_best_encoding_tuple);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isatty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_isatty_tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_open_stream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_open_stream_tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strip_ansi_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_strip_ansi_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_term_len_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_term_len_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WIN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WIN_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_plain_exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exceptions);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClickException_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClickException_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_plain_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_utils);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_echo_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_V_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_V_tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_plain_V));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_V);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_chr_13));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_13);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProgressBar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProgressBar);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_str_digest_a4776240f12ee143b983c443abc8eef4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a4776240f12ee143b983c443abc8eef4);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_int_pos_43));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_43);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_64d330d9c24daa5a78e0953ed598c1bf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_64d330d9c24daa5a78e0953ed598c1bf_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_dict_c3f0b374689c3c4017972c135cf66e65));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c3f0b374689c3c4017972c135cf66e65);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_str_digest_fad7b12621558405fca3d592c4e129f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fad7b12621558405fca3d592c4e129f1);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_dict_8a7693edb1482f8dca8d2ad446d41d99));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8a7693edb1482f8dca8d2ad446d41d99);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e006cc4e42812ae282921c7519334ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e006cc4e42812ae282921c7519334ce);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_dict_f79351c2ba9a4f120a51e1a6e293eb6f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f79351c2ba9a4f120a51e1a6e293eb6f);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_str_digest_352c31331323dbb93f9bebbec95cb9dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_352c31331323dbb93f9bebbec95cb9dc);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_dict_50d43a724f49760c8a15f96c45fefa03));
CHECK_OBJECT_DEEP(mod_consts.const_dict_50d43a724f49760c8a15f96c45fefa03);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_str_digest_2054f27488b140f080bfa12c7d4995e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2054f27488b140f080bfa12c7d4995e5);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_dict_91819b79a81c1b5b2c4466025923b8cf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_91819b79a81c1b5b2c4466025923b8cf);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_str_plain___next__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___next__);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_e778c5231b5311a42dbbefac365c2d13));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e778c5231b5311a42dbbefac365c2d13);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_str_digest_12aa3c4a1a8c4a5ec85fc10821aa28a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_12aa3c4a1a8c4a5ec85fc10821aa28a2);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_str_digest_d600cdd183887c7ad9595b0922db7c39));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d600cdd183887c7ad9595b0922db7c39);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_digest_1409961a8e6dc8da5f9cbc93ebb7adcb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1409961a8e6dc8da5f9cbc93ebb7adcb);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae55c44f1ee1411e39332e672269d261));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae55c44f1ee1411e39332e672269d261);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b8e8189c8ba209ed49f3f8785eabeaf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b8e8189c8ba209ed49f3f8785eabeaf);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_digest_4bbebc1d9722adc37be2a9a9ce3b6435));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4bbebc1d9722adc37be2a9a9ce3b6435);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f0e66e8c7da124e1e88bb8521fc0e41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f0e66e8c7da124e1e88bb8521fc0e41);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_digest_1249e3580ba3d71fe7d2209ee5e39793));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1249e3580ba3d71fe7d2209ee5e39793);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_str_digest_b18f80f11f952018d57a3a549174628e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b18f80f11f952018d57a3a549174628e);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_str_digest_27651526b531aabb27832bc5261ffe1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_27651526b531aabb27832bc5261ffe1e);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_dict_1740977ed38cb311388dd658c402334a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1740977ed38cb311388dd658c402334a);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc4dc5842ffa44bed073423da63a5ef6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc4dc5842ffa44bed073423da63a5ef6);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_dict_43c90fe5e80637d6ab18c5d7f4b6a8d1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_43c90fe5e80637d6ab18c5d7f4b6a8d1);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_str_digest_bff4d4ac71f5bac6f3ded14153c521f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bff4d4ac71f5bac6f3ded14153c521f9);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_str_digest_a936144c251342dd26410f831ae96873));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a936144c251342dd26410f831ae96873);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_tuple_b93b510e0f8e941bc2e3083afab68c70_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b93b510e0f8e941bc2e3083afab68c70_tuple);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_dict_9d104c315b4317661906a460e41356f4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9d104c315b4317661906a460e41356f4);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_str_plain_pager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pager);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_dict_7db0fff42e7e00ad5e8dc9a487472eeb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7db0fff42e7e00ad5e8dc9a487472eeb);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_dict_9e2ef94610658d7d311fc1de6ff93016));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9e2ef94610658d7d311fc1de6ff93016);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_str_plain_Editor));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Editor);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_int_pos_559));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_559);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_true_str_digest_038a28107205f832c6bf850b3119b5af_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_true_str_digest_038a28107205f832c6bf850b3119b5af_tuple);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_dict_a505e30710178ccee71387a2e431090b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a505e30710178ccee71387a2e431090b);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb79f5d8a7e76e66122f39ed31eef225));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb79f5d8a7e76e66122f39ed31eef225);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6f0432676863e88ba6f484a8109cf54));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6f0432676863e88ba6f484a8109cf54);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_dict_d2d899c82c8cb22296a00fe864d5697a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d2d899c82c8cb22296a00fe864d5697a);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_str_digest_fde5013974246bd6fa76ed1b06866455));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fde5013974246bd6fa76ed1b06866455);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_dict_8ecb1d7a9ff1d90b57e61d3f57128d42));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8ecb1d7a9ff1d90b57e61d3f57128d42);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_str_plain_edit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_edit);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_dict_05530c269864a4aa1c325cdcefa3e0bb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_05530c269864a4aa1c325cdcefa3e0bb);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_dict_cf0d693194e42eea3ce3fc6bc72d8cf3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cf0d693194e42eea3ce3fc6bc72d8cf3);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_tuple_b1a0fc1d363dcca62562d8233a9d8ff0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b1a0fc1d363dcca62562d8233a9d8ff0_tuple);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_tuple);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_dict_5625fe8142f98c5870abd09f8d52e3f8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5625fe8142f98c5870abd09f8d52e3f8);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_str_plain_open_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_open_url);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_dict_5763beeec081f731b28476c862da8f22));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5763beeec081f731b28476c862da8f22);
assert(mod_consts_hash[305] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[306] == DEEP_HASH(tstate, mod_consts.const_dict_380ee4567d318183ecb9d3b6325b282b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_380ee4567d318183ecb9d3b6325b282b);
assert(mod_consts_hash[307] == DEEP_HASH(tstate, mod_consts.const_dict_881e89748939c33ad42bfe3cdcbd3c0d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_881e89748939c33ad42bfe3cdcbd3c0d);
assert(mod_consts_hash[308] == DEEP_HASH(tstate, mod_consts.const_str_plain_getchar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getchar);
assert(mod_consts_hash[309] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cad46b367dba9c328b9ff066bf8118c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3cad46b367dba9c328b9ff066bf8118c);
assert(mod_consts_hash[310] == DEEP_HASH(tstate, mod_consts.const_tuple_d4d86f101fb11f76878866fd8c04cd94_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d4d86f101fb11f76878866fd8c04cd94_tuple);
assert(mod_consts_hash[311] == DEEP_HASH(tstate, mod_consts.const_str_digest_cdc9477f8b36ddea2e9bdedf1b9b42eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cdc9477f8b36ddea2e9bdedf1b9b42eb);
assert(mod_consts_hash[312] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[313] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[314] == DEEP_HASH(tstate, mod_consts.const_tuple_ab5eabab950404d8ac2154666b738f8b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ab5eabab950404d8ac2154666b738f8b_tuple);
assert(mod_consts_hash[315] == DEEP_HASH(tstate, mod_consts.const_tuple_b86b9e6b7404ad8dde291c5f88ce8e5c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b86b9e6b7404ad8dde291c5f88ce8e5c_tuple);
assert(mod_consts_hash[316] == DEEP_HASH(tstate, mod_consts.const_tuple_a2fbfe68bf62ac361ea6686eb227242a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a2fbfe68bf62ac361ea6686eb227242a_tuple);
assert(mod_consts_hash[317] == DEEP_HASH(tstate, mod_consts.const_tuple_04a687a464e9d025464a8ca1d8a4aabe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_04a687a464e9d025464a8ca1d8a4aabe_tuple);
assert(mod_consts_hash[318] == DEEP_HASH(tstate, mod_consts.const_tuple_180b9610a734456dc7f903278a527e05_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_180b9610a734456dc7f903278a527e05_tuple);
assert(mod_consts_hash[319] == DEEP_HASH(tstate, mod_consts.const_tuple_903dff06c3e1b44c8095595423cab0ad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_903dff06c3e1b44c8095595423cab0ad_tuple);
assert(mod_consts_hash[320] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ch_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ch_tuple);
assert(mod_consts_hash[321] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_unquote_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_unquote_tuple);
assert(mod_consts_hash[322] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_text_tuple);
assert(mod_consts_hash[323] == DEEP_HASH(tstate, mod_consts.const_tuple_aae618253389c5bbf1140f910a509a16_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aae618253389c5bbf1140f910a509a16_tuple);
assert(mod_consts_hash[324] == DEEP_HASH(tstate, mod_consts.const_tuple_0a6536038ce45638449e660153f39881_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0a6536038ce45638449e660153f39881_tuple);
assert(mod_consts_hash[325] == DEEP_HASH(tstate, mod_consts.const_tuple_4a7bc6fc05bd02a6e1223ab5b51a95e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4a7bc6fc05bd02a6e1223ab5b51a95e0_tuple);
assert(mod_consts_hash[326] == DEEP_HASH(tstate, mod_consts.const_tuple_336df753320775396968a091f9ef1e73_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_336df753320775396968a091f9ef1e73_tuple);
assert(mod_consts_hash[327] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple);
assert(mod_consts_hash[328] == DEEP_HASH(tstate, mod_consts.const_tuple_4fe4b33915060ff7e4364e11ac18a1ac_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4fe4b33915060ff7e4364e11ac18a1ac_tuple);
assert(mod_consts_hash[329] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_rv_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_rv_tuple);
assert(mod_consts_hash[330] == DEEP_HASH(tstate, mod_consts.const_tuple_a81e0b826aacd9669034ad21b03a4fd5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a81e0b826aacd9669034ad21b03a4fd5_tuple);
assert(mod_consts_hash[331] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_echo_str_plain_func_str_plain_rv_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_echo_str_plain_func_str_plain_rv_tuple);
assert(mod_consts_hash[332] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_step_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_step_tuple);
assert(mod_consts_hash[333] == DEEP_HASH(tstate, mod_consts.const_tuple_08d3e1039e2d9acad5f049ece2842d3f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_08d3e1039e2d9acad5f049ece2842d3f_tuple);
assert(mod_consts_hash[334] == DEEP_HASH(tstate, mod_consts.const_tuple_976b44622d4c5745ce5caa3616df8b35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_976b44622d4c5745ce5caa3616df8b35_tuple);
assert(mod_consts_hash[335] == DEEP_HASH(tstate, mod_consts.const_tuple_e4957552a044c48d80d9e40a7a625b09_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e4957552a044c48d80d9e40a7a625b09_tuple);
assert(mod_consts_hash[336] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_current_item_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_current_item_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 25
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
static PyObject *module_var_accessor_click$_termui_impl$AFTER_BAR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AFTER_BAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AFTER_BAR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AFTER_BAR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AFTER_BAR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AFTER_BAR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AFTER_BAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AFTER_BAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AFTER_BAR);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$BEFORE_BAR(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_BEFORE_BAR);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BEFORE_BAR);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BEFORE_BAR, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BEFORE_BAR);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BEFORE_BAR, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_BEFORE_BAR);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_BEFORE_BAR);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BEFORE_BAR);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$CYGWIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CYGWIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CYGWIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CYGWIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CYGWIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CYGWIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CYGWIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CYGWIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CYGWIN);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$ClickException(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ClickException);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClickException);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClickException, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClickException);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClickException, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ClickException);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ClickException);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClickException);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$Path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Path);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$V(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_V);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_V);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_V, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_V);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_V, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_V);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_V);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_V);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$WIN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_WIN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WIN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WIN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WIN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WIN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_WIN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_WIN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WIN);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$_(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_underscore);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_underscore);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_underscore, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_underscore);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_underscore, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_underscore);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_underscore);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_underscore);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$_default_text_stdout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__default_text_stdout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_text_stdout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_text_stdout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_text_stdout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_text_stdout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__default_text_stdout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__default_text_stdout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__default_text_stdout);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$_nullpager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nullpager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nullpager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nullpager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__nullpager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__nullpager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nullpager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nullpager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__nullpager);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$_pipepager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pipepager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pipepager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pipepager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__pipepager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__pipepager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pipepager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pipepager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__pipepager);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$_tempfilepager(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__tempfilepager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__tempfilepager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__tempfilepager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__tempfilepager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__tempfilepager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__tempfilepager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__tempfilepager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__tempfilepager);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$_translate_ch_to_exc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__translate_ch_to_exc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__translate_ch_to_exc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__translate_ch_to_exc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__translate_ch_to_exc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__translate_ch_to_exc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__translate_ch_to_exc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__translate_ch_to_exc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__translate_ch_to_exc);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$contextlib(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$echo(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_echo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_echo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_echo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_echo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_echo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_echo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_echo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_echo);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$get_best_encoding(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_get_best_encoding);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_best_encoding);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_best_encoding, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_best_encoding);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_best_encoding, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_get_best_encoding);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_get_best_encoding);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_best_encoding);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$isatty(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_isatty);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isatty);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isatty, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isatty);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isatty, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_isatty);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_isatty);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isatty);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$msvcrt(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$open_stream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_open_stream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_open_stream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_open_stream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_open_stream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_open_stream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_open_stream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_open_stream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_open_stream);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$shlex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_shlex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_shlex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_shlex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_shlex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_shlex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_shlex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_shlex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_shlex);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$strip_ansi(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_ansi);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_strip_ansi);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_strip_ansi, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_strip_ansi);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_strip_ansi, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_ansi);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_ansi);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_ansi);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$term_len(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_term_len);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_term_len);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_term_len, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_term_len);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_term_len, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_term_len);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_term_len);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_term_len);
    }

    return result;
}

static PyObject *module_var_accessor_click$_termui_impl$time(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$_termui_impl->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$_termui_impl->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$_termui_impl->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_time);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_2a63609a8c2b081f5c492ef21aa5eaee;
static PyCodeObject *code_objects_90e9ed639780bc1d3d1cdb9f3d5b740a;
static PyCodeObject *code_objects_1a558858ea42a0fe9ec40e372bf46139;
static PyCodeObject *code_objects_9bb17afc515feb2bbc17b44a8563c88e;
static PyCodeObject *code_objects_ac973de9d0e74532f448dbe657cfe447;
static PyCodeObject *code_objects_ec84a43d44aa500fa4a45f4f43a26b96;
static PyCodeObject *code_objects_f88e9ea27b036baaeef8074fd5de1164;
static PyCodeObject *code_objects_c1c1b8e2dd88c5c53d699380c7879bee;
static PyCodeObject *code_objects_5895ef9e84a45d446bc23f8efcd56fb4;
static PyCodeObject *code_objects_d4201fd627b7d5f86859f602473679a9;
static PyCodeObject *code_objects_eaa435e453e31ee54c2302612996a69f;
static PyCodeObject *code_objects_43c8c1324a42130c6ce9dc5a1b06a71e;
static PyCodeObject *code_objects_d0d8628de3200ea3fcfac5b276d8c283;
static PyCodeObject *code_objects_d53ab6913b2e19d43c95fd63fd9b81c6;
static PyCodeObject *code_objects_d954eac94f59ad8a04eda2bb14c73d45;
static PyCodeObject *code_objects_f89f24c141b508a46755fd37474a1f17;
static PyCodeObject *code_objects_e81f11b07082e04af0f9a6792c582199;
static PyCodeObject *code_objects_3eb3bab272d1b352a2b0f17ece0db8e4;
static PyCodeObject *code_objects_fee12720a7151a6dcb33d0a855917ac9;
static PyCodeObject *code_objects_1f6964498c35b29f49ae53a8178ffd06;
static PyCodeObject *code_objects_a065e7c844210e3b9124505975648097;
static PyCodeObject *code_objects_bbcf39718f1e159c50b7fb19ec740c82;
static PyCodeObject *code_objects_a4b731b77708a0ff313f78bb80d5ac74;
static PyCodeObject *code_objects_72090a47f402140bc1849e0eeacff831;
static PyCodeObject *code_objects_ebbe0efa38ebf349e8d300fb233e0fee;
static PyCodeObject *code_objects_1ffb46581ed4f879de73d8812077f81e;
static PyCodeObject *code_objects_2a59706e91cd2c5a6139108e6c8682b9;
static PyCodeObject *code_objects_b74357105280d15d07f20f11f0f78f4a;
static PyCodeObject *code_objects_34c06b40bb688064107441a139c9885d;
static PyCodeObject *code_objects_cf7790a8262abf726a94932c6a3f5ad8;
static PyCodeObject *code_objects_cf7fdd5083b61c0c2e2d3ea3cdf6295d;
static PyCodeObject *code_objects_baa9f644c87474d36ecdbeb5781932f3;
static PyCodeObject *code_objects_b5a62cb582b70abe6079333ca5cfd526;
static PyCodeObject *code_objects_824402981e8f149b35713f0574495bd8;
static PyCodeObject *code_objects_35f31cd049c36e8bfb0b417af4bdd2f5;
static PyCodeObject *code_objects_54e1dbb172a07e80352d7bc898734fca;
static PyCodeObject *code_objects_a493abe2864d4e1f005ee0221f175d7f;
static PyCodeObject *code_objects_82652a0e3ed33a6778ea4c872565beea;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_3cad46b367dba9c328b9ff066bf8118c); CHECK_OBJECT(module_filename_obj);
code_objects_2a63609a8c2b081f5c492ef21aa5eaee = MAKE_CODE_OBJECT(module_filename_obj, 599, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_91ba4a3473d59fc6957f11a4d3e3b9b5, mod_consts.const_tuple_d4d86f101fb11f76878866fd8c04cd94_tuple, NULL, 1, 0, 0);
code_objects_90e9ed639780bc1d3d1cdb9f3d5b740a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_cdc9477f8b36ddea2e9bdedf1b9b42eb, mod_consts.const_str_digest_cdc9477f8b36ddea2e9bdedf1b9b42eb, NULL, NULL, 0, 0, 0);
code_objects_1a558858ea42a0fe9ec40e372bf46139 = MAKE_CODE_OBJECT(module_filename_obj, 559, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_Editor, mod_consts.const_str_plain_Editor, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_9bb17afc515feb2bbc17b44a8563c88e = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_ProgressBar, mod_consts.const_str_plain_ProgressBar, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ac973de9d0e74532f448dbe657cfe447 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___enter__, mod_consts.const_str_digest_5e006cc4e42812ae282921c7519334ce, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ec84a43d44aa500fa4a45f4f43a26b96 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___exit__, mod_consts.const_str_digest_352c31331323dbb93f9bebbec95cb9dc, mod_consts.const_tuple_ab5eabab950404d8ac2154666b738f8b_tuple, NULL, 4, 0, 0);
code_objects_f88e9ea27b036baaeef8074fd5de1164 = MAKE_CODE_OBJECT(module_filename_obj, 560, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_cb79f5d8a7e76e66122f39ed31eef225, mod_consts.const_tuple_b86b9e6b7404ad8dde291c5f88ce8e5c_tuple, NULL, 5, 0, 0);
code_objects_c1c1b8e2dd88c5c53d699380c7879bee = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_fad7b12621558405fca3d592c4e129f1, mod_consts.const_tuple_a2fbfe68bf62ac361ea6686eb227242a_tuple, NULL, 17, 0, 0);
code_objects_5895ef9e84a45d446bc23f8efcd56fb4 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___iter__, mod_consts.const_str_digest_2054f27488b140f080bfa12c7d4995e5, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_d4201fd627b7d5f86859f602473679a9 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___next__, mod_consts.const_str_digest_e778c5231b5311a42dbbefac365c2d13, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eaa435e453e31ee54c2302612996a69f = MAKE_CODE_OBJECT(module_filename_obj, 549, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__nullpager, mod_consts.const_str_plain__nullpager, mod_consts.const_tuple_04a687a464e9d025464a8ca1d8a4aabe_tuple, NULL, 3, 0, 0);
code_objects_43c8c1324a42130c6ce9dc5a1b06a71e = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__pipepager, mod_consts.const_str_plain__pipepager, mod_consts.const_tuple_180b9610a734456dc7f903278a527e05_tuple, NULL, 3, 0, 0);
code_objects_d0d8628de3200ea3fcfac5b276d8c283 = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__tempfilepager, mod_consts.const_str_plain__tempfilepager, mod_consts.const_tuple_903dff06c3e1b44c8095595423cab0ad_tuple, NULL, 3, 0, 0);
code_objects_d53ab6913b2e19d43c95fd63fd9b81c6 = MAKE_CODE_OBJECT(module_filename_obj, 742, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__translate_ch_to_exc, mod_consts.const_str_plain__translate_ch_to_exc, mod_consts.const_tuple_str_plain_ch_tuple, NULL, 1, 0, 0);
code_objects_d954eac94f59ad8a04eda2bb14c73d45 = MAKE_CODE_OBJECT(module_filename_obj, 674, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__unquote_file, mod_consts.const_str_digest_c4ce112c7b92e43eb9d61fea1609aace, mod_consts.const_tuple_str_plain_url_str_plain_unquote_tuple, NULL, 1, 0, 0);
code_objects_f89f24c141b508a46755fd37474a1f17 = MAKE_CODE_OBJECT(module_filename_obj, 616, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_edit, mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple, NULL, 2, 0, 0);
code_objects_e81f11b07082e04af0f9a6792c582199 = MAKE_CODE_OBJECT(module_filename_obj, 621, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_edit, mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1, mod_consts.const_tuple_str_plain_self_str_plain_text_tuple, NULL, 2, 0, 0);
code_objects_3eb3bab272d1b352a2b0f17ece0db8e4 = MAKE_CODE_OBJECT(module_filename_obj, 623, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_edit, mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1, mod_consts.const_tuple_aae618253389c5bbf1140f910a509a16_tuple, NULL, 2, 0, 0);
code_objects_fee12720a7151a6dcb33d0a855917ac9 = MAKE_CODE_OBJECT(module_filename_obj, 589, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_edit_files, mod_consts.const_str_digest_fde5013974246bd6fa76ed1b06866455, mod_consts.const_tuple_0a6536038ce45638449e660153f39881_tuple, NULL, 2, 0, 0);
code_objects_1f6964498c35b29f49ae53a8178ffd06 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_eta, mod_consts.const_str_digest_ae55c44f1ee1411e39332e672269d261, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a065e7c844210e3b9124505975648097 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_finish, mod_consts.const_str_digest_a936144c251342dd26410f831ae96873, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_bbcf39718f1e159c50b7fb19ec740c82 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_format_bar, mod_consts.const_str_digest_1249e3580ba3d71fe7d2209ee5e39793, mod_consts.const_tuple_4a7bc6fc05bd02a6e1223ab5b51a95e0_tuple, NULL, 1, 0, 0);
code_objects_a4b731b77708a0ff313f78bb80d5ac74 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_format_eta, mod_consts.const_str_digest_7b8e8189c8ba209ed49f3f8785eabeaf, mod_consts.const_tuple_336df753320775396968a091f9ef1e73_tuple, NULL, 1, 0, 0);
code_objects_72090a47f402140bc1849e0eeacff831 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_format_pct, mod_consts.const_str_digest_5f0e66e8c7da124e1e88bb8521fc0e41, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ebbe0efa38ebf349e8d300fb233e0fee = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_format_pos, mod_consts.const_str_digest_4bbebc1d9722adc37be2a9a9ce3b6435, mod_consts.const_tuple_str_plain_self_str_plain_pos_tuple, NULL, 1, 0, 0);
code_objects_1ffb46581ed4f879de73d8812077f81e = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_format_progress_line, mod_consts.const_str_digest_b18f80f11f952018d57a3a549174628e, mod_consts.const_tuple_4fe4b33915060ff7e4364e11ac18a1ac_tuple, NULL, 1, 0, 0);
code_objects_2a59706e91cd2c5a6139108e6c8682b9 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_generator, mod_consts.const_str_digest_0e3c8d40431b73912fdeca388b7e3a6f, mod_consts.const_tuple_str_plain_self_str_plain_rv_tuple, NULL, 1, 0, 0);
code_objects_b74357105280d15d07f20f11f0f78f4a = MAKE_CODE_OBJECT(module_filename_obj, 572, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_editor, mod_consts.const_str_digest_b6f0432676863e88ba6f484a8109cf54, mod_consts.const_tuple_a81e0b826aacd9669034ad21b03a4fd5_tuple, NULL, 1, 0, 0);
code_objects_34c06b40bb688064107441a139c9885d = MAKE_CODE_OBJECT(module_filename_obj, 762, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_getchar, mod_consts.const_str_plain_getchar, mod_consts.const_tuple_str_plain_echo_str_plain_func_str_plain_rv_tuple, NULL, 1, 0, 0);
code_objects_cf7790a8262abf726a94932c6a3f5ad8 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_make_step, mod_consts.const_str_digest_dc4dc5842ffa44bed073423da63a5ef6, mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_step_tuple, NULL, 2, 0, 0);
code_objects_cf7fdd5083b61c0c2e2d3ea3cdf6295d = MAKE_CODE_OBJECT(module_filename_obj, 671, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_open_url, mod_consts.const_str_plain_open_url, mod_consts.const_tuple_08d3e1039e2d9acad5f049ece2842d3f_tuple, NULL, 3, 0, 0);
code_objects_baa9f644c87474d36ecdbeb5781932f3 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pager, mod_consts.const_str_plain_pager, mod_consts.const_tuple_976b44622d4c5745ce5caa3616df8b35_tuple, NULL, 2, 0, 0);
code_objects_b5a62cb582b70abe6079333ca5cfd526 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pct, mod_consts.const_str_digest_d600cdd183887c7ad9595b0922db7c39, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_824402981e8f149b35713f0574495bd8 = MAKE_CODE_OBJECT(module_filename_obj, 759, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_raw_terminal, mod_consts.const_str_plain_raw_terminal, NULL, NULL, 0, 0, 0);
code_objects_35f31cd049c36e8bfb0b417af4bdd2f5 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_finish, mod_consts.const_str_digest_12aa3c4a1a8c4a5ec85fc10821aa28a2, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_54e1dbb172a07e80352d7bc898734fca = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_render_progress, mod_consts.const_str_digest_27651526b531aabb27832bc5261ffe1e, mod_consts.const_tuple_e4957552a044c48d80d9e40a7a625b09_tuple, NULL, 1, 0, 0);
code_objects_a493abe2864d4e1f005ee0221f175d7f = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_time_per_iteration, mod_consts.const_str_digest_1409961a8e6dc8da5f9cbc93ebb7adcb, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_82652a0e3ed33a6778ea4c872565beea = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_update, mod_consts.const_str_digest_bff4d4ac71f5bac6f3ded14153c521f9, mod_consts.const_tuple_str_plain_self_str_plain_n_steps_str_plain_current_item_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_click$_termui_impl$$$function__19_generator$$$genobj__1_generator(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal(PyThreadState *tstate);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__10_format_eta(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__11_format_pos(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__12_format_pct(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__13_format_bar(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__14_format_progress_line(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__15_render_progress(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__16_make_step(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__17_update(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__18_finish(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__19_generator(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__20_pager(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__21__pipepager(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__22__tempfilepager(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__23__nullpager(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__24___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__25_get_editor(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__26_edit_files(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__27_edit(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__28_edit(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__29_edit(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__2___enter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__30_open_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__31__translate_ch_to_exc(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__32_raw_terminal(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__33_getchar(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__3___exit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__4___iter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__5___next__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__6_render_finish(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__7_pct(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__8_time_per_iteration(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__9_eta(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_click$_termui_impl$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_iterable = python_pars[1];
PyObject *par_length = python_pars[2];
PyObject *par_fill_char = python_pars[3];
PyObject *par_empty_char = python_pars[4];
PyObject *par_bar_template = python_pars[5];
PyObject *par_info_sep = python_pars[6];
PyObject *par_hidden = python_pars[7];
PyObject *par_show_eta = python_pars[8];
PyObject *par_show_percent = python_pars[9];
PyObject *par_show_pos = python_pars[10];
PyObject *par_item_show_func = python_pars[11];
PyObject *par_label = python_pars[12];
PyObject *par_file = python_pars[13];
PyObject *par_color = python_pars[14];
PyObject *par_update_min_steps = python_pars[15];
PyObject *par_width = python_pars[16];
PyObject *var_length_hint = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c1c1b8e2dd88c5c53d699380c7879bee, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__1___init__->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__1___init__ = cache_frame_frame_click$_termui_impl$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__1___init__);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_fill_char);
tmp_assattr_value_1 = par_fill_char;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_fill_char, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_empty_char);
tmp_assattr_value_2 = par_empty_char;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_empty_char, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_bar_template);
tmp_assattr_value_3 = par_bar_template;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_bar_template, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_info_sep);
tmp_assattr_value_4 = par_info_sep;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_info_sep, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_hidden);
tmp_assattr_value_5 = par_hidden;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_hidden, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_show_eta);
tmp_assattr_value_6 = par_show_eta;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_show_eta, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_show_percent);
tmp_assattr_value_7 = par_show_percent;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_show_percent, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_show_pos);
tmp_assattr_value_8 = par_show_pos;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_show_pos, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
CHECK_OBJECT(par_item_show_func);
tmp_assattr_value_9 = par_item_show_func;
CHECK_OBJECT(par_self);
tmp_assattr_target_9 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain_item_show_func, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_10;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_label);
tmp_or_left_value_1 = par_label;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_or_right_value_1 = const_str_empty;
tmp_assattr_value_10 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assattr_value_10 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_10 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_label, tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_file);
tmp_cmp_expr_left_1 = par_file;
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
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_click$_termui_impl$_default_text_stdout(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__default_text_stdout);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 75;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_file;
    assert(old != NULL);
    par_file = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_file);
tmp_cmp_expr_left_2 = par_file;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_2 == NULL));
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 80;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_file;
    assert(old != NULL);
    par_file = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_assattr_target_11;
CHECK_OBJECT(par_file);
tmp_assattr_value_11 = par_file;
CHECK_OBJECT(par_self);
tmp_assattr_target_11 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, const_str_plain_file, tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(par_color);
tmp_assattr_value_12 = par_color;
CHECK_OBJECT(par_self);
tmp_assattr_target_12 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_color, tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_assattr_target_13;
CHECK_OBJECT(par_update_min_steps);
tmp_assattr_value_13 = par_update_min_steps;
CHECK_OBJECT(par_self);
tmp_assattr_target_13 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_update_min_steps, tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_assattr_target_14;
tmp_assattr_value_14 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_14 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts.const_str_plain__completed_intervals, tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_assattr_target_15;
CHECK_OBJECT(par_width);
tmp_assattr_value_15 = par_width;
CHECK_OBJECT(par_self);
tmp_assattr_target_15 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_width, tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_assattr_target_16;
CHECK_OBJECT(par_width);
tmp_cmp_expr_left_3 = par_width;
tmp_cmp_expr_right_3 = const_int_0;
tmp_assattr_value_16 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_assattr_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_16 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_autowidth, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_length);
tmp_cmp_expr_left_4 = par_length;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_operator;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_length_hint_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 90;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_length_hint,
        const_int_0
    );
} else {
    tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_length_hint);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_length_hint == NULL);
var_length_hint = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_length_hint);
tmp_called_value_3 = var_length_hint;
CHECK_OBJECT(par_iterable);
tmp_args_element_value_1 = par_iterable;
tmp_args_element_value_2 = const_int_neg_1;
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_length;
    assert(old != NULL);
    par_length = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_length);
tmp_cmp_expr_left_5 = par_length;
tmp_cmp_expr_right_5 = const_int_neg_1;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooooo";
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
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_None;
{
    PyObject *old = par_length;
    assert(old != NULL);
    par_length = tmp_assign_source_5;
    Py_INCREF(par_length);
    Py_DECREF(old);
}

}
branch_no_4:;
branch_no_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_iterable);
tmp_cmp_expr_left_6 = par_iterable;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_length);
tmp_cmp_expr_left_7 = par_length;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6328f2a6526a87a2c25a6da9b1c2a925;
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 98;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 98;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_xrange_low_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cast);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_1953dfea08518fefc8c14ab95df13451;
CHECK_OBJECT(par_length);
tmp_xrange_low_1 = par_length;
tmp_args_element_value_4 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 99;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 99;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_iterable;
    assert(old != NULL);
    par_iterable = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_5:;
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_iter_arg_1;
PyObject *tmp_assattr_target_17;
if (par_iterable == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_iterable);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = par_iterable;
tmp_assattr_value_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assattr_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_17 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, const_str_plain_iter, tmp_assattr_value_17);
CHECK_OBJECT(tmp_assattr_value_17);
Py_DECREF(tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_assattr_target_18;
CHECK_OBJECT(par_length);
tmp_assattr_value_18 = par_length;
CHECK_OBJECT(par_self);
tmp_assattr_target_18 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts.const_str_plain_length, tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_19;
PyObject *tmp_assattr_target_19;
tmp_assattr_value_19 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_19 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts.const_str_plain_pos, tmp_assattr_value_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_20;
PyObject *tmp_assattr_target_20;
tmp_assattr_value_20 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(par_self);
tmp_assattr_target_20 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts.const_str_plain_avg, tmp_assattr_value_20);
CHECK_OBJECT(tmp_assattr_value_20);
Py_DECREF(tmp_assattr_value_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_click$_termui_impl$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 106;
tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_7;
}
{
PyObject *tmp_assattr_value_21;
PyObject *tmp_assattr_target_21;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assattr_value_21 = tmp_assign_unpack_1__assign_source;
CHECK_OBJECT(par_self);
tmp_assattr_target_21 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts.const_str_plain_start, tmp_assattr_value_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assattr_value_22;
PyObject *tmp_assattr_target_22;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assattr_value_22 = tmp_assign_unpack_1__assign_source;
CHECK_OBJECT(par_self);
tmp_assattr_target_22 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts.const_str_plain_last_eta, tmp_assattr_value_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
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

Py_XDECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
{
PyObject *tmp_assattr_value_23;
PyObject *tmp_assattr_target_23;
tmp_assattr_value_23 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_23 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts.const_str_plain_eta_known, tmp_assattr_value_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_24;
PyObject *tmp_assattr_target_24;
tmp_assattr_value_24 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_24 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts.const_str_plain_finished, tmp_assattr_value_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_25;
PyObject *tmp_assattr_target_25;
tmp_assattr_value_25 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_25 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, mod_consts.const_str_plain_max_width, tmp_assattr_value_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_26;
PyObject *tmp_assattr_target_26;
tmp_assattr_value_26 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_26 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts.const_str_plain_entered, tmp_assattr_value_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_27;
PyObject *tmp_assattr_target_27;
tmp_assattr_value_27 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_27 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts.const_str_plain_current_item, tmp_assattr_value_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_28;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_28;
tmp_called_value_5 = module_var_accessor_click$_termui_impl$isatty(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isatty);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_file);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__1___init__->m_frame.f_lineno = 112;
tmp_assattr_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assattr_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_28 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_28, mod_consts.const_str_plain__is_atty, tmp_assattr_value_28);
CHECK_OBJECT(tmp_assattr_value_28);
Py_DECREF(tmp_assattr_value_28);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_29;
PyObject *tmp_assattr_target_29;
tmp_assattr_value_29 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_29 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_29, mod_consts.const_str_plain__last_line, tmp_assattr_value_29);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__1___init__,
    type_description_1,
    par_self,
    par_iterable,
    par_length,
    par_fill_char,
    par_empty_char,
    par_bar_template,
    par_info_sep,
    par_hidden,
    par_show_eta,
    par_show_percent,
    par_show_pos,
    par_item_show_func,
    par_label,
    par_file,
    par_color,
    par_update_min_steps,
    par_width,
    var_length_hint
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__1___init__ == cache_frame_frame_click$_termui_impl$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__1___init__);
    cache_frame_frame_click$_termui_impl$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__1___init__);

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
Py_XDECREF(par_iterable);
par_iterable = NULL;
CHECK_OBJECT(par_length);
CHECK_OBJECT(par_length);
Py_DECREF(par_length);
par_length = NULL;
CHECK_OBJECT(par_file);
CHECK_OBJECT(par_file);
Py_DECREF(par_file);
par_file = NULL;
Py_XDECREF(var_length_hint);
var_length_hint = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_iterable);
par_iterable = NULL;
Py_XDECREF(par_length);
par_length = NULL;
Py_XDECREF(par_file);
par_file = NULL;
Py_XDECREF(var_length_hint);
var_length_hint = NULL;
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
CHECK_OBJECT(par_fill_char);
Py_DECREF(par_fill_char);
CHECK_OBJECT(par_empty_char);
Py_DECREF(par_empty_char);
CHECK_OBJECT(par_bar_template);
Py_DECREF(par_bar_template);
CHECK_OBJECT(par_info_sep);
Py_DECREF(par_info_sep);
CHECK_OBJECT(par_hidden);
Py_DECREF(par_hidden);
CHECK_OBJECT(par_show_eta);
Py_DECREF(par_show_eta);
CHECK_OBJECT(par_show_percent);
Py_DECREF(par_show_percent);
CHECK_OBJECT(par_show_pos);
Py_DECREF(par_show_pos);
CHECK_OBJECT(par_item_show_func);
Py_DECREF(par_item_show_func);
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
CHECK_OBJECT(par_update_min_steps);
Py_DECREF(par_update_min_steps);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fill_char);
Py_DECREF(par_fill_char);
CHECK_OBJECT(par_empty_char);
Py_DECREF(par_empty_char);
CHECK_OBJECT(par_bar_template);
Py_DECREF(par_bar_template);
CHECK_OBJECT(par_info_sep);
Py_DECREF(par_info_sep);
CHECK_OBJECT(par_hidden);
Py_DECREF(par_hidden);
CHECK_OBJECT(par_show_eta);
Py_DECREF(par_show_eta);
CHECK_OBJECT(par_show_percent);
Py_DECREF(par_show_percent);
CHECK_OBJECT(par_show_pos);
Py_DECREF(par_show_pos);
CHECK_OBJECT(par_item_show_func);
Py_DECREF(par_item_show_func);
CHECK_OBJECT(par_label);
Py_DECREF(par_label);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
CHECK_OBJECT(par_update_min_steps);
Py_DECREF(par_update_min_steps);
CHECK_OBJECT(par_width);
Py_DECREF(par_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__2___enter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__2___enter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__2___enter__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__2___enter__)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__2___enter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__2___enter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__2___enter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ac973de9d0e74532f448dbe657cfe447, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__2___enter__->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__2___enter__ = cache_frame_frame_click$_termui_impl$$$function__2___enter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__2___enter__);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__2___enter__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_entered, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_click$_termui_impl$$$function__2___enter__->m_frame.f_lineno = 117;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render_progress);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__2___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__2___enter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__2___enter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__2___enter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__2___enter__ == cache_frame_frame_click$_termui_impl$$$function__2___enter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__2___enter__);
    cache_frame_frame_click$_termui_impl$$$function__2___enter__ = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__2___enter__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
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


static PyObject *impl_click$_termui_impl$$$function__3___exit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_value = python_pars[2];
PyObject *par_tb = python_pars[3];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__3___exit__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__3___exit__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__3___exit__)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__3___exit__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__3___exit__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__3___exit__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ec84a43d44aa500fa4a45f4f43a26b96, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__3___exit__->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__3___exit__ = cache_frame_frame_click$_termui_impl$$$function__3___exit__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__3___exit__);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__3___exit__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_click$_termui_impl$$$function__3___exit__->m_frame.f_lineno = 126;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render_finish);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__3___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__3___exit__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__3___exit__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__3___exit__,
    type_description_1,
    par_self,
    par_exc_type,
    par_exc_value,
    par_tb
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__3___exit__ == cache_frame_frame_click$_termui_impl$$$function__3___exit__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__3___exit__);
    cache_frame_frame_click$_termui_impl$$$function__3___exit__ = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__3___exit__);

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
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
CHECK_OBJECT(par_tb);
Py_DECREF(par_tb);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
CHECK_OBJECT(par_tb);
Py_DECREF(par_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__4___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__4___iter__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__4___iter__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__4___iter__)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__4___iter__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__4___iter__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__4___iter__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5895ef9e84a45d446bc23f8efcd56fb4, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__4___iter__->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__4___iter__ = cache_frame_frame_click$_termui_impl$$$function__4___iter__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__4___iter__);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__4___iter__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_entered);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "o";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b89208f8e14b2085f7f61bd3f36773b2;
frame_frame_click$_termui_impl$$$function__4___iter__->m_frame.f_lineno = 130;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 130;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_click$_termui_impl$$$function__4___iter__->m_frame.f_lineno = 131;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render_progress);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_click$_termui_impl$$$function__4___iter__->m_frame.f_lineno = 132;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_generator);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__4___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__4___iter__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__4___iter__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__4___iter__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__4___iter__ == cache_frame_frame_click$_termui_impl$$$function__4___iter__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__4___iter__);
    cache_frame_frame_click$_termui_impl$$$function__4___iter__ = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__4___iter__);

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


static PyObject *impl_click$_termui_impl$$$function__5___next__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__5___next__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__5___next__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__5___next__)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__5___next__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__5___next__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__5___next__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d4201fd627b7d5f86859f602473679a9, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__5___next__->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__5___next__ = cache_frame_frame_click$_termui_impl$$$function__5___next__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__5___next__);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__5___next__) == 2);

// Framed code:
{
PyObject *tmp_value_value_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_self);
tmp_iter_arg_1 = par_self;
tmp_value_value_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_value_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = ITERATOR_NEXT(tmp_value_value_1);
if (tmp_return_value == NULL) {
    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

    if (!HAS_EXCEPTION_STATE(&exception_state)) {
        SET_EXCEPTION_PRESERVATION_STATE_STOP_ITERATION_EMPTY(tstate, &exception_state);
    }
}

CHECK_OBJECT(tmp_value_value_1);
Py_DECREF(tmp_value_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__5___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__5___next__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__5___next__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__5___next__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__5___next__ == cache_frame_frame_click$_termui_impl$$$function__5___next__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__5___next__);
    cache_frame_frame_click$_termui_impl$$$function__5___next__ = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__5___next__);

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


static PyObject *impl_click$_termui_impl$$$function__6_render_finish(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__6_render_finish;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__6_render_finish = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__6_render_finish)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__6_render_finish);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__6_render_finish == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__6_render_finish = MAKE_FUNCTION_FRAME(tstate, code_objects_35f31cd049c36e8bfb0b417af4bdd2f5, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__6_render_finish->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__6_render_finish = cache_frame_frame_click$_termui_impl$$$function__6_render_finish;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__6_render_finish);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__6_render_finish) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_hidden);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 143;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__is_atty);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_file);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_click$_termui_impl$AFTER_BAR(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AFTER_BAR);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__6_render_finish->m_frame.f_lineno = 145;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_file);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__6_render_finish->m_frame.f_lineno = 146;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_flush);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__6_render_finish, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__6_render_finish->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__6_render_finish, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__6_render_finish,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__6_render_finish == cache_frame_frame_click$_termui_impl$$$function__6_render_finish) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__6_render_finish);
    cache_frame_frame_click$_termui_impl$$$function__6_render_finish = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__6_render_finish);

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


static PyObject *impl_click$_termui_impl$$$function__7_pct(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__7_pct;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__7_pct = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__7_pct)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__7_pct);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__7_pct == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__7_pct = MAKE_FUNCTION_FRAME(tstate, code_objects_b5a62cb582b70abe6079333ca5cfd526, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__7_pct->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__7_pct = cache_frame_frame_click$_termui_impl$$$function__7_pct;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__7_pct);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__7_pct) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_finished);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 150;
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
tmp_return_value = const_float_1_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_expression_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_float_arg_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pos);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_length);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_int_pos_1;
Py_INCREF(tmp_or_right_value_2);
tmp_float_arg_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_float_arg_1 = tmp_or_left_value_2;
or_end_2:;
tmp_or_left_value_1 = TO_FLOAT(tmp_float_arg_1);
CHECK_OBJECT(tmp_float_arg_1);
Py_DECREF(tmp_float_arg_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 152;
type_description_1 = "o";
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
tmp_or_right_value_1 = const_int_pos_1;
Py_INCREF(tmp_or_right_value_1);
tmp_truediv_expr_right_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_truediv_expr_right_1 = tmp_or_left_value_1;
or_end_1:;
tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = const_float_1_0;
frame_frame_click$_termui_impl$$$function__7_pct->m_frame.f_lineno = 152;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__7_pct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__7_pct->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__7_pct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__7_pct,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__7_pct == cache_frame_frame_click$_termui_impl$$$function__7_pct) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__7_pct);
    cache_frame_frame_click$_termui_impl$$$function__7_pct = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__7_pct);

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


static PyObject *impl_click$_termui_impl$$$function__8_time_per_iteration(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__8_time_per_iteration;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration = MAKE_FUNCTION_FRAME(tstate, code_objects_a493abe2864d4e1f005ee0221f175d7f, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__8_time_per_iteration = cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__8_time_per_iteration);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__8_time_per_iteration) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_avg);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "o";
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
tmp_return_value = const_float_0_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sum_sequence_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_float_arg_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_sum_sequence_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_avg);
if (tmp_sum_sequence_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
CHECK_OBJECT(tmp_sum_sequence_1);
Py_DECREF(tmp_sum_sequence_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_avg);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_float_arg_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_float_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = TO_FLOAT(tmp_float_arg_1);
CHECK_OBJECT(tmp_float_arg_1);
Py_DECREF(tmp_float_arg_1);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 158;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__8_time_per_iteration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__8_time_per_iteration->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__8_time_per_iteration, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__8_time_per_iteration,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__8_time_per_iteration == cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration);
    cache_frame_frame_click$_termui_impl$$$function__8_time_per_iteration = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__8_time_per_iteration);

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


static PyObject *impl_click$_termui_impl$$$function__9_eta(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__9_eta;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__9_eta = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__9_eta)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__9_eta);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__9_eta == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__9_eta = MAKE_FUNCTION_FRAME(tstate, code_objects_1f6964498c35b29f49ae53a8178ffd06, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__9_eta->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__9_eta = cache_frame_frame_click$_termui_impl$$$function__9_eta;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__9_eta);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__9_eta) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_finished);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_time_per_iteration);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_length);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 163;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pos);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 163;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 163;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__9_eta, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__9_eta->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__9_eta, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__9_eta,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__9_eta == cache_frame_frame_click$_termui_impl$$$function__9_eta) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__9_eta);
    cache_frame_frame_click$_termui_impl$$$function__9_eta = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__9_eta);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = const_float_0_0;
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


static PyObject *impl_click$_termui_impl$$$function__10_format_eta(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_t = NULL;
PyObject *var_seconds = NULL;
PyObject *var_minutes = NULL;
PyObject *var_hours = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__10_format_eta;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__10_format_eta = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__10_format_eta)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__10_format_eta);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__10_format_eta == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__10_format_eta = MAKE_FUNCTION_FRAME(tstate, code_objects_a4b731b77708a0ff313f78bb80d5ac74, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__10_format_eta->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__10_format_eta = cache_frame_frame_click$_termui_impl$$$function__10_format_eta;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__10_format_eta);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__10_format_eta) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_eta_known);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 167;
type_description_1 = "ooooo";
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
PyObject *tmp_int_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_int_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_eta);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_t == NULL);
var_t = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
CHECK_OBJECT(var_t);
tmp_mod_expr_left_1 = var_t;
tmp_mod_expr_right_1 = mod_consts.const_int_pos_60;
tmp_assign_source_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_seconds == NULL);
var_seconds = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_ifloordiv_expr_left_1;
PyObject *tmp_ifloordiv_expr_right_1;
CHECK_OBJECT(var_t);
tmp_ifloordiv_expr_left_1 = var_t;
tmp_ifloordiv_expr_right_1 = mod_consts.const_int_pos_60;
tmp_result = INPLACE_OPERATION_FLOORDIV_OBJECT_LONG(&tmp_ifloordiv_expr_left_1, tmp_ifloordiv_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_ifloordiv_expr_left_1;
var_t = tmp_assign_source_3;

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
CHECK_OBJECT(var_t);
tmp_mod_expr_left_2 = var_t;
tmp_mod_expr_right_2 = mod_consts.const_int_pos_60;
tmp_assign_source_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_minutes == NULL);
var_minutes = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_ifloordiv_expr_left_2;
PyObject *tmp_ifloordiv_expr_right_2;
CHECK_OBJECT(var_t);
tmp_ifloordiv_expr_left_2 = var_t;
tmp_ifloordiv_expr_right_2 = mod_consts.const_int_pos_60;
tmp_result = INPLACE_OPERATION_FLOORDIV_OBJECT_LONG(&tmp_ifloordiv_expr_left_2, tmp_ifloordiv_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_ifloordiv_expr_left_2;
var_t = tmp_assign_source_5;

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
CHECK_OBJECT(var_t);
tmp_mod_expr_left_3 = var_t;
tmp_mod_expr_right_3 = mod_consts.const_int_pos_24;
tmp_assign_source_6 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_hours == NULL);
var_hours = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_ifloordiv_expr_left_3;
PyObject *tmp_ifloordiv_expr_right_3;
CHECK_OBJECT(var_t);
tmp_ifloordiv_expr_left_3 = var_t;
tmp_ifloordiv_expr_right_3 = mod_consts.const_int_pos_24;
tmp_result = INPLACE_OPERATION_FLOORDIV_OBJECT_LONG(&tmp_ifloordiv_expr_left_3, tmp_ifloordiv_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_ifloordiv_expr_left_3;
var_t = tmp_assign_source_7;

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_t);
tmp_cmp_expr_left_1 = var_t;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooo";
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_t);
tmp_format_value_1 = var_t;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3c3e95247cbf48cc31188ec1a2c4da85;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_hours);
tmp_format_value_2 = var_hours;
tmp_format_spec_2 = mod_consts.const_str_plain_02;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(var_minutes);
tmp_format_value_3 = var_minutes;
tmp_format_spec_3 = mod_consts.const_str_plain_02;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
CHECK_OBJECT(var_seconds);
tmp_format_value_4 = var_seconds;
tmp_format_spec_4 = mod_consts.const_str_plain_02;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
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
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
CHECK_OBJECT(var_hours);
tmp_format_value_5 = var_hours;
tmp_format_spec_5 = mod_consts.const_str_plain_02;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyObject *tmp_format_value_7;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
CHECK_OBJECT(var_minutes);
tmp_format_value_6 = var_minutes;
tmp_format_spec_6 = mod_consts.const_str_plain_02;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
CHECK_OBJECT(var_seconds);
tmp_format_value_7 = var_seconds;
tmp_format_spec_7 = mod_consts.const_str_plain_02;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_return_value == NULL));
goto frame_return_exit_1;
}
branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__10_format_eta, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__10_format_eta->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__10_format_eta, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__10_format_eta,
    type_description_1,
    par_self,
    var_t,
    var_seconds,
    var_minutes,
    var_hours
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__10_format_eta == cache_frame_frame_click$_termui_impl$$$function__10_format_eta) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__10_format_eta);
    cache_frame_frame_click$_termui_impl$$$function__10_format_eta = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__10_format_eta);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = const_str_empty;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_seconds);
var_seconds = NULL;
Py_XDECREF(var_minutes);
var_minutes = NULL;
Py_XDECREF(var_hours);
var_hours = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_t);
var_t = NULL;
Py_XDECREF(var_seconds);
var_seconds = NULL;
Py_XDECREF(var_minutes);
var_minutes = NULL;
Py_XDECREF(var_hours);
var_hours = NULL;
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


static PyObject *impl_click$_termui_impl$$$function__11_format_pos(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_pos = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__11_format_pos;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__11_format_pos = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__11_format_pos)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__11_format_pos);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__11_format_pos == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__11_format_pos = MAKE_FUNCTION_FRAME(tstate, code_objects_ebbe0efa38ebf349e8d300fb233e0fee, module_click$_termui_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__11_format_pos->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__11_format_pos = cache_frame_frame_click$_termui_impl$$$function__11_format_pos;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__11_format_pos);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__11_format_pos) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pos);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_pos == NULL);
var_pos = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_pos);
tmp_iadd_expr_left_1 = var_pos;
tmp_tuple_element_1 = const_str_slash;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_length);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
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


exception_lineno = 184;
type_description_1 = "oo";
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
tmp_iadd_expr_right_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_iadd_expr_right_1 == NULL));
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
var_pos = tmp_assign_source_2;

}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__11_format_pos, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__11_format_pos->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__11_format_pos, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__11_format_pos,
    type_description_1,
    par_self,
    var_pos
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__11_format_pos == cache_frame_frame_click$_termui_impl$$$function__11_format_pos) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__11_format_pos);
    cache_frame_frame_click$_termui_impl$$$function__11_format_pos = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__11_format_pos);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_pos);
tmp_return_value = var_pos;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_pos);
CHECK_OBJECT(var_pos);
Py_DECREF(var_pos);
var_pos = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_pos);
var_pos = NULL;
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


static PyObject *impl_click$_termui_impl$$$function__12_format_pct(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__12_format_pct;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__12_format_pct = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__12_format_pct)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__12_format_pct);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__12_format_pct == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__12_format_pct = MAKE_FUNCTION_FRAME(tstate, code_objects_72090a47f402140bc1849e0eeacff831, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__12_format_pct->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__12_format_pct = cache_frame_frame_click$_termui_impl$$$function__12_format_pct;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__12_format_pct);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__12_format_pct) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pct);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_100;
tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_value_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = mod_consts.const_str_digest_230488818e3d4bcbb83168b1b1b2891a;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_37;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_expression_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_expression_value_1 == NULL));
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_1_none_none;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__12_format_pct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__12_format_pct->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__12_format_pct, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__12_format_pct,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__12_format_pct == cache_frame_frame_click$_termui_impl$$$function__12_format_pct) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__12_format_pct);
    cache_frame_frame_click$_termui_impl$$$function__12_format_pct = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__12_format_pct);

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


static PyObject *impl_click$_termui_impl$$$function__13_format_bar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_bar_length = NULL;
PyObject *var_bar = NULL;
PyObject *var_chars = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__13_format_bar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__13_format_bar = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__13_format_bar)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__13_format_bar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__13_format_bar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__13_format_bar = MAKE_FUNCTION_FRAME(tstate, code_objects_bbcf39718f1e159c50b7fb19ec740c82, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__13_format_bar->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__13_format_bar = cache_frame_frame_click$_termui_impl$$$function__13_format_bar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__13_format_bar);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__13_format_bar) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_int_arg_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pct);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_width);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_int_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
CHECK_OBJECT(tmp_int_arg_1);
Py_DECREF(tmp_int_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_bar_length == NULL);
var_bar_length = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_fill_char);
if (tmp_mult_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bar_length);
tmp_mult_expr_right_2 = var_bar_length;
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_left_2);
Py_DECREF(tmp_mult_expr_left_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_bar == NULL);
var_bar = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_mult_expr_left_3;
PyObject *tmp_mult_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_bar);
tmp_iadd_expr_left_1 = var_bar;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_mult_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_empty_char);
if (tmp_mult_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_width);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_bar_length);
tmp_sub_expr_right_1 = var_bar_length;
tmp_mult_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_mult_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_3);

exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
CHECK_OBJECT(tmp_mult_expr_left_3);
Py_DECREF(tmp_mult_expr_left_3);
CHECK_OBJECT(tmp_mult_expr_right_3);
Py_DECREF(tmp_mult_expr_right_3);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_iadd_expr_left_1;
var_bar = tmp_assign_source_3;

}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_finished);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 195;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_mult_expr_left_4;
PyObject *tmp_mult_expr_right_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_mult_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_fill_char);
if (tmp_mult_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_mult_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_width);
if (tmp_mult_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_4);

exception_lineno = 196;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
CHECK_OBJECT(tmp_mult_expr_left_4);
Py_DECREF(tmp_mult_expr_left_4);
CHECK_OBJECT(tmp_mult_expr_right_4);
Py_DECREF(tmp_mult_expr_right_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_bar == NULL);
var_bar = tmp_assign_source_4;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_list_arg_1;
PyObject *tmp_mult_expr_left_5;
PyObject *tmp_mult_expr_right_5;
PyObject *tmp_expression_value_10;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_mult_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_empty_char);
if (tmp_mult_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_width);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_5);

exception_lineno = 198;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mult_expr_left_5);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 198;
type_description_1 = "oooo";
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
tmp_or_right_value_1 = const_int_pos_1;
Py_INCREF(tmp_or_right_value_1);
tmp_mult_expr_right_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_mult_expr_right_5 = tmp_or_left_value_1;
or_end_1:;
tmp_list_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
CHECK_OBJECT(tmp_mult_expr_left_5);
Py_DECREF(tmp_mult_expr_left_5);
CHECK_OBJECT(tmp_mult_expr_right_5);
Py_DECREF(tmp_mult_expr_right_5);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_chars == NULL);
var_chars = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_time_per_iteration);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "oooo";
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_13;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
PyObject *tmp_int_arg_2;
PyObject *tmp_mult_expr_left_6;
PyObject *tmp_mult_expr_right_6;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_1;
PyObject *tmp_mult_expr_left_7;
PyObject *tmp_mult_expr_right_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_fill_char);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_chars);
tmp_ass_subscribed_1 = var_chars;
tmp_expression_value_14 = module_var_accessor_click$_termui_impl$math(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_cos);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_mult_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_pos);
if (tmp_mult_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);
Py_DECREF(tmp_called_value_1);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_mult_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_time_per_iteration);
if (tmp_mult_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_mult_expr_left_7);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
CHECK_OBJECT(tmp_mult_expr_left_7);
Py_DECREF(tmp_mult_expr_left_7);
CHECK_OBJECT(tmp_mult_expr_right_7);
Py_DECREF(tmp_mult_expr_right_7);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);
Py_DECREF(tmp_called_value_1);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__13_format_bar->m_frame.f_lineno = 202;
tmp_truediv_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_right_1 = mod_consts.const_float_2_0;
tmp_add_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_float_0_5;
tmp_mult_expr_left_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_mult_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 202;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_mult_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_width);
if (tmp_mult_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);
Py_DECREF(tmp_mult_expr_left_6);

exception_lineno = 203;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_int_arg_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
CHECK_OBJECT(tmp_mult_expr_left_6);
Py_DECREF(tmp_mult_expr_left_6);
CHECK_OBJECT(tmp_mult_expr_right_6);
Py_DECREF(tmp_mult_expr_right_6);
if (tmp_int_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 203;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = PyNumber_Int(tmp_int_arg_2);
CHECK_OBJECT(tmp_int_arg_2);
Py_DECREF(tmp_int_arg_2);
if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 201;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscript_1);
Py_DECREF(tmp_ass_subscript_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
CHECK_OBJECT(var_chars);
tmp_iterable_value_1 = var_chars;
tmp_assign_source_6 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_bar == NULL);
var_bar = tmp_assign_source_6;
}
branch_end_2:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__13_format_bar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__13_format_bar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__13_format_bar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__13_format_bar,
    type_description_1,
    par_self,
    var_bar_length,
    var_bar,
    var_chars
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__13_format_bar == cache_frame_frame_click$_termui_impl$$$function__13_format_bar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__13_format_bar);
    cache_frame_frame_click$_termui_impl$$$function__13_format_bar = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__13_format_bar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_bar);
tmp_return_value = var_bar;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_bar_length);
var_bar_length = NULL;
CHECK_OBJECT(var_bar);
CHECK_OBJECT(var_bar);
Py_DECREF(var_bar);
var_bar = NULL;
Py_XDECREF(var_chars);
var_chars = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_bar_length);
var_bar_length = NULL;
Py_XDECREF(var_bar);
var_bar = NULL;
Py_XDECREF(var_chars);
var_chars = NULL;
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


static PyObject *impl_click$_termui_impl$$$function__14_format_progress_line(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_show_percent = NULL;
PyObject *var_info_bits = NULL;
PyObject *var_item_info = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__14_format_progress_line;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line = MAKE_FUNCTION_FRAME(tstate, code_objects_1ffb46581ed4f879de73d8812077f81e, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__14_format_progress_line = cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__14_format_progress_line);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__14_format_progress_line) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_show_percent);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_show_percent == NULL);
var_show_percent = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_info_bits == NULL);
var_info_bits = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_show_percent);
tmp_cmp_expr_left_2 = var_show_percent;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_show_pos);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = (tmp_res == 0) ? Py_True : Py_False;
{
    PyObject *old = var_show_percent;
    assert(old != NULL);
    var_show_percent = tmp_assign_source_3;
    Py_INCREF(var_show_percent);
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_show_pos);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 216;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_info_bits);
tmp_list_arg_value_1 = var_info_bits;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame.f_lineno = 217;
tmp_item_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_format_pos);
if (tmp_item_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_show_percent);
tmp_truth_name_2 = CHECK_IF_TRUE(var_show_percent);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_info_bits);
tmp_list_arg_value_2 = var_info_bits;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame.f_lineno = 219;
tmp_item_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_format_pct);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_show_eta);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_eta_known);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_finished);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_4 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_4 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_info_bits);
tmp_list_arg_value_3 = var_info_bits;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame.f_lineno = 221;
tmp_item_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_format_eta);
if (tmp_item_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_item_show_func);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_item_show_func);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_current_item);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 223;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame.f_lineno = 223;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_item_info == NULL);
var_item_info = tmp_assign_source_4;
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_item_info);
tmp_cmp_expr_left_4 = var_item_info;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_info_bits);
tmp_list_arg_value_4 = var_info_bits;
CHECK_OBJECT(var_item_info);
tmp_item_value_4 = var_item_info;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
branch_no_6:;
branch_no_5:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_bar_template);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_label;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_label);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_mod_expr_left_1);

exception_lineno = 230;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_called_instance_4;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_2;
tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_bar;
CHECK_OBJECT(par_self);
tmp_called_instance_4 = par_self;
frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame.f_lineno = 231;
tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_format_bar);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 231;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_info;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_info_sep);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(var_info_bits);
tmp_args_element_value_2 = var_info_bits;
frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame.f_lineno = 232;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "oooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_mod_expr_right_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_expression_value_11 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame.f_lineno = 227;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__14_format_progress_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__14_format_progress_line->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__14_format_progress_line, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__14_format_progress_line,
    type_description_1,
    par_self,
    var_show_percent,
    var_info_bits,
    var_item_info
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__14_format_progress_line == cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line);
    cache_frame_frame_click$_termui_impl$$$function__14_format_progress_line = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__14_format_progress_line);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_show_percent);
CHECK_OBJECT(var_show_percent);
Py_DECREF(var_show_percent);
var_show_percent = NULL;
CHECK_OBJECT(var_info_bits);
CHECK_OBJECT(var_info_bits);
Py_DECREF(var_info_bits);
var_info_bits = NULL;
Py_XDECREF(var_item_info);
var_item_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_show_percent);
var_show_percent = NULL;
Py_XDECREF(var_info_bits);
var_info_bits = NULL;
Py_XDECREF(var_item_info);
var_item_info = NULL;
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


static PyObject *impl_click$_termui_impl$$$function__15_render_progress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_buf = NULL;
PyObject *var_shutil = NULL;
PyObject *var_old_width = NULL;
PyObject *var_clutter_length = NULL;
PyObject *var_new_width = NULL;
PyObject *var_clear_width = NULL;
PyObject *var_line = NULL;
PyObject *var_line_len = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__15_render_progress;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__15_render_progress = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__15_render_progress)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__15_render_progress);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__15_render_progress == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__15_render_progress = MAKE_FUNCTION_FRAME(tstate, code_objects_54e1dbb172a07e80352d7bc898734fca, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__15_render_progress->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__15_render_progress = cache_frame_frame_click$_termui_impl$$$function__15_render_progress;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__15_render_progress);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__15_render_progress) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_hidden);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 237;
type_description_1 = "ooooooooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__is_atty);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooo";
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
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__last_line);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_label);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 242;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_label);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__last_line, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_8;
tmp_called_value_1 = module_var_accessor_click$_termui_impl$echo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_echo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_label);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_file);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 244;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_color);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);

exception_lineno = 244;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 244;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_file_str_plain_color_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_buf == NULL);
var_buf = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_autowidth);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 249;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 250;
tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_shutil == NULL);
var_shutil = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_width);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_old_width == NULL);
var_old_width = tmp_assign_source_3;
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_width, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
tmp_called_value_2 = module_var_accessor_click$_termui_impl$term_len(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_term_len);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 254;
tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_format_progress_line);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 254;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_clutter_length == NULL);
var_clutter_length = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_instance_2;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_3 != NULL);
tmp_args_element_value_2 = const_int_0;
CHECK_OBJECT(var_shutil);
tmp_called_instance_2 = var_shutil;
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 255;
tmp_expression_value_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_terminal_size);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_columns);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_clutter_length);
tmp_sub_expr_right_1 = var_clutter_length;
tmp_args_element_value_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 255;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_new_width == NULL);
var_new_width = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_new_width);
tmp_cmp_expr_left_2 = var_new_width;
CHECK_OBJECT(var_old_width);
tmp_cmp_expr_right_2 = var_old_width;
tmp_and_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_max_width);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
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
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_buf);
tmp_list_arg_value_1 = var_buf;
tmp_item_value_1 = module_var_accessor_click$_termui_impl$BEFORE_BAR(tstate);
if (unlikely(tmp_item_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BEFORE_BAR);
}

if (tmp_item_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_buf);
tmp_list_arg_value_2 = var_buf;
tmp_mult_expr_left_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_self);
tmp_expression_value_13 = par_self;
tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_max_width);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_item_value_2 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(var_new_width);
tmp_assattr_value_3 = var_new_width;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_max_width, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(var_new_width);
tmp_assattr_value_4 = var_new_width;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_width, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_self);
tmp_expression_value_14 = par_self;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_width);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_clear_width == NULL);
var_clear_width = tmp_assign_source_6;
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_max_width);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_self);
tmp_expression_value_16 = par_self;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_max_width);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_clear_width;
    assert(old != NULL);
    var_clear_width = tmp_assign_source_7;
    Py_DECREF(old);
}

}
branch_no_6:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
CHECK_OBJECT(var_buf);
tmp_list_arg_value_3 = var_buf;
tmp_item_value_3 = module_var_accessor_click$_termui_impl$BEFORE_BAR(tstate);
if (unlikely(tmp_item_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BEFORE_BAR);
}

if (tmp_item_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 266;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 267;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_format_progress_line);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_line == NULL);
var_line = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_click$_termui_impl$term_len(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_term_len);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 268;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_line);
tmp_args_element_value_4 = var_line;
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 268;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_line_len == NULL);
var_line_len = tmp_assign_source_9;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_max_width);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_max_width);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_line_len);
tmp_cmp_expr_right_6 = var_line_len;
tmp_or_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_7 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_line_len);
tmp_assattr_value_5 = var_line_len;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_max_width, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_buf);
tmp_list_arg_value_4 = var_buf;
CHECK_OBJECT(var_line);
tmp_item_value_4 = var_line;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
PyObject *tmp_mult_expr_left_2;
PyObject *tmp_mult_expr_right_2;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_buf);
tmp_list_arg_value_5 = var_buf;
tmp_mult_expr_left_2 = mod_consts.const_str_space;
CHECK_OBJECT(var_clear_width);
tmp_sub_expr_left_2 = var_clear_width;
CHECK_OBJECT(var_line_len);
tmp_sub_expr_right_2 = var_line_len;
tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_mult_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_item_value_5 = BINARY_OPERATION_MULT_OBJECT_UNICODE_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
CHECK_OBJECT(tmp_mult_expr_right_2);
Py_DECREF(tmp_mult_expr_right_2);
if (tmp_item_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
CHECK_OBJECT(var_buf);
tmp_iterable_value_1 = var_buf;
tmp_assign_source_10 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_line;
    assert(old != NULL);
    var_line = tmp_assign_source_10;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(var_line);
tmp_cmp_expr_left_7 = var_line;
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__last_line);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_UNICODE_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(var_line);
tmp_assattr_value_6 = var_line;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__last_line, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_5 = module_var_accessor_click$_termui_impl$echo(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_echo);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 279;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_line);
tmp_kw_call_arg_value_0_2 = var_line;
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_file);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_21 = par_self;
tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_color);
if (tmp_kw_call_dict_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_dict_value_0_2);

exception_lineno = 279;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_2_1 = Py_False;
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 279;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_file_str_plain_color_str_plain_nl_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_3;
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_file);
if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame.f_lineno = 280;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_flush);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_8:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__15_render_progress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__15_render_progress->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__15_render_progress, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__15_render_progress,
    type_description_1,
    par_self,
    var_buf,
    var_shutil,
    var_old_width,
    var_clutter_length,
    var_new_width,
    var_clear_width,
    var_line,
    var_line_len
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__15_render_progress == cache_frame_frame_click$_termui_impl$$$function__15_render_progress) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__15_render_progress);
    cache_frame_frame_click$_termui_impl$$$function__15_render_progress = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__15_render_progress);

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
Py_XDECREF(var_buf);
var_buf = NULL;
Py_XDECREF(var_shutil);
var_shutil = NULL;
Py_XDECREF(var_old_width);
var_old_width = NULL;
Py_XDECREF(var_clutter_length);
var_clutter_length = NULL;
Py_XDECREF(var_new_width);
var_new_width = NULL;
Py_XDECREF(var_clear_width);
var_clear_width = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_line_len);
var_line_len = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_buf);
var_buf = NULL;
Py_XDECREF(var_shutil);
var_shutil = NULL;
Py_XDECREF(var_old_width);
var_old_width = NULL;
Py_XDECREF(var_clutter_length);
var_clutter_length = NULL;
Py_XDECREF(var_new_width);
var_new_width = NULL;
Py_XDECREF(var_clear_width);
var_clear_width = NULL;
Py_XDECREF(var_line);
var_line = NULL;
Py_XDECREF(var_line_len);
var_line_len = NULL;
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


static PyObject *impl_click$_termui_impl$$$function__16_make_step(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n_steps = python_pars[1];
PyObject *var_step = NULL;
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__16_make_step;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__16_make_step = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__16_make_step)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__16_make_step);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__16_make_step == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__16_make_step = MAKE_FUNCTION_FRAME(tstate, code_objects_cf7790a8262abf726a94932c6a3f5ad8, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__16_make_step->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__16_make_step = cache_frame_frame_click$_termui_impl$$$function__16_make_step;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__16_make_step);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__16_make_step) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pos);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_n_steps);
tmp_iadd_expr_right_1 = par_n_steps;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_pos, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooo";
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
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_length);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_pos);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_length);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 284;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_finished, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_5;
tmp_called_instance_1 = module_var_accessor_click$_termui_impl$time(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__16_make_step->m_frame.f_lineno = 287;
tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_time);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_last_eta);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 287;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = const_float_1_0;
tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_FLOAT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_assattr_target_3;
tmp_called_instance_2 = module_var_accessor_click$_termui_impl$time(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__16_make_step->m_frame.f_lineno = 290;
tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_time);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_last_eta, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_pos);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 295;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_truediv_expr_left_1;
PyObject *tmp_truediv_expr_right_1;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_called_instance_3 = module_var_accessor_click$_termui_impl$time(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__16_make_step->m_frame.f_lineno = 296;
tmp_sub_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_time);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_start);
if (tmp_sub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_2);

exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
CHECK_OBJECT(tmp_sub_expr_right_2);
Py_DECREF(tmp_sub_expr_right_2);
if (tmp_truediv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_truediv_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pos);
if (tmp_truediv_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_truediv_expr_left_1);

exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
CHECK_OBJECT(tmp_truediv_expr_left_1);
Py_DECREF(tmp_truediv_expr_left_1);
CHECK_OBJECT(tmp_truediv_expr_right_1);
Py_DECREF(tmp_truediv_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_step == NULL);
var_step = tmp_assign_source_3;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_expression_value_9;
tmp_called_instance_4 = module_var_accessor_click$_termui_impl$time(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_time);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__16_make_step->m_frame.f_lineno = 298;
tmp_sub_expr_left_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_time);
if (tmp_sub_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_sub_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_start);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_3);

exception_lineno = 298;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_left_3);
Py_DECREF(tmp_sub_expr_left_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_step == NULL);
var_step = tmp_assign_source_4;
}
branch_end_3:;
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_1;
PyObject *tmp_list_element_1;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_self);
tmp_expression_value_11 = par_self;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_avg);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_slice_int_neg_6_none_none;
tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_step);
tmp_list_element_1 = var_step;
tmp_add_expr_right_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_add_expr_right_1, 0, tmp_list_element_1);
tmp_assattr_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_avg, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_12;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_length);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_assattr_value_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_eta_known, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__16_make_step, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__16_make_step->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__16_make_step, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__16_make_step,
    type_description_1,
    par_self,
    par_n_steps,
    var_step
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__16_make_step == cache_frame_frame_click$_termui_impl$$$function__16_make_step) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__16_make_step);
    cache_frame_frame_click$_termui_impl$$$function__16_make_step = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__16_make_step);

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
Py_XDECREF(var_step);
var_step = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_step);
var_step = NULL;
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
CHECK_OBJECT(par_n_steps);
Py_DECREF(par_n_steps);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n_steps);
Py_DECREF(par_n_steps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__17_update(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_n_steps = python_pars[1];
PyObject *par_current_item = python_pars[2];
PyObject *tmp_inplace_assign_1__value = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__17_update;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__17_update = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__17_update)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__17_update);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__17_update == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__17_update = MAKE_FUNCTION_FRAME(tstate, code_objects_82652a0e3ed33a6778ea4c872565beea, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__17_update->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__17_update = cache_frame_frame_click$_termui_impl$$$function__17_update;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__17_update);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__17_update) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_current_item);
tmp_cmp_expr_left_1 = par_current_item;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_current_item);
tmp_assattr_value_1 = par_current_item;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_current_item, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__completed_intervals);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(tmp_inplace_assign_1__value == NULL);
tmp_inplace_assign_1__value = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_n_steps);
tmp_iadd_expr_right_1 = par_n_steps;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_1;
tmp_inplace_assign_1__value = tmp_assign_source_2;

}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(tmp_inplace_assign_1__value);
tmp_assattr_value_2 = tmp_inplace_assign_1__value;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__completed_intervals, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "ooo";
    goto try_except_handler_1;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
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
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__completed_intervals);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_update_min_steps);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_make_step);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__completed_intervals);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 326;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__17_update->m_frame.f_lineno = 326;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_click$_termui_impl$$$function__17_update->m_frame.f_lineno = 327;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render_progress);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = const_int_0;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__completed_intervals, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__17_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__17_update->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__17_update, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__17_update,
    type_description_1,
    par_self,
    par_n_steps,
    par_current_item
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__17_update == cache_frame_frame_click$_termui_impl$$$function__17_update) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__17_update);
    cache_frame_frame_click$_termui_impl$$$function__17_update = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__17_update);

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
CHECK_OBJECT(par_n_steps);
Py_DECREF(par_n_steps);
CHECK_OBJECT(par_current_item);
Py_DECREF(par_current_item);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_n_steps);
Py_DECREF(par_n_steps);
CHECK_OBJECT(par_current_item);
Py_DECREF(par_current_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__18_finish(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__18_finish;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__18_finish = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__18_finish)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__18_finish);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__18_finish == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__18_finish = MAKE_FUNCTION_FRAME(tstate, code_objects_a065e7c844210e3b9124505975648097, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__18_finish->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__18_finish = cache_frame_frame_click$_termui_impl$$$function__18_finish;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__18_finish);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__18_finish) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_eta_known, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_current_item, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_finished, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__18_finish, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__18_finish->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__18_finish, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__18_finish,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__18_finish == cache_frame_frame_click$_termui_impl$$$function__18_finish) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__18_finish);
    cache_frame_frame_click$_termui_impl$$$function__18_finish = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__18_finish);

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


static PyObject *impl_click$_termui_impl$$$function__19_generator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_GENERATOR_click$_termui_impl$$$function__19_generator$$$genobj__1_generator(tstate, tmp_closure_1);

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
struct click$_termui_impl$$$function__19_generator$$$genobj__1_generator_locals {
PyObject *var_rv;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *click$_termui_impl$$$function__19_generator$$$genobj__1_generator_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct click$_termui_impl$$$function__19_generator$$$genobj__1_generator_locals *generator_heap = (struct click$_termui_impl$$$function__19_generator$$$genobj__1_generator_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_rv = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2a59706e91cd2c5a6139108e6c8682b9, module_click$_termui_impl, sizeof(void *)+sizeof(void *));
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
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 347;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_entered);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 347;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 347;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b89208f8e14b2085f7f61bd3f36773b2;
generator->m_frame->m_frame.f_lineno = 348;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 348;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 350;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__is_atty);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 350;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 350;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_yieldfrom_result_1;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 351;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_iter);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 351;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_3;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 351;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 353;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_iter);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 353;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 353;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "co";
generator_heap->exception_lineno = 353;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_rv;
    generator_heap->var_rv = tmp_assign_source_3;
    Py_INCREF(generator_heap->var_rv);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(generator_heap->var_rv);
tmp_assattr_value_1 = generator_heap->var_rv;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 354;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_current_item, tmp_assattr_value_1);
if (generator_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 354;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}

tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__completed_intervals);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 359;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
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
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 360;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 360;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_render_progress);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 360;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
{
PyObject *tmp_expression_value_7;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_rv);
tmp_expression_value_7 = generator_heap->var_rv;
Py_INCREF(tmp_expression_value_7);
generator->m_yield_return_index = 2;
return tmp_expression_value_7;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 362;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_2;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 363;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}

tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_update);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 363;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 363;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_int_pos_1_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 363;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 353;
generator_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_3;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 365;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 365;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_finish);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 365;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_4;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 366;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_called_instance_3 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 366;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_render_progress);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 366;
generator_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_end_2:;

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
    generator_heap->var_rv
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
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_rv);
generator_heap->var_rv = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->var_rv);
generator_heap->var_rv = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$_termui_impl$$$function__19_generator$$$genobj__1_generator(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        click$_termui_impl$$$function__19_generator$$$genobj__1_generator_context,
        module_click$_termui_impl,
        mod_consts.const_str_plain_generator,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_0e3c8d40431b73912fdeca388b7e3a6f,
#endif
        code_objects_2a59706e91cd2c5a6139108e6c8682b9,
        closure,
        1,
#if 1
        sizeof(struct click$_termui_impl$$$function__19_generator$$$genobj__1_generator_locals)
#else
        0
#endif
    );
}


static PyObject *impl_click$_termui_impl$$$function__20_pager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_generator = python_pars[0];
PyObject *par_color = python_pars[1];
PyObject *var_stdout = NULL;
PyObject *var_pager_cmd_parts = NULL;
PyObject *var_tempfile = NULL;
PyObject *var_fd = NULL;
PyObject *var_filename = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__20_pager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__20_pager = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__20_pager)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__20_pager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__20_pager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__20_pager = MAKE_FUNCTION_FRAME(tstate, code_objects_baa9f644c87474d36ecdbeb5781932f3, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__20_pager->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__20_pager = cache_frame_frame_click$_termui_impl$$$function__20_pager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__20_pager);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__20_pager) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_click$_termui_impl$_default_text_stdout(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__default_text_stdout);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 371;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 371;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_stdout == NULL);
var_stdout = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_stdout);
tmp_cmp_expr_left_1 = var_stdout;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_called_value_2 == NULL));
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 376;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_stdout;
    assert(old != NULL);
    var_stdout = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_click$_termui_impl$isatty(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isatty);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stdin);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 378;
tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_4 = module_var_accessor_click$_termui_impl$isatty(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_isatty);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stdout);
tmp_args_element_value_2 = var_stdout;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 378;
tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_click$_termui_impl$_nullpager(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nullpager);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 379;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stdout);
tmp_args_element_value_3 = var_stdout;
CHECK_OBJECT(par_generator);
tmp_args_element_value_4 = par_generator;
CHECK_OBJECT(par_color);
tmp_args_element_value_5 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 379;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_2 = module_var_accessor_click$_termui_impl$shlex(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_shlex);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_split);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 382;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 382;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 382;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_PAGER_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 382;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_63e362e518f8a13fad3fbc6757a1f4b5);
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 382;
tmp_assign_source_3 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_pager_cmd_parts == NULL);
var_pager_cmd_parts = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_pager_cmd_parts);
tmp_truth_name_1 = CHECK_IF_TRUE(var_pager_cmd_parts);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
tmp_mvar_value_1 = module_var_accessor_click$_termui_impl$WIN(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WIN);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_1 = "ooooooo";
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
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
int tmp_truth_name_3;
tmp_called_value_8 = module_var_accessor_click$_termui_impl$_tempfilepager(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__tempfilepager);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 385;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_generator);
tmp_args_element_value_6 = par_generator;
CHECK_OBJECT(var_pager_cmd_parts);
tmp_args_element_value_7 = var_pager_cmd_parts;
CHECK_OBJECT(par_color);
tmp_args_element_value_8 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 385;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 385;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
int tmp_truth_name_4;
tmp_called_value_9 = module_var_accessor_click$_termui_impl$_pipepager(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pipepager);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 387;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_generator);
tmp_args_element_value_9 = par_generator;
CHECK_OBJECT(var_pager_cmd_parts);
tmp_args_element_value_10 = var_pager_cmd_parts;
CHECK_OBJECT(par_color);
tmp_args_element_value_11 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 387;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 387;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
branch_end_4:;
branch_no_3:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 390;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_10, mod_consts.const_tuple_str_plain_TERM_tuple);

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_tuple_str_plain_dumb_str_plain_emacs_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_11 = module_var_accessor_click$_termui_impl$_nullpager(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nullpager);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 391;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_stdout);
tmp_args_element_value_12 = var_stdout;
CHECK_OBJECT(par_generator);
tmp_args_element_value_13 = par_generator;
CHECK_OBJECT(par_color);
tmp_args_element_value_14 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 391;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_mvar_value_2;
int tmp_truth_name_5;
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
int tmp_truth_name_6;
tmp_mvar_value_2 = module_var_accessor_click$_termui_impl$WIN(tstate);
if (unlikely(tmp_mvar_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WIN);
}

if (tmp_mvar_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_mvar_value_2);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = NUITKA_BOOL_FALSE;
tmp_and_left_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_left_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_12 = module_var_accessor_click$_termui_impl$_tempfilepager(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__tempfilepager);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 392;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_generator);
tmp_args_element_value_15 = par_generator;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_more);
CHECK_OBJECT(par_color);
tmp_args_element_value_17 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 392;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 392;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
tmp_condition_result_8 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_8 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_8:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
int tmp_truth_name_7;
tmp_called_value_13 = module_var_accessor_click$_termui_impl$_pipepager(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pipepager);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 396;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_generator);
tmp_args_element_value_18 = par_generator;
tmp_args_element_value_19 = MAKE_LIST1(tstate, mod_consts.const_str_plain_less);
CHECK_OBJECT(par_color);
tmp_args_element_value_20 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 396;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 396;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 396;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_9:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 399;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(var_tempfile == NULL);
var_tempfile = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(var_tempfile);
tmp_called_instance_1 = var_tempfile;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 401;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_mkstemp);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 401;
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
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
assert(var_fd == NULL);
Py_INCREF(tmp_assign_source_8);
var_fd = tmp_assign_source_8;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
assert(var_filename == NULL);
Py_INCREF(tmp_assign_source_9);
var_filename = tmp_assign_source_9;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_21;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_fd);
tmp_args_element_value_21 = var_fd;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 402;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, const_str_plain_close, tmp_args_element_value_21);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
// Tried code:
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
int tmp_truth_name_8;
tmp_called_value_14 = module_var_accessor_click$_termui_impl$_pipepager(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__pipepager);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_generator);
tmp_args_element_value_22 = par_generator;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_more);
CHECK_OBJECT(par_color);
tmp_args_element_value_24 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 404;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 404;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_10 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_4;
branch_no_10:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
tmp_called_value_15 = module_var_accessor_click$_termui_impl$_nullpager(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__nullpager);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 406;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_stdout);
tmp_args_element_value_25 = var_stdout;
CHECK_OBJECT(par_generator);
tmp_args_element_value_26 = par_generator;
CHECK_OBJECT(par_color);
tmp_args_element_value_27 = par_color;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 406;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_15, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_28;
tmp_called_instance_3 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_filename);
tmp_args_element_value_28 = var_filename;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 408;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_unlink, tmp_args_element_value_28);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__20_pager, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__20_pager, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_29;
tmp_called_instance_4 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_4 == NULL));
CHECK_OBJECT(var_filename);
tmp_args_element_value_29 = var_filename;
frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = 408;
tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_unlink, tmp_args_element_value_29);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "ooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 403;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__20_pager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__20_pager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooo";
goto try_except_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__20_pager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__20_pager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__20_pager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__20_pager,
    type_description_1,
    par_generator,
    par_color,
    var_stdout,
    var_pager_cmd_parts,
    var_tempfile,
    var_fd,
    var_filename
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__20_pager == cache_frame_frame_click$_termui_impl$$$function__20_pager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__20_pager);
    cache_frame_frame_click$_termui_impl$$$function__20_pager = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__20_pager);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_stdout);
CHECK_OBJECT(var_stdout);
Py_DECREF(var_stdout);
var_stdout = NULL;
Py_XDECREF(var_pager_cmd_parts);
var_pager_cmd_parts = NULL;
Py_XDECREF(var_tempfile);
var_tempfile = NULL;
Py_XDECREF(var_fd);
var_fd = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_stdout);
var_stdout = NULL;
Py_XDECREF(var_pager_cmd_parts);
var_pager_cmd_parts = NULL;
Py_XDECREF(var_tempfile);
var_tempfile = NULL;
Py_XDECREF(var_fd);
var_fd = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__21__pipepager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_generator = python_pars[0];
PyObject *par_cmd_parts = python_pars[1];
PyObject *par_color = python_pars[2];
PyObject *var_shutil = NULL;
PyObject *var_cmd = NULL;
PyObject *var_cmd_params = NULL;
PyObject *var_cmd_filepath = NULL;
PyObject *var_cmd_path = NULL;
PyObject *var_cmd_name = NULL;
PyObject *var_subprocess = NULL;
PyObject *var_env = NULL;
PyObject *var_less_flags = NULL;
PyObject *var_c = NULL;
PyObject *var_text = NULL;
PyObject *var_e = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
nuitka_bool tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__21__pipepager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionStackItem exception_preserved_3;
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
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__21__pipepager = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__21__pipepager)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__21__pipepager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__21__pipepager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__21__pipepager = MAKE_FUNCTION_FRAME(tstate, code_objects_43c8c1324a42130c6ce9dc5a1b06a71e, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__21__pipepager->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__21__pipepager = cache_frame_frame_click$_termui_impl$$$function__21__pipepager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__21__pipepager);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__21__pipepager) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_cmd_parts);
tmp_operand_value_1 = par_cmd_parts;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "ooooooooooooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 424;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_shutil == NULL);
var_shutil = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_cmd_parts);
tmp_expression_value_1 = par_cmd_parts;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd == NULL);
var_cmd = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_cmd_parts);
tmp_expression_value_2 = par_cmd_parts;
tmp_subscript_value_2 = mod_consts.const_slice_int_pos_1_none_none;
tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd_params == NULL);
var_cmd_params = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_shutil);
tmp_called_instance_1 = var_shutil;
CHECK_OBJECT(var_cmd);
tmp_args_element_value_1 = var_cmd;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 429;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_which, tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd_filepath == NULL);
var_cmd_filepath = tmp_assign_source_4;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_cmd_filepath);
tmp_operand_value_2 = var_cmd_filepath;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "ooooooooooooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_click$_termui_impl$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cmd_filepath);
tmp_args_element_value_2 = var_cmd_filepath;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 433;
tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 433;
tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd_path == NULL);
var_cmd_path = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_cmd_path);
tmp_expression_value_3 = var_cmd_path;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_name);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd_name == NULL);
var_cmd_name = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_2 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 436;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_subprocess == NULL);
var_subprocess = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_dict_seq_1;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_dict_seq_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
CHECK_OBJECT(tmp_dict_seq_1);
Py_DECREF(tmp_dict_seq_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_env == NULL);
var_env = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_color);
tmp_cmp_expr_left_1 = par_color;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_cmd_name);
tmp_cmp_expr_left_2 = var_cmd_name;
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_less;
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 443;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
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
{
PyObject *tmp_assign_source_9;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_1;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 444;
tmp_format_value_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_LESS_str_empty_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_str_arg_value_1 = mod_consts.const_str_space;
CHECK_OBJECT(var_cmd_params);
tmp_iterable_value_1 = var_cmd_params;
tmp_tuple_element_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 444;
type_description_1 = "ooooooooooooooo";
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
tmp_assign_source_9 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_9 == NULL));
assert(var_less_flags == NULL);
var_less_flags = tmp_assign_source_9;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(var_less_flags);
tmp_operand_value_3 = var_less_flags;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_dictset_value = mod_consts.const_str_digest_661170a362c0712dfb804f7826b521cc;
CHECK_OBJECT(var_env);
tmp_dictset_dict = var_env;
tmp_dictset_key = mod_consts.const_str_plain_LESS;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = Py_True;
{
    PyObject *old = par_color;
    assert(old != NULL);
    par_color = tmp_assign_source_10;
    Py_INCREF(par_color);
    Py_DECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
bool tmp_condition_result_5;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_3 = const_str_plain_r;
CHECK_OBJECT(var_less_flags);
tmp_cmp_expr_right_3 = var_less_flags;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 1) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_cmp_expr_left_4 = mod_consts.const_str_plain_R;
CHECK_OBJECT(var_less_flags);
tmp_cmp_expr_right_4 = var_less_flags;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 448;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 1) ? true : false;
tmp_condition_result_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_5 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_True;
{
    PyObject *old = par_color;
    assert(old != NULL);
    par_color = tmp_assign_source_11;
    Py_INCREF(par_color);
    Py_DECREF(old);
}

}
branch_no_5:;
branch_end_4:;
branch_no_3:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_element_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
CHECK_OBJECT(var_subprocess);
tmp_expression_value_7 = var_subprocess;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Popen);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cmd_path);
tmp_unicode_arg_1 = var_cmd_path;
tmp_list_element_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 452;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_add_expr_left_1, 0, tmp_list_element_1);
CHECK_OBJECT(var_cmd_params);
tmp_add_expr_right_1 = var_cmd_params;
tmp_kw_call_arg_value_0_1 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 452;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_0_1 = Py_True;
CHECK_OBJECT(var_subprocess);
tmp_expression_value_8 = var_subprocess;
tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_PIPE);
if (tmp_kw_call_dict_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 454;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_env);
tmp_kw_call_dict_value_2_1 = var_env;
tmp_kw_call_dict_value_3_1 = mod_consts.const_str_plain_replace;
tmp_kw_call_dict_value_4_1 = Py_True;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 451;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_553d6b17c6654250428b63599dbe130b_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_dict_value_1_1);
Py_DECREF(tmp_kw_call_dict_value_1_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 451;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_c == NULL);
var_c = tmp_assign_source_12;
}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_c);
tmp_expression_value_9 = var_c;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_stdin);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 459;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_1;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 459;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 459;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_6:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_generator);
tmp_iter_arg_1 = par_generator;
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_13;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
exception_lineno = 461;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_15 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_text;
    var_text = tmp_assign_source_15;
    Py_INCREF(var_text);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_4;
CHECK_OBJECT(par_color);
tmp_operand_value_4 = par_color;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 462;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
tmp_called_value_4 = module_var_accessor_click$_termui_impl$strip_ansi(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_ansi);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 463;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_text);
tmp_args_element_value_3 = var_text;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 463;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = var_text;
    assert(old != NULL);
    var_text = tmp_assign_source_16;
    Py_DECREF(old);
}

}
branch_no_7:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
if (var_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 465;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_10 = var_c;
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_stdin);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_text);
tmp_args_element_value_4 = var_text;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 465;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_write, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 465;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BrokenPipeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
tmp_cmp_expr_left_7 = EXC_TYPE(tstate);
tmp_cmp_expr_right_7 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
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
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_17); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_17);
var_e = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
if (var_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 474;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}

tmp_called_instance_4 = var_c;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 474;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_terminate);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_1;
CHECK_OBJECT(var_e);
tmp_raise_type_input_1 = var_e;
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 475;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_6;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 475;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto try_except_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_5;
// End of try:
goto branch_end_9;
branch_no_9:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 460;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_5;
branch_end_9:;
branch_no_8:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_2;
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
try_except_handler_2:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_call_result_3;
if (var_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 479;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_11 = var_c;
tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_stdin);
if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 479;
tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
tmp_cmp_expr_left_8 = EXC_TYPE(tstate);
tmp_cmp_expr_right_8 = PyExc_BrokenPipeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 478;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_9;
branch_no_10:;
goto try_end_6;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_7;
// End of try:
try_end_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
loop_start_2:;
{
nuitka_bool tmp_assign_source_18;
tmp_assign_source_18 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_4;
if (var_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 495;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}

tmp_called_instance_6 = var_c;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 495;
tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts.const_str_plain_wait);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_end_7;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_19;
tmp_assign_source_19 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_19;
}
// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    } else if (exception_keeper_lineno_8 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_8);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_8, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_8);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = EXC_TYPE(tstate);
tmp_cmp_expr_right_9 = PyExc_KeyboardInterrupt;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 494;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_11;
branch_no_11:;
goto try_end_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_7;
// End of try:
try_end_8:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_10;
nuitka_bool tmp_cmp_expr_right_10;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_10 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
goto loop_end_2;
branch_no_12:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 460;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;
// Tried code:
{
PyObject *tmp_called_instance_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_result_5;
if (var_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 479;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}

tmp_expression_value_12 = var_c;
tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_stdin);
if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 479;
tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
goto try_end_9;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
tmp_cmp_expr_right_11 = PyExc_BrokenPipeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
assert(!(tmp_res == -1));
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 478;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_13;
branch_no_13:;
goto try_end_10;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_9;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_9:;
loop_start_3:;
{
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_TRUE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_called_instance_8;
PyObject *tmp_call_result_6;
if (var_c == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 495;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_14;
}

tmp_called_instance_8 = var_c;
frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = 495;
tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts.const_str_plain_wait);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "ooooooooooooooo";
    goto try_except_handler_14;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
goto try_end_11;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
nuitka_bool tmp_assign_source_21;
tmp_assign_source_21 = NUITKA_BOOL_FALSE;
tmp_try_except_1__unhandled_indicator = tmp_assign_source_21;
}
// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__21__pipepager, exception_keeper_lineno_13);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_13, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_13);
// Tried code:
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
tmp_cmp_expr_left_12 = EXC_TYPE(tstate);
tmp_cmp_expr_right_12 = PyExc_KeyboardInterrupt;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
assert(!(tmp_res == -1));
tmp_condition_result_14 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 494;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooooo";
goto try_except_handler_15;
branch_no_14:;
goto try_end_12;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_11;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_11:;
{
bool tmp_condition_result_15;
nuitka_bool tmp_cmp_expr_left_13;
nuitka_bool tmp_cmp_expr_right_13;
assert(tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_13 = tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
tmp_condition_result_15 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
goto loop_end_3;
branch_no_15:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_3;
loop_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__21__pipepager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__21__pipepager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__21__pipepager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__21__pipepager,
    type_description_1,
    par_generator,
    par_cmd_parts,
    par_color,
    var_shutil,
    var_cmd,
    var_cmd_params,
    var_cmd_filepath,
    var_cmd_path,
    var_cmd_name,
    var_subprocess,
    var_env,
    var_less_flags,
    var_c,
    var_text,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__21__pipepager == cache_frame_frame_click$_termui_impl$$$function__21__pipepager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__21__pipepager);
    cache_frame_frame_click$_termui_impl$$$function__21__pipepager = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__21__pipepager);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_color);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
par_color = NULL;
Py_XDECREF(var_shutil);
var_shutil = NULL;
Py_XDECREF(var_cmd);
var_cmd = NULL;
Py_XDECREF(var_cmd_params);
var_cmd_params = NULL;
Py_XDECREF(var_cmd_filepath);
var_cmd_filepath = NULL;
Py_XDECREF(var_cmd_path);
var_cmd_path = NULL;
Py_XDECREF(var_cmd_name);
var_cmd_name = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var_env);
var_env = NULL;
Py_XDECREF(var_less_flags);
var_less_flags = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_text);
var_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_color);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
par_color = NULL;
Py_XDECREF(var_shutil);
var_shutil = NULL;
Py_XDECREF(var_cmd);
var_cmd = NULL;
Py_XDECREF(var_cmd_params);
var_cmd_params = NULL;
Py_XDECREF(var_cmd_filepath);
var_cmd_filepath = NULL;
Py_XDECREF(var_cmd_path);
var_cmd_path = NULL;
Py_XDECREF(var_cmd_name);
var_cmd_name = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var_env);
var_env = NULL;
Py_XDECREF(var_less_flags);
var_less_flags = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_text);
var_text = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_cmd_parts);
Py_DECREF(par_cmd_parts);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_cmd_parts);
Py_DECREF(par_cmd_parts);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__22__tempfilepager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_generator = python_pars[0];
PyObject *par_cmd_parts = python_pars[1];
PyObject *par_color = python_pars[2];
PyObject *var_shutil = NULL;
PyObject *var_cmd = NULL;
PyObject *var_cmd_filepath = NULL;
PyObject *var_cmd_path = NULL;
PyObject *var_subprocess = NULL;
PyObject *var_tempfile = NULL;
PyObject *var_fd = NULL;
PyObject *var_filename = NULL;
PyObject *var_text = NULL;
PyObject *var_encoding = NULL;
PyObject *var_f = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__22__tempfilepager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager = MAKE_FUNCTION_FRAME(tstate, code_objects_d0d8628de3200ea3fcfac5b276d8c283, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__22__tempfilepager = cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__22__tempfilepager);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__22__tempfilepager) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_cmd_parts);
tmp_operand_value_1 = par_cmd_parts;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;
type_description_1 = "oooooooooooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 516;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 516;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_shutil == NULL);
var_shutil = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_cmd_parts);
tmp_expression_value_1 = par_cmd_parts;
tmp_subscript_value_1 = const_int_0;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd == NULL);
var_cmd = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_shutil);
tmp_called_instance_1 = var_shutil;
CHECK_OBJECT(var_cmd);
tmp_args_element_value_1 = var_cmd;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 520;
tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_which, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd_filepath == NULL);
var_cmd_filepath = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
CHECK_OBJECT(var_cmd_filepath);
tmp_operand_value_2 = var_cmd_filepath;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooooooooooooo";
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
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_click$_termui_impl$Path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_cmd_filepath);
tmp_args_element_value_2 = var_cmd_filepath;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 524;
tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 524;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_resolve);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cmd_path == NULL);
var_cmd_path = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_2 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 526;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_subprocess == NULL);
var_subprocess = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_3 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 527;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tempfile == NULL);
var_tempfile = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_instance_3;
CHECK_OBJECT(var_tempfile);
tmp_called_instance_3 = var_tempfile;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 529;
tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_mkstemp);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
assert(var_fd == NULL);
Py_INCREF(tmp_assign_source_10);
var_fd = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
assert(var_filename == NULL);
Py_INCREF(tmp_assign_source_11);
var_filename = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_12;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = const_str_empty;
CHECK_OBJECT(par_generator);
tmp_iterable_value_1 = par_generator;
tmp_assign_source_12 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 531;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_text == NULL);
var_text = tmp_assign_source_12;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_3;
CHECK_OBJECT(par_color);
tmp_operand_value_3 = par_color;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooooooooooooo";
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
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
tmp_called_value_2 = module_var_accessor_click$_termui_impl$strip_ansi(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_ansi);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 533;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_text);
tmp_args_element_value_3 = var_text;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 533;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_text;
    assert(old != NULL);
    var_text = tmp_assign_source_13;
    Py_DECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_2;
tmp_called_value_3 = module_var_accessor_click$_termui_impl$get_best_encoding(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_best_encoding);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 534;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_2 == NULL));
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_stdout);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 534;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_encoding == NULL);
var_encoding = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_subscript_value_2;
tmp_called_value_4 = module_var_accessor_click$_termui_impl$open_stream(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_open_stream);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_filename);
tmp_args_element_value_5 = var_filename;
tmp_args_element_value_6 = mod_consts.const_str_plain_wb;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 535;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
tmp_subscript_value_2 = const_int_0;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_4 = tmp_with_1__source;
tmp_called_value_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, const_str_plain___enter__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 535;
tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_5 = tmp_with_1__source;
tmp_assign_source_17 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, const_str_plain___exit__);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_17;
}
{
nuitka_bool tmp_assign_source_18;
tmp_assign_source_18 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_19 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_19);
var_f = tmp_assign_source_19;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_f);
tmp_expression_value_6 = var_f;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_write);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_text);
tmp_expression_value_7 = var_text;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_encode);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 536;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(var_encoding);
tmp_args_element_value_8 = var_encoding;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 536;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 536;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 536;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_assign_source_20;
tmp_assign_source_20 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_20;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_4;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
tmp_args_element_value_9 = EXC_TYPE(tstate);
tmp_args_element_value_10 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_10); 
tmp_args_element_value_11 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_11 == NULL) {
    tmp_args_element_value_11 = Py_None;
}
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 535;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 535;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_7;
branch_no_5:;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 535;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_7;
branch_end_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 535;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);

exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_6:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
try_end_5:;
{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_10 = tmp_with_1__exit;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 535;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_10, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_7:;
goto try_end_6;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
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
// Tried code:
// Tried code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_8;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_12;
PyObject *tmp_list_element_1;
PyObject *tmp_unicode_arg_1;
CHECK_OBJECT(var_subprocess);
tmp_expression_value_8 = var_subprocess;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_call);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(var_cmd_path);
tmp_unicode_arg_1 = var_cmd_path;
tmp_list_element_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 538;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_9;
}
tmp_args_element_value_12 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM(tmp_args_element_value_12, 0, tmp_list_element_1);
CHECK_OBJECT(var_filename);
tmp_list_element_1 = var_filename;
PyList_SET_ITEM0(tmp_args_element_value_12, 1, tmp_list_element_1);
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 538;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
goto try_end_7;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 537;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_10;
branch_no_8:;
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_8:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
goto try_end_9;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_9);
// Tried code:
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_13;
tmp_called_instance_4 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_4 == NULL));
CHECK_OBJECT(var_fd);
tmp_args_element_value_13 = var_fd;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 543;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, const_str_plain_close, tmp_args_element_value_13);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_14;
tmp_called_instance_5 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_5 == NULL));
CHECK_OBJECT(var_filename);
tmp_args_element_value_14 = var_filename;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 544;
tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_unlink, tmp_args_element_value_14);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 537;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame)) {
        frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooooooooo";
goto try_except_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_9:;
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_15;
tmp_called_instance_6 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_6 == NULL));
CHECK_OBJECT(var_fd);
tmp_args_element_value_15 = var_fd;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 543;
tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, const_str_plain_close, tmp_args_element_value_15);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_16;
tmp_called_instance_7 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_7 == NULL));
CHECK_OBJECT(var_filename);
tmp_args_element_value_16 = var_filename;
frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame.f_lineno = 544;
tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_unlink, tmp_args_element_value_16);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__22__tempfilepager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__22__tempfilepager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__22__tempfilepager,
    type_description_1,
    par_generator,
    par_cmd_parts,
    par_color,
    var_shutil,
    var_cmd,
    var_cmd_filepath,
    var_cmd_path,
    var_subprocess,
    var_tempfile,
    var_fd,
    var_filename,
    var_text,
    var_encoding,
    var_f
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__22__tempfilepager == cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager);
    cache_frame_frame_click$_termui_impl$$$function__22__tempfilepager = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__22__tempfilepager);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_shutil);
var_shutil = NULL;
Py_XDECREF(var_cmd);
var_cmd = NULL;
Py_XDECREF(var_cmd_filepath);
var_cmd_filepath = NULL;
Py_XDECREF(var_cmd_path);
var_cmd_path = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var_tempfile);
var_tempfile = NULL;
Py_XDECREF(var_fd);
var_fd = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_encoding);
var_encoding = NULL;
Py_XDECREF(var_f);
var_f = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_shutil);
var_shutil = NULL;
Py_XDECREF(var_cmd);
var_cmd = NULL;
Py_XDECREF(var_cmd_filepath);
var_cmd_filepath = NULL;
Py_XDECREF(var_cmd_path);
var_cmd_path = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var_tempfile);
var_tempfile = NULL;
Py_XDECREF(var_fd);
var_fd = NULL;
Py_XDECREF(var_filename);
var_filename = NULL;
Py_XDECREF(var_text);
var_text = NULL;
Py_XDECREF(var_encoding);
var_encoding = NULL;
Py_XDECREF(var_f);
var_f = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_cmd_parts);
Py_DECREF(par_cmd_parts);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_cmd_parts);
Py_DECREF(par_cmd_parts);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__23__nullpager(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_stream = python_pars[0];
PyObject *par_generator = python_pars[1];
PyObject *par_color = python_pars[2];
PyObject *var_text = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__23__nullpager;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__23__nullpager = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__23__nullpager)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__23__nullpager);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__23__nullpager == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__23__nullpager = MAKE_FUNCTION_FRAME(tstate, code_objects_eaa435e453e31ee54c2302612996a69f, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__23__nullpager->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__23__nullpager = cache_frame_frame_click$_termui_impl$$$function__23__nullpager;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__23__nullpager);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__23__nullpager) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_generator);
tmp_iter_arg_1 = par_generator;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooo";
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
type_description_1 = "oooo";
exception_lineno = 553;
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
    PyObject *old = var_text;
    var_text = tmp_assign_source_3;
    Py_INCREF(var_text);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_color);
tmp_operand_value_1 = par_color;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "oooo";
    goto try_except_handler_2;
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_click$_termui_impl$strip_ansi(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_ansi);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 555;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_text);
tmp_args_element_value_1 = var_text;
frame_frame_click$_termui_impl$$$function__23__nullpager->m_frame.f_lineno = 555;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_text;
    assert(old != NULL);
    var_text = tmp_assign_source_4;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
if (par_stream == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stream);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 556;
type_description_1 = "oooo";
    goto try_except_handler_2;
}

tmp_called_instance_1 = par_stream;
CHECK_OBJECT(var_text);
tmp_args_element_value_2 = var_text;
frame_frame_click$_termui_impl$$$function__23__nullpager->m_frame.f_lineno = 556;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_write, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__23__nullpager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__23__nullpager->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__23__nullpager, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__23__nullpager,
    type_description_1,
    par_stream,
    par_generator,
    par_color,
    var_text
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__23__nullpager == cache_frame_frame_click$_termui_impl$$$function__23__nullpager) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__23__nullpager);
    cache_frame_frame_click$_termui_impl$$$function__23__nullpager = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__23__nullpager);

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
Py_XDECREF(var_text);
var_text = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_text);
var_text = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_stream);
Py_DECREF(par_stream);
CHECK_OBJECT(par_generator);
Py_DECREF(par_generator);
CHECK_OBJECT(par_color);
Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__24___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_editor = python_pars[1];
PyObject *par_env = python_pars[2];
PyObject *par_require_save = python_pars[3];
PyObject *par_extension = python_pars[4];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__24___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__24___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__24___init__)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__24___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__24___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__24___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f88e9ea27b036baaeef8074fd5de1164, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__24___init__->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__24___init__ = cache_frame_frame_click$_termui_impl$$$function__24___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__24___init__);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__24___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_editor);
tmp_assattr_value_1 = par_editor;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_editor, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_env);
tmp_assattr_value_2 = par_env;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_env, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_require_save);
tmp_assattr_value_3 = par_require_save;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_require_save, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_extension);
tmp_assattr_value_4 = par_extension;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_extension, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__24___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__24___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__24___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__24___init__,
    type_description_1,
    par_self,
    par_editor,
    par_env,
    par_require_save,
    par_extension
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__24___init__ == cache_frame_frame_click$_termui_impl$$$function__24___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__24___init__);
    cache_frame_frame_click$_termui_impl$$$function__24___init__ = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__24___init__);

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
CHECK_OBJECT(par_editor);
Py_DECREF(par_editor);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
CHECK_OBJECT(par_require_save);
Py_DECREF(par_require_save);
CHECK_OBJECT(par_extension);
Py_DECREF(par_extension);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_editor);
Py_DECREF(par_editor);
CHECK_OBJECT(par_env);
Py_DECREF(par_env);
CHECK_OBJECT(par_require_save);
Py_DECREF(par_require_save);
CHECK_OBJECT(par_extension);
Py_DECREF(par_extension);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__25_get_editor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_key = NULL;
PyObject *var_rv = NULL;
PyObject *var_which = NULL;
PyObject *var_editor = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__25_get_editor;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__25_get_editor = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__25_get_editor)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__25_get_editor);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__25_get_editor == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__25_get_editor = MAKE_FUNCTION_FRAME(tstate, code_objects_b74357105280d15d07f20f11f0f78f4a, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__25_get_editor->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__25_get_editor = cache_frame_frame_click$_termui_impl$$$function__25_get_editor;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__25_get_editor);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__25_get_editor) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_editor);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooooo";
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
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_editor);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = mod_consts.const_tuple_str_plain_VISUAL_str_plain_EDITOR_tuple;
tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
assert(!(tmp_assign_source_1 == NULL));
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
tmp_assign_source_2 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 575;
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
    PyObject *old = var_key;
    var_key = tmp_assign_source_3;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_key);
tmp_args_element_value_1 = var_key;
frame_frame_click$_termui_impl$$$function__25_get_editor->m_frame.f_lineno = 576;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_rv;
    var_rv = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_rv);
tmp_truth_name_1 = CHECK_IF_TRUE(var_rv);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_rv);
tmp_return_value = var_rv;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
tmp_mvar_value_1 = module_var_accessor_click$_termui_impl$WIN(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WIN);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 579;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = mod_consts.const_str_plain_notepad;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_shutil;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_which_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__25_get_editor->m_frame.f_lineno = 582;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_which,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_which);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_which == NULL);
var_which = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
tmp_iter_arg_2 = mod_consts.const_tuple_dae631f11a6d1b147103b75cf190468f_tuple;
tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_6;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_7 = ITERATOR_NEXT_ITERATOR(tmp_next_source_2);
if (tmp_assign_source_7 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooo";
exception_lineno = 584;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_8 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_editor;
    var_editor = tmp_assign_source_8;
    Py_INCREF(var_editor);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
if (var_which == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_which);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 585;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}

tmp_called_value_2 = var_which;
CHECK_OBJECT(var_editor);
tmp_args_element_value_2 = var_editor;
frame_frame_click$_termui_impl$$$function__25_get_editor->m_frame.f_lineno = 585;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(var_editor);
tmp_return_value = var_editor;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_2;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
CHECK_OBJECT(tmp_for_loop_2__iter_value);
Py_DECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__25_get_editor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__25_get_editor->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__25_get_editor, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__25_get_editor,
    type_description_1,
    par_self,
    var_key,
    var_rv,
    var_which,
    var_editor
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__25_get_editor == cache_frame_frame_click$_termui_impl$$$function__25_get_editor) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__25_get_editor);
    cache_frame_frame_click$_termui_impl$$$function__25_get_editor = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__25_get_editor);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
tmp_return_value = mod_consts.const_str_plain_vi;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
Py_XDECREF(var_which);
var_which = NULL;
Py_XDECREF(var_editor);
var_editor = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
Py_XDECREF(var_which);
var_which = NULL;
Py_XDECREF(var_editor);
var_editor = NULL;
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


static PyObject *impl_click$_termui_impl$$$function__26_edit_files(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_filenames = python_pars[1];
PyObject *var_environ = NULL;
PyObject *var_subprocess = NULL;
PyObject *var_editor = NULL;
PyObject *var_exc_filename = NULL;
PyObject *var_c = NULL;
PyObject *var_exit_code = NULL;
PyObject *var_e = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__26_edit_files;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__26_edit_files = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__26_edit_files)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__26_edit_files);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__26_edit_files == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__26_edit_files = MAKE_FUNCTION_FRAME(tstate, code_objects_fee12720a7151a6dcb33d0a855917ac9, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__26_edit_files->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__26_edit_files = cache_frame_frame_click$_termui_impl$$$function__26_edit_files;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__26_edit_files);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__26_edit_files) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 590;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_subprocess == NULL);
var_subprocess = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 592;
tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_editor);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 592;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_editor == NULL);
var_editor = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
assert(var_environ == NULL);
Py_INCREF(tmp_assign_source_3);
var_environ = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_env);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 595;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 595;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_environ);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 596;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_environ;
    assert(old != NULL);
    var_environ = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_environ);
tmp_expression_value_4 = var_environ;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_update);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_env);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 597;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 597;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_1 = mod_consts.const_str_space;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_filenames);
tmp_iter_arg_1 = par_filenames;
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_6;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_assign_source_5 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_exc_filename == NULL);
var_exc_filename = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(var_subprocess);
tmp_expression_value_6 = var_subprocess;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Popen);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_editor);
tmp_format_value_1 = var_editor;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 603;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_space;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_exc_filename);
tmp_tuple_element_1 = var_exc_filename;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_kw_call_value_0_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_kw_call_value_0_1 == NULL));
if (var_environ == NULL) {
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_kw_call_value_0_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_environ);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 603;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}

tmp_kw_call_value_1_1 = var_environ;
tmp_kw_call_value_2_1 = Py_True;
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 602;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

    tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_args_str_plain_env_str_plain_shell_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(var_c == NULL);
var_c = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_c);
tmp_called_instance_2 = var_c;
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 605;
tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_wait);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(var_exit_code == NULL);
var_exit_code = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_exit_code);
tmp_cmp_expr_left_1 = var_exit_code;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_2;
tmp_called_value_4 = module_var_accessor_click$_termui_impl$ClickException(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClickException);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 607;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_6 = module_var_accessor_click$_termui_impl$_(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_underscore);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 608;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 608;
tmp_expression_value_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_d37be71476ee638bfebd31858dd0b094_tuple);

if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_editor);
tmp_kw_call_value_0_2 = var_editor;
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 608;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_args_element_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_editor_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 608;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 607;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 607;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooo";
goto try_except_handler_3;
}
branch_no_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__26_edit_files, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__26_edit_files, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_9); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_9);
var_e = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_raise_cause_1;
tmp_called_value_7 = module_var_accessor_click$_termui_impl$ClickException(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClickException);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 611;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_9 = module_var_accessor_click$_termui_impl$_(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_underscore);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 612;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 612;
tmp_expression_value_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_digest_d6aaefdada719c76bf6ae0015ae7cb2e_tuple);

if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_format);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_editor);
tmp_kw_call_value_0_3 = var_editor;
CHECK_OBJECT(var_e);
tmp_kw_call_value_1_2 = var_e;
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 612;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

    tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_str_plain_editor_str_plain_e_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = 611;
tmp_raise_type_input_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_2;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 613;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooooooooo";
goto try_except_handler_5;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 601;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame)) {
        frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_4;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__26_edit_files, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__26_edit_files->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__26_edit_files, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__26_edit_files,
    type_description_1,
    par_self,
    par_filenames,
    var_environ,
    var_subprocess,
    var_editor,
    var_exc_filename,
    var_c,
    var_exit_code,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__26_edit_files == cache_frame_frame_click$_termui_impl$$$function__26_edit_files) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__26_edit_files);
    cache_frame_frame_click$_termui_impl$$$function__26_edit_files = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__26_edit_files);

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
Py_XDECREF(var_environ);
var_environ = NULL;
CHECK_OBJECT(var_subprocess);
CHECK_OBJECT(var_subprocess);
Py_DECREF(var_subprocess);
var_subprocess = NULL;
CHECK_OBJECT(var_editor);
CHECK_OBJECT(var_editor);
Py_DECREF(var_editor);
var_editor = NULL;
CHECK_OBJECT(var_exc_filename);
CHECK_OBJECT(var_exc_filename);
Py_DECREF(var_exc_filename);
var_exc_filename = NULL;
CHECK_OBJECT(var_c);
CHECK_OBJECT(var_c);
Py_DECREF(var_c);
var_c = NULL;
CHECK_OBJECT(var_exit_code);
CHECK_OBJECT(var_exit_code);
Py_DECREF(var_exit_code);
var_exit_code = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_environ);
var_environ = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var_editor);
var_editor = NULL;
Py_XDECREF(var_exc_filename);
var_exc_filename = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_exit_code);
var_exit_code = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_filenames);
Py_DECREF(par_filenames);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_filenames);
Py_DECREF(par_filenames);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr_locals {
PyObject *var_filename;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr_locals *generator_heap = (struct click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_filename = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2a63609a8c2b081f5c492ef21aa5eaee, module_click$_termui_impl, sizeof(void *)+sizeof(void *));
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
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 599;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_filename;
    generator_heap->var_filename = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_filename);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_tuple_element_1 = mod_consts.const_str_chr_34;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_filename);
tmp_format_value_1 = generator_heap->var_filename;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 599;
generator_heap->type_description_1 = "No";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_expression_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_expression_value_1 == NULL));
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_string_concat_values_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_string_concat_values_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 599;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 599;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_filename
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
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_filename);
generator_heap->var_filename = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_filename);
generator_heap->var_filename = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr_context,
        module_click$_termui_impl,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_91ba4a3473d59fc6957f11a4d3e3b9b5,
#endif
        code_objects_2a63609a8c2b081f5c492ef21aa5eaee,
        closure,
        1,
#if 1
        sizeof(struct click$_termui_impl$$$function__26_edit_files$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_click$_termui_impl$$$function__29_edit(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_text = python_pars[1];
PyObject *var_data = NULL;
PyObject *var_f = NULL;
PyObject *var_tempfile = NULL;
PyObject *var_fd = NULL;
PyObject *var_name = NULL;
PyObject *var_timestamp = NULL;
PyObject *var_rv = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_with_1__enter = NULL;
PyObject *tmp_with_1__exit = NULL;
nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_1__source = NULL;
PyObject *tmp_with_2__enter = NULL;
PyObject *tmp_with_2__exit = NULL;
nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
PyObject *tmp_with_2__source = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__29_edit;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__29_edit = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__29_edit)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__29_edit);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__29_edit == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__29_edit = MAKE_FUNCTION_FRAME(tstate, code_objects_3eb3bab272d1b352a2b0f17ece0db8e4, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__29_edit->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__29_edit = cache_frame_frame_click$_termui_impl$$$function__29_edit;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__29_edit);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__29_edit) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 624;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_tempfile == NULL);
var_tempfile = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_text);
tmp_cmp_expr_left_1 = par_text;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = const_bytes_empty;
assert(var_data == NULL);
Py_INCREF(tmp_assign_source_2);
var_data = tmp_assign_source_2;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_text);
tmp_isinstance_inst_1 = par_text;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_text);
tmp_assign_source_3 = par_text;
assert(var_data == NULL);
Py_INCREF(tmp_assign_source_3);
var_data = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_text);
tmp_truth_name_1 = CHECK_IF_TRUE(par_text);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_text);
tmp_expression_value_1 = par_text;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_endswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 631;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_newline_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
CHECK_OBJECT(par_text);
tmp_iadd_expr_left_1 = par_text;
tmp_iadd_expr_right_1 = mod_consts.const_str_newline;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
par_text = tmp_assign_source_4;

}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
tmp_mvar_value_1 = module_var_accessor_click$_termui_impl$WIN(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WIN);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 634;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
if (par_text == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = par_text;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_replace);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 635;
tmp_expression_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_str_newline_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_encode);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 635;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_b92226bee77e9ca773ad5eaea1d64ab0_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 635;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_5;
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
if (par_text == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 637;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = par_text;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_encode);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 637;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_data == NULL);
var_data = tmp_assign_source_6;
}
branch_end_4:;
branch_end_2:;
branch_end_1:;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_tempfile);
tmp_expression_value_5 = var_tempfile;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_mkstemp);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_kw_call_value_0_1 = mod_consts.const_str_digest_2581d4c78e0eaa34c194c0d21c6458b9;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_extension);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 639;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 639;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_prefix_str_plain_suffix_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 639;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 639;
type_description_1 = "ooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 639;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
assert(var_fd == NULL);
Py_INCREF(tmp_assign_source_10);
var_fd = tmp_assign_source_10;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
assert(var_name == NULL);
Py_INCREF(tmp_assign_source_11);
var_name = tmp_assign_source_11;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_fd);
tmp_args_element_value_1 = var_fd;
tmp_args_element_value_2 = mod_consts.const_str_plain_wb;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 643;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_fdopen,
        call_args
    );
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__source == NULL);
tmp_with_1__source = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_7 = tmp_with_1__source;
tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, const_str_plain___enter__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 643;
tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__enter == NULL);
tmp_with_1__enter = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_with_1__source);
tmp_expression_value_8 = tmp_with_1__source;
tmp_assign_source_14 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, const_str_plain___exit__);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
assert(tmp_with_1__exit == NULL);
tmp_with_1__exit = tmp_assign_source_14;
}
{
nuitka_bool tmp_assign_source_15;
tmp_assign_source_15 = NUITKA_BOOL_TRUE;
tmp_with_1__indicator = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_with_1__enter);
tmp_assign_source_16 = tmp_with_1__enter;
assert(var_f == NULL);
Py_INCREF(tmp_assign_source_16);
var_f = tmp_assign_source_16;
}
// Tried code:
// Tried code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var_f);
tmp_called_instance_2 = var_f;
CHECK_OBJECT(var_data);
tmp_args_element_value_3 = var_data;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 644;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_write, tmp_args_element_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 644;
type_description_1 = "ooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__29_edit, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__29_edit, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_assign_source_17;
tmp_assign_source_17 = NUITKA_BOOL_FALSE;
tmp_with_1__indicator = tmp_assign_source_17;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_7 = tmp_with_1__exit;
tmp_args_element_value_4 = EXC_TYPE(tstate);
tmp_args_element_value_5 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_5); 
tmp_args_element_value_6 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_6 == NULL) {
    tmp_args_element_value_6 = Py_None;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 643;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_8;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 643;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__29_edit->m_frame)) {
        frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_8;
branch_no_6:;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 643;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__29_edit->m_frame)) {
        frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_8;
branch_end_5:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_6;
// End of try:
try_end_4:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;
goto try_end_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_7;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_2;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_8 = tmp_with_1__exit;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 643;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_8, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_5);

exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
{
bool tmp_condition_result_8;
nuitka_bool tmp_cmp_expr_left_4;
nuitka_bool tmp_cmp_expr_right_4;
assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_4 = tmp_with_1__indicator;
tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
tmp_condition_result_8 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
CHECK_OBJECT(tmp_with_1__exit);
tmp_called_value_9 = tmp_with_1__exit;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 643;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_9, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_8:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_1__source);
tmp_with_1__source = NULL;
Py_XDECREF(tmp_with_1__enter);
tmp_with_1__enter = NULL;
Py_XDECREF(tmp_with_1__exit);
tmp_with_1__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_4;
// End of try:
try_end_6:;
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
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_9;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_9;
tmp_expression_value_9 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_9 == NULL));
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_utime);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_name);
tmp_args_element_value_7 = var_name;
tmp_called_instance_3 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_3 == NULL));
CHECK_OBJECT(var_name);
tmp_args_element_value_9 = var_name;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 650;
tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_getatime, tmp_args_element_value_9);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_10);

exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_args_element_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_10;
PyTuple_SET_ITEM(tmp_args_element_value_8, 0, tmp_tuple_element_1);
tmp_called_instance_4 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_4 == NULL));
CHECK_OBJECT(var_name);
tmp_args_element_value_10 = var_name;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 650;
tmp_sub_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_getmtime, tmp_args_element_value_10);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
tmp_sub_expr_right_1 = mod_consts.const_int_pos_2;
tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_args_element_value_8, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_args_element_value_8);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 650;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_11;
tmp_called_instance_5 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_5 == NULL));
CHECK_OBJECT(var_name);
tmp_args_element_value_11 = var_name;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 653;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_getmtime, tmp_args_element_value_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 653;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
assert(var_timestamp == NULL);
var_timestamp = tmp_assign_source_18;
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_12;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(par_self);
tmp_called_instance_6 = par_self;
CHECK_OBJECT(var_name);
tmp_tuple_element_2 = var_name;
tmp_args_element_value_12 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_element_value_12, 0, tmp_tuple_element_2);
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 655;
tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_edit_files, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 655;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
{
nuitka_bool tmp_condition_result_9;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_13;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_require_save);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 657;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_called_instance_7 = IMPORT_HARD_NTPATH();
assert(!(tmp_called_instance_7 == NULL));
CHECK_OBJECT(var_name);
tmp_args_element_value_13 = var_name;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 657;
tmp_cmp_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_getmtime, tmp_args_element_value_13);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_timestamp);
tmp_cmp_expr_right_5 = var_timestamp;
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_9 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_9 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_4;
branch_no_9:;
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_open_filename_1;
PyObject *tmp_open_mode_1;
CHECK_OBJECT(var_name);
tmp_open_filename_1 = var_name;
tmp_open_mode_1 = const_str_plain_rb;
tmp_assign_source_19 = BUILTIN_OPEN(tstate, tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
assert(tmp_with_2__source == NULL);
tmp_with_2__source = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_11 = tmp_with_2__source;
tmp_called_value_11 = LOOKUP_SPECIAL(tstate, tmp_expression_value_11, const_str_plain___enter__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 660;
tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
assert(tmp_with_2__enter == NULL);
tmp_with_2__enter = tmp_assign_source_20;
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_with_2__source);
tmp_expression_value_12 = tmp_with_2__source;
tmp_assign_source_21 = LOOKUP_SPECIAL(tstate, tmp_expression_value_12, const_str_plain___exit__);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
assert(tmp_with_2__exit == NULL);
tmp_with_2__exit = tmp_assign_source_21;
}
{
nuitka_bool tmp_assign_source_22;
tmp_assign_source_22 = NUITKA_BOOL_TRUE;
tmp_with_2__indicator = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
CHECK_OBJECT(tmp_with_2__enter);
tmp_assign_source_23 = tmp_with_2__enter;
{
    PyObject *old = var_f;
    assert(old != NULL);
    var_f = tmp_assign_source_23;
    Py_INCREF(var_f);
    Py_DECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_instance_8;
CHECK_OBJECT(var_f);
tmp_called_instance_8 = var_f;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 661;
tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, const_str_plain_read);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 661;
type_description_1 = "ooooooooo";
    goto try_except_handler_11;
}
assert(var_rv == NULL);
var_rv = tmp_assign_source_24;
}
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__29_edit, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__29_edit, exception_keeper_lineno_7);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_7, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_7);
// Tried code:
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
tmp_cmp_expr_left_6 = EXC_TYPE(tstate);
tmp_cmp_expr_right_6 = PyExc_BaseException;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_assign_source_25;
tmp_assign_source_25 = NUITKA_BOOL_FALSE;
tmp_with_2__indicator = tmp_assign_source_25;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_12 = tmp_with_2__exit;
tmp_args_element_value_14 = EXC_TYPE(tstate);
tmp_args_element_value_15 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_15); 
tmp_args_element_value_16 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_16 == NULL) {
    tmp_args_element_value_16 = Py_None;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 660;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_12;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_12;
}
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 660;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__29_edit->m_frame)) {
        frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_12;
branch_no_11:;
goto branch_end_10;
branch_no_10:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 660;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__29_edit->m_frame)) {
        frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_12;
branch_end_10:;
goto try_end_8;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_10;
// End of try:
try_end_8:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_7;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_7:;
goto try_end_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_6;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_13 = tmp_with_2__exit;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 660;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_13, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

RELEASE_ERROR_OCCURRED_STATE(&exception_keeper_name_9);

exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_12:;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_9;
// End of try:
try_end_9:;
{
bool tmp_condition_result_13;
nuitka_bool tmp_cmp_expr_left_8;
nuitka_bool tmp_cmp_expr_right_8;
assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_8 = tmp_with_2__indicator;
tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
tmp_condition_result_13 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_7;
CHECK_OBJECT(tmp_with_2__exit);
tmp_called_value_14 = tmp_with_2__exit;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 660;
tmp_call_result_7 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 660;
type_description_1 = "ooooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_13:;
goto try_end_10;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
Py_XDECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
Py_XDECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_4;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_with_2__source);
CHECK_OBJECT(tmp_with_2__source);
Py_DECREF(tmp_with_2__source);
tmp_with_2__source = NULL;
CHECK_OBJECT(tmp_with_2__enter);
CHECK_OBJECT(tmp_with_2__enter);
Py_DECREF(tmp_with_2__enter);
tmp_with_2__enter = NULL;
CHECK_OBJECT(tmp_with_2__exit);
CHECK_OBJECT(tmp_with_2__exit);
Py_DECREF(tmp_with_2__exit);
tmp_with_2__exit = NULL;
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
if (par_text == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 663;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_isinstance_inst_2 = par_text;
tmp_isinstance_cls_2 = mod_consts.const_tuple_type_bytes_type_bytearray_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 663;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_14 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 664;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_return_value = var_rv;
Py_INCREF(tmp_return_value);
goto try_return_handler_4;
branch_no_14:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_13;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_14;
if (var_rv == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rv);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 666;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}

tmp_expression_value_14 = var_rv;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_decode);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 666;
tmp_expression_value_13 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_16, mod_consts.const_tuple_str_digest_b92226bee77e9ca773ad5eaea1d64ab0_tuple);

CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 666;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_15, mod_consts.const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_str_newline_tuple);

CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "ooooooooo";
    goto try_except_handler_4;
}
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
{
PyObject *tmp_called_instance_9;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_17;
tmp_called_instance_9 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_9 == NULL));
CHECK_OBJECT(var_name);
tmp_args_element_value_17 = var_name;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 668;
tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_unlink, tmp_args_element_value_17);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__29_edit, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__29_edit, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
PyObject *tmp_called_instance_10;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_18;
tmp_called_instance_10 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_10 == NULL));
CHECK_OBJECT(var_name);
tmp_args_element_value_18 = var_name;
frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = 668;
tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_unlink, tmp_args_element_value_18);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "ooooooooo";
    goto try_except_handler_13;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 642;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__29_edit->m_frame)) {
        frame_frame_click$_termui_impl$$$function__29_edit->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooo";
goto try_except_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__29_edit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__29_edit->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__29_edit, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__29_edit,
    type_description_1,
    par_self,
    par_text,
    var_data,
    var_f,
    var_tempfile,
    var_fd,
    var_name,
    var_timestamp,
    var_rv
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__29_edit == cache_frame_frame_click$_termui_impl$$$function__29_edit) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__29_edit);
    cache_frame_frame_click$_termui_impl$$$function__29_edit = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__29_edit);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_text);
par_text = NULL;
CHECK_OBJECT(var_data);
CHECK_OBJECT(var_data);
Py_DECREF(var_data);
var_data = NULL;
Py_XDECREF(var_f);
var_f = NULL;
CHECK_OBJECT(var_tempfile);
CHECK_OBJECT(var_tempfile);
Py_DECREF(var_tempfile);
var_tempfile = NULL;
CHECK_OBJECT(var_fd);
CHECK_OBJECT(var_fd);
Py_DECREF(var_fd);
var_fd = NULL;
CHECK_OBJECT(var_name);
CHECK_OBJECT(var_name);
Py_DECREF(var_name);
var_name = NULL;
CHECK_OBJECT(var_timestamp);
CHECK_OBJECT(var_timestamp);
Py_DECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_text);
par_text = NULL;
Py_XDECREF(var_data);
var_data = NULL;
Py_XDECREF(var_f);
var_f = NULL;
Py_XDECREF(var_tempfile);
var_tempfile = NULL;
Py_XDECREF(var_fd);
var_fd = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_timestamp);
var_timestamp = NULL;
Py_XDECREF(var_rv);
var_rv = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

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


static PyObject *impl_click$_termui_impl$$$function__30_open_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *par_wait = python_pars[1];
PyObject *par_locate = python_pars[2];
PyObject *var_subprocess = NULL;
PyObject *var__unquote_file = NULL;
PyObject *var_args = NULL;
PyObject *var_c = NULL;
PyObject *var_webbrowser = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__30_open_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__30_open_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__30_open_url)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__30_open_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__30_open_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__30_open_url = MAKE_FUNCTION_FRAME(tstate, code_objects_cf7fdd5083b61c0c2e2d3ea3cdf6295d, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__30_open_url->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__30_open_url = cache_frame_frame_click$_termui_impl$$$function__30_open_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__30_open_url);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__30_open_url) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_subprocess;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 672;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
assert(var_subprocess == NULL);
var_subprocess = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c151dd6ecc15908c8ae1b00d3728c62e);

tmp_assign_source_2 = MAKE_FUNCTION_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file(tstate, tmp_annotations_1);

assert(var__unquote_file == NULL);
var__unquote_file = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_click$_termui_impl$WIN(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WIN);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 694;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 694;
type_description_1 = "ooooooNoo";
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
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_locate);
tmp_truth_name_2 = CHECK_IF_TRUE(par_locate);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 695;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var__unquote_file);
tmp_called_value_1 = var__unquote_file;
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 696;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 696;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_3;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_list_element_1;
tmp_list_element_1 = mod_consts.const_str_plain_explorer;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyList_SET_ITEM0(tmp_assign_source_4, 0, tmp_list_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_abe117187c282b418c72fcfdbfdf6f06;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_url);
tmp_format_value_1 = par_url;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 697;
type_description_1 = "ooooooNoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto list_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_list_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_list_element_1 == NULL));
PyList_SET_ITEM(tmp_assign_source_4, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_4);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
assert(var_args == NULL);
var_args = tmp_assign_source_4;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST1(tstate, mod_consts.const_str_plain_start);
assert(var_args == NULL);
var_args = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_wait);
tmp_truth_name_3 = CHECK_IF_TRUE(par_wait);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 700;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
CHECK_OBJECT(var_args);
tmp_list_arg_value_1 = var_args;
tmp_item_value_1 = mod_consts.const_str_digest_3f3652ce16ff08499c954eda4725f692;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_3:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
CHECK_OBJECT(var_args);
tmp_list_arg_value_2 = var_args;
tmp_item_value_2 = const_str_empty;
tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
CHECK_OBJECT(var_args);
tmp_list_arg_value_3 = var_args;
CHECK_OBJECT(par_url);
tmp_item_value_3 = par_url;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
branch_end_2:;
// Tried code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(var_subprocess);
tmp_expression_value_1 = var_subprocess;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_call);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooooooNoo";
    goto try_except_handler_2;
}
if (var_args == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 705;
type_description_1 = "ooooooNoo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = var_args;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 705;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "ooooooNoo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__30_open_url, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__30_open_url, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_return_value = mod_consts.const_int_pos_127;
Py_INCREF(tmp_return_value);
goto try_return_handler_3;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 704;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__30_open_url->m_frame)) {
        frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooNoo";
goto try_except_handler_3;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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
// End of try:
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_mvar_value_2;
int tmp_truth_name_4;
tmp_mvar_value_2 = module_var_accessor_click$_termui_impl$CYGWIN(tstate);
if (unlikely(tmp_mvar_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CYGWIN);
}

if (tmp_mvar_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 709;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_mvar_value_2);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 709;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_5;
CHECK_OBJECT(par_locate);
tmp_truth_name_5 = CHECK_IF_TRUE(par_locate);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(var__unquote_file);
tmp_called_value_3 = var__unquote_file;
CHECK_OBJECT(par_url);
tmp_args_element_value_3 = par_url;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 711;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_6;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_list_element_2;
tmp_list_element_2 = mod_consts.const_str_plain_cygstart;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_path_arg_1;
PyList_SET_ITEM0(tmp_assign_source_7, 0, tmp_list_element_2);
CHECK_OBJECT(par_url);
tmp_path_arg_1 = par_url;
tmp_list_element_2 = OS_PATH_DIRNAME(tstate, tmp_path_arg_1);
if (tmp_list_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "ooooooNoo";
    goto list_build_exception_2;
}
PyList_SET_ITEM(tmp_assign_source_7, 1, tmp_list_element_2);
}
goto list_build_no_exception_2;
// Exception handling pass through code for list_build:
list_build_exception_2:;
Py_DECREF(tmp_assign_source_7);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_2:;
assert(var_args == NULL);
var_args = tmp_assign_source_7;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_LIST1(tstate, mod_consts.const_str_plain_cygstart);
assert(var_args == NULL);
var_args = tmp_assign_source_8;
}
{
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_6;
CHECK_OBJECT(par_wait);
tmp_truth_name_6 = CHECK_IF_TRUE(par_wait);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "ooooooNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_args);
tmp_list_arg_value_4 = var_args;
tmp_item_value_4 = mod_consts.const_str_digest_27a7628ab85cd892afa96bd047d5a375;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
branch_no_7:;
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
CHECK_OBJECT(var_args);
tmp_list_arg_value_5 = var_args;
CHECK_OBJECT(par_url);
tmp_item_value_5 = par_url;
tmp_result = LIST_APPEND0(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
branch_end_6:;
// Tried code:
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_subprocess);
tmp_expression_value_2 = var_subprocess;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_call);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_1 = "ooooooNoo";
    goto try_except_handler_4;
}
if (var_args == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, const_str_plain_args);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 719;
type_description_1 = "ooooooNoo";
    goto try_except_handler_4;
}

tmp_args_element_value_4 = var_args;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 719;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 719;
type_description_1 = "ooooooNoo";
    goto try_except_handler_4;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__30_open_url, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__30_open_url, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
tmp_return_value = mod_consts.const_int_pos_127;
Py_INCREF(tmp_return_value);
goto try_return_handler_5;
goto branch_end_8;
branch_no_8:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 718;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__30_open_url->m_frame)) {
        frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooNoo";
goto try_except_handler_5;
branch_end_8:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
branch_no_5:;
branch_end_1:;
// Tried code:
{
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_7;
CHECK_OBJECT(par_locate);
tmp_truth_name_7 = CHECK_IF_TRUE(par_locate);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 725;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_9;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_path_arg_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var__unquote_file);
tmp_called_value_5 = var__unquote_file;
CHECK_OBJECT(par_url);
tmp_args_element_value_5 = par_url;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 726;
tmp_path_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
if (tmp_path_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
tmp_or_left_value_1 = OS_PATH_DIRNAME(tstate, tmp_path_arg_2);
CHECK_OBJECT(tmp_path_arg_2);
Py_DECREF(tmp_path_arg_2);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 726;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 726;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = const_str_dot;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_9 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_9 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_9;
    Py_DECREF(old);
}

}
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(var__unquote_file);
tmp_called_value_6 = var__unquote_file;
CHECK_OBJECT(par_url);
tmp_args_element_value_6 = par_url;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 728;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 728;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_10;
    Py_DECREF(old);
}

}
branch_end_9:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_7;
PyObject *tmp_list_element_3;
CHECK_OBJECT(var_subprocess);
tmp_called_instance_1 = var_subprocess;
tmp_list_element_3 = mod_consts.const_str_digest_784f37fe623d9cd4886a11d0e6c70022;
tmp_args_element_value_7 = MAKE_LIST_EMPTY(tstate, 2);
PyList_SET_ITEM0(tmp_args_element_value_7, 0, tmp_list_element_3);
CHECK_OBJECT(par_url);
tmp_list_element_3 = par_url;
PyList_SET_ITEM0(tmp_args_element_value_7, 1, tmp_list_element_3);
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 729;
tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Popen, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 729;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
assert(var_c == NULL);
var_c = tmp_assign_source_11;
}
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_8;
CHECK_OBJECT(par_wait);
tmp_truth_name_8 = CHECK_IF_TRUE(par_wait);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 730;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
tmp_condition_result_10 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(var_c);
tmp_called_instance_2 = var_c;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 731;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_wait);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 731;
type_description_1 = "ooooooNoo";
    goto try_except_handler_6;
}
goto frame_return_exit_1;
}
branch_no_10:;
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 4.
exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__30_open_url, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__30_open_url, exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_cmp_expr_right_3 = PyExc_OSError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
nuitka_bool tmp_condition_result_12;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
int tmp_truth_name_9;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
if (par_url == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 734;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}

tmp_expression_value_3 = par_url;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 734;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_tuple_8a631a4c76b9eb6a7489e728189268f5_tuple_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 734;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
tmp_and_left_value_1 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_locate);
tmp_operand_value_1 = par_locate;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_wait);
tmp_operand_value_2 = par_wait;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 734;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_12 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_12 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_webbrowser;
tmp_globals_arg_value_2 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 735;
tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 735;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
assert(var_webbrowser == NULL);
var_webbrowser = tmp_assign_source_12;
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_8;
CHECK_OBJECT(var_webbrowser);
tmp_expression_value_4 = var_webbrowser;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_open);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
if (par_url == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 737;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}

tmp_args_element_value_8 = par_url;
frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = 737;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 737;
type_description_1 = "ooooooNoo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_7;
branch_no_12:;
tmp_return_value = const_int_pos_1;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_7;
goto branch_end_11;
branch_no_11:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 724;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$_termui_impl$$$function__30_open_url->m_frame)) {
        frame_frame_click$_termui_impl$$$function__30_open_url->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooNoo";
goto try_except_handler_7;
branch_end_11:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 4.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__30_open_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__30_open_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__30_open_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__30_open_url,
    type_description_1,
    par_url,
    par_wait,
    par_locate,
    var_subprocess,
    var__unquote_file,
    var_args,
    NULL,
    var_c,
    var_webbrowser
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__30_open_url == cache_frame_frame_click$_termui_impl$$$function__30_open_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__30_open_url);
    cache_frame_frame_click$_termui_impl$$$function__30_open_url = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__30_open_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = const_int_0;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_url);
par_url = NULL;
CHECK_OBJECT(var_subprocess);
CHECK_OBJECT(var_subprocess);
Py_DECREF(var_subprocess);
var_subprocess = NULL;
CHECK_OBJECT(var__unquote_file);
CHECK_OBJECT(var__unquote_file);
Py_DECREF(var__unquote_file);
var__unquote_file = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_webbrowser);
var_webbrowser = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_url);
par_url = NULL;
Py_XDECREF(var_subprocess);
var_subprocess = NULL;
Py_XDECREF(var__unquote_file);
var__unquote_file = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_c);
var_c = NULL;
Py_XDECREF(var_webbrowser);
var_webbrowser = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_wait);
Py_DECREF(par_wait);
CHECK_OBJECT(par_locate);
Py_DECREF(par_locate);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_wait);
Py_DECREF(par_wait);
CHECK_OBJECT(par_locate);
Py_DECREF(par_locate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *var_unquote = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file = MAKE_FUNCTION_FRAME(tstate, code_objects_d954eac94f59ad8a04eda2bb14c73d45, module_click$_termui_impl, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file = cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_04991ea695faff4a76e4efb6a8a8593f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_unquote_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file->m_frame.f_lineno = 675;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_unquote,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_unquote);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 675;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_unquote == NULL);
var_unquote = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_url);
tmp_expression_value_1 = par_url;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file->m_frame.f_lineno = 677;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_87da8febe1e63f89773e0686c4dca4a1_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 677;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 677;
type_description_1 = "oo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_unquote);
tmp_called_value_2 = var_unquote;
CHECK_OBJECT(par_url);
tmp_expression_value_2 = par_url;
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_7_none_none;
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file->m_frame.f_lineno = 678;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 678;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_url;
    assert(old != NULL);
    par_url = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
if (par_url == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_url);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 680;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_url;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file,
    type_description_1,
    par_url,
    var_unquote
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file == cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file);
    cache_frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_url);
par_url = NULL;
CHECK_OBJECT(var_unquote);
CHECK_OBJECT(var_unquote);
Py_DECREF(var_unquote);
var_unquote = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_url);
par_url = NULL;
Py_XDECREF(var_unquote);
var_unquote = NULL;
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


static PyObject *impl_click$_termui_impl$$$function__31__translate_ch_to_exc(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ch = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc = MAKE_FUNCTION_FRAME(tstate, code_objects_d53ab6913b2e19d43c95fd63fd9b81c6, module_click$_termui_impl, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc = cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_ch);
tmp_cmp_expr_left_1 = par_ch;
tmp_cmp_expr_right_1 = mod_consts.const_str_chr_3;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 743;
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
{
PyObject *tmp_raise_type_1;
frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc->m_frame.f_lineno = 744;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_KeyboardInterrupt);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 744;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_ch);
tmp_cmp_expr_left_2 = par_ch;
tmp_cmp_expr_right_2 = mod_consts.const_str_chr_4;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_operand_value_1 = module_var_accessor_click$_termui_impl$WIN(tstate);
if (unlikely(tmp_operand_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WIN);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 746;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 746;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_raise_type_2;
frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc->m_frame.f_lineno = 747;
tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_EOFError);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 747;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_ch);
tmp_cmp_expr_left_3 = par_ch;
tmp_cmp_expr_right_3 = mod_consts.const_str_chr_26;
tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_mvar_value_1 = module_var_accessor_click$_termui_impl$WIN(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WIN);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 749;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 749;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_raise_type_3;
frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc->m_frame.f_lineno = 750;
tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_EOFError);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 750;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc,
    type_description_1,
    par_ch
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc == cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc);
    cache_frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__31__translate_ch_to_exc);

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
CHECK_OBJECT(par_ch);
Py_DECREF(par_ch);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ch);
Py_DECREF(par_ch);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$_termui_impl$$$function__32_raw_terminal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_GENERATOR_click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal(tstate);

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
struct click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
};
#endif

static PyObject *click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal_locals *generator_heap = (struct click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_824402981e8f149b35713f0574495bd8, module_click$_termui_impl, 0);
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
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_expression_value_1 = const_int_neg_1;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 760;

    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
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
    generator_heap->type_description_1
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
goto function_exception_exit;
frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal(PyThreadState *tstate) {
    return Nuitka_Generator_New(
        click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal_context,
        module_click$_termui_impl,
        mod_consts.const_str_plain_raw_terminal,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_824402981e8f149b35713f0574495bd8,
        NULL,
        0,
#if 1
        sizeof(struct click$_termui_impl$$$function__32_raw_terminal$$$genobj__1_raw_terminal_locals)
#else
        0
#endif
    );
}


static PyObject *impl_click$_termui_impl$$$function__33_getchar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_echo = python_pars[0];
PyObject *var_func = NULL;
PyObject *var_rv = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$function__33_getchar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_click$_termui_impl$$$function__33_getchar = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_click$_termui_impl$$$function__33_getchar)) {
    Py_XDECREF(cache_frame_frame_click$_termui_impl$$$function__33_getchar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$_termui_impl$$$function__33_getchar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$_termui_impl$$$function__33_getchar = MAKE_FUNCTION_FRAME(tstate, code_objects_34c06b40bb688064107441a139c9885d, module_click$_termui_impl, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$_termui_impl$$$function__33_getchar->m_type_description == NULL);
frame_frame_click$_termui_impl$$$function__33_getchar = cache_frame_frame_click$_termui_impl$$$function__33_getchar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$function__33_getchar);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$function__33_getchar) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_echo);
tmp_truth_name_1 = CHECK_IF_TRUE(par_echo);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 793;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cast);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 794;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_type_str_tuple, "li");
tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 794;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_click$_termui_impl$msvcrt(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msvcrt);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 794;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_getwche);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 794;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__33_getchar->m_frame.f_lineno = 794;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 794;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_func == NULL);
var_func = tmp_assign_source_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_8;
tmp_expression_value_5 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_5 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_cast);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 796;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_7 == NULL));
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 796;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_type_str_tuple, "li");
tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 796;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = module_var_accessor_click$_termui_impl$msvcrt(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_msvcrt);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 796;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_getwch);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_3);

exception_lineno = 796;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_click$_termui_impl$$$function__33_getchar->m_frame.f_lineno = 796;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 796;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_func == NULL);
var_func = tmp_assign_source_2;
}
branch_end_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
CHECK_OBJECT(var_func);
tmp_called_value_3 = var_func;
frame_frame_click$_termui_impl$$$function__33_getchar->m_frame.f_lineno = 798;
tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 798;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_rv == NULL);
var_rv = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_rv);
tmp_cmp_expr_left_1 = var_rv;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_str_null_str_chr_224_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 800;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_value_4;
CHECK_OBJECT(var_rv);
tmp_iadd_expr_left_1 = var_rv;
CHECK_OBJECT(var_func);
tmp_called_value_4 = var_func;
frame_frame_click$_termui_impl$$$function__33_getchar->m_frame.f_lineno = 803;
tmp_iadd_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 803;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_1;
var_rv = tmp_assign_source_4;

}
branch_no_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
tmp_called_value_5 = module_var_accessor_click$_termui_impl$_translate_ch_to_exc(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__translate_ch_to_exc);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 805;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rv);
tmp_args_element_value_5 = var_rv;
frame_frame_click$_termui_impl$$$function__33_getchar->m_frame.f_lineno = 805;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 805;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$function__33_getchar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$function__33_getchar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$function__33_getchar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$function__33_getchar,
    type_description_1,
    par_echo,
    var_func,
    var_rv
);


// Release cached frame if used for exception.
if (frame_frame_click$_termui_impl$$$function__33_getchar == cache_frame_frame_click$_termui_impl$$$function__33_getchar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$_termui_impl$$$function__33_getchar);
    cache_frame_frame_click$_termui_impl$$$function__33_getchar = NULL;
}

assertFrameObject(frame_frame_click$_termui_impl$$$function__33_getchar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_rv);
tmp_return_value = var_rv;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_func);
CHECK_OBJECT(var_func);
Py_DECREF(var_func);
var_func = NULL;
CHECK_OBJECT(var_rv);
CHECK_OBJECT(var_rv);
Py_DECREF(var_rv);
var_rv = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_func);
var_func = NULL;
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
CHECK_OBJECT(par_echo);
Py_DECREF(par_echo);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_echo);
Py_DECREF(par_echo);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__10_format_eta(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__10_format_eta,
        mod_consts.const_str_plain_format_eta,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b8e8189c8ba209ed49f3f8785eabeaf,
#endif
        code_objects_a4b731b77708a0ff313f78bb80d5ac74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__11_format_pos(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__11_format_pos,
        mod_consts.const_str_plain_format_pos,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4bbebc1d9722adc37be2a9a9ce3b6435,
#endif
        code_objects_ebbe0efa38ebf349e8d300fb233e0fee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__12_format_pct(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__12_format_pct,
        mod_consts.const_str_plain_format_pct,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f0e66e8c7da124e1e88bb8521fc0e41,
#endif
        code_objects_72090a47f402140bc1849e0eeacff831,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__13_format_bar(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__13_format_bar,
        mod_consts.const_str_plain_format_bar,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1249e3580ba3d71fe7d2209ee5e39793,
#endif
        code_objects_bbcf39718f1e159c50b7fb19ec740c82,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__14_format_progress_line(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__14_format_progress_line,
        mod_consts.const_str_plain_format_progress_line,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b18f80f11f952018d57a3a549174628e,
#endif
        code_objects_1ffb46581ed4f879de73d8812077f81e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__15_render_progress(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__15_render_progress,
        mod_consts.const_str_plain_render_progress,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_27651526b531aabb27832bc5261ffe1e,
#endif
        code_objects_54e1dbb172a07e80352d7bc898734fca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__16_make_step(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__16_make_step,
        mod_consts.const_str_plain_make_step,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dc4dc5842ffa44bed073423da63a5ef6,
#endif
        code_objects_cf7790a8262abf726a94932c6a3f5ad8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__17_update(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__17_update,
        mod_consts.const_str_plain_update,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bff4d4ac71f5bac6f3ded14153c521f9,
#endif
        code_objects_82652a0e3ed33a6778ea4c872565beea,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        mod_consts.const_str_digest_af7fb5454071f5e05a450794953afb9e,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__18_finish(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__18_finish,
        mod_consts.const_str_plain_finish,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a936144c251342dd26410f831ae96873,
#endif
        code_objects_a065e7c844210e3b9124505975648097,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__19_generator(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__19_generator,
        mod_consts.const_str_plain_generator,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e3c8d40431b73912fdeca388b7e3a6f,
#endif
        code_objects_2a59706e91cd2c5a6139108e6c8682b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        mod_consts.const_str_digest_151c1ae0a2a7f58bbb12b2d73745e975,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fad7b12621558405fca3d592c4e129f1,
#endif
        code_objects_c1c1b8e2dd88c5c53d699380c7879bee,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__20_pager(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__20_pager,
        mod_consts.const_str_plain_pager,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_baa9f644c87474d36ecdbeb5781932f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        mod_consts.const_str_digest_590efb5a3a8b121f921fcf4884fcd9f6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__21__pipepager(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__21__pipepager,
        mod_consts.const_str_plain__pipepager,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_43c8c1324a42130c6ce9dc5a1b06a71e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        mod_consts.const_str_digest_6f0e12de08fbce07cf609f661c326021,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__22__tempfilepager(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__22__tempfilepager,
        mod_consts.const_str_plain__tempfilepager,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d0d8628de3200ea3fcfac5b276d8c283,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        mod_consts.const_str_digest_7ffa22168742811e83e40d8de6139f28,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__23__nullpager(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__23__nullpager,
        mod_consts.const_str_plain__nullpager,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eaa435e453e31ee54c2302612996a69f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        mod_consts.const_str_digest_7e1a6ac8cc4b0d49b7b98a50724295af,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__24___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__24___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb79f5d8a7e76e66122f39ed31eef225,
#endif
        code_objects_f88e9ea27b036baaeef8074fd5de1164,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__25_get_editor(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__25_get_editor,
        mod_consts.const_str_plain_get_editor,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b6f0432676863e88ba6f484a8109cf54,
#endif
        code_objects_b74357105280d15d07f20f11f0f78f4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__26_edit_files(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__26_edit_files,
        mod_consts.const_str_plain_edit_files,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fde5013974246bd6fa76ed1b06866455,
#endif
        code_objects_fee12720a7151a6dcb33d0a855917ac9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__27_edit(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_edit,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1,
#endif
        code_objects_f89f24c141b508a46755fd37474a1f17,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__28_edit(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_edit,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1,
#endif
        code_objects_e81f11b07082e04af0f9a6792c582199,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__29_edit(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__29_edit,
        mod_consts.const_str_plain_edit,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_74d1075bf823d89605ed07d6610dadf1,
#endif
        code_objects_3eb3bab272d1b352a2b0f17ece0db8e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__2___enter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__2___enter__,
        const_str_plain___enter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5e006cc4e42812ae282921c7519334ce,
#endif
        code_objects_ac973de9d0e74532f448dbe657cfe447,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__30_open_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__30_open_url,
        mod_consts.const_str_plain_open_url,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cf7fdd5083b61c0c2e2d3ea3cdf6295d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file,
        mod_consts.const_str_plain__unquote_file,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c4ce112c7b92e43eb9d61fea1609aace,
#endif
        code_objects_d954eac94f59ad8a04eda2bb14c73d45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__31__translate_ch_to_exc(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__31__translate_ch_to_exc,
        mod_consts.const_str_plain__translate_ch_to_exc,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d53ab6913b2e19d43c95fd63fd9b81c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__32_raw_terminal(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__32_raw_terminal,
        mod_consts.const_str_plain_raw_terminal,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_824402981e8f149b35713f0574495bd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__33_getchar(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__33_getchar,
        mod_consts.const_str_plain_getchar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_34c06b40bb688064107441a139c9885d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__3___exit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__3___exit__,
        const_str_plain___exit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_352c31331323dbb93f9bebbec95cb9dc,
#endif
        code_objects_ec84a43d44aa500fa4a45f4f43a26b96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__4___iter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__4___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2054f27488b140f080bfa12c7d4995e5,
#endif
        code_objects_5895ef9e84a45d446bc23f8efcd56fb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__5___next__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__5___next__,
        mod_consts.const_str_plain___next__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e778c5231b5311a42dbbefac365c2d13,
#endif
        code_objects_d4201fd627b7d5f86859f602473679a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__6_render_finish(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__6_render_finish,
        mod_consts.const_str_plain_render_finish,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_12aa3c4a1a8c4a5ec85fc10821aa28a2,
#endif
        code_objects_35f31cd049c36e8bfb0b417af4bdd2f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__7_pct(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__7_pct,
        mod_consts.const_str_plain_pct,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d600cdd183887c7ad9595b0922db7c39,
#endif
        code_objects_b5a62cb582b70abe6079333ca5cfd526,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__8_time_per_iteration(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__8_time_per_iteration,
        mod_consts.const_str_plain_time_per_iteration,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1409961a8e6dc8da5f9cbc93ebb7adcb,
#endif
        code_objects_a493abe2864d4e1f005ee0221f175d7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$_termui_impl$$$function__9_eta(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$_termui_impl$$$function__9_eta,
        mod_consts.const_str_plain_eta,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ae55c44f1ee1411e39332e672269d261,
#endif
        code_objects_1f6964498c35b29f49ae53a8178ffd06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$_termui_impl,
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

static function_impl_code const function_table_click$_termui_impl[] = {
impl_click$_termui_impl$$$function__30_open_url$$$function__1__unquote_file,
impl_click$_termui_impl$$$function__1___init__,
impl_click$_termui_impl$$$function__2___enter__,
impl_click$_termui_impl$$$function__3___exit__,
impl_click$_termui_impl$$$function__4___iter__,
impl_click$_termui_impl$$$function__5___next__,
impl_click$_termui_impl$$$function__6_render_finish,
impl_click$_termui_impl$$$function__7_pct,
impl_click$_termui_impl$$$function__8_time_per_iteration,
impl_click$_termui_impl$$$function__9_eta,
impl_click$_termui_impl$$$function__10_format_eta,
impl_click$_termui_impl$$$function__11_format_pos,
impl_click$_termui_impl$$$function__12_format_pct,
impl_click$_termui_impl$$$function__13_format_bar,
impl_click$_termui_impl$$$function__14_format_progress_line,
impl_click$_termui_impl$$$function__15_render_progress,
impl_click$_termui_impl$$$function__16_make_step,
impl_click$_termui_impl$$$function__17_update,
impl_click$_termui_impl$$$function__18_finish,
impl_click$_termui_impl$$$function__19_generator,
impl_click$_termui_impl$$$function__20_pager,
impl_click$_termui_impl$$$function__21__pipepager,
impl_click$_termui_impl$$$function__22__tempfilepager,
impl_click$_termui_impl$$$function__23__nullpager,
impl_click$_termui_impl$$$function__24___init__,
impl_click$_termui_impl$$$function__25_get_editor,
impl_click$_termui_impl$$$function__26_edit_files,
impl_click$_termui_impl$$$function__29_edit,
impl_click$_termui_impl$$$function__30_open_url,
impl_click$_termui_impl$$$function__31__translate_ch_to_exc,
impl_click$_termui_impl$$$function__32_raw_terminal,
impl_click$_termui_impl$$$function__33_getchar,
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

    return Nuitka_Function_GetFunctionState(function, function_table_click$_termui_impl);
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
        module_click$_termui_impl,
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
        function_table_click$_termui_impl,
        sizeof(function_table_click$_termui_impl) / sizeof(function_impl_code)
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
static char const *module_full_name = "click._termui_impl";
#endif

// Internal entry point for module code.
PyObject *module_code_click$_termui_impl(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("click$_termui_impl");

    // Store the module for future use.
    module_click$_termui_impl = module;

    moduledict_click$_termui_impl = MODULE_DICT(module_click$_termui_impl);

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
        PRINT_STRING("click$_termui_impl: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("click$_termui_impl: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("click$_termui_impl: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "click._termui_impl" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initclick$_termui_impl\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click$_termui_impl,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$_termui_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$_termui_impl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_click$_termui_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_click$_termui_impl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$_termui_impl);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_click$_termui_impl);
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

        UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_click$_termui_impl$$$class__1_ProgressBar_43 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$class__1_ProgressBar_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_click$_termui_impl$$$class__2_Editor_559 = NULL;
struct Nuitka_FrameObject *frame_frame_click$_termui_impl$$$class__2_Editor_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_8395c8eb4781e4c60a681285fa97c42c;
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_click$_termui_impl = MAKE_MODULE_FRAME(code_objects_90e9ed639780bc1d3d1cdb9f3d5b740a, module_click$_termui_impl);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl);
assert(Py_REFCNT(frame_frame_click$_termui_impl) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_click$_termui_impl$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_click$_termui_impl$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 9;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_abc,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_abc);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_cabc, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 10;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_3 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 11;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_shlex;
tmp_globals_arg_value_4 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 13;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_shlex, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_time;
tmp_globals_arg_value_5 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = Py_None;
tmp_level_value_5 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 15;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_time, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_12 == NULL));
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_t, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_gettext;
tmp_globals_arg_value_6 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_gettext_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 17;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_gettext,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_gettext);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_underscore, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_StringIO);
}
assert(!(tmp_assign_source_14 == NULL));
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_StringIO, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_7 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_Path_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 19;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_Path,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Path);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_Path, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_4;
tmp_import_name_from_4 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_4 == NULL));
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_8 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain__default_text_stdout_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 22;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain__default_text_stdout,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__default_text_stdout);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__default_text_stdout, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_9 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_CYGWIN_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 23;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_CYGWIN,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_CYGWIN);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_CYGWIN, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_10 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_get_best_encoding_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 24;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_get_best_encoding,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_get_best_encoding);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_get_best_encoding, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_11 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_isatty_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 25;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_isatty,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_isatty);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_isatty, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_12 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_open_stream_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 26;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_open_stream,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_open_stream);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_open_stream, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_13 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_strip_ansi_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 27;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_strip_ansi,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_strip_ansi);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_strip_ansi, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_14 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_term_len_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 28;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_term_len,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_term_len);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_term_len, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_15 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_WIN_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 29;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_WIN,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_WIN);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_WIN, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_exceptions;
tmp_globals_arg_value_16 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_ClickException_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 30;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_ClickException,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ClickException);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ClickException, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_utils;
tmp_globals_arg_value_17 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_echo_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_click$_termui_impl->m_frame.f_lineno = 31;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_click$_termui_impl,
        mod_consts.const_str_plain_echo,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_echo);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_echo, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_click$_termui_impl->m_frame.f_lineno = 33;
tmp_assign_source_27 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_TypeVar,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_V_tuple, 0)
);

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_V, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = mod_consts.const_str_chr_13;
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_BEFORE_BAR, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = mod_consts.const_str_newline;
UPDATE_STRING_DICT0(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_AFTER_BAR, tmp_assign_source_29);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
tmp_expression_value_2 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Generic);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
tmp_subscript_value_1 = module_var_accessor_click$_termui_impl$V(tstate);
assert(!(tmp_subscript_value_1 == NULL));
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_30, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
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
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_33;
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


exception_lineno = 43;

    goto try_except_handler_1;
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
PyObject *tmp_assign_source_34;
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


exception_lineno = 43;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_ProgressBar;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_click$_termui_impl->m_frame.f_lineno = 43;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_34;
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


exception_lineno = 43;

    goto try_except_handler_1;
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
PyObject *tmp_name_value_18;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_18 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_18, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
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


exception_lineno = 43;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_1;
}
frame_frame_click$_termui_impl->m_frame.f_lineno = 43;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 43;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_35;
}
branch_end_1:;
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_click$_termui_impl$$$class__1_ProgressBar_43 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a4776240f12ee143b983c443abc8eef4;
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_ProgressBar;
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_43;
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
frame_frame_click$_termui_impl$$$class__1_ProgressBar_2 = MAKE_CLASS_FRAME(tstate, code_objects_9bb17afc515feb2bbc17b44a8563c88e, module_click$_termui_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$class__1_ProgressBar_2);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$class__1_ProgressBar_2) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_64d330d9c24daa5a78e0953ed598c1bf_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_c3f0b374689c3c4017972c135cf66e65);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__1___init__(tstate, tmp_defaults_1, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_8a7693edb1482f8dca8d2ad446d41d99);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__2___enter__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, const_str_plain___enter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f79351c2ba9a4f120a51e1a6e293eb6f);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__3___exit__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, const_str_plain___exit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_50d43a724f49760c8a15f96c45fefa03);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__4___iter__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, const_str_plain___iter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_91819b79a81c1b5b2c4466025923b8cf);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__5___next__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain___next__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__6_render_finish(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_render_finish, tmp_dictset_value);
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
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_7;
tmp_called_value_2 = PyObject_GetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_1 = MAKE_FUNCTION_click$_termui_impl$$$function__7_pct(tstate, tmp_annotations_7);

frame_frame_click$_termui_impl$$$class__1_ProgressBar_2->m_frame.f_lineno = 148;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_pct, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_8;
tmp_called_value_3 = PyObject_GetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_2 = MAKE_FUNCTION_click$_termui_impl$$$function__8_time_per_iteration(tstate, tmp_annotations_8);

frame_frame_click$_termui_impl$$$class__1_ProgressBar_2->m_frame.f_lineno = 154;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_time_per_iteration, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_9;
tmp_called_value_4 = PyObject_GetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_3 = MAKE_FUNCTION_click$_termui_impl$$$function__9_eta(tstate, tmp_annotations_9);

frame_frame_click$_termui_impl$$$class__1_ProgressBar_2->m_frame.f_lineno = 160;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_eta, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__10_format_eta(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_format_eta, tmp_dictset_value);
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
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__11_format_pos(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_format_pos, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__12_format_pct(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_format_pct, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__13_format_bar(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_format_bar, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_14;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__14_format_progress_line(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_format_progress_line, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__15_render_progress(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_render_progress, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_1740977ed38cb311388dd658c402334a);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__16_make_step(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_make_step, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_17;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_43c90fe5e80637d6ab18c5d7f4b6a8d1);
Py_INCREF(tmp_defaults_2);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__17_update(tstate, tmp_defaults_2, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_update, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_18;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__18_finish(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_finish, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_50d43a724f49760c8a15f96c45fefa03);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__19_generator(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain_generator, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$class__1_ProgressBar_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$class__1_ProgressBar_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$class__1_ProgressBar_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$class__1_ProgressBar_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_click$_termui_impl$$$class__1_ProgressBar_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_b93b510e0f8e941bc2e3083afab68c70_tuple;
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
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


exception_lineno = 43;

    goto try_except_handler_3;
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
tmp_res = PyObject_SetItem(locals_click$_termui_impl$$$class__1_ProgressBar_43, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_ProgressBar;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_click$_termui_impl$$$class__1_ProgressBar_43;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_click$_termui_impl->m_frame.f_lineno = 43;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_36 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_36);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_click$_termui_impl$$$class__1_ProgressBar_43);
locals_click$_termui_impl$$$class__1_ProgressBar_43 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_click$_termui_impl$$$class__1_ProgressBar_43);
locals_click$_termui_impl$$$class__1_ProgressBar_43 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 43;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_ProgressBar, tmp_assign_source_36);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
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
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_20;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_9d104c315b4317661906a460e41356f4);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_38 = MAKE_FUNCTION_click$_termui_impl$$$function__20_pager(tstate, tmp_defaults_3, tmp_annotations_20);

UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_pager, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_annotations_21;
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_7db0fff42e7e00ad5e8dc9a487472eeb);

tmp_assign_source_39 = MAKE_FUNCTION_click$_termui_impl$$$function__21__pipepager(tstate, tmp_annotations_21);

UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__pipepager, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_7db0fff42e7e00ad5e8dc9a487472eeb);

tmp_assign_source_40 = MAKE_FUNCTION_click$_termui_impl$$$function__22__tempfilepager(tstate, tmp_annotations_22);

UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__tempfilepager, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_9e2ef94610658d7d311fc1de6ff93016);

tmp_assign_source_41 = MAKE_FUNCTION_click$_termui_impl$$$function__23__nullpager(tstate, tmp_annotations_23);

UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__nullpager, tmp_assign_source_41);
}
{
PyObject *tmp_outline_return_value_2;
{
PyObject *tmp_assign_source_42;
tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_43;
}
// Tried code:
{
PyObject *tmp_assign_source_44;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_click$_termui_impl$$$class__2_Editor_559 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
tmp_dictset_value = mod_consts.const_str_digest_a4776240f12ee143b983c443abc8eef4;
tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_Editor;
tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_559;
tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_24;
tmp_defaults_4 = mod_consts.const_tuple_none_none_true_str_digest_038a28107205f832c6bf850b3119b5af_tuple;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_a505e30710178ccee71387a2e431090b);
Py_INCREF(tmp_defaults_4);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__24___init__(tstate, tmp_defaults_4, tmp_annotations_24);

tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__25_get_editor(tstate, tmp_annotations_25);

tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain_get_editor, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_d2d899c82c8cb22296a00fe864d5697a);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__26_edit_files(tstate, tmp_annotations_26);

tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain_edit_files, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
// Tried code:
// Tried code:
frame_frame_click$_termui_impl$$$class__2_Editor_3 = MAKE_CLASS_FRAME(tstate, code_objects_1a558858ea42a0fe9ec40e372bf46139, module_click$_termui_impl, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$_termui_impl$$$class__2_Editor_3);
assert(Py_REFCNT(frame_frame_click$_termui_impl$$$class__2_Editor_3) == 2);

// Framed code:
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_27;
tmp_called_instance_2 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_2 == NULL));
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_8ecb1d7a9ff1d90b57e61d3f57128d42);

tmp_args_element_value_4 = MAKE_FUNCTION_click$_termui_impl$$$function__27_edit(tstate, tmp_annotations_27);

frame_frame_click$_termui_impl$$$class__2_Editor_3->m_frame.f_lineno = 615;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_overload, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 615;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain_edit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_28;
tmp_called_instance_3 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_3 == NULL));
tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_05530c269864a4aa1c325cdcefa3e0bb);

tmp_args_element_value_5 = MAKE_FUNCTION_click$_termui_impl$$$function__28_edit(tstate, tmp_annotations_28);

frame_frame_click$_termui_impl$$$class__2_Editor_3->m_frame.f_lineno = 620;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_overload, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain_edit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 621;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl$$$class__2_Editor_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl$$$class__2_Editor_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl$$$class__2_Editor_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$_termui_impl$$$class__2_Editor_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_click$_termui_impl$$$class__2_Editor_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_cf0d693194e42eea3ce3fc6bc72d8cf3);

tmp_dictset_value = MAKE_FUNCTION_click$_termui_impl$$$function__29_edit(tstate, tmp_annotations_29);

tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain_edit, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_b1a0fc1d363dcca62562d8233a9d8ff0_tuple;
tmp_result = DICT_SET_ITEM(locals_click$_termui_impl$$$class__2_Editor_559, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_6;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
tmp_called_value_6 = (PyObject *)&PyType_Type;
tmp_tuple_element_5 = mod_consts.const_str_plain_Editor;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_click$_termui_impl$$$class__2_Editor_559;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_click$_termui_impl->m_frame.f_lineno = 559;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_45;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_44 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_click$_termui_impl$$$class__2_Editor_559);
locals_click$_termui_impl$$$class__2_Editor_559 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_click$_termui_impl$$$class__2_Editor_559);
locals_click$_termui_impl$$$class__2_Editor_559 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
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
exception_lineno = 559;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_Editor, tmp_assign_source_44);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
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
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
{
PyObject *tmp_assign_source_46;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_30;
tmp_defaults_5 = mod_consts.const_tuple_false_false_tuple;
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_5625fe8142f98c5870abd09f8d52e3f8);
Py_INCREF(tmp_defaults_5);

tmp_assign_source_46 = MAKE_FUNCTION_click$_termui_impl$$$function__30_open_url(tstate, tmp_defaults_5, tmp_annotations_30);

UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_open_url, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_annotations_31;
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_5763beeec081f731b28476c862da8f22);

tmp_assign_source_47 = MAKE_FUNCTION_click$_termui_impl$$$function__31__translate_ch_to_exc(tstate, tmp_annotations_31);

UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain__translate_ch_to_exc, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_19 = mod_consts.const_str_plain_msvcrt;
tmp_globals_arg_value_18 = (PyObject *)moduledict_click$_termui_impl;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = Py_None;
tmp_level_value_18 = const_int_0;
frame_frame_click$_termui_impl->m_frame.f_lineno = 756;
tmp_assign_source_48 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 756;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_msvcrt, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_32;
tmp_called_instance_4 = module_var_accessor_click$_termui_impl$contextlib(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 758;

    goto frame_exception_exit_1;
}
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_380ee4567d318183ecb9d3b6325b282b);

tmp_args_element_value_6 = MAKE_FUNCTION_click$_termui_impl$$$function__32_raw_terminal(tstate, tmp_annotations_32);

frame_frame_click$_termui_impl->m_frame.f_lineno = 758;
tmp_assign_source_49 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_contextmanager, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 758;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_raw_terminal, tmp_assign_source_49);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$_termui_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$_termui_impl->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$_termui_impl, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_click$_termui_impl);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
{
PyObject *tmp_assign_source_50;
PyObject *tmp_annotations_33;
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_881e89748939c33ad42bfe3cdcbd3c0d);

tmp_assign_source_50 = MAKE_FUNCTION_click$_termui_impl$$$function__33_getchar(tstate, tmp_annotations_33);

UPDATE_STRING_DICT1(moduledict_click$_termui_impl, (Nuitka_StringObject *)mod_consts.const_str_plain_getchar, tmp_assign_source_50);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("click$_termui_impl", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "click._termui_impl" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_click$_termui_impl);
    return module_click$_termui_impl;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$_termui_impl, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("click$_termui_impl", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

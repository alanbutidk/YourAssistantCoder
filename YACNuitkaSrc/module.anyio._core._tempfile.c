/* Generated code for Python module 'anyio$_core$_tempfile'
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



/* The "module_anyio$_core$_tempfile" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$_core$_tempfile;
PyDictObject *moduledict_anyio$_core$_tempfile;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_mode;
PyObject *const_str_plain_buffering;
PyObject *const_str_plain_newline;
PyObject *const_str_plain_suffix;
PyObject *const_str_plain_prefix;
PyObject *const_str_plain_dir;
PyObject *const_str_plain_errors;
PyObject *const_str_plain_to_thread;
PyObject *const_str_plain_run_sync;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_2de197d7fc38b7a1b735140c840cda5c;
PyObject *const_str_plain_AsyncFile;
PyObject *const_str_plain_self;
PyObject *const_str_plain__async_file;
PyObject *const_str_digest_06d473a9418473bca652773ae77f2e89;
PyObject *const_str_plain_tempfile;
PyObject *const_str_plain_TemporaryFile;
PyObject *const_tuple_str_plain_errors_tuple;
PyObject *const_str_plain_aclose;
PyObject *const_str_digest_8870096b18be0cf0b3ee083761c48272;
PyObject *const_str_plain_delete;
PyObject *const_str_plain__params;
PyObject *const_str_plain_delete_on_close;
PyObject *const_str_digest_51a93690eda35971670c8952c4dd73f1;
PyObject *const_str_digest_7694b2277f0a8a30ceca18b110e01dff;
PyObject *const_str_plain_NamedTemporaryFile;
PyObject *const_str_digest_1d6f9df32dad10294f926c08d107c1e8;
PyObject *const_str_plain__tempfile_params;
PyObject *const_str_plain__max_size;
PyObject *const_str_plain_BytesIO;
PyObject *const_str_plain_TextIOWrapper;
PyObject *const_tuple_bcb9f3954df8cd94efc192267569b271_tuple;
PyObject *const_str_plain__rolled;
PyObject *const_str_plain__fp;
PyObject *const_str_digest_154aeae9dd7a8c4176014874ae3333dd;
PyObject *const_str_plain_tell;
PyObject *const_str_plain_rollover;
PyObject *const_str_plain__check;
PyObject *const_str_digest_af334f722430710120fcedf44cf93ea1;
PyObject *const_str_plain_seek;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_digest_de679f71d569d7cbdd5d5185d895cc91;
PyObject *const_str_plain_write;
PyObject *const_str_digest_c5491efea9f7ebe6564b7c7cdc28bc0f;
PyObject *const_str_plain_closed;
PyObject *const_str_plain_checkpoint_if_cancelled;
PyObject *const_str_plain_size;
PyObject *const_str_digest_c34705894583be4bcd2684f4ec8aa696;
PyObject *const_str_plain_read1;
PyObject *const_str_digest_71eb3436c034a2dcc5cb50ec1ff3922e;
PyObject *const_str_plain_readline;
PyObject *const_str_digest_39d6335a861bb2b366485c15b366039c;
PyObject *const_str_plain_readlines;
PyObject *const_str_digest_6b6d14e2fa1467329228ce94dc68ae01;
PyObject *const_str_plain_readinto;
PyObject *const_str_digest_d8dc5dc0490d4bd57c4fee456e5764ab;
PyObject *const_str_plain_readinto1;
PyObject *const_str_digest_0987ca965768eaaa48e75772cb700fbb;
PyObject *const_str_plain_offset;
PyObject *const_str_plain_whence;
PyObject *const_str_digest_c8ebd89ddee29b4443f373b6f2f68ea7;
PyObject *const_str_digest_be4c1154be8c29f30f42a1490d7b9743;
PyObject *const_str_plain_truncate;
PyObject *const_str_digest_929091cfdb20866fae9f3d9373cafdba;
PyObject *const_str_digest_b261104e90f2686a6bbf1a71fcb17102;
PyObject *const_str_digest_fa03317d3b8eb4f8838dc15664c0b848;
PyObject *const_str_plain_writelines;
PyObject *const_str_digest_811dc02ae968da17f0a1b5dbbe632acb;
PyObject *const_str_digest_5f0b980147e9825dfacd9956f6bede3b;
PyObject *const_str_plain_lines;
PyObject *const_str_plain_ignore_cleanup_errors;
PyObject *const_str_plain__tempdir;
PyObject *const_str_digest_65ac5c51be30aaddb511dbed3ab72ea2;
PyObject *const_str_digest_7b0445c6543255457d35d86b56e8c847;
PyObject *const_str_plain_TemporaryDirectory;
PyObject *const_str_plain_params;
PyObject *const_str_plain_exc_type;
PyObject *const_str_plain_exc_value;
PyObject *const_str_plain_traceback;
PyObject *const_str_digest_8ee95c96e3ead0847b1341052e30763b;
PyObject *const_str_plain_cleanup;
PyObject *const_str_digest_c8f62cf7a29489592ca014bcbe5a97d0;
PyObject *const_str_plain_mkstemp;
PyObject *const_str_digest_d6e8cbe0fdab7995543b86401b3d7b81;
PyObject *const_str_plain_text;
PyObject *const_str_plain_mkdtemp;
PyObject *const_str_digest_f55034d3821b6cd79fb3878232b8af99;
PyObject *const_str_digest_38392d6b67b5ea809e05ef70b72d1c20;
PyObject *const_str_plain_gettempdir;
PyObject *const_str_digest_a2453a60110f51bad844f1c237b25b81;
PyObject *const_str_plain_gettempdirb;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Iterable_tuple;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_TracebackType;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_AnyStr;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_overload;
PyObject *const_tuple_str_plain_to_thread_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_digest_3eb8488b96353760cec44bc96986ee51;
PyObject *const_tuple_str_plain_AsyncFile_tuple;
PyObject *const_str_plain_lowlevel;
PyObject *const_tuple_str_plain_checkpoint_if_cancelled_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2;
PyObject *const_str_digest_608054b147265e88f1b1e1c15e581d34;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_25;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_b6d5db4b85260eb18bbfc112c64486a5;
PyObject *const_tuple_a7e78c7832884cb64d39009706b92731_tuple;
PyObject *const_dict_35bc7ca957136e5bc9b70382abe2d64f;
PyObject *const_dict_b0690e521426580c453f7c3528f76617;
PyObject *const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3;
PyObject *const_tuple_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_tuple;
PyObject *const_dict_efd66731ac3ab6185efc9f1cccc41618;
PyObject *const_tuple_a5d714ae84646b1ab623eddc0da3eb17_tuple;
PyObject *const_dict_b94cd9be8ac69ecf123d9ecfb544ceb7;
PyObject *const_dict_1cbc23d34bcdea01f7958b7cd5984786;
PyObject *const_dict_46a81fc72982125eff2813cc59d77ff6;
PyObject *const_dict_fe1ed8e2cb510605785a9bb17cc90b19;
PyObject *const_tuple_735f925ff0b1ca30300a77295e64cc72_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_ee7157a46cf684eb84b5f0d11684485f;
PyObject *const_int_pos_120;
PyObject *const_tuple_589a5a6cf6da58702f4edd540cd62fa4_tuple;
PyObject *const_dict_2937b93a9cf50e5800195d72c4bb419b;
PyObject *const_dict_c0b932057c06997dc8bb86569351f111;
PyObject *const_str_digest_02cd807d63b47ab45615572cd9078450;
PyObject *const_dict_deb53299a58008cffa495928a4960a32;
PyObject *const_tuple_ec39bde724166277950892f987e33cd8_tuple;
PyObject *const_dict_1c0d3c2e7e6b780442ab73ed2e2b5698;
PyObject *const_dict_df9c9da66aa3bc4f1e5f80b135a24e63;
PyObject *const_tuple_str_plain__params_str_plain__async_file_tuple;
PyObject *const_str_plain_SpooledTemporaryFile;
PyObject *const_str_digest_6e51286a48651f757bb3157520ea33cb;
PyObject *const_int_pos_220;
PyObject *const_str_plain_bool;
PyObject *const_dict_73554f818382c79c06982acd266e6e4e;
PyObject *const_str_digest_9cb2457bb99e59c4bc6c97061bb311af;
PyObject *const_dict_1ffca3d91ac769ea4c2008ea43361df5;
PyObject *const_tuple_dc2eeb3d9c9900527b0c290c9718df1f_tuple;
PyObject *const_dict_4ff5a4c7136f2f5a1b1141d09b4042b9;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_property;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_80d11b7200b7c2b5c0cd838cebb061af;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_dict_e839b0a750135537c17971c870f763bf;
PyObject *const_dict_8c5d71732f68333fbde644dc66d86a53;
PyObject *const_dict_e7cb639cbc6f0e4d8b2848451cf6e0f3;
PyObject *const_dict_851fbf13213b5eb5623de44cdca51e05;
PyObject *const_dict_3731795803b80848eef8698287c2698e;
PyObject *const_str_plain_SEEK_SET;
PyObject *const_dict_538246f597a1ccc8037d56043f9a4457;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_cbc21e6ec6579764ce838272dc06e5eb;
PyObject *const_dict_dcd50e3937335dd00ca01a2695e2da19;
PyObject *const_dict_a367e9c4c3b5738a3c107394fea08a6d;
PyObject *const_dict_76a7361138119d3ed4bcbd7d9c703e9e;
PyObject *const_dict_a1ee6eb8c87f323f4884a50d067f18e1;
PyObject *const_dict_0d70d69205b7f7e21e89609cd00845a8;
PyObject *const_dict_71839ee869fc208fa7bfd15480ad456a;
PyObject *const_tuple_d2089fdf6a080a2a291b97cffd505d14_tuple;
PyObject *const_str_digest_419f97c1173d6b2eeb21495500444847;
PyObject *const_int_pos_454;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_dict_751ad37f2215a24aa5e566f86739f144;
PyObject *const_dict_12ca3d79a724c3594c0d4dda85fce623;
PyObject *const_str_digest_0e5379864f72c636aa77a97636f156bc;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_tuple_aefe4c4461b25b1c8026415814927688_tuple;
PyObject *const_tuple_none_none_none_false_tuple;
PyObject *const_dict_22b73255c9c2ca1fea1b61727c6798ad;
PyObject *const_dict_7da56d4d92e27e6a7ae55d703de32929;
PyObject *const_dict_e71e7e15dd95def57b18ae55602aaebd;
PyObject *const_dict_81d41b9e8e2fcef5ca9d2d45a9e36c89;
PyObject *const_dict_3c0beb9552de7e881e949b89e24f9fd8;
PyObject *const_dict_a217e200459446f543c7abf3248c09f6;
PyObject *const_dict_2366cb3246e451cebe4ed21878030053;
PyObject *const_str_digest_c138ede43f8abce4b37e9664e1d65bba;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_params_tuple;
PyObject *const_str_digest_a0215b86d00c60a874aa3672bd05cfaa;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_fp_tuple;
PyObject *const_tuple_str_plain_self_str_plain_params_tuple;
PyObject *const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple;
PyObject *const_tuple_be270c8de544d1646f0af49c193b372b_tuple;
PyObject *const_tuple_0c00960a7f0448e0e307fa4605530e9a_tuple;
PyObject *const_tuple_76a12215ab01833772fc62949d6ef7b2_tuple;
PyObject *const_tuple_afd5d7e5d3c543f240e25e561c21cb87_tuple;
PyObject *const_tuple_c645c83c69847beddc445b0efadeda85_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_suffix_str_plain_prefix_str_plain_dir_tuple;
PyObject *const_tuple_b7af7947bc381655ba33c4b767c288e0_tuple;
PyObject *const_tuple_str_plain_self_str_plain_size_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_b_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_buffer_tuple;
PyObject *const_tuple_e338b86caf15393214e309ee952767d8_tuple;
PyObject *const_tuple_str_plain_self_str_plain_b_tuple;
PyObject *const_tuple_b84f5855d972e327ff64df91707bc162_tuple;
PyObject *const_tuple_str_plain_self_str_plain_lines_tuple;
PyObject *const_tuple_2f88f067eac0ead5880dc3b772e12fe6_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[217];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anyio._core._tempfile"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_buffering);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_newline);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_suffix);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_prefix);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_dir);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_errors);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_2de197d7fc38b7a1b735140c840cda5c);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFile);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__async_file);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_06d473a9418473bca652773ae77f2e89);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_TemporaryFile);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_aclose);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_8870096b18be0cf0b3ee083761c48272);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__params);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_delete_on_close);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_51a93690eda35971670c8952c4dd73f1);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_7694b2277f0a8a30ceca18b110e01dff);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTemporaryFile);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d6f9df32dad10294f926c08d107c1e8);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__tempfile_params);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__max_size);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOWrapper);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_bcb9f3954df8cd94efc192267569b271_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__rolled);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__fp);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_154aeae9dd7a8c4176014874ae3333dd);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_tell);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_rollover);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__check);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_af334f722430710120fcedf44cf93ea1);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_seek);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_de679f71d569d7cbdd5d5185d895cc91);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_write);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5491efea9f7ebe6564b7c7cdc28bc0f);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_closed);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_size);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_c34705894583be4bcd2684f4ec8aa696);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_read1);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_71eb3436c034a2dcc5cb50ec1ff3922e);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_readline);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_39d6335a861bb2b366485c15b366039c);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_readlines);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_6b6d14e2fa1467329228ce94dc68ae01);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_readinto);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8dc5dc0490d4bd57c4fee456e5764ab);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_readinto1);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_0987ca965768eaaa48e75772cb700fbb);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_offset);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_whence);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8ebd89ddee29b4443f373b6f2f68ea7);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_be4c1154be8c29f30f42a1490d7b9743);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_truncate);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_929091cfdb20866fae9f3d9373cafdba);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_fa03317d3b8eb4f8838dc15664c0b848);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_writelines);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f0b980147e9825dfacd9956f6bede3b);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_lines);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_cleanup_errors);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__tempdir);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_65ac5c51be30aaddb511dbed3ab72ea2);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b0445c6543255457d35d86b56e8c847);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_TemporaryDirectory);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_params);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_exc_type);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_exc_value);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_traceback);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ee95c96e3ead0847b1341052e30763b);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_cleanup);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_c8f62cf7a29489592ca014bcbe5a97d0);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkstemp);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_d6e8cbe0fdab7995543b86401b3d7b81);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_mkdtemp);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_f55034d3821b6cd79fb3878232b8af99);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_38392d6b67b5ea809e05ef70b72d1c20);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_gettempdir);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2453a60110f51bad844f1c237b25b81);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_gettempdirb);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterable_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_thread_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_3eb8488b96353760cec44bc96986ee51);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncFile_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_checkpoint_if_cancelled_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_608054b147265e88f1b1e1c15e581d34);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_int_pos_25);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6d5db4b85260eb18bbfc112c64486a5);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_a7e78c7832884cb64d39009706b92731_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_dict_35bc7ca957136e5bc9b70382abe2d64f);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_dict_b0690e521426580c453f7c3528f76617);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_dict_efd66731ac3ab6185efc9f1cccc41618);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_a5d714ae84646b1ab623eddc0da3eb17_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_dict_b94cd9be8ac69ecf123d9ecfb544ceb7);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_dict_1cbc23d34bcdea01f7958b7cd5984786);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_dict_46a81fc72982125eff2813cc59d77ff6);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_735f925ff0b1ca30300a77295e64cc72_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee7157a46cf684eb84b5f0d11684485f);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_int_pos_120);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_589a5a6cf6da58702f4edd540cd62fa4_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_dict_2937b93a9cf50e5800195d72c4bb419b);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_dict_c0b932057c06997dc8bb86569351f111);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_deb53299a58008cffa495928a4960a32);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_ec39bde724166277950892f987e33cd8_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_dict_1c0d3c2e7e6b780442ab73ed2e2b5698);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_dict_df9c9da66aa3bc4f1e5f80b135a24e63);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__params_str_plain__async_file_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_SpooledTemporaryFile);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_6e51286a48651f757bb3157520ea33cb);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_220);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_73554f818382c79c06982acd266e6e4e);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_dict_1ffca3d91ac769ea4c2008ea43361df5);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_dc2eeb3d9c9900527b0c290c9718df1f_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_dict_4ff5a4c7136f2f5a1b1141d09b4042b9);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_80d11b7200b7c2b5c0cd838cebb061af);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_dict_e839b0a750135537c17971c870f763bf);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_8c5d71732f68333fbde644dc66d86a53);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_dict_e7cb639cbc6f0e4d8b2848451cf6e0f3);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_dict_851fbf13213b5eb5623de44cdca51e05);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_3731795803b80848eef8698287c2698e);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_SEEK_SET);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_dict_538246f597a1ccc8037d56043f9a4457);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_dict_cbc21e6ec6579764ce838272dc06e5eb);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_dcd50e3937335dd00ca01a2695e2da19);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_a367e9c4c3b5738a3c107394fea08a6d);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_dict_76a7361138119d3ed4bcbd7d9c703e9e);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_a1ee6eb8c87f323f4884a50d067f18e1);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_0d70d69205b7f7e21e89609cd00845a8);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_71839ee869fc208fa7bfd15480ad456a);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_tuple_d2089fdf6a080a2a291b97cffd505d14_tuple);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_digest_419f97c1173d6b2eeb21495500444847);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_int_pos_454);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_751ad37f2215a24aa5e566f86739f144);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_12ca3d79a724c3594c0d4dda85fce623);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e5379864f72c636aa77a97636f156bc);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_aefe4c4461b25b1c8026415814927688_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_tuple);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_22b73255c9c2ca1fea1b61727c6798ad);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_7da56d4d92e27e6a7ae55d703de32929);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_e71e7e15dd95def57b18ae55602aaebd);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_81d41b9e8e2fcef5ca9d2d45a9e36c89);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_3c0beb9552de7e881e949b89e24f9fd8);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_a217e200459446f543c7abf3248c09f6);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_c138ede43f8abce4b37e9664e1d65bba);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_params_tuple);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_a0215b86d00c60a874aa3672bd05cfaa);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_params_tuple);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_be270c8de544d1646f0af49c193b372b_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_0c00960a7f0448e0e307fa4605530e9a_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_76a12215ab01833772fc62949d6ef7b2_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_afd5d7e5d3c543f240e25e561c21cb87_tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_c645c83c69847beddc445b0efadeda85_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suffix_str_plain_prefix_str_plain_dir_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_b7af7947bc381655ba33c4b767c288e0_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_size_str_plain___class___tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_b_str_plain___class___tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_e338b86caf15393214e309ee952767d8_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_b_tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_b84f5855d972e327ff64df91707bc162_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_2f88f067eac0ead5880dc3b772e12fe6_tuple);
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
void checkModuleConstants_anyio$_core$_tempfile(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mode);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_buffering));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_buffering);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_newline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newline);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_suffix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_suffix);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_prefix));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prefix);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_dir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dir);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errors);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_thread));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_thread);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_run_sync));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_run_sync);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_2de197d7fc38b7a1b735140c840cda5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2de197d7fc38b7a1b735140c840cda5c);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncFile);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__async_file));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__async_file);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_06d473a9418473bca652773ae77f2e89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06d473a9418473bca652773ae77f2e89);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_tempfile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tempfile);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_TemporaryFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TemporaryFile);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_errors_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_aclose));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_aclose);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_8870096b18be0cf0b3ee083761c48272));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8870096b18be0cf0b3ee083761c48272);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__params);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_delete_on_close));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delete_on_close);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_51a93690eda35971670c8952c4dd73f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51a93690eda35971670c8952c4dd73f1);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_7694b2277f0a8a30ceca18b110e01dff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7694b2277f0a8a30ceca18b110e01dff);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTemporaryFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedTemporaryFile);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d6f9df32dad10294f926c08d107c1e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d6f9df32dad10294f926c08d107c1e8);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__tempfile_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tempfile_params);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__max_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__max_size);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_BytesIO));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BytesIO);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_TextIOWrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TextIOWrapper);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_bcb9f3954df8cd94efc192267569b271_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bcb9f3954df8cd94efc192267569b271_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__rolled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__rolled);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__fp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fp);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_154aeae9dd7a8c4176014874ae3333dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_154aeae9dd7a8c4176014874ae3333dd);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_tell));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tell);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_rollover));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rollover);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__check));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__check);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_af334f722430710120fcedf44cf93ea1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af334f722430710120fcedf44cf93ea1);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_seek));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seek);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_de679f71d569d7cbdd5d5185d895cc91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de679f71d569d7cbdd5d5185d895cc91);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_write));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_write);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5491efea9f7ebe6564b7c7cdc28bc0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5491efea9f7ebe6564b7c7cdc28bc0f);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_closed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closed);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint_if_cancelled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint_if_cancelled);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_size);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_c34705894583be4bcd2684f4ec8aa696));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c34705894583be4bcd2684f4ec8aa696);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_read1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_read1);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_71eb3436c034a2dcc5cb50ec1ff3922e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71eb3436c034a2dcc5cb50ec1ff3922e);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_readline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readline);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_39d6335a861bb2b366485c15b366039c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39d6335a861bb2b366485c15b366039c);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_readlines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readlines);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_6b6d14e2fa1467329228ce94dc68ae01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6b6d14e2fa1467329228ce94dc68ae01);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_readinto));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readinto);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8dc5dc0490d4bd57c4fee456e5764ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8dc5dc0490d4bd57c4fee456e5764ab);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_readinto1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_readinto1);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_0987ca965768eaaa48e75772cb700fbb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0987ca965768eaaa48e75772cb700fbb);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offset);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_whence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_whence);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8ebd89ddee29b4443f373b6f2f68ea7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8ebd89ddee29b4443f373b6f2f68ea7);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_be4c1154be8c29f30f42a1490d7b9743));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be4c1154be8c29f30f42a1490d7b9743);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_truncate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_truncate);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_929091cfdb20866fae9f3d9373cafdba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_929091cfdb20866fae9f3d9373cafdba);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_fa03317d3b8eb4f8838dc15664c0b848));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fa03317d3b8eb4f8838dc15664c0b848);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_writelines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_writelines);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f0b980147e9825dfacd9956f6bede3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f0b980147e9825dfacd9956f6bede3b);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_lines));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lines);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ignore_cleanup_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ignore_cleanup_errors);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__tempdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__tempdir);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_65ac5c51be30aaddb511dbed3ab72ea2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_65ac5c51be30aaddb511dbed3ab72ea2);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b0445c6543255457d35d86b56e8c847));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b0445c6543255457d35d86b56e8c847);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_TemporaryDirectory));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TemporaryDirectory);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_params);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_exc_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exc_type);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_exc_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exc_value);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_traceback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_traceback);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ee95c96e3ead0847b1341052e30763b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ee95c96e3ead0847b1341052e30763b);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_cleanup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cleanup);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_c8f62cf7a29489592ca014bcbe5a97d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c8f62cf7a29489592ca014bcbe5a97d0);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkstemp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkstemp);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_d6e8cbe0fdab7995543b86401b3d7b81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d6e8cbe0fdab7995543b86401b3d7b81);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_mkdtemp));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mkdtemp);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_f55034d3821b6cd79fb3878232b8af99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f55034d3821b6cd79fb3878232b8af99);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_38392d6b67b5ea809e05ef70b72d1c20));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38392d6b67b5ea809e05ef70b72d1c20);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_gettempdir));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gettempdir);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2453a60110f51bad844f1c237b25b81));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2453a60110f51bad844f1c237b25b81);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_gettempdirb));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gettempdirb);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Iterable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Iterable_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_TracebackType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TracebackType);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyStr);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_to_thread_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_to_thread_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_3eb8488b96353760cec44bc96986ee51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3eb8488b96353760cec44bc96986ee51);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncFile_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncFile_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lowlevel);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_checkpoint_if_cancelled_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_checkpoint_if_cancelled_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_608054b147265e88f1b1e1c15e581d34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_608054b147265e88f1b1e1c15e581d34);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_int_pos_25));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_25);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6d5db4b85260eb18bbfc112c64486a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6d5db4b85260eb18bbfc112c64486a5);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_a7e78c7832884cb64d39009706b92731_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a7e78c7832884cb64d39009706b92731_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_dict_35bc7ca957136e5bc9b70382abe2d64f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_35bc7ca957136e5bc9b70382abe2d64f);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_dict_b0690e521426580c453f7c3528f76617));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b0690e521426580c453f7c3528f76617);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_dict_efd66731ac3ab6185efc9f1cccc41618));
CHECK_OBJECT_DEEP(mod_consts.const_dict_efd66731ac3ab6185efc9f1cccc41618);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_a5d714ae84646b1ab623eddc0da3eb17_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a5d714ae84646b1ab623eddc0da3eb17_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_dict_b94cd9be8ac69ecf123d9ecfb544ceb7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b94cd9be8ac69ecf123d9ecfb544ceb7);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_dict_1cbc23d34bcdea01f7958b7cd5984786));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1cbc23d34bcdea01f7958b7cd5984786);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_dict_46a81fc72982125eff2813cc59d77ff6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_46a81fc72982125eff2813cc59d77ff6);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_735f925ff0b1ca30300a77295e64cc72_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_735f925ff0b1ca30300a77295e64cc72_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee7157a46cf684eb84b5f0d11684485f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee7157a46cf684eb84b5f0d11684485f);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_int_pos_120));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_120);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_589a5a6cf6da58702f4edd540cd62fa4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_589a5a6cf6da58702f4edd540cd62fa4_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_dict_2937b93a9cf50e5800195d72c4bb419b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2937b93a9cf50e5800195d72c4bb419b);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_dict_c0b932057c06997dc8bb86569351f111));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c0b932057c06997dc8bb86569351f111);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_deb53299a58008cffa495928a4960a32));
CHECK_OBJECT_DEEP(mod_consts.const_dict_deb53299a58008cffa495928a4960a32);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_ec39bde724166277950892f987e33cd8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec39bde724166277950892f987e33cd8_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_dict_1c0d3c2e7e6b780442ab73ed2e2b5698));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1c0d3c2e7e6b780442ab73ed2e2b5698);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_dict_df9c9da66aa3bc4f1e5f80b135a24e63));
CHECK_OBJECT_DEEP(mod_consts.const_dict_df9c9da66aa3bc4f1e5f80b135a24e63);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__params_str_plain__async_file_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__params_str_plain__async_file_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_SpooledTemporaryFile));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SpooledTemporaryFile);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_6e51286a48651f757bb3157520ea33cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6e51286a48651f757bb3157520ea33cb);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_220));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_220);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_73554f818382c79c06982acd266e6e4e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_73554f818382c79c06982acd266e6e4e);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_dict_1ffca3d91ac769ea4c2008ea43361df5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1ffca3d91ac769ea4c2008ea43361df5);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_dc2eeb3d9c9900527b0c290c9718df1f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dc2eeb3d9c9900527b0c290c9718df1f_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_dict_4ff5a4c7136f2f5a1b1141d09b4042b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4ff5a4c7136f2f5a1b1141d09b4042b9);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_80d11b7200b7c2b5c0cd838cebb061af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_80d11b7200b7c2b5c0cd838cebb061af);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_int_neg_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_neg_1_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_dict_e839b0a750135537c17971c870f763bf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e839b0a750135537c17971c870f763bf);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_8c5d71732f68333fbde644dc66d86a53));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8c5d71732f68333fbde644dc66d86a53);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_dict_e7cb639cbc6f0e4d8b2848451cf6e0f3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e7cb639cbc6f0e4d8b2848451cf6e0f3);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_dict_851fbf13213b5eb5623de44cdca51e05));
CHECK_OBJECT_DEEP(mod_consts.const_dict_851fbf13213b5eb5623de44cdca51e05);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_3731795803b80848eef8698287c2698e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3731795803b80848eef8698287c2698e);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_SEEK_SET));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SEEK_SET);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_dict_538246f597a1ccc8037d56043f9a4457));
CHECK_OBJECT_DEEP(mod_consts.const_dict_538246f597a1ccc8037d56043f9a4457);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_dict_cbc21e6ec6579764ce838272dc06e5eb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cbc21e6ec6579764ce838272dc06e5eb);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_dcd50e3937335dd00ca01a2695e2da19));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dcd50e3937335dd00ca01a2695e2da19);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_a367e9c4c3b5738a3c107394fea08a6d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a367e9c4c3b5738a3c107394fea08a6d);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_dict_76a7361138119d3ed4bcbd7d9c703e9e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_76a7361138119d3ed4bcbd7d9c703e9e);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_a1ee6eb8c87f323f4884a50d067f18e1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a1ee6eb8c87f323f4884a50d067f18e1);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_0d70d69205b7f7e21e89609cd00845a8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d70d69205b7f7e21e89609cd00845a8);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_71839ee869fc208fa7bfd15480ad456a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_71839ee869fc208fa7bfd15480ad456a);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_tuple_d2089fdf6a080a2a291b97cffd505d14_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d2089fdf6a080a2a291b97cffd505d14_tuple);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_digest_419f97c1173d6b2eeb21495500444847));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_419f97c1173d6b2eeb21495500444847);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_int_pos_454));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_454);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_751ad37f2215a24aa5e566f86739f144));
CHECK_OBJECT_DEEP(mod_consts.const_dict_751ad37f2215a24aa5e566f86739f144);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_12ca3d79a724c3594c0d4dda85fce623));
CHECK_OBJECT_DEEP(mod_consts.const_dict_12ca3d79a724c3594c0d4dda85fce623);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e5379864f72c636aa77a97636f156bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e5379864f72c636aa77a97636f156bc);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_aefe4c4461b25b1c8026415814927688_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aefe4c4461b25b1c8026415814927688_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_false_tuple);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_22b73255c9c2ca1fea1b61727c6798ad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_22b73255c9c2ca1fea1b61727c6798ad);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_7da56d4d92e27e6a7ae55d703de32929));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7da56d4d92e27e6a7ae55d703de32929);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_e71e7e15dd95def57b18ae55602aaebd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e71e7e15dd95def57b18ae55602aaebd);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_81d41b9e8e2fcef5ca9d2d45a9e36c89));
CHECK_OBJECT_DEEP(mod_consts.const_dict_81d41b9e8e2fcef5ca9d2d45a9e36c89);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_3c0beb9552de7e881e949b89e24f9fd8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3c0beb9552de7e881e949b89e24f9fd8);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_a217e200459446f543c7abf3248c09f6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a217e200459446f543c7abf3248c09f6);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_c138ede43f8abce4b37e9664e1d65bba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c138ede43f8abce4b37e9664e1d65bba);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_params_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_params_tuple);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_a0215b86d00c60a874aa3672bd05cfaa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a0215b86d00c60a874aa3672bd05cfaa);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_params_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_params_tuple);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_be270c8de544d1646f0af49c193b372b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_be270c8de544d1646f0af49c193b372b_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_0c00960a7f0448e0e307fa4605530e9a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0c00960a7f0448e0e307fa4605530e9a_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_76a12215ab01833772fc62949d6ef7b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76a12215ab01833772fc62949d6ef7b2_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_afd5d7e5d3c543f240e25e561c21cb87_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_afd5d7e5d3c543f240e25e561c21cb87_tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_c645c83c69847beddc445b0efadeda85_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c645c83c69847beddc445b0efadeda85_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_suffix_str_plain_prefix_str_plain_dir_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_suffix_str_plain_prefix_str_plain_dir_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_b7af7947bc381655ba33c4b767c288e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b7af7947bc381655ba33c4b767c288e0_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_size_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_size_str_plain___class___tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_b_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_b_str_plain___class___tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_e338b86caf15393214e309ee952767d8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e338b86caf15393214e309ee952767d8_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_b_tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_b84f5855d972e327ff64df91707bc162_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b84f5855d972e327ff64df91707bc162_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_2f88f067eac0ead5880dc3b772e12fe6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2f88f067eac0ead5880dc3b772e12fe6_tuple);
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
static PyObject *module_var_accessor_anyio$_core$_tempfile$AnyStr(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnyStr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnyStr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AnyStr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AnyStr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$AsyncFile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncFile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncFile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncFile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncFile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFile);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$Generic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$TextIOWrapper(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TextIOWrapper);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextIOWrapper);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextIOWrapper, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TextIOWrapper);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TextIOWrapper, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TextIOWrapper);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TextIOWrapper);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TextIOWrapper);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint_if_cancelled);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_checkpoint_if_cancelled);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_checkpoint_if_cancelled, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_checkpoint_if_cancelled);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_checkpoint_if_cancelled, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint_if_cancelled);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint_if_cancelled);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint_if_cancelled);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$tempfile(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempfile);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempfile, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_tempfile);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_tempfile, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile);
    }

    return result;
}

static PyObject *module_var_accessor_anyio$_core$_tempfile$to_thread(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anyio$_core$_tempfile->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anyio$_core$_tempfile->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anyio$_core$_tempfile->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_09c25f80f035099844802092954ed88d;
static PyCodeObject *code_objects_1ef31b7755f5576e417f9ec27b5fe2bb;
static PyCodeObject *code_objects_29b5c996cc01360e87c51eeb486f6787;
static PyCodeObject *code_objects_834b89de6ee540ca7b97a109476c4398;
static PyCodeObject *code_objects_1eb133bf001cc6a4ad922338a728b424;
static PyCodeObject *code_objects_7109461a4b9ffb3c8be2fc75ad1f5338;
static PyCodeObject *code_objects_643a0de80652282d5acf279488d16cda;
static PyCodeObject *code_objects_6d1eb707b500dcf1e4e53f6275c05ed7;
static PyCodeObject *code_objects_891a2b5d0b99fe2978d38dadc8f59f7c;
static PyCodeObject *code_objects_d6960bd5a67326dc3390221dbd9c37ab;
static PyCodeObject *code_objects_0a39766db725abf653a894ff455cb8f8;
static PyCodeObject *code_objects_cca98b03a2d27859e49565862d6ed3e7;
static PyCodeObject *code_objects_b57832aede087df3b9437c4f60e6dfcb;
static PyCodeObject *code_objects_d49f36cd7a44883278626d5e4823b18a;
static PyCodeObject *code_objects_f26dba305b761dbcb1845c6e7d777af2;
static PyCodeObject *code_objects_3b5f4020d4c4c46d89daecc36aa169b3;
static PyCodeObject *code_objects_0584d8da819d5f225ac363c3b32737d4;
static PyCodeObject *code_objects_1df1695648c0369f3319d3abcee3b10b;
static PyCodeObject *code_objects_38aae002a6822cd5a12809f15531d212;
static PyCodeObject *code_objects_f485b65f77fc7ee52fb0ff814091c83a;
static PyCodeObject *code_objects_159b880d4b00b34d5786584681334ab9;
static PyCodeObject *code_objects_3ad4afc3bec13fea070606c5577d9702;
static PyCodeObject *code_objects_b015b85c5a1a25dc263c7ef0dfdadcfa;
static PyCodeObject *code_objects_d690c8adc14ba533be28e286f50e540c;
static PyCodeObject *code_objects_f6d44bbb850e14c024f10997d53da2b3;
static PyCodeObject *code_objects_453490a88d8e834c11afb40f06584782;
static PyCodeObject *code_objects_2407a7ee0e566c2154fb478c6add1590;
static PyCodeObject *code_objects_333f1563065e8e25557f298ee08853ab;
static PyCodeObject *code_objects_eec2590a2f5e45e243eacc87792b2367;
static PyCodeObject *code_objects_2dc1a569957decc3ed3a518b2233fb7a;
static PyCodeObject *code_objects_478983618321e1f2ea2e55ca7689ee2f;
static PyCodeObject *code_objects_5883ee542080fa989154d4e729533726;
static PyCodeObject *code_objects_cf52a1ee630c2f337ff6947e1c90ffeb;
static PyCodeObject *code_objects_1040d3ae0988f61740fce67433c8f2fe;
static PyCodeObject *code_objects_945e46744ff421952d3a6513b8f438eb;
static PyCodeObject *code_objects_95b53b861faa842cd401104942909793;
static PyCodeObject *code_objects_2b93bc9ced8ed5ff01765b0a5adfdc16;
static PyCodeObject *code_objects_1d7a40939f29c70d53610fc6c3f19135;
static PyCodeObject *code_objects_67e36bb22574490256972638a31a6dea;
static PyCodeObject *code_objects_11955975261382d184fe016e30fddf93;
static PyCodeObject *code_objects_03d8609c509050f4dafd6577ea000971;
static PyCodeObject *code_objects_c0bb2777209ad7ac5913ed72881e40a0;
static PyCodeObject *code_objects_24cb46eb7449c024d3b6543e4c4b98ca;
static PyCodeObject *code_objects_e1f7e7d7880701f2a7f53e82e4329679;
static PyCodeObject *code_objects_c5cab63c755bd32d9a3c43ffc4c057d0;
static PyCodeObject *code_objects_9caa29c378a241475686c576b893334a;
static PyCodeObject *code_objects_aeb7c4e093efbb24e7758ad8f2a4eb26;
static PyCodeObject *code_objects_422e0c20d51108c637daab20ebaf6fe4;
static PyCodeObject *code_objects_c3b3727109de0d4e159dfb8d7c346567;
static PyCodeObject *code_objects_1f616828e923c677b5fddbd028afa180;
static PyCodeObject *code_objects_e96471a10cb0466d44baac6e2a99922b;
static PyCodeObject *code_objects_022af46f1355326c4d31d79530a13f93;
static PyCodeObject *code_objects_890c1d637ed14c6461b7929c5c7487db;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c138ede43f8abce4b37e9664e1d65bba); CHECK_OBJECT(module_filename_obj);
code_objects_09c25f80f035099844802092954ed88d = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_51a93690eda35971670c8952c4dd73f1, mod_consts.const_tuple_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 0, 0, 0);
code_objects_1ef31b7755f5576e417f9ec27b5fe2bb = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_de679f71d569d7cbdd5d5185d895cc91, mod_consts.const_tuple_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 0, 0, 0);
code_objects_29b5c996cc01360e87c51eeb486f6787 = MAKE_CODE_OBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_65ac5c51be30aaddb511dbed3ab72ea2, mod_consts.const_tuple_str_plain_params_tuple, mod_consts.const_tuple_str_plain_params_tuple, 0, 0, 0);
code_objects_834b89de6ee540ca7b97a109476c4398 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_2de197d7fc38b7a1b735140c840cda5c, mod_consts.const_tuple_str_plain_self_tuple, mod_consts.const_tuple_str_plain_self_tuple, 0, 0, 0);
code_objects_1eb133bf001cc6a4ad922338a728b424 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_a0215b86d00c60a874aa3672bd05cfaa, mod_consts.const_str_digest_a0215b86d00c60a874aa3672bd05cfaa, NULL, NULL, 0, 0, 0);
code_objects_7109461a4b9ffb3c8be2fc75ad1f5338 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_NamedTemporaryFile, mod_consts.const_str_plain_NamedTemporaryFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_643a0de80652282d5acf279488d16cda = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_SpooledTemporaryFile, mod_consts.const_str_plain_SpooledTemporaryFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6d1eb707b500dcf1e4e53f6275c05ed7 = MAKE_CODE_OBJECT(module_filename_obj, 454, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TemporaryDirectory, mod_consts.const_str_plain_TemporaryDirectory, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_891a2b5d0b99fe2978d38dadc8f59f7c = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TemporaryFile, mod_consts.const_str_plain_TemporaryFile, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d6960bd5a67326dc3390221dbd9c37ab = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aenter__, mod_consts.const_str_digest_7694b2277f0a8a30ceca18b110e01dff, mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple, NULL, 1, 0, 0);
code_objects_0a39766db725abf653a894ff455cb8f8 = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aenter__, mod_consts.const_str_digest_7b0445c6543255457d35d86b56e8c847, mod_consts.const_tuple_str_plain_self_str_plain_params_tuple, NULL, 1, 0, 0);
code_objects_cca98b03a2d27859e49565862d6ed3e7 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aenter__, mod_consts.const_str_digest_06d473a9418473bca652773ae77f2e89, mod_consts.const_tuple_str_plain_self_str_plain_fp_tuple, NULL, 1, 0, 0);
code_objects_b57832aede087df3b9437c4f60e6dfcb = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aexit__, mod_consts.const_str_digest_1d6f9df32dad10294f926c08d107c1e8, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, NULL, 4, 0, 0);
code_objects_d49f36cd7a44883278626d5e4823b18a = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aexit__, mod_consts.const_str_digest_8ee95c96e3ead0847b1341052e30763b, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, NULL, 4, 0, 0);
code_objects_f26dba305b761dbcb1845c6e7d777af2 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___aexit__, mod_consts.const_str_digest_8870096b18be0cf0b3ee083761c48272, mod_consts.const_tuple_4056a0ef07ec9188d15ce9b607833855_tuple, NULL, 4, 0, 0);
code_objects_3b5f4020d4c4c46d89daecc36aa169b3 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450, mod_consts.const_tuple_be270c8de544d1646f0af49c193b372b_tuple, NULL, 9, 2, 0);
code_objects_0584d8da819d5f225ac363c3b32737d4 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450, mod_consts.const_tuple_be270c8de544d1646f0af49c193b372b_tuple, NULL, 9, 2, 0);
code_objects_1df1695648c0369f3319d3abcee3b10b = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450, mod_consts.const_tuple_be270c8de544d1646f0af49c193b372b_tuple, NULL, 9, 2, 0);
code_objects_38aae002a6822cd5a12809f15531d212 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af, mod_consts.const_tuple_0c00960a7f0448e0e307fa4605530e9a_tuple, NULL, 9, 1, 0);
code_objects_f485b65f77fc7ee52fb0ff814091c83a = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af, mod_consts.const_tuple_0c00960a7f0448e0e307fa4605530e9a_tuple, NULL, 9, 1, 0);
code_objects_159b880d4b00b34d5786584681334ab9 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af, mod_consts.const_tuple_76a12215ab01833772fc62949d6ef7b2_tuple, mod_consts.const_tuple_str_plain___class___tuple, 9, 1, 0);
code_objects_3ad4afc3bec13fea070606c5577d9702 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_0e5379864f72c636aa77a97636f156bc, mod_consts.const_tuple_afd5d7e5d3c543f240e25e561c21cb87_tuple, NULL, 4, 2, 0);
code_objects_b015b85c5a1a25dc263c7ef0dfdadcfa = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3, mod_consts.const_tuple_c645c83c69847beddc445b0efadeda85_tuple, NULL, 8, 1, 0);
code_objects_d690c8adc14ba533be28e286f50e540c = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3, mod_consts.const_tuple_c645c83c69847beddc445b0efadeda85_tuple, NULL, 8, 1, 0);
code_objects_f6d44bbb850e14c024f10997d53da2b3 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3, mod_consts.const_tuple_c645c83c69847beddc445b0efadeda85_tuple, NULL, 8, 1, 0);
code_objects_453490a88d8e834c11afb40f06584782 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__check, mod_consts.const_str_digest_af334f722430710120fcedf44cf93ea1, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2407a7ee0e566c2154fb478c6add1590 = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_aclose, mod_consts.const_str_digest_154aeae9dd7a8c4176014874ae3333dd, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_333f1563065e8e25557f298ee08853ab = MAKE_CODE_OBJECT(module_filename_obj, 515, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_cleanup, mod_consts.const_str_digest_c8f62cf7a29489592ca014bcbe5a97d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_eec2590a2f5e45e243eacc87792b2367 = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_closed, mod_consts.const_str_digest_80d11b7200b7c2b5c0cd838cebb061af, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_2dc1a569957decc3ed3a518b2233fb7a = MAKE_CODE_OBJECT(module_filename_obj, 595, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_gettempdir, mod_consts.const_str_plain_gettempdir, NULL, NULL, 0, 0, 0);
code_objects_478983618321e1f2ea2e55ca7689ee2f = MAKE_CODE_OBJECT(module_filename_obj, 607, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_gettempdirb, mod_consts.const_str_plain_gettempdirb, NULL, NULL, 0, 0, 0);
code_objects_5883ee542080fa989154d4e729533726 = MAKE_CODE_OBJECT(module_filename_obj, 561, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mkdtemp, mod_consts.const_str_plain_mkdtemp, mod_consts.const_tuple_str_plain_suffix_str_plain_prefix_str_plain_dir_tuple, NULL, 3, 0, 0);
code_objects_cf52a1ee630c2f337ff6947e1c90ffeb = MAKE_CODE_OBJECT(module_filename_obj, 569, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mkdtemp, mod_consts.const_str_plain_mkdtemp, mod_consts.const_tuple_str_plain_suffix_str_plain_prefix_str_plain_dir_tuple, NULL, 3, 0, 0);
code_objects_1040d3ae0988f61740fce67433c8f2fe = MAKE_CODE_OBJECT(module_filename_obj, 576, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mkdtemp, mod_consts.const_str_plain_mkdtemp, mod_consts.const_tuple_str_plain_suffix_str_plain_prefix_str_plain_dir_tuple, NULL, 3, 0, 0);
code_objects_945e46744ff421952d3a6513b8f438eb = MAKE_CODE_OBJECT(module_filename_obj, 521, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mkstemp, mod_consts.const_str_plain_mkstemp, mod_consts.const_tuple_b7af7947bc381655ba33c4b767c288e0_tuple, NULL, 4, 0, 0);
code_objects_95b53b861faa842cd401104942909793 = MAKE_CODE_OBJECT(module_filename_obj, 530, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mkstemp, mod_consts.const_str_plain_mkstemp, mod_consts.const_tuple_b7af7947bc381655ba33c4b767c288e0_tuple, NULL, 4, 0, 0);
code_objects_2b93bc9ced8ed5ff01765b0a5adfdc16 = MAKE_CODE_OBJECT(module_filename_obj, 538, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_mkstemp, mod_consts.const_str_plain_mkstemp, mod_consts.const_tuple_b7af7947bc381655ba33c4b767c288e0_tuple, NULL, 4, 0, 0);
code_objects_1d7a40939f29c70d53610fc6c3f19135 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_read, mod_consts.const_str_digest_c34705894583be4bcd2684f4ec8aa696, mod_consts.const_tuple_str_plain_self_str_plain_size_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_67e36bb22574490256972638a31a6dea = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_read1, mod_consts.const_str_digest_71eb3436c034a2dcc5cb50ec1ff3922e, mod_consts.const_tuple_str_plain_self_str_plain_size_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_11955975261382d184fe016e30fddf93 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readinto, mod_consts.const_str_digest_d8dc5dc0490d4bd57c4fee456e5764ab, mod_consts.const_tuple_str_plain_self_str_plain_b_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_03d8609c509050f4dafd6577ea000971 = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readinto1, mod_consts.const_str_digest_0987ca965768eaaa48e75772cb700fbb, mod_consts.const_tuple_str_plain_self_str_plain_b_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_c0bb2777209ad7ac5913ed72881e40a0 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readline, mod_consts.const_str_digest_39d6335a861bb2b366485c15b366039c, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_24cb46eb7449c024d3b6543e4c4b98ca = MAKE_CODE_OBJECT(module_filename_obj, 358, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_readlines, mod_consts.const_str_digest_6b6d14e2fa1467329228ce94dc68ae01, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_e1f7e7d7880701f2a7f53e82e4329679 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rollover, mod_consts.const_str_digest_c5491efea9f7ebe6564b7c7cdc28bc0f, mod_consts.const_tuple_str_plain_self_str_plain_buffer_tuple, NULL, 1, 0, 0);
code_objects_c5cab63c755bd32d9a3c43ffc4c057d0 = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_seek, mod_consts.const_str_digest_c8ebd89ddee29b4443f373b6f2f68ea7, mod_consts.const_tuple_e338b86caf15393214e309ee952767d8_tuple, mod_consts.const_tuple_str_plain___class___tuple, 3, 0, 0);
code_objects_9caa29c378a241475686c576b893334a = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_tell, mod_consts.const_str_digest_be4c1154be8c29f30f42a1490d7b9743, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_aeb7c4e093efbb24e7758ad8f2a4eb26 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_truncate, mod_consts.const_str_digest_929091cfdb20866fae9f3d9373cafdba, mod_consts.const_tuple_str_plain_self_str_plain_size_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_422e0c20d51108c637daab20ebaf6fe4 = MAKE_CODE_OBJECT(module_filename_obj, 401, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102, mod_consts.const_tuple_str_plain_self_str_plain_b_tuple, NULL, 2, 0, 0);
code_objects_c3b3727109de0d4e159dfb8d7c346567 = MAKE_CODE_OBJECT(module_filename_obj, 403, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102, mod_consts.const_tuple_str_plain_self_str_plain_b_tuple, NULL, 2, 0, 0);
code_objects_1f616828e923c677b5fddbd028afa180 = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_write, mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102, mod_consts.const_tuple_b84f5855d972e327ff64df91707bc162_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_e96471a10cb0466d44baac6e2a99922b = MAKE_CODE_OBJECT(module_filename_obj, 426, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_writelines, mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb, mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple, NULL, 2, 0, 0);
code_objects_022af46f1355326c4d31d79530a13f93 = MAKE_CODE_OBJECT(module_filename_obj, 430, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_writelines, mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb, mod_consts.const_tuple_str_plain_self_str_plain_lines_tuple, NULL, 2, 0, 0);
code_objects_890c1d637ed14c6461b7929c5c7487db = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_writelines, mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb, mod_consts.const_tuple_2f88f067eac0ead5880dc3b772e12fe6_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb(PyThreadState *tstate);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__10___aexit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__11___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__12___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__13___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__14_aclose(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__15__check(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__16_rollover(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__17_closed(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__18_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__19_read1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__20_readline(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__21_readlines(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__22_readinto(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__23_readinto1(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__24_seek(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__25_tell(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__26_truncate(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__27_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__28_write(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__29_write(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__30_writelines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__31_writelines(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__32_writelines(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__33___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__34___aenter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__35___aexit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__36_cleanup(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__37_mkstemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__38_mkstemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__39_mkstemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__3___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__40_mkdtemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__41_mkdtemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__42_mkdtemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__43_gettempdir(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__44_gettempdirb(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__4___aenter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__5___aexit__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__8___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__9___aenter__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_anyio$_core$_tempfile$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_newline = python_pars[4];
PyObject *par_suffix = python_pars[5];
PyObject *par_prefix = python_pars[6];
PyObject *par_dir = python_pars[7];
PyObject *par_errors = python_pars[8];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__3___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f6d44bbb850e14c024f10997d53da2b3, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__3___init__ = cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__3___init__);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__3___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_mode);
tmp_assattr_value_1 = par_mode;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_mode, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_buffering);
tmp_assattr_value_2 = par_buffering;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_buffering, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_encoding);
tmp_assattr_value_3 = par_encoding;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_encoding, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_newline);
tmp_assattr_value_4 = par_newline;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_newline, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_suffix);
tmp_assattr_value_5 = par_suffix;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_suffix, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(par_prefix);
tmp_assattr_value_6 = par_prefix;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_prefix, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
CHECK_OBJECT(par_dir);
tmp_assattr_value_7 = par_dir;
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_dir, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_errors);
tmp_assattr_value_8 = par_errors;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_errors, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__3___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__3___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__3___init__,
    type_description_1,
    par_self,
    par_mode,
    par_buffering,
    par_encoding,
    par_newline,
    par_suffix,
    par_prefix,
    par_dir,
    par_errors
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__3___init__ == cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__);
    cache_frame_frame_anyio$_core$_tempfile$$$function__3___init__ = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__3___init__);

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
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tempfile$$$function__4___aenter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter___locals {
PyObject *var_fp;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
bool tmp_result;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_fp = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_cca98b03a2d27859e49565862d6ed3e7, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
struct Nuitka_CellObject *tmp_closure_1[1];
coroutine->m_frame->m_frame.f_lineno = 96;
tmp_called_instance_1 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_closure_1[0] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(tstate, tmp_closure_1);

coroutine->m_frame->m_frame.f_lineno = 96;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_run_sync, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_fp == NULL);
coroutine_heap->var_fp = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$AsyncFile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncFile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_fp);
tmp_args_element_value_2 = coroutine_heap->var_fp;
coroutine->m_frame->m_frame.f_lineno = 108;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__async_file, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__async_file);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine_heap->var_fp
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_fp);
CHECK_OBJECT(coroutine_heap->var_fp);
Py_DECREF(coroutine_heap->var_fp);
coroutine_heap->var_fp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_fp);
coroutine_heap->var_fp = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter___context,
        module_anyio$_core$_tempfile,
        const_str_plain___aenter__,
        mod_consts.const_str_digest_06d473a9418473bca652773ae77f2e89,
        code_objects_cca98b03a2d27859e49565862d6ed3e7,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_834b89de6ee540ca7b97a109476c4398, module_anyio$_core$_tempfile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_3_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_arg_value_4_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_5_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_arg_value_6_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_expression_value_9;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TemporaryFile);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 98;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_buffering);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);

exception_lineno = 99;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_encoding);
if (tmp_kw_call_arg_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);

exception_lineno = 100;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_newline);
if (tmp_kw_call_arg_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);

exception_lineno = 101;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 102;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_suffix);
if (tmp_kw_call_arg_value_4_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);

exception_lineno = 102;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 103;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_arg_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_prefix);
if (tmp_kw_call_arg_value_5_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);

exception_lineno = 103;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 104;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_arg_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dir);
if (tmp_kw_call_arg_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);

exception_lineno = 104;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 105;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_errors);
if (tmp_kw_call_dict_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);

exception_lineno = 105;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda->m_frame.f_lineno = 97;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1, tmp_kw_call_arg_value_6_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS7_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_errors_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
CHECK_OBJECT(tmp_kw_call_arg_value_2_1);
Py_DECREF(tmp_kw_call_arg_value_2_1);
CHECK_OBJECT(tmp_kw_call_arg_value_3_1);
Py_DECREF(tmp_kw_call_arg_value_3_1);
CHECK_OBJECT(tmp_kw_call_arg_value_4_1);
Py_DECREF(tmp_kw_call_arg_value_4_1);
CHECK_OBJECT(tmp_kw_call_arg_value_5_1);
Py_DECREF(tmp_kw_call_arg_value_5_1);
CHECK_OBJECT(tmp_kw_call_arg_value_6_1);
Py_DECREF(tmp_kw_call_arg_value_6_1);
CHECK_OBJECT(tmp_kw_call_dict_value_0_1);
Py_DECREF(tmp_kw_call_dict_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda == cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);
    cache_frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$_core$_tempfile$$$function__5___aexit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_value = python_pars[2];
PyObject *par_traceback = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit__(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_exc_type);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
par_exc_type = NULL;
CHECK_OBJECT(par_exc_value);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
par_exc_value = NULL;
CHECK_OBJECT(par_traceback);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);
par_traceback = NULL;
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
struct anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f26dba305b761dbcb1845c6e7d777af2, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 117;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__async_file);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 117;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 117;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    NULL,
    NULL,
    NULL
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit___context,
        module_anyio$_core$_tempfile,
        const_str_plain___aexit__,
        mod_consts.const_str_digest_8870096b18be0cf0b3ee083761c48272,
        code_objects_f26dba305b761dbcb1845c6e7d777af2,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__5___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_mode = python_pars[1];
PyObject *par_buffering = python_pars[2];
PyObject *par_encoding = python_pars[3];
PyObject *par_newline = python_pars[4];
PyObject *par_suffix = python_pars[5];
PyObject *par_prefix = python_pars[6];
PyObject *par_dir = python_pars[7];
PyObject *par_delete = python_pars[8];
PyObject *par_errors = python_pars[9];
PyObject *par_delete_on_close = python_pars[10];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__8___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1df1695648c0369f3319d3abcee3b10b, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__8___init__ = cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__8___init__);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__8___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_assattr_target_1;
tmp_dict_key_1 = mod_consts.const_str_plain_mode;
CHECK_OBJECT(par_mode);
tmp_dict_value_1 = par_mode;
tmp_assattr_value_1 = _PyDict_NewPresized( 9 );
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_buffering;
CHECK_OBJECT(par_buffering);
tmp_dict_value_1 = par_buffering;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_encoding;
CHECK_OBJECT(par_encoding);
tmp_dict_value_1 = par_encoding;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_newline;
CHECK_OBJECT(par_newline);
tmp_dict_value_1 = par_newline;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_suffix;
CHECK_OBJECT(par_suffix);
tmp_dict_value_1 = par_suffix;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_prefix;
CHECK_OBJECT(par_prefix);
tmp_dict_value_1 = par_prefix;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_dir;
CHECK_OBJECT(par_dir);
tmp_dict_value_1 = par_dir;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_delete;
CHECK_OBJECT(par_delete);
tmp_dict_value_1 = par_delete;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_errors;
CHECK_OBJECT(par_errors);
tmp_dict_value_1 = par_errors;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__params, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(par_delete_on_close);
tmp_ass_subvalue_1 = par_delete_on_close;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__params);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_delete_on_close;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__8___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__8___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__8___init__,
    type_description_1,
    par_self,
    par_mode,
    par_buffering,
    par_encoding,
    par_newline,
    par_suffix,
    par_prefix,
    par_dir,
    par_delete,
    par_errors,
    par_delete_on_close
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__8___init__ == cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__);
    cache_frame_frame_anyio$_core$_tempfile$$$function__8___init__ = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__8___init__);

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
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_delete);
Py_DECREF(par_delete);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
CHECK_OBJECT(par_delete_on_close);
Py_DECREF(par_delete_on_close);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_delete);
Py_DECREF(par_delete);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
CHECK_OBJECT(par_delete_on_close);
Py_DECREF(par_delete_on_close);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tempfile$$$function__9___aenter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter___locals {
PyObject *var_fp;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
bool tmp_result;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_fp = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d6960bd5a67326dc3390221dbd9c37ab, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
struct Nuitka_CellObject *tmp_closure_1[1];
coroutine->m_frame->m_frame.f_lineno = 205;
tmp_called_instance_1 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 205;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_closure_1[0] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(tstate, tmp_closure_1);

coroutine->m_frame->m_frame.f_lineno = 205;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_run_sync, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 205;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 205;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 205;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = yield_return_value;
assert(coroutine_heap->var_fp == NULL);
coroutine_heap->var_fp = tmp_assign_source_1;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_1;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$AsyncFile(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_AsyncFile);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 208;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_fp);
tmp_args_element_value_2 = coroutine_heap->var_fp;
coroutine->m_frame->m_frame.f_lineno = 208;
tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 208;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 208;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__async_file, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 208;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 209;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__async_file);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 209;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine_heap->var_fp
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_fp);
CHECK_OBJECT(coroutine_heap->var_fp);
Py_DECREF(coroutine_heap->var_fp);
coroutine_heap->var_fp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_fp);
coroutine_heap->var_fp = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter___context,
        module_anyio$_core$_tempfile,
        const_str_plain___aenter__,
        mod_consts.const_str_digest_7694b2277f0a8a30ceca18b110e01dff,
        code_objects_d6960bd5a67326dc3390221dbd9c37ab,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_09c25f80f035099844802092954ed88d, module_anyio$_core$_tempfile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_NamedTemporaryFile);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 206;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_direct_call_arg2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__params);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 206;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda == cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);
    cache_frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$_core$_tempfile$$$function__10___aexit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_exc_type = python_pars[1];
PyObject *par_exc_value = python_pars[2];
PyObject *par_traceback = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit__(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_exc_type);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
par_exc_type = NULL;
CHECK_OBJECT(par_exc_value);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
par_exc_value = NULL;
CHECK_OBJECT(par_traceback);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);
par_traceback = NULL;
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
struct anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b57832aede087df3b9437c4f60e6dfcb, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 217;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__async_file);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 217;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 217;
coroutine_heap->type_description_1 = "cNNN";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    NULL,
    NULL,
    NULL
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit___context,
        module_anyio$_core$_tempfile,
        const_str_plain___aexit__,
        mod_consts.const_str_digest_1d6f9df32dad10294f926c08d107c1e8,
        code_objects_b57832aede087df3b9437c4f60e6dfcb,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__10___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_max_size = python_pars[1];
PyObject *par_mode = python_pars[2];
PyObject *par_buffering = python_pars[3];
PyObject *par_encoding = python_pars[4];
PyObject *par_newline = python_pars[5];
PyObject *par_suffix = python_pars[6];
PyObject *par_prefix = python_pars[7];
PyObject *par_dir = python_pars[8];
PyObject *par_errors = python_pars[9];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_159b880d4b00b34d5786584681334ab9, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__13___init__ = cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__13___init__);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_assattr_target_1;
tmp_dict_key_1 = mod_consts.const_str_plain_mode;
CHECK_OBJECT(par_mode);
tmp_dict_value_1 = par_mode;
tmp_assattr_value_1 = _PyDict_NewPresized( 8 );
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_buffering;
CHECK_OBJECT(par_buffering);
tmp_dict_value_1 = par_buffering;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = const_str_plain_encoding;
CHECK_OBJECT(par_encoding);
tmp_dict_value_1 = par_encoding;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_newline;
CHECK_OBJECT(par_newline);
tmp_dict_value_1 = par_newline;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_suffix;
CHECK_OBJECT(par_suffix);
tmp_dict_value_1 = par_suffix;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_prefix;
CHECK_OBJECT(par_prefix);
tmp_dict_value_1 = par_prefix;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_dir;
CHECK_OBJECT(par_dir);
tmp_dict_value_1 = par_dir;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_errors;
CHECK_OBJECT(par_errors);
tmp_dict_value_1 = par_errors;
tmp_res = PyDict_SetItem(tmp_assattr_value_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__tempfile_params, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_max_size);
tmp_assattr_value_2 = par_max_size;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__max_size, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = const_str_plain_b;
CHECK_OBJECT(par_mode);
tmp_cmp_expr_right_1 = par_mode;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 295;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_2 == NULL));
frame_frame_anyio$_core$_tempfile$$$function__13___init__->m_frame.f_lineno = 295;
tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 295;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tempfile$$$function__13___init__->m_frame.f_lineno = 295;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_2;
PyObject *tmp_object_arg_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 297;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_2 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_2, tmp_object_arg_value_2);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_anyio$_core$_tempfile$TextIOWrapper(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TextIOWrapper);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 298;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_called_value_5 == NULL));
frame_frame_anyio$_core$_tempfile$$$function__13___init__->m_frame.f_lineno = 299;
tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 299;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_encoding);
tmp_kw_call_dict_value_0_1 = par_encoding;
CHECK_OBJECT(par_errors);
tmp_kw_call_dict_value_1_1 = par_errors;
CHECK_OBJECT(par_newline);
tmp_kw_call_dict_value_2_1 = par_newline;
tmp_kw_call_dict_value_3_1 = Py_True;
frame_frame_anyio$_core$_tempfile$$$function__13___init__->m_frame.f_lineno = 298;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_bcb9f3954df8cd94efc192267569b271_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 298;
type_description_1 = "ooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_anyio$_core$_tempfile$$$function__13___init__->m_frame.f_lineno = 297;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__13___init__,
    type_description_1,
    par_self,
    par_max_size,
    par_mode,
    par_buffering,
    par_encoding,
    par_newline,
    par_suffix,
    par_prefix,
    par_dir,
    par_errors,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__13___init__ == cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__);
    cache_frame_frame_anyio$_core$_tempfile$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__13___init__);

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
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_max_size);
Py_DECREF(par_max_size);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_buffering);
Py_DECREF(par_buffering);
CHECK_OBJECT(par_encoding);
Py_DECREF(par_encoding);
CHECK_OBJECT(par_newline);
Py_DECREF(par_newline);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_errors);
Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tempfile$$$function__14_aclose(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2407a7ee0e566c2154fb478c6add1590, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 308;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 308;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 308;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 309;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 309;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 312;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 312;
tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_aclose);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 312;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_aclose,
        mod_consts.const_str_digest_154aeae9dd7a8c4176014874ae3333dd,
        code_objects_2407a7ee0e566c2154fb478c6add1590,
        closure,
        2,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__14_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__15__check(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_453490a88d8e834c11afb40f06584782, module_anyio$_core$_tempfile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 315;
tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tell);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_cmp_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__max_size);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 315;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_instance_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 318;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 318;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 318;
tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_rollover);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 318;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 318;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 318;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain__check,
        mod_consts.const_str_digest_af334f722430710120fcedf44cf93ea1,
        code_objects_453490a88d8e834c11afb40f06584782,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__15__check$$$coroutine__1__check_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__16_rollover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover_locals {
PyObject *var_buffer;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
bool tmp_result;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_buffer = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e1f7e7d7880701f2a7f53e82e4329679, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 321;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 321;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 321;
coroutine_heap->type_description_1 = "co";
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_True;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 324;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__rolled, tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 324;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 325;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fp);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 325;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_buffer == NULL);
coroutine_heap->var_buffer = tmp_assign_source_1;
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->var_buffer);
tmp_called_instance_1 = coroutine_heap->var_buffer;
coroutine->m_frame->m_frame.f_lineno = 326;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_seek,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 326;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
struct Nuitka_CellObject *tmp_closure_1[1];
PyObject *tmp_assattr_target_2;
coroutine->m_frame->m_frame.f_lineno = 327;
tmp_called_instance_2 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_closure_1[0] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda(tstate, tmp_closure_1);

coroutine->m_frame->m_frame.f_lineno = 327;
tmp_expression_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_run_sync, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = yield_return_value;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__fp, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 327;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 330;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_write);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_buffer);
tmp_called_instance_3 = coroutine_heap->var_buffer;
coroutine->m_frame->m_frame.f_lineno = 330;
tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, const_str_plain_read);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 330;
tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 330;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->var_buffer);
tmp_called_instance_4 = coroutine_heap->var_buffer;
coroutine->m_frame->m_frame.f_lineno = 331;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, const_str_plain_close);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 331;
coroutine_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine_heap->var_buffer
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_buffer);
coroutine_heap->var_buffer = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_buffer);
coroutine_heap->var_buffer = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_rollover,
        mod_consts.const_str_digest_c5491efea9f7ebe6564b7c7cdc28bc0f,
        code_objects_e1f7e7d7880701f2a7f53e82e4329679,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_1ef31b7755f5576e417f9ec27b5fe2bb, module_anyio$_core$_tempfile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda = cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TemporaryFile);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 328;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_direct_call_arg2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__tempfile_params);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_1);

exception_lineno = 328;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda == cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda);
    cache_frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$_core$_tempfile$$$function__17_closed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__17_closed;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed = MAKE_FUNCTION_FRAME(tstate, code_objects_eec2590a2f5e45e243eacc87792b2367, module_anyio$_core$_tempfile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__17_closed = cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__17_closed);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__17_closed) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fp);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_closed);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__17_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__17_closed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__17_closed, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__17_closed,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__17_closed == cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed);
    cache_frame_frame_anyio$_core$_tempfile$$$function__17_closed = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__17_closed);

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


static PyObject *impl_anyio$_core$_tempfile$$$function__18_read(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_size = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_size;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1d7a40939f29c70d53610fc6c3f19135, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 338;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 338;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 338;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 339;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 339;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 339;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_read);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 340;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 340;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 342;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_8 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_read);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 342;
tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 342;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read_context,
        module_anyio$_core$_tempfile,
        const_str_plain_read,
        mod_consts.const_str_digest_c34705894583be4bcd2684f4ec8aa696,
        code_objects_1d7a40939f29c70d53610fc6c3f19135,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__18_read$$$coroutine__1_read_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__19_read1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_size = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_size;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_67e36bb22574490256972638a31a6dea, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 345;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 345;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 345;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 346;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 346;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 346;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_read1);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 347;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 347;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 349;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_8 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_read1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 349;
tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 349;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_read1,
        mod_consts.const_str_digest_71eb3436c034a2dcc5cb50ec1ff3922e,
        code_objects_67e36bb22574490256972638a31a6dea,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__19_read1$$$coroutine__1_read1_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__20_readline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c0bb2777209ad7ac5913ed72881e40a0, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 352;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 352;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 352;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 353;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 353;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 353;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 353;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 353;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 353;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 354;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 354;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 354;
coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_readline);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 354;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
coroutine->m_frame->m_frame.f_lineno = 356;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 356;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_readline);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 356;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_readline,
        mod_consts.const_str_digest_39d6335a861bb2b366485c15b366039c,
        code_objects_c0bb2777209ad7ac5913ed72881e40a0,
        closure,
        2,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__20_readline$$$coroutine__1_readline_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__21_readlines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_24cb46eb7449c024d3b6543e4c4b98ca, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 359;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 360;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 360;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 360;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 360;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 360;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 360;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 361;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 361;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 361;
coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_readlines);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 361;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
coroutine->m_frame->m_frame.f_lineno = 363;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 363;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 363;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 363;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 363;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_readlines);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 363;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 363;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 363;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_readlines,
        mod_consts.const_str_digest_6b6d14e2fa1467329228ce94dc68ae01,
        code_objects_24cb46eb7449c024d3b6543e4c4b98ca,
        closure,
        2,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__21_readlines$$$coroutine__1_readlines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__22_readinto(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_b = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_b;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_b);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
par_b = NULL;
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
struct anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_11955975261382d184fe016e30fddf93, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 366;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 366;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 366;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 367;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 367;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 367;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_readinto);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 368;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 368;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 370;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_8 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_readinto);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 370;
tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 370;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_readinto,
        mod_consts.const_str_digest_d8dc5dc0490d4bd57c4fee456e5764ab,
        code_objects_11955975261382d184fe016e30fddf93,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__22_readinto$$$coroutine__1_readinto_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__23_readinto1(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_b = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_b;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_b);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
par_b = NULL;
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
struct anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_03d8609c509050f4dafd6577ea000971, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 373;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 374;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 374;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 374;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_readinto);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 375;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 375;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 377;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_8 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_readinto1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 377;
tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 377;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_readinto1,
        mod_consts.const_str_digest_0987ca965768eaaa48e75772cb700fbb,
        code_objects_03d8609c509050f4dafd6577ea000971,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__23_readinto1$$$coroutine__1_readinto1_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__24_seek(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_offset = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_whence = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_offset;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_whence;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_offset);
CHECK_OBJECT(par_offset);
Py_DECREF(par_offset);
par_offset = NULL;
CHECK_OBJECT(par_whence);
CHECK_OBJECT(par_whence);
Py_DECREF(par_whence);
par_whence = NULL;
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
struct anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_c5cab63c755bd32d9a3c43ffc4c057d0, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 380;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 380;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 380;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 381;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 381;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 381;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_seek);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_whence);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 382;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 382;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
coroutine->m_frame->m_frame.f_lineno = 384;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_8 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_seek);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_offset);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_whence);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 384;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 384;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[3],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_seek,
        mod_consts.const_str_digest_c8ebd89ddee29b4443f373b6f2f68ea7,
        code_objects_c5cab63c755bd32d9a3c43ffc4c057d0,
        closure,
        4,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__24_seek$$$coroutine__1_seek_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__25_tell(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9caa29c378a241475686c576b893334a, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 387;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 388;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 388;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 388;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 388;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 388;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 388;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 389;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__fp);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 389;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 389;
coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_tell);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 389;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
coroutine->m_frame->m_frame.f_lineno = 391;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 391;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_tell);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 391;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_tell,
        mod_consts.const_str_digest_be4c1154be8c29f30f42a1490d7b9743,
        code_objects_9caa29c378a241475686c576b893334a,
        closure,
        2,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__25_tell$$$coroutine__1_tell_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__26_truncate(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_size = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_size;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_size);
CHECK_OBJECT(par_size);
Py_DECREF(par_size);
par_size = NULL;
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
struct anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_aeb7c4e093efbb24e7758ad8f2a4eb26, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 394;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 395;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 395;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 395;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 395;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 395;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 395;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_truncate);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 396;
coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 396;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 398;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_8 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_truncate);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_size);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 398;
tmp_expression_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 398;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[2],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_truncate,
        mod_consts.const_str_digest_929091cfdb20866fae9f3d9373cafdba,
        code_objects_aeb7c4e093efbb24e7758ad8f2a4eb26,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__26_truncate$$$coroutine__1_truncate_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__27_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_b = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_b);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
par_b = NULL;
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
struct anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_write,
        mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102,
        code_objects_422e0c20d51108c637daab20ebaf6fe4,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__27_write$$$coroutine__1_write_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__28_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_b = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_b);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
par_b = NULL;
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
struct anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_write,
        mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102,
        code_objects_c3b3727109de0d4e159dfb8d7c346567,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__28_write$$$coroutine__1_write_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__29_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_b = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_b;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_b);
CHECK_OBJECT(par_b);
Py_DECREF(par_b);
par_b = NULL;
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
struct anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write_locals {
PyObject *var_result;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_result = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1f616828e923c677b5fddbd028afa180, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 417;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 417;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 417;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 418;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 418;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 418;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 419;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 419;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_result == NULL);
coroutine_heap->var_result = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 420;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 420;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 420;
tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__check);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 420;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 420;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 420;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
CHECK_OBJECT(coroutine_heap->var_result);
coroutine_heap->tmp_return_value = coroutine_heap->var_result;
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 423;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_10 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_write);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_b);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 423;
tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 423;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine_heap->var_result,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_write,
        mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102,
        code_objects_1f616828e923c677b5fddbd028afa180,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__29_write$$$coroutine__1_write_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__30_writelines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_lines = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_lines);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
par_lines = NULL;
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
struct anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_writelines,
        mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb,
        code_objects_e96471a10cb0466d44baac6e2a99922b,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__30_writelines$$$coroutine__1_writelines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__31_writelines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_lines = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_lines);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
par_lines = NULL;
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
struct anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_writelines,
        mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb,
        code_objects_022af46f1355326c4d31d79530a13f93,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__31_writelines$$$coroutine__1_writelines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__32_writelines(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_lines = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = self->m_closure[0];
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_lines;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_lines);
CHECK_OBJECT(par_lines);
Py_DECREF(par_lines);
par_lines = NULL;
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
struct anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines_locals {
PyObject *var_result;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_result = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_890c1d637ed14c6461b7929c5c7487db, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 445;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__rolled);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 445;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 445;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
PyObject *tmp_called_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 446;
tmp_called_value_1 = module_var_accessor_anyio$_core$_tempfile$checkpoint_if_cancelled(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 446;
tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 446;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__fp);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_writelines);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_lines);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 447;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 447;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_result == NULL);
coroutine_heap->var_result = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 448;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 448;
tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__check);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 448;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
CHECK_OBJECT(coroutine_heap->var_result);
coroutine_heap->tmp_return_value = coroutine_heap->var_result;
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
coroutine->m_frame->m_frame.f_lineno = 451;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_object_arg_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_10 = BUILTIN_SUPER0(tstate, moduledict_anyio$_core$_tempfile, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_writelines);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_lines);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 451;
tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 3;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_type_arg_value_1, sizeof(PyObject *), &tmp_object_arg_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 451;
coroutine_heap->type_description_1 = "ccoc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine_heap->var_result,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_writelines,
        mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb,
        code_objects_890c1d637ed14c6461b7929c5c7487db,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__32_writelines$$$coroutine__1_writelines_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__33___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_suffix = python_pars[1];
PyObject *par_prefix = python_pars[2];
PyObject *par_dir = python_pars[3];
PyObject *par_ignore_cleanup_errors = python_pars[4];
PyObject *par_delete = python_pars[5];
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__33___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3ad4afc3bec13fea070606c5577d9702, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__33___init__ = cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__33___init__);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__33___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_suffix);
tmp_assattr_value_1 = par_suffix;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_suffix, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 479;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_prefix);
tmp_assattr_value_2 = par_prefix;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_prefix, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_dir);
tmp_assattr_value_3 = par_dir;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_dir, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 481;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_ignore_cleanup_errors);
tmp_assattr_value_4 = par_ignore_cleanup_errors;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_ignore_cleanup_errors, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_delete);
tmp_assattr_value_5 = par_delete;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_delete, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
tmp_assattr_value_6 = Py_None;
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain__tempdir, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__33___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__33___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__33___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__33___init__,
    type_description_1,
    par_self,
    par_suffix,
    par_prefix,
    par_dir,
    par_ignore_cleanup_errors,
    par_delete
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__33___init__ == cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__);
    cache_frame_frame_anyio$_core$_tempfile$$$function__33___init__ = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__33___init__);

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
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_ignore_cleanup_errors);
Py_DECREF(par_ignore_cleanup_errors);
CHECK_OBJECT(par_delete);
Py_DECREF(par_delete);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
CHECK_OBJECT(par_ignore_cleanup_errors);
Py_DECREF(par_ignore_cleanup_errors);
CHECK_OBJECT(par_delete);
Py_DECREF(par_delete);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_tempfile$$$function__34___aenter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter___locals {
struct Nuitka_CellObject *var_params;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
char yield_tmps[1024];
bool tmp_result;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_params = Nuitka_Cell_NewEmpty();
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_0a39766db725abf653a894ff455cb8f8, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_suffix;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 489;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_suffix);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 489;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_prefix;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 490;
coroutine_heap->type_description_1 = "cc";
    goto dict_build_exception_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_prefix);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 490;
coroutine_heap->type_description_1 = "cc";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_dir;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 491;
coroutine_heap->type_description_1 = "cc";
    goto dict_build_exception_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dir);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 491;
coroutine_heap->type_description_1 = "cc";
    goto dict_build_exception_1;
}
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
assert(Nuitka_Cell_GET(coroutine_heap->var_params) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_params, tmp_assign_source_1);

}
{
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 494;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_ignore_cleanup_errors);
if (coroutine_heap->tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 494;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_params));
coroutine_heap->tmp_dictset_dict = Nuitka_Cell_GET(coroutine_heap->var_params);
coroutine_heap->tmp_dictset_key = mod_consts.const_str_plain_ignore_cleanup_errors;
assert(PyDict_CheckExact(coroutine_heap->tmp_dictset_dict));
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_dictset_dict, coroutine_heap->tmp_dictset_key, coroutine_heap->tmp_dictset_value);

CHECK_OBJECT(coroutine_heap->tmp_dictset_value);
Py_DECREF(coroutine_heap->tmp_dictset_value);
assert(!(coroutine_heap->tmp_res != 0));
}
{
PyObject *tmp_expression_value_5;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 497;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_delete);
if (coroutine_heap->tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 497;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_params));
coroutine_heap->tmp_dictset_dict = Nuitka_Cell_GET(coroutine_heap->var_params);
coroutine_heap->tmp_dictset_key = mod_consts.const_str_plain_delete;
assert(PyDict_CheckExact(coroutine_heap->tmp_dictset_dict));
coroutine_heap->tmp_res = PyDict_SetItem(coroutine_heap->tmp_dictset_dict, coroutine_heap->tmp_dictset_key, coroutine_heap->tmp_dictset_value);

CHECK_OBJECT(coroutine_heap->tmp_dictset_value);
Py_DECREF(coroutine_heap->tmp_dictset_value);
assert(!(coroutine_heap->tmp_res != 0));
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
struct Nuitka_CellObject *tmp_closure_1[1];
PyObject *tmp_assattr_target_1;
coroutine->m_frame->m_frame.f_lineno = 499;
tmp_called_instance_1 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_closure_1[0] = coroutine_heap->var_params;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(tstate, tmp_closure_1);

coroutine->m_frame->m_frame.f_lineno = 499;
tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_run_sync, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_closure_1, sizeof(struct Nuitka_CellObject *[1]), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_assattr_value_1 = yield_return_value;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__tempdir, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 499;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
coroutine->m_frame->m_frame.f_lineno = 502;
tmp_expression_value_10 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_run_sync);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__tempdir);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain___enter__);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 502;
tmp_expression_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_8;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 502;
coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0],
    coroutine_heap->var_params
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_params);
CHECK_OBJECT(coroutine_heap->var_params);
Py_DECREF(coroutine_heap->var_params);
coroutine_heap->var_params = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->var_params);
CHECK_OBJECT(coroutine_heap->var_params);
Py_DECREF(coroutine_heap->var_params);
coroutine_heap->var_params = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter___context,
        module_anyio$_core$_tempfile,
        const_str_plain___aenter__,
        mod_consts.const_str_digest_7b0445c6543255457d35d86b56e8c847,
        code_objects_0a39766db725abf653a894ff455cb8f8,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_29b5c996cc01360e87c51eeb486f6787, module_anyio$_core$_tempfile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda->m_type_description == NULL);
frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_TemporaryDirectory);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
Py_DECREF(tmp_direct_call_arg1_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 500;
type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg2_1 = Nuitka_Cell_GET(self->m_closure[0]);
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
    type_description_1,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda == cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);
    cache_frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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


static PyObject *impl_anyio$_core$_tempfile$$$function__35___aexit__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_exc_type = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_exc_value = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_traceback = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_exc_type;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_exc_value;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_traceback;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit__(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_exc_type);
CHECK_OBJECT(par_exc_type);
Py_DECREF(par_exc_type);
par_exc_type = NULL;
CHECK_OBJECT(par_exc_value);
CHECK_OBJECT(par_exc_value);
Py_DECREF(par_exc_value);
par_exc_value = NULL;
CHECK_OBJECT(par_traceback);
CHECK_OBJECT(par_traceback);
Py_DECREF(par_traceback);
par_traceback = NULL;
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
struct anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit___locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d49f36cd7a44883278626d5e4823b18a, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 510;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__tempdir);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 510;
coroutine_heap->type_description_1 = "cccc";
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
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 511;
tmp_expression_value_4 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_run_sync);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 512;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__tempdir);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 512;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___exit__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 512;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exc_type);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 512;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_exc_value);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 512;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_traceback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 512;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 511;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_3 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 511;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_1:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine->m_closure[3]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit___context,
        module_anyio$_core$_tempfile,
        const_str_plain___aexit__,
        mod_consts.const_str_digest_8ee95c96e3ead0847b1341052e30763b,
        code_objects_d49f36cd7a44883278626d5e4823b18a,
        closure,
        4,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__35___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__36_cleanup(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup(tstate, tmp_closure_1);

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
struct anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_333f1563065e8e25557f298ee08853ab, module_anyio$_core$_tempfile, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 516;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__tempdir);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 516;
coroutine_heap->type_description_1 = "c";
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
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 517;
tmp_expression_value_4 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_run_sync);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__tempdir);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_cleanup);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 517;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 517;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
branch_no_1:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_cleanup,
        mod_consts.const_str_digest_c8f62cf7a29489592ca014bcbe5a97d0,
        code_objects_333f1563065e8e25557f298ee08853ab,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__36_cleanup$$$coroutine__1_cleanup_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__37_mkstemp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_suffix = python_pars[0];
PyObject *par_prefix = python_pars[1];
PyObject *par_dir = python_pars[2];
PyObject *par_text = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_suffix);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
par_suffix = NULL;
CHECK_OBJECT(par_prefix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
par_prefix = NULL;
CHECK_OBJECT(par_dir);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
par_dir = NULL;
CHECK_OBJECT(par_text);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
par_text = NULL;
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
struct anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_mkstemp,
        NULL,
        code_objects_945e46744ff421952d3a6513b8f438eb,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__37_mkstemp$$$coroutine__1_mkstemp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__38_mkstemp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_suffix = python_pars[0];
PyObject *par_prefix = python_pars[1];
PyObject *par_dir = python_pars[2];
PyObject *par_text = python_pars[3];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_suffix);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
par_suffix = NULL;
CHECK_OBJECT(par_prefix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
par_prefix = NULL;
CHECK_OBJECT(par_dir);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
par_dir = NULL;
CHECK_OBJECT(par_text);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
par_text = NULL;
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
struct anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_mkstemp,
        NULL,
        code_objects_95b53b861faa842cd401104942909793,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__38_mkstemp$$$coroutine__1_mkstemp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__39_mkstemp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_suffix = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_prefix = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_dir = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_text = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_dir;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_prefix;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_suffix;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_text;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_suffix);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
par_suffix = NULL;
CHECK_OBJECT(par_prefix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
par_prefix = NULL;
CHECK_OBJECT(par_dir);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
par_dir = NULL;
CHECK_OBJECT(par_text);
CHECK_OBJECT(par_text);
Py_DECREF(par_text);
par_text = NULL;
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
struct anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2b93bc9ced8ed5ff01765b0a5adfdc16, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
coroutine->m_frame->m_frame.f_lineno = 557;
tmp_expression_value_3 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_sync);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_mkstemp);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_suffix);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_prefix);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_dir);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_text);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[3]);
coroutine->m_frame->m_frame.f_lineno = 557;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 557;
coroutine_heap->type_description_1 = "cccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine->m_closure[3]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_mkstemp,
        NULL,
        code_objects_2b93bc9ced8ed5ff01765b0a5adfdc16,
        closure,
        4,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__39_mkstemp$$$coroutine__1_mkstemp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__40_mkdtemp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_suffix = python_pars[0];
PyObject *par_prefix = python_pars[1];
PyObject *par_dir = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_suffix);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
par_suffix = NULL;
CHECK_OBJECT(par_prefix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
par_prefix = NULL;
CHECK_OBJECT(par_dir);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
par_dir = NULL;
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
struct anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_mkdtemp,
        NULL,
        code_objects_5883ee542080fa989154d4e729533726,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__40_mkdtemp$$$coroutine__1_mkdtemp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__41_mkdtemp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_suffix = python_pars[0];
PyObject *par_prefix = python_pars[1];
PyObject *par_dir = python_pars[2];
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp(tstate);

goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_suffix);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
par_suffix = NULL;
CHECK_OBJECT(par_prefix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
par_prefix = NULL;
CHECK_OBJECT(par_dir);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
par_dir = NULL;
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
struct anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp_locals {
PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_mkdtemp,
        NULL,
        code_objects_cf52a1ee630c2f337ff6947e1c90ffeb,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__41_mkdtemp$$$coroutine__1_mkdtemp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__42_mkdtemp(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_suffix = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_prefix = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_dir = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_dir;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_prefix;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_suffix;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_suffix);
CHECK_OBJECT(par_suffix);
Py_DECREF(par_suffix);
par_suffix = NULL;
CHECK_OBJECT(par_prefix);
CHECK_OBJECT(par_prefix);
Py_DECREF(par_prefix);
par_prefix = NULL;
CHECK_OBJECT(par_dir);
CHECK_OBJECT(par_dir);
Py_DECREF(par_dir);
par_dir = NULL;
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
struct anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_1040d3ae0988f61740fce67433c8f2fe, module_anyio$_core$_tempfile, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
coroutine->m_frame->m_frame.f_lineno = 592;
tmp_expression_value_3 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_sync);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_mkdtemp);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_suffix);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_prefix);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_dir);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 592;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 592;
coroutine_heap->type_description_1 = "ccc";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_mkdtemp,
        NULL,
        code_objects_1040d3ae0988f61740fce67433c8f2fe,
        closure,
        3,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__42_mkdtemp$$$coroutine__1_mkdtemp_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__43_gettempdir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir(tstate);

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
struct anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2dc1a569957decc3ed3a518b2233fb7a, module_anyio$_core$_tempfile, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
coroutine->m_frame->m_frame.f_lineno = 604;
tmp_expression_value_3 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 604;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_sync);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 604;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 604;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_gettempdir);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 604;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 604;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 604;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 604;

    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 604;

    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_gettempdir,
        NULL,
        code_objects_2dc1a569957decc3ed3a518b2233fb7a,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__43_gettempdir$$$coroutine__1_gettempdir_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_tempfile$$$function__44_gettempdirb(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb(tstate);

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
struct anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb_locals *coroutine_heap = (struct anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_478983618321e1f2ea2e55ca7689ee2f, module_anyio$_core$_tempfile, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
coroutine->m_frame->m_frame.f_lineno = 616;
tmp_expression_value_3 = module_var_accessor_anyio$_core$_tempfile$to_thread(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_to_thread);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 616;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_run_sync);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 616;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_anyio$_core$_tempfile$tempfile(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_tempfile);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 616;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_gettempdirb);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 616;

    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 616;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 616;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 616;

    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 616;

    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb_context,
        module_anyio$_core$_tempfile,
        mod_consts.const_str_plain_gettempdirb,
        NULL,
        code_objects_478983618321e1f2ea2e55ca7689ee2f,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_tempfile$$$function__44_gettempdirb$$$coroutine__1_gettempdirb_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__10___aexit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__10___aexit__,
        const_str_plain___aexit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1d6f9df32dad10294f926c08d107c1e8,
#endif
        code_objects_b57832aede087df3b9437c4f60e6dfcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__11___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af,
#endif
        code_objects_38aae002a6822cd5a12809f15531d212,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__12___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af,
#endif
        code_objects_f485b65f77fc7ee52fb0ff814091c83a,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__13___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9cb2457bb99e59c4bc6c97061bb311af,
#endif
        code_objects_159b880d4b00b34d5786584681334ab9,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__14_aclose(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__14_aclose,
        mod_consts.const_str_plain_aclose,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_154aeae9dd7a8c4176014874ae3333dd,
#endif
        code_objects_2407a7ee0e566c2154fb478c6add1590,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__15__check(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__15__check,
        mod_consts.const_str_plain__check,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af334f722430710120fcedf44cf93ea1,
#endif
        code_objects_453490a88d8e834c11afb40f06584782,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__16_rollover(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__16_rollover,
        mod_consts.const_str_plain_rollover,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5491efea9f7ebe6564b7c7cdc28bc0f,
#endif
        code_objects_e1f7e7d7880701f2a7f53e82e4329679,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_de679f71d569d7cbdd5d5185d895cc91,
#endif
        code_objects_1ef31b7755f5576e417f9ec27b5fe2bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__17_closed(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__17_closed,
        mod_consts.const_str_plain_closed,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_80d11b7200b7c2b5c0cd838cebb061af,
#endif
        code_objects_eec2590a2f5e45e243eacc87792b2367,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__18_read(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__18_read,
        const_str_plain_read,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c34705894583be4bcd2684f4ec8aa696,
#endif
        code_objects_1d7a40939f29c70d53610fc6c3f19135,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__19_read1(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__19_read1,
        mod_consts.const_str_plain_read1,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_71eb3436c034a2dcc5cb50ec1ff3922e,
#endif
        code_objects_67e36bb22574490256972638a31a6dea,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__1___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3,
#endif
        code_objects_b015b85c5a1a25dc263c7ef0dfdadcfa,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__20_readline(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__20_readline,
        mod_consts.const_str_plain_readline,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39d6335a861bb2b366485c15b366039c,
#endif
        code_objects_c0bb2777209ad7ac5913ed72881e40a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__21_readlines(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__21_readlines,
        mod_consts.const_str_plain_readlines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6b6d14e2fa1467329228ce94dc68ae01,
#endif
        code_objects_24cb46eb7449c024d3b6543e4c4b98ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__22_readinto(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__22_readinto,
        mod_consts.const_str_plain_readinto,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d8dc5dc0490d4bd57c4fee456e5764ab,
#endif
        code_objects_11955975261382d184fe016e30fddf93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__23_readinto1(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__23_readinto1,
        mod_consts.const_str_plain_readinto1,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0987ca965768eaaa48e75772cb700fbb,
#endif
        code_objects_03d8609c509050f4dafd6577ea000971,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__24_seek(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__24_seek,
        mod_consts.const_str_plain_seek,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c8ebd89ddee29b4443f373b6f2f68ea7,
#endif
        code_objects_c5cab63c755bd32d9a3c43ffc4c057d0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__25_tell(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__25_tell,
        mod_consts.const_str_plain_tell,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_be4c1154be8c29f30f42a1490d7b9743,
#endif
        code_objects_9caa29c378a241475686c576b893334a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__26_truncate(PyThreadState *tstate, PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__26_truncate,
        mod_consts.const_str_plain_truncate,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_929091cfdb20866fae9f3d9373cafdba,
#endif
        code_objects_aeb7c4e093efbb24e7758ad8f2a4eb26,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__27_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__27_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102,
#endif
        code_objects_422e0c20d51108c637daab20ebaf6fe4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__28_write(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__28_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102,
#endif
        code_objects_c3b3727109de0d4e159dfb8d7c346567,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__29_write(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__29_write,
        mod_consts.const_str_plain_write,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b261104e90f2686a6bbf1a71fcb17102,
#endif
        code_objects_1f616828e923c677b5fddbd028afa180,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        mod_consts.const_str_digest_fa03317d3b8eb4f8838dc15664c0b848,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__2___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3,
#endif
        code_objects_d690c8adc14ba533be28e286f50e540c,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__30_writelines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__30_writelines,
        mod_consts.const_str_plain_writelines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb,
#endif
        code_objects_e96471a10cb0466d44baac6e2a99922b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__31_writelines(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__31_writelines,
        mod_consts.const_str_plain_writelines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb,
#endif
        code_objects_022af46f1355326c4d31d79530a13f93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__32_writelines(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__32_writelines,
        mod_consts.const_str_plain_writelines,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_811dc02ae968da17f0a1b5dbbe632acb,
#endif
        code_objects_890c1d637ed14c6461b7929c5c7487db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        mod_consts.const_str_digest_5f0b980147e9825dfacd9956f6bede3b,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__33___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__33___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e5379864f72c636aa77a97636f156bc,
#endif
        code_objects_3ad4afc3bec13fea070606c5577d9702,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__34___aenter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__34___aenter__,
        const_str_plain___aenter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7b0445c6543255457d35d86b56e8c847,
#endif
        code_objects_0a39766db725abf653a894ff455cb8f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_65ac5c51be30aaddb511dbed3ab72ea2,
#endif
        code_objects_29b5c996cc01360e87c51eeb486f6787,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__35___aexit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__35___aexit__,
        const_str_plain___aexit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ee95c96e3ead0847b1341052e30763b,
#endif
        code_objects_d49f36cd7a44883278626d5e4823b18a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__36_cleanup(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__36_cleanup,
        mod_consts.const_str_plain_cleanup,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c8f62cf7a29489592ca014bcbe5a97d0,
#endif
        code_objects_333f1563065e8e25557f298ee08853ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__37_mkstemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__37_mkstemp,
        mod_consts.const_str_plain_mkstemp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_945e46744ff421952d3a6513b8f438eb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__38_mkstemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__38_mkstemp,
        mod_consts.const_str_plain_mkstemp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_95b53b861faa842cd401104942909793,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__39_mkstemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__39_mkstemp,
        mod_consts.const_str_plain_mkstemp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2b93bc9ced8ed5ff01765b0a5adfdc16,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        mod_consts.const_str_digest_d6e8cbe0fdab7995543b86401b3d7b81,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__3___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ee2add06d67b9dc21d80b5d95801b8c3,
#endif
        code_objects_f6d44bbb850e14c024f10997d53da2b3,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__40_mkdtemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__40_mkdtemp,
        mod_consts.const_str_plain_mkdtemp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5883ee542080fa989154d4e729533726,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__41_mkdtemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__41_mkdtemp,
        mod_consts.const_str_plain_mkdtemp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cf52a1ee630c2f337ff6947e1c90ffeb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__42_mkdtemp(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__42_mkdtemp,
        mod_consts.const_str_plain_mkdtemp,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_1040d3ae0988f61740fce67433c8f2fe,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        mod_consts.const_str_digest_f55034d3821b6cd79fb3878232b8af99,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__43_gettempdir(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__43_gettempdir,
        mod_consts.const_str_plain_gettempdir,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2dc1a569957decc3ed3a518b2233fb7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        mod_consts.const_str_digest_38392d6b67b5ea809e05ef70b72d1c20,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__44_gettempdirb(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__44_gettempdirb,
        mod_consts.const_str_plain_gettempdirb,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_478983618321e1f2ea2e55ca7689ee2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        mod_consts.const_str_digest_a2453a60110f51bad844f1c237b25b81,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__4___aenter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__4___aenter__,
        const_str_plain___aenter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_06d473a9418473bca652773ae77f2e89,
#endif
        code_objects_cca98b03a2d27859e49565862d6ed3e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2de197d7fc38b7a1b735140c840cda5c,
#endif
        code_objects_834b89de6ee540ca7b97a109476c4398,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__5___aexit__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__5___aexit__,
        const_str_plain___aexit__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8870096b18be0cf0b3ee083761c48272,
#endif
        code_objects_f26dba305b761dbcb1845c6e7d777af2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__6___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450,
#endif
        code_objects_3b5f4020d4c4c46d89daecc36aa169b3,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450,
#endif
        code_objects_0584d8da819d5f225ac363c3b32737d4,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__8___init__(PyThreadState *tstate, PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_02cd807d63b47ab45615572cd9078450,
#endif
        code_objects_1df1695648c0369f3319d3abcee3b10b,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__9___aenter__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__9___aenter__,
        const_str_plain___aenter__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7694b2277f0a8a30ceca18b110e01dff,
#endif
        code_objects_d6960bd5a67326dc3390221dbd9c37ab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_51a93690eda35971670c8952c4dd73f1,
#endif
        code_objects_09c25f80f035099844802092954ed88d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$_core$_tempfile,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_anyio$_core$_tempfile[] = {
impl_anyio$_core$_tempfile$$$function__4___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
impl_anyio$_core$_tempfile$$$function__9___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
impl_anyio$_core$_tempfile$$$function__16_rollover$$$coroutine__1_rollover$$$function__1_lambda,
impl_anyio$_core$_tempfile$$$function__34___aenter__$$$coroutine__1___aenter__$$$function__1_lambda,
impl_anyio$_core$_tempfile$$$function__3___init__,
impl_anyio$_core$_tempfile$$$function__4___aenter__,
impl_anyio$_core$_tempfile$$$function__5___aexit__,
impl_anyio$_core$_tempfile$$$function__8___init__,
impl_anyio$_core$_tempfile$$$function__9___aenter__,
impl_anyio$_core$_tempfile$$$function__10___aexit__,
impl_anyio$_core$_tempfile$$$function__13___init__,
impl_anyio$_core$_tempfile$$$function__14_aclose,
impl_anyio$_core$_tempfile$$$function__15__check,
impl_anyio$_core$_tempfile$$$function__16_rollover,
impl_anyio$_core$_tempfile$$$function__17_closed,
impl_anyio$_core$_tempfile$$$function__18_read,
impl_anyio$_core$_tempfile$$$function__19_read1,
impl_anyio$_core$_tempfile$$$function__20_readline,
impl_anyio$_core$_tempfile$$$function__21_readlines,
impl_anyio$_core$_tempfile$$$function__22_readinto,
impl_anyio$_core$_tempfile$$$function__23_readinto1,
impl_anyio$_core$_tempfile$$$function__24_seek,
impl_anyio$_core$_tempfile$$$function__25_tell,
impl_anyio$_core$_tempfile$$$function__26_truncate,
impl_anyio$_core$_tempfile$$$function__27_write,
impl_anyio$_core$_tempfile$$$function__28_write,
impl_anyio$_core$_tempfile$$$function__29_write,
impl_anyio$_core$_tempfile$$$function__30_writelines,
impl_anyio$_core$_tempfile$$$function__31_writelines,
impl_anyio$_core$_tempfile$$$function__32_writelines,
impl_anyio$_core$_tempfile$$$function__33___init__,
impl_anyio$_core$_tempfile$$$function__34___aenter__,
impl_anyio$_core$_tempfile$$$function__35___aexit__,
impl_anyio$_core$_tempfile$$$function__36_cleanup,
impl_anyio$_core$_tempfile$$$function__37_mkstemp,
impl_anyio$_core$_tempfile$$$function__38_mkstemp,
impl_anyio$_core$_tempfile$$$function__39_mkstemp,
impl_anyio$_core$_tempfile$$$function__40_mkdtemp,
impl_anyio$_core$_tempfile$$$function__41_mkdtemp,
impl_anyio$_core$_tempfile$$$function__42_mkdtemp,
impl_anyio$_core$_tempfile$$$function__43_gettempdir,
impl_anyio$_core$_tempfile$$$function__44_gettempdirb,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anyio$_core$_tempfile);
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
        module_anyio$_core$_tempfile,
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
        function_table_anyio$_core$_tempfile,
        sizeof(function_table_anyio$_core$_tempfile) / sizeof(function_impl_code)
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
static char const *module_full_name = "anyio._core._tempfile";
#endif

// Internal entry point for module code.
PyObject *module_code_anyio$_core$_tempfile(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio$_core$_tempfile");

    // Store the module for future use.
    module_anyio$_core$_tempfile = module;

    moduledict_anyio$_core$_tempfile = MODULE_DICT(module_anyio$_core$_tempfile);

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
        PRINT_STRING("anyio$_core$_tempfile: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio$_core$_tempfile: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anyio$_core$_tempfile: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio._core._tempfile" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanyio$_core$_tempfile\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$_core$_tempfile,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_tempfile,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_tempfile,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_tempfile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_tempfile,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$_core$_tempfile);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anyio$_core$_tempfile);
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

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
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
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
PyObject *locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454 = NULL;
struct Nuitka_FrameObject *frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anyio$_core$_tempfile = MAKE_MODULE_FRAME(code_objects_1eb133bf001cc6a4ad922338a728b424, module_anyio$_core$_tempfile);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anyio$_core$_tempfile$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anyio$_core$_tempfile$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_tempfile;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$_core$_tempfile;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_tempfile, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$_core$_tempfile;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Iterable_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 6;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = IMPORT_HARD_IO();
assert(!(tmp_assign_source_9 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_9);
tmp_import_from_1__module = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
{
    PyObject *hard_module = IMPORT_HARD_IO();
    tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BytesIO);
}
assert(!(tmp_assign_source_10 == NULL));
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_BytesIO, tmp_assign_source_10);
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_TextIOWrapper,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_TextIOWrapper);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TextIOWrapper, tmp_assign_source_11);
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
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_TracebackType,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TracebackType);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TracebackType, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_13 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_13);
tmp_import_from_2__module = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = Py_False;
UPDATE_STRING_DICT0(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_14);
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_AnyStr,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_AnyStr);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyStr, tmp_assign_source_16);
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
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_17);
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
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_18);
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
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$_core$_tempfile;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_to_thread_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 17;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_to_thread,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_to_thread);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_to_thread, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_3eb8488b96353760cec44bc96986ee51;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$_core$_tempfile;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_AsyncFile_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 18;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_AsyncFile,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_AsyncFile);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncFile, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_lowlevel;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$_core$_tempfile;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_checkpoint_if_cancelled_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 19;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anyio$_core$_tempfile,
        mod_consts.const_str_plain_checkpoint_if_cancelled,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_checkpoint_if_cancelled);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_checkpoint_if_cancelled, tmp_assign_source_21);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_anyio$_core$_tempfile$Generic(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_subscript_value_1 = module_var_accessor_anyio$_core$_tempfile$AnyStr(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnyStr);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_22, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_25;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_TemporaryFile;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 25;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_26;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
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
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_6, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_3;
}
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 25;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 25;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
branch_end_1:;
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_608054b147265e88f1b1e1c15e581d34;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_TemporaryFile;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_25;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2 = MAKE_CLASS_FRAME(tstate, code_objects_891a2b5d0b99fe2978d38dadc8f59f7c, module_anyio$_core$_tempfile, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_b6d5db4b85260eb18bbfc112c64486a5;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__async_file;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_called_value_2 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, mod_consts.const_str_plain_overload);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_1 = mod_consts.const_tuple_a7e78c7832884cb64d39009706b92731_tuple;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_35bc7ca957136e5bc9b70382abe2d64f);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_b0690e521426580c453f7c3528f76617);
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__1___init__(tstate, tmp_defaults_1, tmp_kw_defaults_1, tmp_annotations_1);

frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2->m_frame.f_lineno = 47;
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
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___init__, tmp_dictset_value);
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
PyObject *tmp_defaults_2;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_2;
tmp_called_value_3 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, mod_consts.const_str_plain_overload);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_defaults_2 = mod_consts.const_tuple_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_ellipsis_tuple;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_35bc7ca957136e5bc9b70382abe2d64f);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_efd66731ac3ab6185efc9f1cccc41618);
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_2 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__2___init__(tstate, tmp_defaults_2, tmp_kw_defaults_2, tmp_annotations_2);

frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2->m_frame.f_lineno = 60;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_3;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_3;
tmp_defaults_3 = mod_consts.const_tuple_a5d714ae84646b1ab623eddc0da3eb17_tuple;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_b94cd9be8ac69ecf123d9ecfb544ceb7);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_1cbc23d34bcdea01f7958b7cd5984786);
Py_INCREF(tmp_defaults_3);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__3___init__(tstate, tmp_defaults_3, tmp_kw_defaults_3, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___init__, tmp_dictset_value);
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
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_46a81fc72982125eff2813cc59d77ff6);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__4___aenter__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___aenter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__5___aexit__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, const_str_plain___aexit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anyio$_core$_tempfile$$$class__1_TemporaryFile_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_735f925ff0b1ca30300a77295e64cc72_tuple;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
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


exception_lineno = 25;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_TemporaryFile;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 25;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_28 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25);
locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25);
locals_anyio$_core$_tempfile$$$class__1_TemporaryFile_25 = NULL;
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
exception_lineno = 25;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TemporaryFile, tmp_assign_source_28);
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
tmp_expression_value_8 = module_var_accessor_anyio$_core$_tempfile$Generic(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto try_except_handler_6;
}
tmp_subscript_value_3 = module_var_accessor_anyio$_core$_tempfile$AnyStr(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnyStr);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto try_except_handler_6;
}
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
}
tmp_assign_source_30 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_30, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_30;
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_31 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_31;
}
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
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
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_33 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_33;
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


exception_lineno = 120;

    goto try_except_handler_6;
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
PyObject *tmp_assign_source_34;
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


exception_lineno = 120;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_NamedTemporaryFile;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 120;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_34;
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


exception_lineno = 120;

    goto try_except_handler_6;
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
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_7, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
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


exception_lineno = 120;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_6;
}
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 120;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 120;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_35;
}
branch_end_4:;
{
PyObject *tmp_assign_source_36;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_ee7157a46cf684eb84b5f0d11684485f;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_NamedTemporaryFile;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_120;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
}
frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3 = MAKE_CLASS_FRAME(tstate, code_objects_7109461a4b9ffb3c8be2fc75ad1f5338, module_anyio$_core$_tempfile, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_b6d5db4b85260eb18bbfc112c64486a5;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__async_file;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_3;
PyObject *tmp_defaults_4;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_annotations_6;
tmp_called_value_6 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, mod_consts.const_str_plain_overload);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_defaults_4 = mod_consts.const_tuple_589a5a6cf6da58702f4edd540cd62fa4_tuple;
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_2937b93a9cf50e5800195d72c4bb419b);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_c0b932057c06997dc8bb86569351f111);
Py_INCREF(tmp_defaults_4);

tmp_args_element_value_3 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__6___init__(tstate, tmp_defaults_4, tmp_kw_defaults_4, tmp_annotations_6);

frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3->m_frame.f_lineno = 145;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_4;
PyObject *tmp_defaults_5;
PyObject *tmp_kw_defaults_5;
PyObject *tmp_annotations_7;
tmp_called_value_7 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, mod_consts.const_str_plain_overload);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_defaults_5 = mod_consts.const_tuple_a7e78c7832884cb64d39009706b92731_tuple;
tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts.const_dict_2937b93a9cf50e5800195d72c4bb419b);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_deb53299a58008cffa495928a4960a32);
Py_INCREF(tmp_defaults_5);

tmp_args_element_value_4 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__7___init__(tstate, tmp_defaults_5, tmp_kw_defaults_5, tmp_annotations_7);

frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3->m_frame.f_lineno = 160;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_defaults_6;
PyObject *tmp_kw_defaults_6;
PyObject *tmp_annotations_8;
tmp_defaults_6 = mod_consts.const_tuple_ec39bde724166277950892f987e33cd8_tuple;
tmp_kw_defaults_6 = DICT_COPY(tstate, mod_consts.const_dict_1c0d3c2e7e6b780442ab73ed2e2b5698);
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_df9c9da66aa3bc4f1e5f80b135a24e63);
Py_INCREF(tmp_defaults_6);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__8___init__(tstate, tmp_defaults_6, tmp_kw_defaults_6, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_46a81fc72982125eff2813cc59d77ff6);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__9___aenter__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___aenter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__10___aexit__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, const_str_plain___aexit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__params_str_plain__async_file_tuple;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
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


exception_lineno = 120;

    goto try_except_handler_8;
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
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_NamedTemporaryFile;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 120;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_37;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_36 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_36);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120);
locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120);
locals_anyio$_core$_tempfile$$$class__2_NamedTemporaryFile_120 = NULL;
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
exception_lineno = 120;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTemporaryFile, tmp_assign_source_36);
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
PyObject *tmp_assign_source_38;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_5;
tmp_expression_value_15 = module_var_accessor_anyio$_core$_tempfile$AsyncFile(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncFile);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;

    goto try_except_handler_9;
}
tmp_subscript_value_5 = module_var_accessor_anyio$_core$_tempfile$AnyStr(tstate);
if (unlikely(tmp_subscript_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnyStr);
}

if (tmp_subscript_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 220;

    goto try_except_handler_9;
}
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
tmp_assign_source_38 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_38, 0, tmp_tuple_element_9);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_38;
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_39 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_39;
}
{
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_40;
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_6, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_41 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_41;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
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
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
tmp_tuple_element_10 = mod_consts.const_str_plain_SpooledTemporaryFile;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 220;
tmp_assign_source_42 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_42;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
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
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_8, tmp_default_value_3);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_9;
}
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 220;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 220;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_43;
}
branch_end_7:;
{
PyObject *tmp_assign_source_44;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_6e51286a48651f757bb3157520ea33cb;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_SpooledTemporaryFile;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_220;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
}
frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4 = MAKE_CLASS_FRAME(tstate, code_objects_643a0de80652282d5acf279488d16cda, module_anyio$_core$_tempfile, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4) == 2);

// Framed code:
tmp_dictset_value = Py_False;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain__rolled, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain__rolled;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_defaults_7;
PyObject *tmp_kw_defaults_7;
PyObject *tmp_annotations_11;
tmp_called_value_10 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_overload);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_defaults_7 = mod_consts.const_tuple_589a5a6cf6da58702f4edd540cd62fa4_tuple;
tmp_kw_defaults_7 = DICT_COPY(tstate, mod_consts.const_dict_35bc7ca957136e5bc9b70382abe2d64f);
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_73554f818382c79c06982acd266e6e4e);
Py_INCREF(tmp_defaults_7);

tmp_args_element_value_5 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__11___init__(tstate, tmp_defaults_7, tmp_kw_defaults_7, tmp_annotations_11);

frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame.f_lineno = 241;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_defaults_8;
PyObject *tmp_kw_defaults_8;
PyObject *tmp_annotations_12;
tmp_called_value_11 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_overload);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_defaults_8 = mod_consts.const_tuple_589a5a6cf6da58702f4edd540cd62fa4_tuple;
tmp_kw_defaults_8 = DICT_COPY(tstate, mod_consts.const_dict_35bc7ca957136e5bc9b70382abe2d64f);
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_1ffca3d91ac769ea4c2008ea43361df5);
Py_INCREF(tmp_defaults_8);

tmp_args_element_value_6 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__12___init__(tstate, tmp_defaults_8, tmp_kw_defaults_8, tmp_annotations_12);

frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame.f_lineno = 255;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_9;
PyObject *tmp_kw_defaults_9;
PyObject *tmp_annotations_13;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_defaults_9 = mod_consts.const_tuple_dc2eeb3d9c9900527b0c290c9718df1f_tuple;
tmp_kw_defaults_9 = DICT_COPY(tstate, mod_consts.const_dict_b94cd9be8ac69ecf123d9ecfb544ceb7);
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_4ff5a4c7136f2f5a1b1141d09b4042b9);
Py_INCREF(tmp_defaults_9);
tmp_closure_1[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__13___init__(tstate, tmp_defaults_9, tmp_kw_defaults_9, tmp_annotations_13, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_14;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_2[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__14_aclose(tstate, tmp_annotations_14, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_aclose, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_15;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__15__check(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain__check, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 314;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_16;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__16_rollover(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_rollover, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_17;
tmp_called_value_12 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_property);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_7 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__17_closed(tstate, tmp_annotations_17);

frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame.f_lineno = 333;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_closed, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_10;
PyObject *tmp_annotations_18;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_defaults_10 = mod_consts.const_tuple_int_neg_1_tuple;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_e839b0a750135537c17971c870f763bf);
Py_INCREF(tmp_defaults_10);
tmp_closure_3[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__18_read(tstate, tmp_defaults_10, tmp_annotations_18, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, const_str_plain_read, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_11;
PyObject *tmp_annotations_19;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_defaults_11 = mod_consts.const_tuple_int_neg_1_tuple;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_8c5d71732f68333fbde644dc66d86a53);
Py_INCREF(tmp_defaults_11);
tmp_closure_4[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__19_read1(tstate, tmp_defaults_11, tmp_annotations_19, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_read1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_20;
struct Nuitka_CellObject *tmp_closure_5[1];
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_e7cb639cbc6f0e4d8b2848451cf6e0f3);
tmp_closure_5[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_5[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__20_readline(tstate, tmp_annotations_20, tmp_closure_5);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_readline, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_21;
struct Nuitka_CellObject *tmp_closure_6[1];
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_851fbf13213b5eb5623de44cdca51e05);
tmp_closure_6[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_6[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__21_readlines(tstate, tmp_annotations_21, tmp_closure_6);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_readlines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_22;
struct Nuitka_CellObject *tmp_closure_7[1];
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_3731795803b80848eef8698287c2698e);
tmp_closure_7[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_7[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__22_readinto(tstate, tmp_annotations_22, tmp_closure_7);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_readinto, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_23;
struct Nuitka_CellObject *tmp_closure_8[1];
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_3731795803b80848eef8698287c2698e);
tmp_closure_8[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_8[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__23_readinto1(tstate, tmp_annotations_23, tmp_closure_8);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_readinto1, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_12;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_22;
PyObject *tmp_annotations_24;
struct Nuitka_CellObject *tmp_closure_9[1];
tmp_expression_value_22 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_SEEK_SET);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_defaults_12 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_12, 0, tmp_tuple_element_12);
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_538246f597a1ccc8037d56043f9a4457);
tmp_closure_9[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_9[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__24_seek(tstate, tmp_defaults_12, tmp_annotations_24, tmp_closure_9);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_seek, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_25;
struct Nuitka_CellObject *tmp_closure_10[1];
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
tmp_closure_10[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_10[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__25_tell(tstate, tmp_annotations_25, tmp_closure_10);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_tell, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_defaults_13;
PyObject *tmp_annotations_26;
struct Nuitka_CellObject *tmp_closure_11[1];
tmp_defaults_13 = mod_consts.const_tuple_none_tuple;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_cbc21e6ec6579764ce838272dc06e5eb);
Py_INCREF(tmp_defaults_13);
tmp_closure_11[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_11[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__26_truncate(tstate, tmp_defaults_13, tmp_annotations_26, tmp_closure_11);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_truncate, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_27;
tmp_called_value_13 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_overload);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_dcd50e3937335dd00ca01a2695e2da19);

tmp_args_element_value_8 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__27_write(tstate, tmp_annotations_27);

frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame.f_lineno = 400;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_28;
tmp_called_value_14 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_overload);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 402;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_a367e9c4c3b5738a3c107394fea08a6d);

tmp_args_element_value_9 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__28_write(tstate, tmp_annotations_28);

frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame.f_lineno = 402;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_29;
struct Nuitka_CellObject *tmp_closure_12[1];
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_76a7361138119d3ed4bcbd7d9c703e9e);
tmp_closure_12[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_12[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__29_write(tstate, tmp_annotations_29, tmp_closure_12);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_write, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_10;
PyObject *tmp_annotations_30;
tmp_called_value_15 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_overload);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_a1ee6eb8c87f323f4884a50d067f18e1);

tmp_args_element_value_10 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__30_writelines(tstate, tmp_annotations_30);

frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame.f_lineno = 425;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 425;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_writelines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_31;
tmp_called_value_16 = PyObject_GetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_overload);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 429;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_0d70d69205b7f7e21e89609cd00845a8);

tmp_args_element_value_11 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__31_writelines(tstate, tmp_annotations_31);

frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame.f_lineno = 429;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 429;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_writelines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_32;
struct Nuitka_CellObject *tmp_closure_13[1];
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_71839ee869fc208fa7bfd15480ad456a);
tmp_closure_13[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_13[0]);
tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__32_writelines(tstate, tmp_annotations_32, tmp_closure_13);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain_writelines, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_11;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_d2089fdf6a080a2a291b97cffd505d14_tuple;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
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


exception_lineno = 220;

    goto try_except_handler_11;
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
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
}
branch_no_9:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_SpooledTemporaryFile;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 220;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;

    goto try_except_handler_11;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_45);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_44 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_44);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220);
locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220);
locals_anyio$_core$_tempfile$$$class__3_SpooledTemporaryFile_220 = NULL;
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
exception_lineno = 220;
goto try_except_handler_9;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_SpooledTemporaryFile, tmp_assign_source_44);
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
PyObject *tmp_assign_source_46;
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_7;
tmp_expression_value_23 = module_var_accessor_anyio$_core$_tempfile$Generic(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;

    goto try_except_handler_12;
}
tmp_subscript_value_7 = module_var_accessor_anyio$_core$_tempfile$AnyStr(tstate);
if (unlikely(tmp_subscript_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AnyStr);
}

if (tmp_subscript_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;

    goto try_except_handler_12;
}
tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_7);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
tmp_assign_source_46 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_46, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_46;
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_47 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
tmp_assign_source_48 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_24 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_8, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_49 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_49;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
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
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
tmp_tuple_element_15 = mod_consts.const_str_plain_TemporaryDirectory;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 454;
tmp_assign_source_50 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_50;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_27 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
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
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_28;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_28, tmp_name_value_9, tmp_default_value_4);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_29;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_29 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_12;
}
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 454;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 454;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_51;
}
branch_end_10:;
{
PyObject *tmp_assign_source_52;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_98a81dc9da37bc6e9704aa60b55fd3b2;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_digest_419f97c1173d6b2eeb21495500444847;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_TemporaryDirectory;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_454;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_14;
}
frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5 = MAKE_CLASS_FRAME(tstate, code_objects_6d1eb707b500dcf1e4e53f6275c05ed7, module_anyio$_core$_tempfile, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5);
assert(Py_REFCNT(frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5) == 2);

// Framed code:
{
PyObject *tmp_defaults_14;
PyObject *tmp_kw_defaults_10;
PyObject *tmp_annotations_33;
tmp_defaults_14 = mod_consts.const_tuple_none_none_none_tuple;
tmp_kw_defaults_10 = DICT_COPY(tstate, mod_consts.const_dict_751ad37f2215a24aa5e566f86739f144);
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_12ca3d79a724c3594c0d4dda85fce623);
Py_INCREF(tmp_defaults_14);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__33___init__(tstate, tmp_defaults_14, tmp_kw_defaults_10, tmp_annotations_33);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_34;
tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__34___aenter__(tstate, tmp_annotations_34);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, const_str_plain___aenter__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_35;
tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_fe1ed8e2cb510605785a9bb17cc90b19);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__35___aexit__(tstate, tmp_annotations_35);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, const_str_plain___aexit__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_36;
tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__36_cleanup(tstate, tmp_annotations_36);

tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, mod_consts.const_str_plain_cleanup, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_14;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_aefe4c4461b25b1c8026415814927688_tuple;
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_14;
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


exception_lineno = 454;

    goto try_except_handler_14;
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
tmp_res = PyObject_SetItem(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_14;
}
branch_no_12:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain_TemporaryDirectory;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 454;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;

    goto try_except_handler_14;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_53;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_52 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_52);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454);
locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454);
locals_anyio$_core$_tempfile$$$class__4_TemporaryDirectory_454 = NULL;
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
exception_lineno = 454;
goto try_except_handler_12;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_TemporaryDirectory, tmp_assign_source_52);
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
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_12;
PyObject *tmp_defaults_15;
PyObject *tmp_annotations_37;
tmp_called_value_20 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 520;

    goto frame_exception_exit_1;
}
tmp_defaults_15 = mod_consts.const_tuple_none_none_none_false_tuple;
tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_22b73255c9c2ca1fea1b61727c6798ad);
Py_INCREF(tmp_defaults_15);

tmp_args_element_value_12 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__37_mkstemp(tstate, tmp_defaults_15, tmp_annotations_37);

frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 520;
tmp_assign_source_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_mkstemp, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_13;
PyObject *tmp_defaults_16;
PyObject *tmp_annotations_38;
tmp_called_value_21 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;

    goto frame_exception_exit_1;
}
tmp_defaults_16 = mod_consts.const_tuple_none_none_none_false_tuple;
tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_7da56d4d92e27e6a7ae55d703de32929);
Py_INCREF(tmp_defaults_16);

tmp_args_element_value_13 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__38_mkstemp(tstate, tmp_defaults_16, tmp_annotations_38);

frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 529;
tmp_assign_source_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_mkstemp, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_defaults_17;
PyObject *tmp_annotations_39;
tmp_defaults_17 = mod_consts.const_tuple_none_none_none_false_tuple;
tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_e71e7e15dd95def57b18ae55602aaebd);
Py_INCREF(tmp_defaults_17);

tmp_assign_source_56 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__39_mkstemp(tstate, tmp_defaults_17, tmp_annotations_39);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_mkstemp, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_14;
PyObject *tmp_defaults_18;
PyObject *tmp_annotations_40;
tmp_called_value_22 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;

    goto frame_exception_exit_1;
}
tmp_defaults_18 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_81d41b9e8e2fcef5ca9d2d45a9e36c89);
Py_INCREF(tmp_defaults_18);

tmp_args_element_value_14 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__40_mkdtemp(tstate, tmp_defaults_18, tmp_annotations_40);

frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 560;
tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_mkdtemp, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_15;
PyObject *tmp_defaults_19;
PyObject *tmp_annotations_41;
tmp_called_value_23 = module_var_accessor_anyio$_core$_tempfile$overload(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 568;

    goto frame_exception_exit_1;
}
tmp_defaults_19 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_3c0beb9552de7e881e949b89e24f9fd8);
Py_INCREF(tmp_defaults_19);

tmp_args_element_value_15 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__41_mkdtemp(tstate, tmp_defaults_19, tmp_annotations_41);

frame_frame_anyio$_core$_tempfile->m_frame.f_lineno = 568;
tmp_assign_source_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_mkdtemp, tmp_assign_source_58);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anyio$_core$_tempfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anyio$_core$_tempfile->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anyio$_core$_tempfile, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anyio$_core$_tempfile);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;
{
PyObject *tmp_assign_source_59;
PyObject *tmp_defaults_20;
PyObject *tmp_annotations_42;
tmp_defaults_20 = mod_consts.const_tuple_none_none_none_tuple;
tmp_annotations_42 = DICT_COPY(tstate, mod_consts.const_dict_a217e200459446f543c7abf3248c09f6);
Py_INCREF(tmp_defaults_20);

tmp_assign_source_59 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__42_mkdtemp(tstate, tmp_defaults_20, tmp_annotations_42);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_mkdtemp, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_annotations_43;
tmp_annotations_43 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_assign_source_60 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__43_gettempdir(tstate, tmp_annotations_43);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_gettempdir, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_annotations_44;
tmp_annotations_44 = DICT_COPY(tstate, mod_consts.const_dict_2366cb3246e451cebe4ed21878030053);

tmp_assign_source_61 = MAKE_FUNCTION_anyio$_core$_tempfile$$$function__44_gettempdirb(tstate, tmp_annotations_44);

UPDATE_STRING_DICT1(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)mod_consts.const_str_plain_gettempdirb, tmp_assign_source_61);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio$_core$_tempfile", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anyio._core._tempfile" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anyio$_core$_tempfile);
    return module_anyio$_core$_tempfile;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_tempfile, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$_core$_tempfile", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
